/*******************************************************************************
*  (c) 2019 Zondax GmbH
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/

#include "substrate_dispatch_V1.h"
#include "substrate_strings.h"
#include "zxmacros.h"
#include <stdint.h>

__Z_INLINE parser_error_t _readMethod_balances_transfer_V1(
    parser_context_t* c, pd_balances_transfer_V1_t* m)
{
    CHECK_ERROR(_readLookupSource_V1(c, &m->dest))
    CHECK_ERROR(_readCompactBalance(c, &m->value))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_balances_transfer_keep_alive_V1(
    parser_context_t* c, pd_balances_transfer_keep_alive_V1_t* m)
{
    CHECK_ERROR(_readLookupSource_V1(c, &m->dest))
    CHECK_ERROR(_readCompactBalance(c, &m->value))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_session_set_keys_V1(
    parser_context_t* c, pd_session_set_keys_V1_t* m)
{
    CHECK_ERROR(_readKeys_V1(c, &m->keys))
    CHECK_ERROR(_readBytes(c, &m->proof))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_session_purge_keys_V1(
    parser_context_t* c, pd_session_purge_keys_V1_t* m)
{
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_utility_batch_V1(
    parser_context_t* c, pd_utility_batch_V1_t* m)
{
    CHECK_ERROR(_readVecCall(c, &m->calls))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_utility_batch_all_V1(
    parser_context_t* c, pd_utility_batch_all_V1_t* m)
{
    CHECK_ERROR(_readVecCall(c, &m->calls))
    return parser_ok;
}

#ifdef SUBSTRATE_PARSER_FULL
__Z_INLINE parser_error_t _readMethod_system_fill_block_V1(
    parser_context_t* c, pd_system_fill_block_V1_t* m)
{
    CHECK_ERROR(_readPerbill_V1(c, &m->_ratio))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_remark_V1(
    parser_context_t* c, pd_system_remark_V1_t* m)
{
    CHECK_ERROR(_readBytes(c, &m->_remark))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_set_heap_pages_V1(
    parser_context_t* c, pd_system_set_heap_pages_V1_t* m)
{
    CHECK_ERROR(_readu64(c, &m->pages))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_set_code_V1(
    parser_context_t* c, pd_system_set_code_V1_t* m)
{
    CHECK_ERROR(_readBytes(c, &m->code))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_set_code_without_checks_V1(
    parser_context_t* c, pd_system_set_code_without_checks_V1_t* m)
{
    CHECK_ERROR(_readBytes(c, &m->code))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_set_changes_trie_config_V1(
    parser_context_t* c, pd_system_set_changes_trie_config_V1_t* m)
{
    CHECK_ERROR(_readOptionChangesTrieConfiguration_V1(c, &m->changes_trie_config))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_set_storage_V1(
    parser_context_t* c, pd_system_set_storage_V1_t* m)
{
    CHECK_ERROR(_readVecKeyValue_V1(c, &m->items))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_kill_storage_V1(
    parser_context_t* c, pd_system_kill_storage_V1_t* m)
{
    CHECK_ERROR(_readVecKey_V1(c, &m->keys))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_kill_prefix_V1(
    parser_context_t* c, pd_system_kill_prefix_V1_t* m)
{
    CHECK_ERROR(_readKey_V1(c, &m->prefix))
    CHECK_ERROR(_readu32(c, &m->_subkeys))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_remark_with_event_V1(
    parser_context_t* c, pd_system_remark_with_event_V1_t* m)
{
    CHECK_ERROR(_readBytes(c, &m->remark))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_parachainsystem_set_upgrade_block_V1(
    parser_context_t* c, pd_parachainsystem_set_upgrade_block_V1_t* m)
{
    CHECK_ERROR(_readRelayChainBlockNumber_V1(c, &m->relay_chain_block))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_parachainsystem_set_validation_data_V1(
    parser_context_t* c, pd_parachainsystem_set_validation_data_V1_t* m)
{
    CHECK_ERROR(_readParachainInherentData_V1(c, &m->data))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_parachainsystem_sudo_send_upward_message_V1(
    parser_context_t* c, pd_parachainsystem_sudo_send_upward_message_V1_t* m)
{
    CHECK_ERROR(_readUpwardMessage_V1(c, &m->message))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_parachainsystem_authorize_upgrade_V1(
    parser_context_t* c, pd_parachainsystem_authorize_upgrade_V1_t* m)
{
    CHECK_ERROR(_readHash(c, &m->code_hash))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_parachainsystem_enact_authorized_upgrade_V1(
    parser_context_t* c, pd_parachainsystem_enact_authorized_upgrade_V1_t* m)
{
    CHECK_ERROR(_readBytes(c, &m->code))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_timestamp_set_V1(
    parser_context_t* c, pd_timestamp_set_V1_t* m)
{
    CHECK_ERROR(_readCompactMoment_V1(c, &m->now))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_balances_set_balance_V1(
    parser_context_t* c, pd_balances_set_balance_V1_t* m)
{
    CHECK_ERROR(_readLookupSource_V1(c, &m->who))
    CHECK_ERROR(_readCompactBalance(c, &m->new_free))
    CHECK_ERROR(_readCompactBalance(c, &m->new_reserved))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_balances_force_transfer_V1(
    parser_context_t* c, pd_balances_force_transfer_V1_t* m)
{
    CHECK_ERROR(_readLookupSource_V1(c, &m->source))
    CHECK_ERROR(_readLookupSource_V1(c, &m->dest))
    CHECK_ERROR(_readCompactBalance(c, &m->value))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_authorship_set_uncles_V1(
    parser_context_t* c, pd_authorship_set_uncles_V1_t* m)
{
    CHECK_ERROR(_readVecHeader(c, &m->new_uncles))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_collatorselection_set_invulnerables_V1(
    parser_context_t* c, pd_collatorselection_set_invulnerables_V1_t* m)
{
    CHECK_ERROR(_readVecAccountId_V1(c, &m->new_))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_collatorselection_set_desired_candidates_V1(
    parser_context_t* c, pd_collatorselection_set_desired_candidates_V1_t* m)
{
    CHECK_ERROR(_readu32(c, &m->max))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_collatorselection_set_candidacy_bond_V1(
    parser_context_t* c, pd_collatorselection_set_candidacy_bond_V1_t* m)
{
    CHECK_ERROR(_readBalanceOf(c, &m->bond))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_collatorselection_register_as_candidate_V1(
    parser_context_t* c, pd_collatorselection_register_as_candidate_V1_t* m)
{
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_collatorselection_leave_intent_V1(
    parser_context_t* c, pd_collatorselection_leave_intent_V1_t* m)
{
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_polkadotxcm_send_V1(
    parser_context_t* c, pd_polkadotxcm_send_V1_t* m)
{
    CHECK_ERROR(_readMultiLocation_V1(c, &m->dest))
    CHECK_ERROR(_readXcm_V1(c, &m->message))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_polkadotxcm_teleport_assets_V1(
    parser_context_t* c, pd_polkadotxcm_teleport_assets_V1_t* m)
{
    CHECK_ERROR(_readMultiLocation_V1(c, &m->dest))
    CHECK_ERROR(_readMultiLocation_V1(c, &m->beneficiary))
    CHECK_ERROR(_readVecMultiAsset_V1(c, &m->assets))
    CHECK_ERROR(_readWeight_V1(c, &m->dest_weight))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_polkadotxcm_reserve_transfer_assets_V1(
    parser_context_t* c, pd_polkadotxcm_reserve_transfer_assets_V1_t* m)
{
    CHECK_ERROR(_readMultiLocation_V1(c, &m->dest))
    CHECK_ERROR(_readMultiLocation_V1(c, &m->beneficiary))
    CHECK_ERROR(_readVecMultiAsset_V1(c, &m->assets))
    CHECK_ERROR(_readWeight_V1(c, &m->dest_weight))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_polkadotxcm_execute_V1(
    parser_context_t* c, pd_polkadotxcm_execute_V1_t* m)
{
    CHECK_ERROR(_readXcm_V1(c, &m->message))
    CHECK_ERROR(_readWeight_V1(c, &m->max_weight))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_dmpqueue_service_overweight_V1(
    parser_context_t* c, pd_dmpqueue_service_overweight_V1_t* m)
{
    CHECK_ERROR(_readOverweightIndex_V1(c, &m->index))
    CHECK_ERROR(_readWeight_V1(c, &m->weight_limit))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_utility_as_derivative_V1(
    parser_context_t* c, pd_utility_as_derivative_V1_t* m)
{
    CHECK_ERROR(_readu16(c, &m->index))
    CHECK_ERROR(_readCall(c, &m->call))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_multisig_as_multi_threshold_1_V1(
    parser_context_t* c, pd_multisig_as_multi_threshold_1_V1_t* m)
{
    CHECK_ERROR(_readVecAccountId_V1(c, &m->other_signatories))
    CHECK_ERROR(_readCall(c, &m->call))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_multisig_as_multi_V1(
    parser_context_t* c, pd_multisig_as_multi_V1_t* m)
{
    CHECK_ERROR(_readu16(c, &m->threshold))
    CHECK_ERROR(_readVecAccountId_V1(c, &m->other_signatories))
    CHECK_ERROR(_readOptionTimepoint_V1(c, &m->maybe_timepoint))
    CHECK_ERROR(_readOpaqueCall_V1(c, &m->call))
    CHECK_ERROR(_readbool(c, &m->store_call))
    CHECK_ERROR(_readWeight_V1(c, &m->max_weight))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_multisig_approve_as_multi_V1(
    parser_context_t* c, pd_multisig_approve_as_multi_V1_t* m)
{
    CHECK_ERROR(_readu16(c, &m->threshold))
    CHECK_ERROR(_readVecAccountId_V1(c, &m->other_signatories))
    CHECK_ERROR(_readOptionTimepoint_V1(c, &m->maybe_timepoint))
    CHECK_ERROR(_readu8_array_32_V1(c, &m->call_hash))
    CHECK_ERROR(_readWeight_V1(c, &m->max_weight))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_multisig_cancel_as_multi_V1(
    parser_context_t* c, pd_multisig_cancel_as_multi_V1_t* m)
{
    CHECK_ERROR(_readu16(c, &m->threshold))
    CHECK_ERROR(_readVecAccountId_V1(c, &m->other_signatories))
    CHECK_ERROR(_readTimepoint_V1(c, &m->timepoint))
    CHECK_ERROR(_readu8_array_32_V1(c, &m->call_hash))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_proxy_V1(
    parser_context_t* c, pd_proxy_proxy_V1_t* m)
{
    CHECK_ERROR(_readAccountId_V1(c, &m->real))
    CHECK_ERROR(_readOptionProxyType_V1(c, &m->force_proxy_type))
    CHECK_ERROR(_readCall(c, &m->call))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_add_proxy_V1(
    parser_context_t* c, pd_proxy_add_proxy_V1_t* m)
{
    CHECK_ERROR(_readAccountId_V1(c, &m->delegate))
    CHECK_ERROR(_readProxyType_V1(c, &m->proxy_type))
    CHECK_ERROR(_readBlockNumber(c, &m->delay))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_remove_proxy_V1(
    parser_context_t* c, pd_proxy_remove_proxy_V1_t* m)
{
    CHECK_ERROR(_readAccountId_V1(c, &m->delegate))
    CHECK_ERROR(_readProxyType_V1(c, &m->proxy_type))
    CHECK_ERROR(_readBlockNumber(c, &m->delay))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_remove_proxies_V1(
    parser_context_t* c, pd_proxy_remove_proxies_V1_t* m)
{
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_anonymous_V1(
    parser_context_t* c, pd_proxy_anonymous_V1_t* m)
{
    CHECK_ERROR(_readProxyType_V1(c, &m->proxy_type))
    CHECK_ERROR(_readBlockNumber(c, &m->delay))
    CHECK_ERROR(_readu16(c, &m->index))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_kill_anonymous_V1(
    parser_context_t* c, pd_proxy_kill_anonymous_V1_t* m)
{
    CHECK_ERROR(_readAccountId_V1(c, &m->spawner))
    CHECK_ERROR(_readProxyType_V1(c, &m->proxy_type))
    CHECK_ERROR(_readu16(c, &m->index))
    CHECK_ERROR(_readCompactBlockNumber(c, &m->height))
    CHECK_ERROR(_readCompactu32(c, &m->ext_index))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_announce_V1(
    parser_context_t* c, pd_proxy_announce_V1_t* m)
{
    CHECK_ERROR(_readAccountId_V1(c, &m->real))
    CHECK_ERROR(_readCallHashOf_V1(c, &m->call_hash))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_remove_announcement_V1(
    parser_context_t* c, pd_proxy_remove_announcement_V1_t* m)
{
    CHECK_ERROR(_readAccountId_V1(c, &m->real))
    CHECK_ERROR(_readCallHashOf_V1(c, &m->call_hash))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_reject_announcement_V1(
    parser_context_t* c, pd_proxy_reject_announcement_V1_t* m)
{
    CHECK_ERROR(_readAccountId_V1(c, &m->delegate))
    CHECK_ERROR(_readCallHashOf_V1(c, &m->call_hash))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_proxy_proxy_announced_V1(
    parser_context_t* c, pd_proxy_proxy_announced_V1_t* m)
{
    CHECK_ERROR(_readAccountId_V1(c, &m->delegate))
    CHECK_ERROR(_readAccountId_V1(c, &m->real))
    CHECK_ERROR(_readOptionProxyType_V1(c, &m->force_proxy_type))
    CHECK_ERROR(_readCall(c, &m->call))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_create_V1(
    parser_context_t* c, pd_assets_create_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->admin))
    CHECK_ERROR(_readTAssetBalance_V1(c, &m->min_balance))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_force_create_V1(
    parser_context_t* c, pd_assets_force_create_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->owner))
    CHECK_ERROR(_readbool(c, &m->is_sufficient))
    CHECK_ERROR(_readCompactTAssetBalance_V1(c, &m->min_balance))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_destroy_V1(
    parser_context_t* c, pd_assets_destroy_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readAssetDestroyWitness_V1(c, &m->witness))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_mint_V1(
    parser_context_t* c, pd_assets_mint_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->beneficiary))
    CHECK_ERROR(_readCompactTAssetBalance_V1(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_burn_V1(
    parser_context_t* c, pd_assets_burn_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->who))
    CHECK_ERROR(_readCompactTAssetBalance_V1(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_transfer_V1(
    parser_context_t* c, pd_assets_transfer_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->target))
    CHECK_ERROR(_readCompactTAssetBalance_V1(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_transfer_keep_alive_V1(
    parser_context_t* c, pd_assets_transfer_keep_alive_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->target))
    CHECK_ERROR(_readCompactTAssetBalance_V1(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_force_transfer_V1(
    parser_context_t* c, pd_assets_force_transfer_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->source))
    CHECK_ERROR(_readLookupSource_V1(c, &m->dest))
    CHECK_ERROR(_readCompactTAssetBalance_V1(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_freeze_V1(
    parser_context_t* c, pd_assets_freeze_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->who))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_thaw_V1(
    parser_context_t* c, pd_assets_thaw_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->who))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_freeze_asset_V1(
    parser_context_t* c, pd_assets_freeze_asset_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_thaw_asset_V1(
    parser_context_t* c, pd_assets_thaw_asset_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_transfer_ownership_V1(
    parser_context_t* c, pd_assets_transfer_ownership_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->owner))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_set_team_V1(
    parser_context_t* c, pd_assets_set_team_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->issuer))
    CHECK_ERROR(_readLookupSource_V1(c, &m->admin))
    CHECK_ERROR(_readLookupSource_V1(c, &m->freezer))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_set_metadata_V1(
    parser_context_t* c, pd_assets_set_metadata_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readBytes(c, &m->name))
    CHECK_ERROR(_readBytes(c, &m->symbol))
    CHECK_ERROR(_readu8(c, &m->decimals))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_clear_metadata_V1(
    parser_context_t* c, pd_assets_clear_metadata_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_force_set_metadata_V1(
    parser_context_t* c, pd_assets_force_set_metadata_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readBytes(c, &m->name))
    CHECK_ERROR(_readBytes(c, &m->symbol))
    CHECK_ERROR(_readu8(c, &m->decimals))
    CHECK_ERROR(_readbool(c, &m->is_frozen))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_force_clear_metadata_V1(
    parser_context_t* c, pd_assets_force_clear_metadata_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_force_asset_status_V1(
    parser_context_t* c, pd_assets_force_asset_status_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->owner))
    CHECK_ERROR(_readLookupSource_V1(c, &m->issuer))
    CHECK_ERROR(_readLookupSource_V1(c, &m->admin))
    CHECK_ERROR(_readLookupSource_V1(c, &m->freezer))
    CHECK_ERROR(_readCompactTAssetBalance_V1(c, &m->min_balance))
    CHECK_ERROR(_readbool(c, &m->is_sufficient))
    CHECK_ERROR(_readbool(c, &m->is_frozen))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_approve_transfer_V1(
    parser_context_t* c, pd_assets_approve_transfer_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->delegate))
    CHECK_ERROR(_readCompactTAssetBalance_V1(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_cancel_approval_V1(
    parser_context_t* c, pd_assets_cancel_approval_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->delegate))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_force_cancel_approval_V1(
    parser_context_t* c, pd_assets_force_cancel_approval_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->owner))
    CHECK_ERROR(_readLookupSource_V1(c, &m->delegate))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_assets_transfer_approved_V1(
    parser_context_t* c, pd_assets_transfer_approved_V1_t* m)
{
    CHECK_ERROR(_readCompactAssetId_V1(c, &m->id))
    CHECK_ERROR(_readLookupSource_V1(c, &m->owner))
    CHECK_ERROR(_readLookupSource_V1(c, &m->destination))
    CHECK_ERROR(_readCompactTAssetBalance_V1(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_create_V1(
    parser_context_t* c, pd_uniques_create_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    CHECK_ERROR(_readLookupSource_V1(c, &m->admin))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_force_create_V1(
    parser_context_t* c, pd_uniques_force_create_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    CHECK_ERROR(_readLookupSource_V1(c, &m->owner))
    CHECK_ERROR(_readbool(c, &m->free_holding))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_destroy_V1(
    parser_context_t* c, pd_uniques_destroy_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    CHECK_ERROR(_readDestroyWitness_V1(c, &m->witness))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_mint_V1(
    parser_context_t* c, pd_uniques_mint_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    CHECK_ERROR(_readCompactInstanceId_V1(c, &m->instance))
    CHECK_ERROR(_readLookupSource_V1(c, &m->owner))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_burn_V1(
    parser_context_t* c, pd_uniques_burn_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    CHECK_ERROR(_readCompactInstanceId_V1(c, &m->instance))
    CHECK_ERROR(_readOptionLookupSource_V1(c, &m->check_owner))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_transfer_V1(
    parser_context_t* c, pd_uniques_transfer_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    CHECK_ERROR(_readCompactInstanceId_V1(c, &m->instance))
    CHECK_ERROR(_readLookupSource_V1(c, &m->dest))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_redeposit_V1(
    parser_context_t* c, pd_uniques_redeposit_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    CHECK_ERROR(_readVecInstanceId_V1(c, &m->instances))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_freeze_V1(
    parser_context_t* c, pd_uniques_freeze_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    CHECK_ERROR(_readCompactInstanceId_V1(c, &m->instance))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_thaw_V1(
    parser_context_t* c, pd_uniques_thaw_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    CHECK_ERROR(_readCompactInstanceId_V1(c, &m->instance))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_freeze_class_V1(
    parser_context_t* c, pd_uniques_freeze_class_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_thaw_class_V1(
    parser_context_t* c, pd_uniques_thaw_class_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_transfer_ownership_V1(
    parser_context_t* c, pd_uniques_transfer_ownership_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    CHECK_ERROR(_readLookupSource_V1(c, &m->owner))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_set_team_V1(
    parser_context_t* c, pd_uniques_set_team_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    CHECK_ERROR(_readLookupSource_V1(c, &m->issuer))
    CHECK_ERROR(_readLookupSource_V1(c, &m->admin))
    CHECK_ERROR(_readLookupSource_V1(c, &m->freezer))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_approve_transfer_V1(
    parser_context_t* c, pd_uniques_approve_transfer_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    CHECK_ERROR(_readCompactInstanceId_V1(c, &m->instance))
    CHECK_ERROR(_readLookupSource_V1(c, &m->delegate))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_cancel_approval_V1(
    parser_context_t* c, pd_uniques_cancel_approval_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    CHECK_ERROR(_readCompactInstanceId_V1(c, &m->instance))
    CHECK_ERROR(_readOptionLookupSource_V1(c, &m->maybe_check_delegate))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_force_asset_status_V1(
    parser_context_t* c, pd_uniques_force_asset_status_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    CHECK_ERROR(_readLookupSource_V1(c, &m->owner))
    CHECK_ERROR(_readLookupSource_V1(c, &m->issuer))
    CHECK_ERROR(_readLookupSource_V1(c, &m->admin))
    CHECK_ERROR(_readLookupSource_V1(c, &m->freezer))
    CHECK_ERROR(_readbool(c, &m->free_holding))
    CHECK_ERROR(_readbool(c, &m->is_frozen))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_set_attribute_V1(
    parser_context_t* c, pd_uniques_set_attribute_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    CHECK_ERROR(_readOptionInstanceId_V1(c, &m->maybe_instance))
    CHECK_ERROR(_readBytes(c, &m->key))
    CHECK_ERROR(_readBytes(c, &m->value))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_clear_attribute_V1(
    parser_context_t* c, pd_uniques_clear_attribute_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    CHECK_ERROR(_readOptionInstanceId_V1(c, &m->maybe_instance))
    CHECK_ERROR(_readBytes(c, &m->key))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_set_metadata_V1(
    parser_context_t* c, pd_uniques_set_metadata_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    CHECK_ERROR(_readCompactInstanceId_V1(c, &m->instance))
    CHECK_ERROR(_readBytes(c, &m->data))
    CHECK_ERROR(_readbool(c, &m->is_frozen))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_clear_metadata_V1(
    parser_context_t* c, pd_uniques_clear_metadata_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    CHECK_ERROR(_readCompactInstanceId_V1(c, &m->instance))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_set_class_metadata_V1(
    parser_context_t* c, pd_uniques_set_class_metadata_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    CHECK_ERROR(_readBytes(c, &m->data))
    CHECK_ERROR(_readbool(c, &m->is_frozen))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_uniques_clear_class_metadata_V1(
    parser_context_t* c, pd_uniques_clear_class_metadata_V1_t* m)
{
    CHECK_ERROR(_readCompactClassId_V1(c, &m->class_))
    return parser_ok;
}

#endif

parser_error_t _readMethod_V1(
    parser_context_t* c,
    uint8_t moduleIdx,
    uint8_t callIdx,
    pd_Method_V1_t* method)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {

    case 2560: /* module 10 call 0 */
        CHECK_ERROR(_readMethod_balances_transfer_V1(c, &method->nested.balances_transfer_V1))
        break;
    case 2563: /* module 10 call 3 */
        CHECK_ERROR(_readMethod_balances_transfer_keep_alive_V1(c, &method->nested.balances_transfer_keep_alive_V1))
        break;
    case 5632: /* module 22 call 0 */
        CHECK_ERROR(_readMethod_session_set_keys_V1(c, &method->basic.session_set_keys_V1))
        break;
    case 5633: /* module 22 call 1 */
        CHECK_ERROR(_readMethod_session_purge_keys_V1(c, &method->basic.session_purge_keys_V1))
        break;
    case 10240: /* module 40 call 0 */
        CHECK_ERROR(_readMethod_utility_batch_V1(c, &method->basic.utility_batch_V1))
        break;
    case 10242: /* module 40 call 2 */
        CHECK_ERROR(_readMethod_utility_batch_all_V1(c, &method->basic.utility_batch_all_V1))
        break;

#ifdef SUBSTRATE_PARSER_FULL
    case 0: /* module 0 call 0 */
        CHECK_ERROR(_readMethod_system_fill_block_V1(c, &method->nested.system_fill_block_V1))
        break;
    case 1: /* module 0 call 1 */
        CHECK_ERROR(_readMethod_system_remark_V1(c, &method->nested.system_remark_V1))
        break;
    case 2: /* module 0 call 2 */
        CHECK_ERROR(_readMethod_system_set_heap_pages_V1(c, &method->nested.system_set_heap_pages_V1))
        break;
    case 3: /* module 0 call 3 */
        CHECK_ERROR(_readMethod_system_set_code_V1(c, &method->nested.system_set_code_V1))
        break;
    case 4: /* module 0 call 4 */
        CHECK_ERROR(_readMethod_system_set_code_without_checks_V1(c, &method->nested.system_set_code_without_checks_V1))
        break;
    case 5: /* module 0 call 5 */
        CHECK_ERROR(_readMethod_system_set_changes_trie_config_V1(c, &method->nested.system_set_changes_trie_config_V1))
        break;
    case 6: /* module 0 call 6 */
        CHECK_ERROR(_readMethod_system_set_storage_V1(c, &method->nested.system_set_storage_V1))
        break;
    case 7: /* module 0 call 7 */
        CHECK_ERROR(_readMethod_system_kill_storage_V1(c, &method->nested.system_kill_storage_V1))
        break;
    case 8: /* module 0 call 8 */
        CHECK_ERROR(_readMethod_system_kill_prefix_V1(c, &method->nested.system_kill_prefix_V1))
        break;
    case 9: /* module 0 call 9 */
        CHECK_ERROR(_readMethod_system_remark_with_event_V1(c, &method->basic.system_remark_with_event_V1))
        break;
    case 256: /* module 1 call 0 */
        CHECK_ERROR(_readMethod_parachainsystem_set_upgrade_block_V1(c, &method->basic.parachainsystem_set_upgrade_block_V1))
        break;
    case 257: /* module 1 call 1 */
        CHECK_ERROR(_readMethod_parachainsystem_set_validation_data_V1(c, &method->basic.parachainsystem_set_validation_data_V1))
        break;
    case 258: /* module 1 call 2 */
        CHECK_ERROR(_readMethod_parachainsystem_sudo_send_upward_message_V1(c, &method->basic.parachainsystem_sudo_send_upward_message_V1))
        break;
    case 259: /* module 1 call 3 */
        CHECK_ERROR(_readMethod_parachainsystem_authorize_upgrade_V1(c, &method->basic.parachainsystem_authorize_upgrade_V1))
        break;
    case 260: /* module 1 call 4 */
        CHECK_ERROR(_readMethod_parachainsystem_enact_authorized_upgrade_V1(c, &method->basic.parachainsystem_enact_authorized_upgrade_V1))
        break;
    case 768: /* module 3 call 0 */
        CHECK_ERROR(_readMethod_timestamp_set_V1(c, &method->basic.timestamp_set_V1))
        break;
    case 2561: /* module 10 call 1 */
        CHECK_ERROR(_readMethod_balances_set_balance_V1(c, &method->nested.balances_set_balance_V1))
        break;
    case 2562: /* module 10 call 2 */
        CHECK_ERROR(_readMethod_balances_force_transfer_V1(c, &method->nested.balances_force_transfer_V1))
        break;
    case 5120: /* module 20 call 0 */
        CHECK_ERROR(_readMethod_authorship_set_uncles_V1(c, &method->basic.authorship_set_uncles_V1))
        break;
    case 5376: /* module 21 call 0 */
        CHECK_ERROR(_readMethod_collatorselection_set_invulnerables_V1(c, &method->basic.collatorselection_set_invulnerables_V1))
        break;
    case 5377: /* module 21 call 1 */
        CHECK_ERROR(_readMethod_collatorselection_set_desired_candidates_V1(c, &method->basic.collatorselection_set_desired_candidates_V1))
        break;
    case 5378: /* module 21 call 2 */
        CHECK_ERROR(_readMethod_collatorselection_set_candidacy_bond_V1(c, &method->basic.collatorselection_set_candidacy_bond_V1))
        break;
    case 5379: /* module 21 call 3 */
        CHECK_ERROR(_readMethod_collatorselection_register_as_candidate_V1(c, &method->basic.collatorselection_register_as_candidate_V1))
        break;
    case 5380: /* module 21 call 4 */
        CHECK_ERROR(_readMethod_collatorselection_leave_intent_V1(c, &method->basic.collatorselection_leave_intent_V1))
        break;
    case 7936: /* module 31 call 0 */
        CHECK_ERROR(_readMethod_polkadotxcm_send_V1(c, &method->basic.polkadotxcm_send_V1))
        break;
    case 7937: /* module 31 call 1 */
        CHECK_ERROR(_readMethod_polkadotxcm_teleport_assets_V1(c, &method->basic.polkadotxcm_teleport_assets_V1))
        break;
    case 7938: /* module 31 call 2 */
        CHECK_ERROR(_readMethod_polkadotxcm_reserve_transfer_assets_V1(c, &method->basic.polkadotxcm_reserve_transfer_assets_V1))
        break;
    case 7939: /* module 31 call 3 */
        CHECK_ERROR(_readMethod_polkadotxcm_execute_V1(c, &method->basic.polkadotxcm_execute_V1))
        break;
    case 8448: /* module 33 call 0 */
        CHECK_ERROR(_readMethod_dmpqueue_service_overweight_V1(c, &method->basic.dmpqueue_service_overweight_V1))
        break;
    case 10241: /* module 40 call 1 */
        CHECK_ERROR(_readMethod_utility_as_derivative_V1(c, &method->basic.utility_as_derivative_V1))
        break;
    case 10496: /* module 41 call 0 */
        CHECK_ERROR(_readMethod_multisig_as_multi_threshold_1_V1(c, &method->nested.multisig_as_multi_threshold_1_V1))
        break;
    case 10497: /* module 41 call 1 */
        CHECK_ERROR(_readMethod_multisig_as_multi_V1(c, &method->nested.multisig_as_multi_V1))
        break;
    case 10498: /* module 41 call 2 */
        CHECK_ERROR(_readMethod_multisig_approve_as_multi_V1(c, &method->nested.multisig_approve_as_multi_V1))
        break;
    case 10499: /* module 41 call 3 */
        CHECK_ERROR(_readMethod_multisig_cancel_as_multi_V1(c, &method->nested.multisig_cancel_as_multi_V1))
        break;
    case 10752: /* module 42 call 0 */
        CHECK_ERROR(_readMethod_proxy_proxy_V1(c, &method->nested.proxy_proxy_V1))
        break;
    case 10753: /* module 42 call 1 */
        CHECK_ERROR(_readMethod_proxy_add_proxy_V1(c, &method->basic.proxy_add_proxy_V1))
        break;
    case 10754: /* module 42 call 2 */
        CHECK_ERROR(_readMethod_proxy_remove_proxy_V1(c, &method->basic.proxy_remove_proxy_V1))
        break;
    case 10755: /* module 42 call 3 */
        CHECK_ERROR(_readMethod_proxy_remove_proxies_V1(c, &method->basic.proxy_remove_proxies_V1))
        break;
    case 10756: /* module 42 call 4 */
        CHECK_ERROR(_readMethod_proxy_anonymous_V1(c, &method->basic.proxy_anonymous_V1))
        break;
    case 10757: /* module 42 call 5 */
        CHECK_ERROR(_readMethod_proxy_kill_anonymous_V1(c, &method->basic.proxy_kill_anonymous_V1))
        break;
    case 10758: /* module 42 call 6 */
        CHECK_ERROR(_readMethod_proxy_announce_V1(c, &method->basic.proxy_announce_V1))
        break;
    case 10759: /* module 42 call 7 */
        CHECK_ERROR(_readMethod_proxy_remove_announcement_V1(c, &method->basic.proxy_remove_announcement_V1))
        break;
    case 10760: /* module 42 call 8 */
        CHECK_ERROR(_readMethod_proxy_reject_announcement_V1(c, &method->basic.proxy_reject_announcement_V1))
        break;
    case 10761: /* module 42 call 9 */
        CHECK_ERROR(_readMethod_proxy_proxy_announced_V1(c, &method->basic.proxy_proxy_announced_V1))
        break;
    case 12800: /* module 50 call 0 */
        CHECK_ERROR(_readMethod_assets_create_V1(c, &method->nested.assets_create_V1))
        break;
    case 12801: /* module 50 call 1 */
        CHECK_ERROR(_readMethod_assets_force_create_V1(c, &method->nested.assets_force_create_V1))
        break;
    case 12802: /* module 50 call 2 */
        CHECK_ERROR(_readMethod_assets_destroy_V1(c, &method->nested.assets_destroy_V1))
        break;
    case 12803: /* module 50 call 3 */
        CHECK_ERROR(_readMethod_assets_mint_V1(c, &method->nested.assets_mint_V1))
        break;
    case 12804: /* module 50 call 4 */
        CHECK_ERROR(_readMethod_assets_burn_V1(c, &method->nested.assets_burn_V1))
        break;
    case 12805: /* module 50 call 5 */
        CHECK_ERROR(_readMethod_assets_transfer_V1(c, &method->nested.assets_transfer_V1))
        break;
    case 12806: /* module 50 call 6 */
        CHECK_ERROR(_readMethod_assets_transfer_keep_alive_V1(c, &method->nested.assets_transfer_keep_alive_V1))
        break;
    case 12807: /* module 50 call 7 */
        CHECK_ERROR(_readMethod_assets_force_transfer_V1(c, &method->nested.assets_force_transfer_V1))
        break;
    case 12808: /* module 50 call 8 */
        CHECK_ERROR(_readMethod_assets_freeze_V1(c, &method->nested.assets_freeze_V1))
        break;
    case 12809: /* module 50 call 9 */
        CHECK_ERROR(_readMethod_assets_thaw_V1(c, &method->nested.assets_thaw_V1))
        break;
    case 12810: /* module 50 call 10 */
        CHECK_ERROR(_readMethod_assets_freeze_asset_V1(c, &method->nested.assets_freeze_asset_V1))
        break;
    case 12811: /* module 50 call 11 */
        CHECK_ERROR(_readMethod_assets_thaw_asset_V1(c, &method->nested.assets_thaw_asset_V1))
        break;
    case 12812: /* module 50 call 12 */
        CHECK_ERROR(_readMethod_assets_transfer_ownership_V1(c, &method->nested.assets_transfer_ownership_V1))
        break;
    case 12813: /* module 50 call 13 */
        CHECK_ERROR(_readMethod_assets_set_team_V1(c, &method->nested.assets_set_team_V1))
        break;
    case 12814: /* module 50 call 14 */
        CHECK_ERROR(_readMethod_assets_set_metadata_V1(c, &method->nested.assets_set_metadata_V1))
        break;
    case 12815: /* module 50 call 15 */
        CHECK_ERROR(_readMethod_assets_clear_metadata_V1(c, &method->nested.assets_clear_metadata_V1))
        break;
    case 12816: /* module 50 call 16 */
        CHECK_ERROR(_readMethod_assets_force_set_metadata_V1(c, &method->nested.assets_force_set_metadata_V1))
        break;
    case 12817: /* module 50 call 17 */
        CHECK_ERROR(_readMethod_assets_force_clear_metadata_V1(c, &method->nested.assets_force_clear_metadata_V1))
        break;
    case 12818: /* module 50 call 18 */
        CHECK_ERROR(_readMethod_assets_force_asset_status_V1(c, &method->nested.assets_force_asset_status_V1))
        break;
    case 12819: /* module 50 call 19 */
        CHECK_ERROR(_readMethod_assets_approve_transfer_V1(c, &method->nested.assets_approve_transfer_V1))
        break;
    case 12820: /* module 50 call 20 */
        CHECK_ERROR(_readMethod_assets_cancel_approval_V1(c, &method->nested.assets_cancel_approval_V1))
        break;
    case 12821: /* module 50 call 21 */
        CHECK_ERROR(_readMethod_assets_force_cancel_approval_V1(c, &method->nested.assets_force_cancel_approval_V1))
        break;
    case 12822: /* module 50 call 22 */
        CHECK_ERROR(_readMethod_assets_transfer_approved_V1(c, &method->nested.assets_transfer_approved_V1))
        break;
    case 13056: /* module 51 call 0 */
        CHECK_ERROR(_readMethod_uniques_create_V1(c, &method->basic.uniques_create_V1))
        break;
    case 13057: /* module 51 call 1 */
        CHECK_ERROR(_readMethod_uniques_force_create_V1(c, &method->basic.uniques_force_create_V1))
        break;
    case 13058: /* module 51 call 2 */
        CHECK_ERROR(_readMethod_uniques_destroy_V1(c, &method->basic.uniques_destroy_V1))
        break;
    case 13059: /* module 51 call 3 */
        CHECK_ERROR(_readMethod_uniques_mint_V1(c, &method->basic.uniques_mint_V1))
        break;
    case 13060: /* module 51 call 4 */
        CHECK_ERROR(_readMethod_uniques_burn_V1(c, &method->basic.uniques_burn_V1))
        break;
    case 13061: /* module 51 call 5 */
        CHECK_ERROR(_readMethod_uniques_transfer_V1(c, &method->basic.uniques_transfer_V1))
        break;
    case 13062: /* module 51 call 6 */
        CHECK_ERROR(_readMethod_uniques_redeposit_V1(c, &method->basic.uniques_redeposit_V1))
        break;
    case 13063: /* module 51 call 7 */
        CHECK_ERROR(_readMethod_uniques_freeze_V1(c, &method->basic.uniques_freeze_V1))
        break;
    case 13064: /* module 51 call 8 */
        CHECK_ERROR(_readMethod_uniques_thaw_V1(c, &method->basic.uniques_thaw_V1))
        break;
    case 13065: /* module 51 call 9 */
        CHECK_ERROR(_readMethod_uniques_freeze_class_V1(c, &method->basic.uniques_freeze_class_V1))
        break;
    case 13066: /* module 51 call 10 */
        CHECK_ERROR(_readMethod_uniques_thaw_class_V1(c, &method->basic.uniques_thaw_class_V1))
        break;
    case 13067: /* module 51 call 11 */
        CHECK_ERROR(_readMethod_uniques_transfer_ownership_V1(c, &method->basic.uniques_transfer_ownership_V1))
        break;
    case 13068: /* module 51 call 12 */
        CHECK_ERROR(_readMethod_uniques_set_team_V1(c, &method->basic.uniques_set_team_V1))
        break;
    case 13069: /* module 51 call 13 */
        CHECK_ERROR(_readMethod_uniques_approve_transfer_V1(c, &method->basic.uniques_approve_transfer_V1))
        break;
    case 13070: /* module 51 call 14 */
        CHECK_ERROR(_readMethod_uniques_cancel_approval_V1(c, &method->basic.uniques_cancel_approval_V1))
        break;
    case 13071: /* module 51 call 15 */
        CHECK_ERROR(_readMethod_uniques_force_asset_status_V1(c, &method->basic.uniques_force_asset_status_V1))
        break;
    case 13072: /* module 51 call 16 */
        CHECK_ERROR(_readMethod_uniques_set_attribute_V1(c, &method->basic.uniques_set_attribute_V1))
        break;
    case 13073: /* module 51 call 17 */
        CHECK_ERROR(_readMethod_uniques_clear_attribute_V1(c, &method->basic.uniques_clear_attribute_V1))
        break;
    case 13074: /* module 51 call 18 */
        CHECK_ERROR(_readMethod_uniques_set_metadata_V1(c, &method->basic.uniques_set_metadata_V1))
        break;
    case 13075: /* module 51 call 19 */
        CHECK_ERROR(_readMethod_uniques_clear_metadata_V1(c, &method->basic.uniques_clear_metadata_V1))
        break;
    case 13076: /* module 51 call 20 */
        CHECK_ERROR(_readMethod_uniques_set_class_metadata_V1(c, &method->basic.uniques_set_class_metadata_V1))
        break;
    case 13077: /* module 51 call 21 */
        CHECK_ERROR(_readMethod_uniques_clear_class_metadata_V1(c, &method->basic.uniques_clear_class_metadata_V1))
        break;
#endif
    default:
        return parser_not_supported;
    }

    return parser_ok;
}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

const char* _getMethod_ModuleName_V1(uint8_t moduleIdx)
{
    switch (moduleIdx) {
    case 10:
        return STR_MO_BALANCES;
    case 22:
        return STR_MO_SESSION;
    case 40:
        return STR_MO_UTILITY;
#ifdef SUBSTRATE_PARSER_FULL
    case 0:
        return STR_MO_SYSTEM;
    case 1:
        return STR_MO_PARACHAINSYSTEM;
    case 2:
        return STR_MO_RANDOMNESSCOLLECTIVEFLIP;
    case 3:
        return STR_MO_TIMESTAMP;
    case 20:
        return STR_MO_AUTHORSHIP;
    case 21:
        return STR_MO_COLLATORSELECTION;
    case 30:
        return STR_MO_XCMPQUEUE;
    case 31:
        return STR_MO_POLKADOTXCM;
    case 33:
        return STR_MO_DMPQUEUE;
    case 41:
        return STR_MO_MULTISIG;
    case 42:
        return STR_MO_PROXY;
    case 50:
        return STR_MO_ASSETS;
    case 51:
        return STR_MO_UNIQUES;
#endif
    default:
        return NULL;
    }

    return NULL;
}

const char* _getMethod_Name_V1(uint8_t moduleIdx, uint8_t callIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 2560: /* module 10 call 0 */
        return STR_ME_TRANSFER;
    case 2563: /* module 10 call 3 */
        return STR_ME_TRANSFER_KEEP_ALIVE;
    case 5632: /* module 22 call 0 */
        return STR_ME_SET_KEYS;
    case 5633: /* module 22 call 1 */
        return STR_ME_PURGE_KEYS;
    case 10240: /* module 40 call 0 */
        return STR_ME_BATCH;
    case 10242: /* module 40 call 2 */
        return STR_ME_BATCH_ALL;
#ifdef SUBSTRATE_PARSER_FULL
    case 0: /* module 0 call 0 */
        return STR_ME_FILL_BLOCK;
    case 1: /* module 0 call 1 */
        return STR_ME_REMARK;
    case 2: /* module 0 call 2 */
        return STR_ME_SET_HEAP_PAGES;
    case 3: /* module 0 call 3 */
        return STR_ME_SET_CODE;
    case 4: /* module 0 call 4 */
        return STR_ME_SET_CODE_WITHOUT_CHECKS;
    case 5: /* module 0 call 5 */
        return STR_ME_SET_CHANGES_TRIE_CONFIG;
    case 6: /* module 0 call 6 */
        return STR_ME_SET_STORAGE;
    case 7: /* module 0 call 7 */
        return STR_ME_KILL_STORAGE;
    case 8: /* module 0 call 8 */
        return STR_ME_KILL_PREFIX;
    case 9: /* module 0 call 9 */
        return STR_ME_REMARK_WITH_EVENT;
    case 256: /* module 1 call 0 */
        return STR_ME_SET_UPGRADE_BLOCK;
    case 257: /* module 1 call 1 */
        return STR_ME_SET_VALIDATION_DATA;
    case 258: /* module 1 call 2 */
        return STR_ME_SUDO_SEND_UPWARD_MESSAGE;
    case 259: /* module 1 call 3 */
        return STR_ME_AUTHORIZE_UPGRADE;
    case 260: /* module 1 call 4 */
        return STR_ME_ENACT_AUTHORIZED_UPGRADE;
    case 768: /* module 3 call 0 */
        return STR_ME_SET;
    case 2561: /* module 10 call 1 */
        return STR_ME_SET_BALANCE;
    case 2562: /* module 10 call 2 */
        return STR_ME_FORCE_TRANSFER;
    case 5120: /* module 20 call 0 */
        return STR_ME_SET_UNCLES;
    case 5376: /* module 21 call 0 */
        return STR_ME_SET_INVULNERABLES;
    case 5377: /* module 21 call 1 */
        return STR_ME_SET_DESIRED_CANDIDATES;
    case 5378: /* module 21 call 2 */
        return STR_ME_SET_CANDIDACY_BOND;
    case 5379: /* module 21 call 3 */
        return STR_ME_REGISTER_AS_CANDIDATE;
    case 5380: /* module 21 call 4 */
        return STR_ME_LEAVE_INTENT;
    case 7936: /* module 31 call 0 */
        return STR_ME_SEND;
    case 7937: /* module 31 call 1 */
        return STR_ME_TELEPORT_ASSETS;
    case 7938: /* module 31 call 2 */
        return STR_ME_RESERVE_TRANSFER_ASSETS;
    case 7939: /* module 31 call 3 */
        return STR_ME_EXECUTE;
    case 8448: /* module 33 call 0 */
        return STR_ME_SERVICE_OVERWEIGHT;
    case 10241: /* module 40 call 1 */
        return STR_ME_AS_DERIVATIVE;
    case 10496: /* module 41 call 0 */
        return STR_ME_AS_MULTI_THRESHOLD_1;
    case 10497: /* module 41 call 1 */
        return STR_ME_AS_MULTI;
    case 10498: /* module 41 call 2 */
        return STR_ME_APPROVE_AS_MULTI;
    case 10499: /* module 41 call 3 */
        return STR_ME_CANCEL_AS_MULTI;
    case 10752: /* module 42 call 0 */
        return STR_ME_PROXY;
    case 10753: /* module 42 call 1 */
        return STR_ME_ADD_PROXY;
    case 10754: /* module 42 call 2 */
        return STR_ME_REMOVE_PROXY;
    case 10755: /* module 42 call 3 */
        return STR_ME_REMOVE_PROXIES;
    case 10756: /* module 42 call 4 */
        return STR_ME_ANONYMOUS;
    case 10757: /* module 42 call 5 */
        return STR_ME_KILL_ANONYMOUS;
    case 10758: /* module 42 call 6 */
        return STR_ME_ANNOUNCE;
    case 10759: /* module 42 call 7 */
        return STR_ME_REMOVE_ANNOUNCEMENT;
    case 10760: /* module 42 call 8 */
        return STR_ME_REJECT_ANNOUNCEMENT;
    case 10761: /* module 42 call 9 */
        return STR_ME_PROXY_ANNOUNCED;
    case 12800: /* module 50 call 0 */
        return STR_ME_CREATE;
    case 12801: /* module 50 call 1 */
        return STR_ME_FORCE_CREATE;
    case 12802: /* module 50 call 2 */
        return STR_ME_DESTROY;
    case 12803: /* module 50 call 3 */
        return STR_ME_MINT;
    case 12804: /* module 50 call 4 */
        return STR_ME_BURN;
    case 12805: /* module 50 call 5 */
        return STR_ME_TRANSFER;
    case 12806: /* module 50 call 6 */
        return STR_ME_TRANSFER_KEEP_ALIVE;
    case 12807: /* module 50 call 7 */
        return STR_ME_FORCE_TRANSFER;
    case 12808: /* module 50 call 8 */
        return STR_ME_FREEZE;
    case 12809: /* module 50 call 9 */
        return STR_ME_THAW;
    case 12810: /* module 50 call 10 */
        return STR_ME_FREEZE_ASSET;
    case 12811: /* module 50 call 11 */
        return STR_ME_THAW_ASSET;
    case 12812: /* module 50 call 12 */
        return STR_ME_TRANSFER_OWNERSHIP;
    case 12813: /* module 50 call 13 */
        return STR_ME_SET_TEAM;
    case 12814: /* module 50 call 14 */
        return STR_ME_SET_METADATA;
    case 12815: /* module 50 call 15 */
        return STR_ME_CLEAR_METADATA;
    case 12816: /* module 50 call 16 */
        return STR_ME_FORCE_SET_METADATA;
    case 12817: /* module 50 call 17 */
        return STR_ME_FORCE_CLEAR_METADATA;
    case 12818: /* module 50 call 18 */
        return STR_ME_FORCE_ASSET_STATUS;
    case 12819: /* module 50 call 19 */
        return STR_ME_APPROVE_TRANSFER;
    case 12820: /* module 50 call 20 */
        return STR_ME_CANCEL_APPROVAL;
    case 12821: /* module 50 call 21 */
        return STR_ME_FORCE_CANCEL_APPROVAL;
    case 12822: /* module 50 call 22 */
        return STR_ME_TRANSFER_APPROVED;
    case 13056: /* module 51 call 0 */
        return STR_ME_CREATE;
    case 13057: /* module 51 call 1 */
        return STR_ME_FORCE_CREATE;
    case 13058: /* module 51 call 2 */
        return STR_ME_DESTROY;
    case 13059: /* module 51 call 3 */
        return STR_ME_MINT;
    case 13060: /* module 51 call 4 */
        return STR_ME_BURN;
    case 13061: /* module 51 call 5 */
        return STR_ME_TRANSFER;
    case 13062: /* module 51 call 6 */
        return STR_ME_REDEPOSIT;
    case 13063: /* module 51 call 7 */
        return STR_ME_FREEZE;
    case 13064: /* module 51 call 8 */
        return STR_ME_THAW;
    case 13065: /* module 51 call 9 */
        return STR_ME_FREEZE_CLASS;
    case 13066: /* module 51 call 10 */
        return STR_ME_THAW_CLASS;
    case 13067: /* module 51 call 11 */
        return STR_ME_TRANSFER_OWNERSHIP;
    case 13068: /* module 51 call 12 */
        return STR_ME_SET_TEAM;
    case 13069: /* module 51 call 13 */
        return STR_ME_APPROVE_TRANSFER;
    case 13070: /* module 51 call 14 */
        return STR_ME_CANCEL_APPROVAL;
    case 13071: /* module 51 call 15 */
        return STR_ME_FORCE_ASSET_STATUS;
    case 13072: /* module 51 call 16 */
        return STR_ME_SET_ATTRIBUTE;
    case 13073: /* module 51 call 17 */
        return STR_ME_CLEAR_ATTRIBUTE;
    case 13074: /* module 51 call 18 */
        return STR_ME_SET_METADATA;
    case 13075: /* module 51 call 19 */
        return STR_ME_CLEAR_METADATA;
    case 13076: /* module 51 call 20 */
        return STR_ME_SET_CLASS_METADATA;
    case 13077: /* module 51 call 21 */
        return STR_ME_CLEAR_CLASS_METADATA;
#endif
    default:
        return NULL;
    }

    return NULL;
}

uint8_t _getMethod_NumItems_V1(uint8_t moduleIdx, uint8_t callIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 2560: /* module 10 call 0 */
        return 2;
    case 2563: /* module 10 call 3 */
        return 2;
    case 5632: /* module 22 call 0 */
        return 2;
    case 5633: /* module 22 call 1 */
        return 0;
    case 10240: /* module 40 call 0 */
        return 1;
    case 10242: /* module 40 call 2 */
        return 1;
#ifdef SUBSTRATE_PARSER_FULL
    case 0: /* module 0 call 0 */
        return 1;
    case 1: /* module 0 call 1 */
        return 1;
    case 2: /* module 0 call 2 */
        return 1;
    case 3: /* module 0 call 3 */
        return 1;
    case 4: /* module 0 call 4 */
        return 1;
    case 5: /* module 0 call 5 */
        return 1;
    case 6: /* module 0 call 6 */
        return 1;
    case 7: /* module 0 call 7 */
        return 1;
    case 8: /* module 0 call 8 */
        return 2;
    case 9: /* module 0 call 9 */
        return 1;
    case 256: /* module 1 call 0 */
        return 1;
    case 257: /* module 1 call 1 */
        return 1;
    case 258: /* module 1 call 2 */
        return 1;
    case 259: /* module 1 call 3 */
        return 1;
    case 260: /* module 1 call 4 */
        return 1;
    case 768: /* module 3 call 0 */
        return 1;
    case 2561: /* module 10 call 1 */
        return 3;
    case 2562: /* module 10 call 2 */
        return 3;
    case 5120: /* module 20 call 0 */
        return 1;
    case 5376: /* module 21 call 0 */
        return 1;
    case 5377: /* module 21 call 1 */
        return 1;
    case 5378: /* module 21 call 2 */
        return 1;
    case 5379: /* module 21 call 3 */
        return 0;
    case 5380: /* module 21 call 4 */
        return 0;
    case 7936: /* module 31 call 0 */
        return 2;
    case 7937: /* module 31 call 1 */
        return 4;
    case 7938: /* module 31 call 2 */
        return 4;
    case 7939: /* module 31 call 3 */
        return 2;
    case 8448: /* module 33 call 0 */
        return 2;
    case 10241: /* module 40 call 1 */
        return 2;
    case 10496: /* module 41 call 0 */
        return 2;
    case 10497: /* module 41 call 1 */
        return 6;
    case 10498: /* module 41 call 2 */
        return 5;
    case 10499: /* module 41 call 3 */
        return 4;
    case 10752: /* module 42 call 0 */
        return 3;
    case 10753: /* module 42 call 1 */
        return 3;
    case 10754: /* module 42 call 2 */
        return 3;
    case 10755: /* module 42 call 3 */
        return 0;
    case 10756: /* module 42 call 4 */
        return 3;
    case 10757: /* module 42 call 5 */
        return 5;
    case 10758: /* module 42 call 6 */
        return 2;
    case 10759: /* module 42 call 7 */
        return 2;
    case 10760: /* module 42 call 8 */
        return 2;
    case 10761: /* module 42 call 9 */
        return 4;
    case 12800: /* module 50 call 0 */
        return 3;
    case 12801: /* module 50 call 1 */
        return 4;
    case 12802: /* module 50 call 2 */
        return 2;
    case 12803: /* module 50 call 3 */
        return 3;
    case 12804: /* module 50 call 4 */
        return 3;
    case 12805: /* module 50 call 5 */
        return 3;
    case 12806: /* module 50 call 6 */
        return 3;
    case 12807: /* module 50 call 7 */
        return 4;
    case 12808: /* module 50 call 8 */
        return 2;
    case 12809: /* module 50 call 9 */
        return 2;
    case 12810: /* module 50 call 10 */
        return 1;
    case 12811: /* module 50 call 11 */
        return 1;
    case 12812: /* module 50 call 12 */
        return 2;
    case 12813: /* module 50 call 13 */
        return 4;
    case 12814: /* module 50 call 14 */
        return 4;
    case 12815: /* module 50 call 15 */
        return 1;
    case 12816: /* module 50 call 16 */
        return 5;
    case 12817: /* module 50 call 17 */
        return 1;
    case 12818: /* module 50 call 18 */
        return 8;
    case 12819: /* module 50 call 19 */
        return 3;
    case 12820: /* module 50 call 20 */
        return 2;
    case 12821: /* module 50 call 21 */
        return 3;
    case 12822: /* module 50 call 22 */
        return 4;
    case 13056: /* module 51 call 0 */
        return 2;
    case 13057: /* module 51 call 1 */
        return 3;
    case 13058: /* module 51 call 2 */
        return 2;
    case 13059: /* module 51 call 3 */
        return 3;
    case 13060: /* module 51 call 4 */
        return 3;
    case 13061: /* module 51 call 5 */
        return 3;
    case 13062: /* module 51 call 6 */
        return 2;
    case 13063: /* module 51 call 7 */
        return 2;
    case 13064: /* module 51 call 8 */
        return 2;
    case 13065: /* module 51 call 9 */
        return 1;
    case 13066: /* module 51 call 10 */
        return 1;
    case 13067: /* module 51 call 11 */
        return 2;
    case 13068: /* module 51 call 12 */
        return 4;
    case 13069: /* module 51 call 13 */
        return 3;
    case 13070: /* module 51 call 14 */
        return 3;
    case 13071: /* module 51 call 15 */
        return 7;
    case 13072: /* module 51 call 16 */
        return 4;
    case 13073: /* module 51 call 17 */
        return 3;
    case 13074: /* module 51 call 18 */
        return 4;
    case 13075: /* module 51 call 19 */
        return 2;
    case 13076: /* module 51 call 20 */
        return 3;
    case 13077: /* module 51 call 21 */
        return 1;
#endif
    default:
        return 0;
    }

    return 0;
}

const char* _getMethod_ItemName_V1(uint8_t moduleIdx, uint8_t callIdx, uint8_t itemIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 2560: /* module 10 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_dest;
        case 1:
            return STR_IT_value;
        default:
            return NULL;
        }
    case 2563: /* module 10 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_dest;
        case 1:
            return STR_IT_value;
        default:
            return NULL;
        }
    case 5632: /* module 22 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_keys;
        case 1:
            return STR_IT_proof;
        default:
            return NULL;
        }
    case 5633: /* module 22 call 1 */
        switch (itemIdx) {
        default:
            return NULL;
        }
    case 10240: /* module 40 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_calls;
        default:
            return NULL;
        }
    case 10242: /* module 40 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_calls;
        default:
            return NULL;
        }
#ifdef SUBSTRATE_PARSER_FULL
    case 0: /* module 0 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT__ratio;
        default:
            return NULL;
        }
    case 1: /* module 0 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT__remark;
        default:
            return NULL;
        }
    case 2: /* module 0 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_pages;
        default:
            return NULL;
        }
    case 3: /* module 0 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_code;
        default:
            return NULL;
        }
    case 4: /* module 0 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_code;
        default:
            return NULL;
        }
    case 5: /* module 0 call 5 */
        switch (itemIdx) {
        case 0:
            return STR_IT_changes_trie_config;
        default:
            return NULL;
        }
    case 6: /* module 0 call 6 */
        switch (itemIdx) {
        case 0:
            return STR_IT_items;
        default:
            return NULL;
        }
    case 7: /* module 0 call 7 */
        switch (itemIdx) {
        case 0:
            return STR_IT_keys;
        default:
            return NULL;
        }
    case 8: /* module 0 call 8 */
        switch (itemIdx) {
        case 0:
            return STR_IT_prefix;
        case 1:
            return STR_IT__subkeys;
        default:
            return NULL;
        }
    case 9: /* module 0 call 9 */
        switch (itemIdx) {
        case 0:
            return STR_IT_remark;
        default:
            return NULL;
        }
    case 256: /* module 1 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_relay_chain_block;
        default:
            return NULL;
        }
    case 257: /* module 1 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_data;
        default:
            return NULL;
        }
    case 258: /* module 1 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_message;
        default:
            return NULL;
        }
    case 259: /* module 1 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_code_hash;
        default:
            return NULL;
        }
    case 260: /* module 1 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_code;
        default:
            return NULL;
        }
    case 768: /* module 3 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_now;
        default:
            return NULL;
        }
    case 2561: /* module 10 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        case 1:
            return STR_IT_new_free;
        case 2:
            return STR_IT_new_reserved;
        default:
            return NULL;
        }
    case 2562: /* module 10 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_source;
        case 1:
            return STR_IT_dest;
        case 2:
            return STR_IT_value;
        default:
            return NULL;
        }
    case 5120: /* module 20 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_new_uncles;
        default:
            return NULL;
        }
    case 5376: /* module 21 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_new_;
        default:
            return NULL;
        }
    case 5377: /* module 21 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_max;
        default:
            return NULL;
        }
    case 5378: /* module 21 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_bond;
        default:
            return NULL;
        }
    case 5379: /* module 21 call 3 */
        switch (itemIdx) {
        default:
            return NULL;
        }
    case 5380: /* module 21 call 4 */
        switch (itemIdx) {
        default:
            return NULL;
        }
    case 7936: /* module 31 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_dest;
        case 1:
            return STR_IT_message;
        default:
            return NULL;
        }
    case 7937: /* module 31 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_dest;
        case 1:
            return STR_IT_beneficiary;
        case 2:
            return STR_IT_assets;
        case 3:
            return STR_IT_dest_weight;
        default:
            return NULL;
        }
    case 7938: /* module 31 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_dest;
        case 1:
            return STR_IT_beneficiary;
        case 2:
            return STR_IT_assets;
        case 3:
            return STR_IT_dest_weight;
        default:
            return NULL;
        }
    case 7939: /* module 31 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_message;
        case 1:
            return STR_IT_max_weight;
        default:
            return NULL;
        }
    case 8448: /* module 33 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_index;
        case 1:
            return STR_IT_weight_limit;
        default:
            return NULL;
        }
    case 10241: /* module 40 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_index;
        case 1:
            return STR_IT_call;
        default:
            return NULL;
        }
    case 10496: /* module 41 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_other_signatories;
        case 1:
            return STR_IT_call;
        default:
            return NULL;
        }
    case 10497: /* module 41 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_threshold;
        case 1:
            return STR_IT_other_signatories;
        case 2:
            return STR_IT_maybe_timepoint;
        case 3:
            return STR_IT_call;
        case 4:
            return STR_IT_store_call;
        case 5:
            return STR_IT_max_weight;
        default:
            return NULL;
        }
    case 10498: /* module 41 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_threshold;
        case 1:
            return STR_IT_other_signatories;
        case 2:
            return STR_IT_maybe_timepoint;
        case 3:
            return STR_IT_call_hash;
        case 4:
            return STR_IT_max_weight;
        default:
            return NULL;
        }
    case 10499: /* module 41 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_threshold;
        case 1:
            return STR_IT_other_signatories;
        case 2:
            return STR_IT_timepoint;
        case 3:
            return STR_IT_call_hash;
        default:
            return NULL;
        }
    case 10752: /* module 42 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_real;
        case 1:
            return STR_IT_force_proxy_type;
        case 2:
            return STR_IT_call;
        default:
            return NULL;
        }
    case 10753: /* module 42 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_delegate;
        case 1:
            return STR_IT_proxy_type;
        case 2:
            return STR_IT_delay;
        default:
            return NULL;
        }
    case 10754: /* module 42 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_delegate;
        case 1:
            return STR_IT_proxy_type;
        case 2:
            return STR_IT_delay;
        default:
            return NULL;
        }
    case 10755: /* module 42 call 3 */
        switch (itemIdx) {
        default:
            return NULL;
        }
    case 10756: /* module 42 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_proxy_type;
        case 1:
            return STR_IT_delay;
        case 2:
            return STR_IT_index;
        default:
            return NULL;
        }
    case 10757: /* module 42 call 5 */
        switch (itemIdx) {
        case 0:
            return STR_IT_spawner;
        case 1:
            return STR_IT_proxy_type;
        case 2:
            return STR_IT_index;
        case 3:
            return STR_IT_height;
        case 4:
            return STR_IT_ext_index;
        default:
            return NULL;
        }
    case 10758: /* module 42 call 6 */
        switch (itemIdx) {
        case 0:
            return STR_IT_real;
        case 1:
            return STR_IT_call_hash;
        default:
            return NULL;
        }
    case 10759: /* module 42 call 7 */
        switch (itemIdx) {
        case 0:
            return STR_IT_real;
        case 1:
            return STR_IT_call_hash;
        default:
            return NULL;
        }
    case 10760: /* module 42 call 8 */
        switch (itemIdx) {
        case 0:
            return STR_IT_delegate;
        case 1:
            return STR_IT_call_hash;
        default:
            return NULL;
        }
    case 10761: /* module 42 call 9 */
        switch (itemIdx) {
        case 0:
            return STR_IT_delegate;
        case 1:
            return STR_IT_real;
        case 2:
            return STR_IT_force_proxy_type;
        case 3:
            return STR_IT_call;
        default:
            return NULL;
        }
    case 12800: /* module 50 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_admin;
        case 2:
            return STR_IT_min_balance;
        default:
            return NULL;
        }
    case 12801: /* module 50 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_owner;
        case 2:
            return STR_IT_is_sufficient;
        case 3:
            return STR_IT_min_balance;
        default:
            return NULL;
        }
    case 12802: /* module 50 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_witness;
        default:
            return NULL;
        }
    case 12803: /* module 50 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_beneficiary;
        case 2:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 12804: /* module 50 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_who;
        case 2:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 12805: /* module 50 call 5 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_target;
        case 2:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 12806: /* module 50 call 6 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_target;
        case 2:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 12807: /* module 50 call 7 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_source;
        case 2:
            return STR_IT_dest;
        case 3:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 12808: /* module 50 call 8 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_who;
        default:
            return NULL;
        }
    case 12809: /* module 50 call 9 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_who;
        default:
            return NULL;
        }
    case 12810: /* module 50 call 10 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        default:
            return NULL;
        }
    case 12811: /* module 50 call 11 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        default:
            return NULL;
        }
    case 12812: /* module 50 call 12 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_owner;
        default:
            return NULL;
        }
    case 12813: /* module 50 call 13 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_issuer;
        case 2:
            return STR_IT_admin;
        case 3:
            return STR_IT_freezer;
        default:
            return NULL;
        }
    case 12814: /* module 50 call 14 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_name;
        case 2:
            return STR_IT_symbol;
        case 3:
            return STR_IT_decimals;
        default:
            return NULL;
        }
    case 12815: /* module 50 call 15 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        default:
            return NULL;
        }
    case 12816: /* module 50 call 16 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_name;
        case 2:
            return STR_IT_symbol;
        case 3:
            return STR_IT_decimals;
        case 4:
            return STR_IT_is_frozen;
        default:
            return NULL;
        }
    case 12817: /* module 50 call 17 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        default:
            return NULL;
        }
    case 12818: /* module 50 call 18 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_owner;
        case 2:
            return STR_IT_issuer;
        case 3:
            return STR_IT_admin;
        case 4:
            return STR_IT_freezer;
        case 5:
            return STR_IT_min_balance;
        case 6:
            return STR_IT_is_sufficient;
        case 7:
            return STR_IT_is_frozen;
        default:
            return NULL;
        }
    case 12819: /* module 50 call 19 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_delegate;
        case 2:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 12820: /* module 50 call 20 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_delegate;
        default:
            return NULL;
        }
    case 12821: /* module 50 call 21 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_owner;
        case 2:
            return STR_IT_delegate;
        default:
            return NULL;
        }
    case 12822: /* module 50 call 22 */
        switch (itemIdx) {
        case 0:
            return STR_IT_id;
        case 1:
            return STR_IT_owner;
        case 2:
            return STR_IT_destination;
        case 3:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 13056: /* module 51 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        case 1:
            return STR_IT_admin;
        default:
            return NULL;
        }
    case 13057: /* module 51 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        case 1:
            return STR_IT_owner;
        case 2:
            return STR_IT_free_holding;
        default:
            return NULL;
        }
    case 13058: /* module 51 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        case 1:
            return STR_IT_witness;
        default:
            return NULL;
        }
    case 13059: /* module 51 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        case 1:
            return STR_IT_instance;
        case 2:
            return STR_IT_owner;
        default:
            return NULL;
        }
    case 13060: /* module 51 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        case 1:
            return STR_IT_instance;
        case 2:
            return STR_IT_check_owner;
        default:
            return NULL;
        }
    case 13061: /* module 51 call 5 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        case 1:
            return STR_IT_instance;
        case 2:
            return STR_IT_dest;
        default:
            return NULL;
        }
    case 13062: /* module 51 call 6 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        case 1:
            return STR_IT_instances;
        default:
            return NULL;
        }
    case 13063: /* module 51 call 7 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        case 1:
            return STR_IT_instance;
        default:
            return NULL;
        }
    case 13064: /* module 51 call 8 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        case 1:
            return STR_IT_instance;
        default:
            return NULL;
        }
    case 13065: /* module 51 call 9 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        default:
            return NULL;
        }
    case 13066: /* module 51 call 10 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        default:
            return NULL;
        }
    case 13067: /* module 51 call 11 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        case 1:
            return STR_IT_owner;
        default:
            return NULL;
        }
    case 13068: /* module 51 call 12 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        case 1:
            return STR_IT_issuer;
        case 2:
            return STR_IT_admin;
        case 3:
            return STR_IT_freezer;
        default:
            return NULL;
        }
    case 13069: /* module 51 call 13 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        case 1:
            return STR_IT_instance;
        case 2:
            return STR_IT_delegate;
        default:
            return NULL;
        }
    case 13070: /* module 51 call 14 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        case 1:
            return STR_IT_instance;
        case 2:
            return STR_IT_maybe_check_delegate;
        default:
            return NULL;
        }
    case 13071: /* module 51 call 15 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        case 1:
            return STR_IT_owner;
        case 2:
            return STR_IT_issuer;
        case 3:
            return STR_IT_admin;
        case 4:
            return STR_IT_freezer;
        case 5:
            return STR_IT_free_holding;
        case 6:
            return STR_IT_is_frozen;
        default:
            return NULL;
        }
    case 13072: /* module 51 call 16 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        case 1:
            return STR_IT_maybe_instance;
        case 2:
            return STR_IT_key;
        case 3:
            return STR_IT_value;
        default:
            return NULL;
        }
    case 13073: /* module 51 call 17 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        case 1:
            return STR_IT_maybe_instance;
        case 2:
            return STR_IT_key;
        default:
            return NULL;
        }
    case 13074: /* module 51 call 18 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        case 1:
            return STR_IT_instance;
        case 2:
            return STR_IT_data;
        case 3:
            return STR_IT_is_frozen;
        default:
            return NULL;
        }
    case 13075: /* module 51 call 19 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        case 1:
            return STR_IT_instance;
        default:
            return NULL;
        }
    case 13076: /* module 51 call 20 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        case 1:
            return STR_IT_data;
        case 2:
            return STR_IT_is_frozen;
        default:
            return NULL;
        }
    case 13077: /* module 51 call 21 */
        switch (itemIdx) {
        case 0:
            return STR_IT_class_;
        default:
            return NULL;
        }
#endif
    default:
        return NULL;
    }

    return NULL;
}

parser_error_t _getMethod_ItemValue_V1(
    pd_Method_V1_t* m,
    uint8_t moduleIdx, uint8_t callIdx, uint8_t itemIdx,
    char* outValue, uint16_t outValueLen,
    uint8_t pageIdx, uint8_t* pageCount)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 2560: /* module 10 call 0 */
        switch (itemIdx) {
        case 0: /* balances_transfer_V1 - dest */;
            return _toStringLookupSource_V1(
                &m->nested.balances_transfer_V1.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_transfer_V1 - value */;
            return _toStringCompactBalance(
                &m->nested.balances_transfer_V1.value,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2563: /* module 10 call 3 */
        switch (itemIdx) {
        case 0: /* balances_transfer_keep_alive_V1 - dest */;
            return _toStringLookupSource_V1(
                &m->nested.balances_transfer_keep_alive_V1.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_transfer_keep_alive_V1 - value */;
            return _toStringCompactBalance(
                &m->nested.balances_transfer_keep_alive_V1.value,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 5632: /* module 22 call 0 */
        switch (itemIdx) {
        case 0: /* session_set_keys_V1 - keys */;
            return _toStringKeys_V1(
                &m->basic.session_set_keys_V1.keys,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* session_set_keys_V1 - proof */;
            return _toStringBytes(
                &m->basic.session_set_keys_V1.proof,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 5633: /* module 22 call 1 */
        switch (itemIdx) {
        default:
            return parser_no_data;
        }
    case 10240: /* module 40 call 0 */
        switch (itemIdx) {
        case 0: /* utility_batch_V1 - calls */;
            return _toStringVecCall(
                &m->basic.utility_batch_V1.calls,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 10242: /* module 40 call 2 */
        switch (itemIdx) {
        case 0: /* utility_batch_all_V1 - calls */;
            return _toStringVecCall(
                &m->basic.utility_batch_all_V1.calls,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
#ifdef SUBSTRATE_PARSER_FULL
    case 0: /* module 0 call 0 */
        switch (itemIdx) {
        case 0: /* system_fill_block_V1 - _ratio */;
            return _toStringPerbill_V1(
                &m->nested.system_fill_block_V1._ratio,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1: /* module 0 call 1 */
        switch (itemIdx) {
        case 0: /* system_remark_V1 - _remark */;
            return _toStringBytes(
                &m->nested.system_remark_V1._remark,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2: /* module 0 call 2 */
        switch (itemIdx) {
        case 0: /* system_set_heap_pages_V1 - pages */;
            return _toStringu64(
                &m->nested.system_set_heap_pages_V1.pages,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 3: /* module 0 call 3 */
        switch (itemIdx) {
        case 0: /* system_set_code_V1 - code */;
            return _toStringBytes(
                &m->nested.system_set_code_V1.code,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4: /* module 0 call 4 */
        switch (itemIdx) {
        case 0: /* system_set_code_without_checks_V1 - code */;
            return _toStringBytes(
                &m->nested.system_set_code_without_checks_V1.code,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 5: /* module 0 call 5 */
        switch (itemIdx) {
        case 0: /* system_set_changes_trie_config_V1 - changes_trie_config */;
            return _toStringOptionChangesTrieConfiguration_V1(
                &m->nested.system_set_changes_trie_config_V1.changes_trie_config,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 6: /* module 0 call 6 */
        switch (itemIdx) {
        case 0: /* system_set_storage_V1 - items */;
            return _toStringVecKeyValue_V1(
                &m->nested.system_set_storage_V1.items,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 7: /* module 0 call 7 */
        switch (itemIdx) {
        case 0: /* system_kill_storage_V1 - keys */;
            return _toStringVecKey_V1(
                &m->nested.system_kill_storage_V1.keys,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 8: /* module 0 call 8 */
        switch (itemIdx) {
        case 0: /* system_kill_prefix_V1 - prefix */;
            return _toStringKey_V1(
                &m->nested.system_kill_prefix_V1.prefix,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* system_kill_prefix_V1 - _subkeys */;
            return _toStringu32(
                &m->nested.system_kill_prefix_V1._subkeys,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 9: /* module 0 call 9 */
        switch (itemIdx) {
        case 0: /* system_remark_with_event_V1 - remark */;
            return _toStringBytes(
                &m->basic.system_remark_with_event_V1.remark,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 256: /* module 1 call 0 */
        switch (itemIdx) {
        case 0: /* parachainsystem_set_upgrade_block_V1 - relay_chain_block */;
            return _toStringRelayChainBlockNumber_V1(
                &m->basic.parachainsystem_set_upgrade_block_V1.relay_chain_block,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 257: /* module 1 call 1 */
        switch (itemIdx) {
        case 0: /* parachainsystem_set_validation_data_V1 - data */;
            return _toStringParachainInherentData_V1(
                &m->basic.parachainsystem_set_validation_data_V1.data,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 258: /* module 1 call 2 */
        switch (itemIdx) {
        case 0: /* parachainsystem_sudo_send_upward_message_V1 - message */;
            return _toStringUpwardMessage_V1(
                &m->basic.parachainsystem_sudo_send_upward_message_V1.message,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 259: /* module 1 call 3 */
        switch (itemIdx) {
        case 0: /* parachainsystem_authorize_upgrade_V1 - code_hash */;
            return _toStringHash(
                &m->basic.parachainsystem_authorize_upgrade_V1.code_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 260: /* module 1 call 4 */
        switch (itemIdx) {
        case 0: /* parachainsystem_enact_authorized_upgrade_V1 - code */;
            return _toStringBytes(
                &m->basic.parachainsystem_enact_authorized_upgrade_V1.code,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 768: /* module 3 call 0 */
        switch (itemIdx) {
        case 0: /* timestamp_set_V1 - now */;
            return _toStringCompactMoment_V1(
                &m->basic.timestamp_set_V1.now,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2561: /* module 10 call 1 */
        switch (itemIdx) {
        case 0: /* balances_set_balance_V1 - who */;
            return _toStringLookupSource_V1(
                &m->nested.balances_set_balance_V1.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_set_balance_V1 - new_free */;
            return _toStringCompactBalance(
                &m->nested.balances_set_balance_V1.new_free,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* balances_set_balance_V1 - new_reserved */;
            return _toStringCompactBalance(
                &m->nested.balances_set_balance_V1.new_reserved,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2562: /* module 10 call 2 */
        switch (itemIdx) {
        case 0: /* balances_force_transfer_V1 - source */;
            return _toStringLookupSource_V1(
                &m->nested.balances_force_transfer_V1.source,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_force_transfer_V1 - dest */;
            return _toStringLookupSource_V1(
                &m->nested.balances_force_transfer_V1.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* balances_force_transfer_V1 - value */;
            return _toStringCompactBalance(
                &m->nested.balances_force_transfer_V1.value,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 5120: /* module 20 call 0 */
        switch (itemIdx) {
        case 0: /* authorship_set_uncles_V1 - new_uncles */;
            return _toStringVecHeader(
                &m->basic.authorship_set_uncles_V1.new_uncles,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 5376: /* module 21 call 0 */
        switch (itemIdx) {
        case 0: /* collatorselection_set_invulnerables_V1 - new_ */;
            return _toStringVecAccountId_V1(
                &m->basic.collatorselection_set_invulnerables_V1.new_,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 5377: /* module 21 call 1 */
        switch (itemIdx) {
        case 0: /* collatorselection_set_desired_candidates_V1 - max */;
            return _toStringu32(
                &m->basic.collatorselection_set_desired_candidates_V1.max,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 5378: /* module 21 call 2 */
        switch (itemIdx) {
        case 0: /* collatorselection_set_candidacy_bond_V1 - bond */;
            return _toStringBalanceOf(
                &m->basic.collatorselection_set_candidacy_bond_V1.bond,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 5379: /* module 21 call 3 */
        switch (itemIdx) {
        default:
            return parser_no_data;
        }
    case 5380: /* module 21 call 4 */
        switch (itemIdx) {
        default:
            return parser_no_data;
        }
    case 7936: /* module 31 call 0 */
        switch (itemIdx) {
        case 0: /* polkadotxcm_send_V1 - dest */;
            return _toStringMultiLocation_V1(
                &m->basic.polkadotxcm_send_V1.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* polkadotxcm_send_V1 - message */;
            return _toStringXcm_V1(
                &m->basic.polkadotxcm_send_V1.message,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 7937: /* module 31 call 1 */
        switch (itemIdx) {
        case 0: /* polkadotxcm_teleport_assets_V1 - dest */;
            return _toStringMultiLocation_V1(
                &m->basic.polkadotxcm_teleport_assets_V1.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* polkadotxcm_teleport_assets_V1 - beneficiary */;
            return _toStringMultiLocation_V1(
                &m->basic.polkadotxcm_teleport_assets_V1.beneficiary,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* polkadotxcm_teleport_assets_V1 - assets */;
            return _toStringVecMultiAsset_V1(
                &m->basic.polkadotxcm_teleport_assets_V1.assets,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* polkadotxcm_teleport_assets_V1 - dest_weight */;
            return _toStringWeight_V1(
                &m->basic.polkadotxcm_teleport_assets_V1.dest_weight,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 7938: /* module 31 call 2 */
        switch (itemIdx) {
        case 0: /* polkadotxcm_reserve_transfer_assets_V1 - dest */;
            return _toStringMultiLocation_V1(
                &m->basic.polkadotxcm_reserve_transfer_assets_V1.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* polkadotxcm_reserve_transfer_assets_V1 - beneficiary */;
            return _toStringMultiLocation_V1(
                &m->basic.polkadotxcm_reserve_transfer_assets_V1.beneficiary,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* polkadotxcm_reserve_transfer_assets_V1 - assets */;
            return _toStringVecMultiAsset_V1(
                &m->basic.polkadotxcm_reserve_transfer_assets_V1.assets,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* polkadotxcm_reserve_transfer_assets_V1 - dest_weight */;
            return _toStringWeight_V1(
                &m->basic.polkadotxcm_reserve_transfer_assets_V1.dest_weight,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 7939: /* module 31 call 3 */
        switch (itemIdx) {
        case 0: /* polkadotxcm_execute_V1 - message */;
            return _toStringXcm_V1(
                &m->basic.polkadotxcm_execute_V1.message,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* polkadotxcm_execute_V1 - max_weight */;
            return _toStringWeight_V1(
                &m->basic.polkadotxcm_execute_V1.max_weight,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 8448: /* module 33 call 0 */
        switch (itemIdx) {
        case 0: /* dmpqueue_service_overweight_V1 - index */;
            return _toStringOverweightIndex_V1(
                &m->basic.dmpqueue_service_overweight_V1.index,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* dmpqueue_service_overweight_V1 - weight_limit */;
            return _toStringWeight_V1(
                &m->basic.dmpqueue_service_overweight_V1.weight_limit,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 10241: /* module 40 call 1 */
        switch (itemIdx) {
        case 0: /* utility_as_derivative_V1 - index */;
            return _toStringu16(
                &m->basic.utility_as_derivative_V1.index,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* utility_as_derivative_V1 - call */;
            return _toStringCall(
                &m->basic.utility_as_derivative_V1.call,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 10496: /* module 41 call 0 */
        switch (itemIdx) {
        case 0: /* multisig_as_multi_threshold_1_V1 - other_signatories */;
            return _toStringVecAccountId_V1(
                &m->nested.multisig_as_multi_threshold_1_V1.other_signatories,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* multisig_as_multi_threshold_1_V1 - call */;
            return _toStringCall(
                &m->nested.multisig_as_multi_threshold_1_V1.call,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 10497: /* module 41 call 1 */
        switch (itemIdx) {
        case 0: /* multisig_as_multi_V1 - threshold */;
            return _toStringu16(
                &m->nested.multisig_as_multi_V1.threshold,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* multisig_as_multi_V1 - other_signatories */;
            return _toStringVecAccountId_V1(
                &m->nested.multisig_as_multi_V1.other_signatories,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* multisig_as_multi_V1 - maybe_timepoint */;
            return _toStringOptionTimepoint_V1(
                &m->nested.multisig_as_multi_V1.maybe_timepoint,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* multisig_as_multi_V1 - call */;
            return _toStringOpaqueCall_V1(
                &m->nested.multisig_as_multi_V1.call,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 4: /* multisig_as_multi_V1 - store_call */;
            return _toStringbool(
                &m->nested.multisig_as_multi_V1.store_call,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 5: /* multisig_as_multi_V1 - max_weight */;
            return _toStringWeight_V1(
                &m->nested.multisig_as_multi_V1.max_weight,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 10498: /* module 41 call 2 */
        switch (itemIdx) {
        case 0: /* multisig_approve_as_multi_V1 - threshold */;
            return _toStringu16(
                &m->nested.multisig_approve_as_multi_V1.threshold,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* multisig_approve_as_multi_V1 - other_signatories */;
            return _toStringVecAccountId_V1(
                &m->nested.multisig_approve_as_multi_V1.other_signatories,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* multisig_approve_as_multi_V1 - maybe_timepoint */;
            return _toStringOptionTimepoint_V1(
                &m->nested.multisig_approve_as_multi_V1.maybe_timepoint,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* multisig_approve_as_multi_V1 - call_hash */;
            return _toStringu8_array_32_V1(
                &m->nested.multisig_approve_as_multi_V1.call_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 4: /* multisig_approve_as_multi_V1 - max_weight */;
            return _toStringWeight_V1(
                &m->nested.multisig_approve_as_multi_V1.max_weight,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 10499: /* module 41 call 3 */
        switch (itemIdx) {
        case 0: /* multisig_cancel_as_multi_V1 - threshold */;
            return _toStringu16(
                &m->nested.multisig_cancel_as_multi_V1.threshold,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* multisig_cancel_as_multi_V1 - other_signatories */;
            return _toStringVecAccountId_V1(
                &m->nested.multisig_cancel_as_multi_V1.other_signatories,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* multisig_cancel_as_multi_V1 - timepoint */;
            return _toStringTimepoint_V1(
                &m->nested.multisig_cancel_as_multi_V1.timepoint,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* multisig_cancel_as_multi_V1 - call_hash */;
            return _toStringu8_array_32_V1(
                &m->nested.multisig_cancel_as_multi_V1.call_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 10752: /* module 42 call 0 */
        switch (itemIdx) {
        case 0: /* proxy_proxy_V1 - real */;
            return _toStringAccountId_V1(
                &m->nested.proxy_proxy_V1.real,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_proxy_V1 - force_proxy_type */;
            return _toStringOptionProxyType_V1(
                &m->nested.proxy_proxy_V1.force_proxy_type,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* proxy_proxy_V1 - call */;
            return _toStringCall(
                &m->nested.proxy_proxy_V1.call,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 10753: /* module 42 call 1 */
        switch (itemIdx) {
        case 0: /* proxy_add_proxy_V1 - delegate */;
            return _toStringAccountId_V1(
                &m->basic.proxy_add_proxy_V1.delegate,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_add_proxy_V1 - proxy_type */;
            return _toStringProxyType_V1(
                &m->basic.proxy_add_proxy_V1.proxy_type,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* proxy_add_proxy_V1 - delay */;
            return _toStringBlockNumber(
                &m->basic.proxy_add_proxy_V1.delay,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 10754: /* module 42 call 2 */
        switch (itemIdx) {
        case 0: /* proxy_remove_proxy_V1 - delegate */;
            return _toStringAccountId_V1(
                &m->basic.proxy_remove_proxy_V1.delegate,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_remove_proxy_V1 - proxy_type */;
            return _toStringProxyType_V1(
                &m->basic.proxy_remove_proxy_V1.proxy_type,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* proxy_remove_proxy_V1 - delay */;
            return _toStringBlockNumber(
                &m->basic.proxy_remove_proxy_V1.delay,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 10755: /* module 42 call 3 */
        switch (itemIdx) {
        default:
            return parser_no_data;
        }
    case 10756: /* module 42 call 4 */
        switch (itemIdx) {
        case 0: /* proxy_anonymous_V1 - proxy_type */;
            return _toStringProxyType_V1(
                &m->basic.proxy_anonymous_V1.proxy_type,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_anonymous_V1 - delay */;
            return _toStringBlockNumber(
                &m->basic.proxy_anonymous_V1.delay,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* proxy_anonymous_V1 - index */;
            return _toStringu16(
                &m->basic.proxy_anonymous_V1.index,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 10757: /* module 42 call 5 */
        switch (itemIdx) {
        case 0: /* proxy_kill_anonymous_V1 - spawner */;
            return _toStringAccountId_V1(
                &m->basic.proxy_kill_anonymous_V1.spawner,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_kill_anonymous_V1 - proxy_type */;
            return _toStringProxyType_V1(
                &m->basic.proxy_kill_anonymous_V1.proxy_type,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* proxy_kill_anonymous_V1 - index */;
            return _toStringu16(
                &m->basic.proxy_kill_anonymous_V1.index,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* proxy_kill_anonymous_V1 - height */;
            return _toStringCompactBlockNumber(
                &m->basic.proxy_kill_anonymous_V1.height,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 4: /* proxy_kill_anonymous_V1 - ext_index */;
            return _toStringCompactu32(
                &m->basic.proxy_kill_anonymous_V1.ext_index,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 10758: /* module 42 call 6 */
        switch (itemIdx) {
        case 0: /* proxy_announce_V1 - real */;
            return _toStringAccountId_V1(
                &m->basic.proxy_announce_V1.real,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_announce_V1 - call_hash */;
            return _toStringCallHashOf_V1(
                &m->basic.proxy_announce_V1.call_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 10759: /* module 42 call 7 */
        switch (itemIdx) {
        case 0: /* proxy_remove_announcement_V1 - real */;
            return _toStringAccountId_V1(
                &m->basic.proxy_remove_announcement_V1.real,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_remove_announcement_V1 - call_hash */;
            return _toStringCallHashOf_V1(
                &m->basic.proxy_remove_announcement_V1.call_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 10760: /* module 42 call 8 */
        switch (itemIdx) {
        case 0: /* proxy_reject_announcement_V1 - delegate */;
            return _toStringAccountId_V1(
                &m->basic.proxy_reject_announcement_V1.delegate,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_reject_announcement_V1 - call_hash */;
            return _toStringCallHashOf_V1(
                &m->basic.proxy_reject_announcement_V1.call_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 10761: /* module 42 call 9 */
        switch (itemIdx) {
        case 0: /* proxy_proxy_announced_V1 - delegate */;
            return _toStringAccountId_V1(
                &m->basic.proxy_proxy_announced_V1.delegate,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* proxy_proxy_announced_V1 - real */;
            return _toStringAccountId_V1(
                &m->basic.proxy_proxy_announced_V1.real,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* proxy_proxy_announced_V1 - force_proxy_type */;
            return _toStringOptionProxyType_V1(
                &m->basic.proxy_proxy_announced_V1.force_proxy_type,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* proxy_proxy_announced_V1 - call */;
            return _toStringCall(
                &m->basic.proxy_proxy_announced_V1.call,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12800: /* module 50 call 0 */
        switch (itemIdx) {
        case 0: /* assets_create_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_create_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_create_V1 - admin */;
            return _toStringLookupSource_V1(
                &m->nested.assets_create_V1.admin,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_create_V1 - min_balance */;
            return _toStringTAssetBalance_V1(
                &m->nested.assets_create_V1.min_balance,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12801: /* module 50 call 1 */
        switch (itemIdx) {
        case 0: /* assets_force_create_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_force_create_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_force_create_V1 - owner */;
            return _toStringLookupSource_V1(
                &m->nested.assets_force_create_V1.owner,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_force_create_V1 - is_sufficient */;
            return _toStringbool(
                &m->nested.assets_force_create_V1.is_sufficient,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* assets_force_create_V1 - min_balance */;
            return _toStringCompactTAssetBalance_V1(
                &m->nested.assets_force_create_V1.min_balance,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12802: /* module 50 call 2 */
        switch (itemIdx) {
        case 0: /* assets_destroy_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_destroy_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_destroy_V1 - witness */;
            return _toStringAssetDestroyWitness_V1(
                &m->nested.assets_destroy_V1.witness,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12803: /* module 50 call 3 */
        switch (itemIdx) {
        case 0: /* assets_mint_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_mint_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_mint_V1 - beneficiary */;
            return _toStringLookupSource_V1(
                &m->nested.assets_mint_V1.beneficiary,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_mint_V1 - amount */;
            return _toStringCompactTAssetBalance_V1(
                &m->nested.assets_mint_V1.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12804: /* module 50 call 4 */
        switch (itemIdx) {
        case 0: /* assets_burn_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_burn_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_burn_V1 - who */;
            return _toStringLookupSource_V1(
                &m->nested.assets_burn_V1.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_burn_V1 - amount */;
            return _toStringCompactTAssetBalance_V1(
                &m->nested.assets_burn_V1.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12805: /* module 50 call 5 */
        switch (itemIdx) {
        case 0: /* assets_transfer_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_transfer_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_transfer_V1 - target */;
            return _toStringLookupSource_V1(
                &m->nested.assets_transfer_V1.target,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_transfer_V1 - amount */;
            return _toStringCompactTAssetBalance_V1(
                &m->nested.assets_transfer_V1.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12806: /* module 50 call 6 */
        switch (itemIdx) {
        case 0: /* assets_transfer_keep_alive_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_transfer_keep_alive_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_transfer_keep_alive_V1 - target */;
            return _toStringLookupSource_V1(
                &m->nested.assets_transfer_keep_alive_V1.target,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_transfer_keep_alive_V1 - amount */;
            return _toStringCompactTAssetBalance_V1(
                &m->nested.assets_transfer_keep_alive_V1.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12807: /* module 50 call 7 */
        switch (itemIdx) {
        case 0: /* assets_force_transfer_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_force_transfer_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_force_transfer_V1 - source */;
            return _toStringLookupSource_V1(
                &m->nested.assets_force_transfer_V1.source,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_force_transfer_V1 - dest */;
            return _toStringLookupSource_V1(
                &m->nested.assets_force_transfer_V1.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* assets_force_transfer_V1 - amount */;
            return _toStringCompactTAssetBalance_V1(
                &m->nested.assets_force_transfer_V1.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12808: /* module 50 call 8 */
        switch (itemIdx) {
        case 0: /* assets_freeze_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_freeze_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_freeze_V1 - who */;
            return _toStringLookupSource_V1(
                &m->nested.assets_freeze_V1.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12809: /* module 50 call 9 */
        switch (itemIdx) {
        case 0: /* assets_thaw_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_thaw_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_thaw_V1 - who */;
            return _toStringLookupSource_V1(
                &m->nested.assets_thaw_V1.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12810: /* module 50 call 10 */
        switch (itemIdx) {
        case 0: /* assets_freeze_asset_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_freeze_asset_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12811: /* module 50 call 11 */
        switch (itemIdx) {
        case 0: /* assets_thaw_asset_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_thaw_asset_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12812: /* module 50 call 12 */
        switch (itemIdx) {
        case 0: /* assets_transfer_ownership_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_transfer_ownership_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_transfer_ownership_V1 - owner */;
            return _toStringLookupSource_V1(
                &m->nested.assets_transfer_ownership_V1.owner,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12813: /* module 50 call 13 */
        switch (itemIdx) {
        case 0: /* assets_set_team_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_set_team_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_set_team_V1 - issuer */;
            return _toStringLookupSource_V1(
                &m->nested.assets_set_team_V1.issuer,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_set_team_V1 - admin */;
            return _toStringLookupSource_V1(
                &m->nested.assets_set_team_V1.admin,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* assets_set_team_V1 - freezer */;
            return _toStringLookupSource_V1(
                &m->nested.assets_set_team_V1.freezer,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12814: /* module 50 call 14 */
        switch (itemIdx) {
        case 0: /* assets_set_metadata_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_set_metadata_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_set_metadata_V1 - name */;
            return _toStringBytes(
                &m->nested.assets_set_metadata_V1.name,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_set_metadata_V1 - symbol */;
            return _toStringBytes(
                &m->nested.assets_set_metadata_V1.symbol,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* assets_set_metadata_V1 - decimals */;
            return _toStringu8(
                &m->nested.assets_set_metadata_V1.decimals,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12815: /* module 50 call 15 */
        switch (itemIdx) {
        case 0: /* assets_clear_metadata_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_clear_metadata_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12816: /* module 50 call 16 */
        switch (itemIdx) {
        case 0: /* assets_force_set_metadata_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_force_set_metadata_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_force_set_metadata_V1 - name */;
            return _toStringBytes(
                &m->nested.assets_force_set_metadata_V1.name,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_force_set_metadata_V1 - symbol */;
            return _toStringBytes(
                &m->nested.assets_force_set_metadata_V1.symbol,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* assets_force_set_metadata_V1 - decimals */;
            return _toStringu8(
                &m->nested.assets_force_set_metadata_V1.decimals,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 4: /* assets_force_set_metadata_V1 - is_frozen */;
            return _toStringbool(
                &m->nested.assets_force_set_metadata_V1.is_frozen,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12817: /* module 50 call 17 */
        switch (itemIdx) {
        case 0: /* assets_force_clear_metadata_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_force_clear_metadata_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12818: /* module 50 call 18 */
        switch (itemIdx) {
        case 0: /* assets_force_asset_status_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_force_asset_status_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_force_asset_status_V1 - owner */;
            return _toStringLookupSource_V1(
                &m->nested.assets_force_asset_status_V1.owner,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_force_asset_status_V1 - issuer */;
            return _toStringLookupSource_V1(
                &m->nested.assets_force_asset_status_V1.issuer,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* assets_force_asset_status_V1 - admin */;
            return _toStringLookupSource_V1(
                &m->nested.assets_force_asset_status_V1.admin,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 4: /* assets_force_asset_status_V1 - freezer */;
            return _toStringLookupSource_V1(
                &m->nested.assets_force_asset_status_V1.freezer,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 5: /* assets_force_asset_status_V1 - min_balance */;
            return _toStringCompactTAssetBalance_V1(
                &m->nested.assets_force_asset_status_V1.min_balance,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 6: /* assets_force_asset_status_V1 - is_sufficient */;
            return _toStringbool(
                &m->nested.assets_force_asset_status_V1.is_sufficient,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 7: /* assets_force_asset_status_V1 - is_frozen */;
            return _toStringbool(
                &m->nested.assets_force_asset_status_V1.is_frozen,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12819: /* module 50 call 19 */
        switch (itemIdx) {
        case 0: /* assets_approve_transfer_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_approve_transfer_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_approve_transfer_V1 - delegate */;
            return _toStringLookupSource_V1(
                &m->nested.assets_approve_transfer_V1.delegate,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_approve_transfer_V1 - amount */;
            return _toStringCompactTAssetBalance_V1(
                &m->nested.assets_approve_transfer_V1.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12820: /* module 50 call 20 */
        switch (itemIdx) {
        case 0: /* assets_cancel_approval_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_cancel_approval_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_cancel_approval_V1 - delegate */;
            return _toStringLookupSource_V1(
                &m->nested.assets_cancel_approval_V1.delegate,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12821: /* module 50 call 21 */
        switch (itemIdx) {
        case 0: /* assets_force_cancel_approval_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_force_cancel_approval_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_force_cancel_approval_V1 - owner */;
            return _toStringLookupSource_V1(
                &m->nested.assets_force_cancel_approval_V1.owner,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_force_cancel_approval_V1 - delegate */;
            return _toStringLookupSource_V1(
                &m->nested.assets_force_cancel_approval_V1.delegate,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 12822: /* module 50 call 22 */
        switch (itemIdx) {
        case 0: /* assets_transfer_approved_V1 - id */;
            return _toStringCompactAssetId_V1(
                &m->nested.assets_transfer_approved_V1.id,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* assets_transfer_approved_V1 - owner */;
            return _toStringLookupSource_V1(
                &m->nested.assets_transfer_approved_V1.owner,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* assets_transfer_approved_V1 - destination */;
            return _toStringLookupSource_V1(
                &m->nested.assets_transfer_approved_V1.destination,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* assets_transfer_approved_V1 - amount */;
            return _toStringCompactTAssetBalance_V1(
                &m->nested.assets_transfer_approved_V1.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13056: /* module 51 call 0 */
        switch (itemIdx) {
        case 0: /* uniques_create_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_create_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* uniques_create_V1 - admin */;
            return _toStringLookupSource_V1(
                &m->basic.uniques_create_V1.admin,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13057: /* module 51 call 1 */
        switch (itemIdx) {
        case 0: /* uniques_force_create_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_force_create_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* uniques_force_create_V1 - owner */;
            return _toStringLookupSource_V1(
                &m->basic.uniques_force_create_V1.owner,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* uniques_force_create_V1 - free_holding */;
            return _toStringbool(
                &m->basic.uniques_force_create_V1.free_holding,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13058: /* module 51 call 2 */
        switch (itemIdx) {
        case 0: /* uniques_destroy_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_destroy_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* uniques_destroy_V1 - witness */;
            return _toStringDestroyWitness_V1(
                &m->basic.uniques_destroy_V1.witness,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13059: /* module 51 call 3 */
        switch (itemIdx) {
        case 0: /* uniques_mint_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_mint_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* uniques_mint_V1 - instance */;
            return _toStringCompactInstanceId_V1(
                &m->basic.uniques_mint_V1.instance,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* uniques_mint_V1 - owner */;
            return _toStringLookupSource_V1(
                &m->basic.uniques_mint_V1.owner,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13060: /* module 51 call 4 */
        switch (itemIdx) {
        case 0: /* uniques_burn_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_burn_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* uniques_burn_V1 - instance */;
            return _toStringCompactInstanceId_V1(
                &m->basic.uniques_burn_V1.instance,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* uniques_burn_V1 - check_owner */;
            return _toStringOptionLookupSource_V1(
                &m->basic.uniques_burn_V1.check_owner,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13061: /* module 51 call 5 */
        switch (itemIdx) {
        case 0: /* uniques_transfer_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_transfer_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* uniques_transfer_V1 - instance */;
            return _toStringCompactInstanceId_V1(
                &m->basic.uniques_transfer_V1.instance,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* uniques_transfer_V1 - dest */;
            return _toStringLookupSource_V1(
                &m->basic.uniques_transfer_V1.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13062: /* module 51 call 6 */
        switch (itemIdx) {
        case 0: /* uniques_redeposit_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_redeposit_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* uniques_redeposit_V1 - instances */;
            return _toStringVecInstanceId_V1(
                &m->basic.uniques_redeposit_V1.instances,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13063: /* module 51 call 7 */
        switch (itemIdx) {
        case 0: /* uniques_freeze_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_freeze_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* uniques_freeze_V1 - instance */;
            return _toStringCompactInstanceId_V1(
                &m->basic.uniques_freeze_V1.instance,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13064: /* module 51 call 8 */
        switch (itemIdx) {
        case 0: /* uniques_thaw_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_thaw_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* uniques_thaw_V1 - instance */;
            return _toStringCompactInstanceId_V1(
                &m->basic.uniques_thaw_V1.instance,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13065: /* module 51 call 9 */
        switch (itemIdx) {
        case 0: /* uniques_freeze_class_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_freeze_class_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13066: /* module 51 call 10 */
        switch (itemIdx) {
        case 0: /* uniques_thaw_class_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_thaw_class_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13067: /* module 51 call 11 */
        switch (itemIdx) {
        case 0: /* uniques_transfer_ownership_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_transfer_ownership_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* uniques_transfer_ownership_V1 - owner */;
            return _toStringLookupSource_V1(
                &m->basic.uniques_transfer_ownership_V1.owner,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13068: /* module 51 call 12 */
        switch (itemIdx) {
        case 0: /* uniques_set_team_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_set_team_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* uniques_set_team_V1 - issuer */;
            return _toStringLookupSource_V1(
                &m->basic.uniques_set_team_V1.issuer,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* uniques_set_team_V1 - admin */;
            return _toStringLookupSource_V1(
                &m->basic.uniques_set_team_V1.admin,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* uniques_set_team_V1 - freezer */;
            return _toStringLookupSource_V1(
                &m->basic.uniques_set_team_V1.freezer,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13069: /* module 51 call 13 */
        switch (itemIdx) {
        case 0: /* uniques_approve_transfer_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_approve_transfer_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* uniques_approve_transfer_V1 - instance */;
            return _toStringCompactInstanceId_V1(
                &m->basic.uniques_approve_transfer_V1.instance,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* uniques_approve_transfer_V1 - delegate */;
            return _toStringLookupSource_V1(
                &m->basic.uniques_approve_transfer_V1.delegate,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13070: /* module 51 call 14 */
        switch (itemIdx) {
        case 0: /* uniques_cancel_approval_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_cancel_approval_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* uniques_cancel_approval_V1 - instance */;
            return _toStringCompactInstanceId_V1(
                &m->basic.uniques_cancel_approval_V1.instance,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* uniques_cancel_approval_V1 - maybe_check_delegate */;
            return _toStringOptionLookupSource_V1(
                &m->basic.uniques_cancel_approval_V1.maybe_check_delegate,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13071: /* module 51 call 15 */
        switch (itemIdx) {
        case 0: /* uniques_force_asset_status_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_force_asset_status_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* uniques_force_asset_status_V1 - owner */;
            return _toStringLookupSource_V1(
                &m->basic.uniques_force_asset_status_V1.owner,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* uniques_force_asset_status_V1 - issuer */;
            return _toStringLookupSource_V1(
                &m->basic.uniques_force_asset_status_V1.issuer,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* uniques_force_asset_status_V1 - admin */;
            return _toStringLookupSource_V1(
                &m->basic.uniques_force_asset_status_V1.admin,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 4: /* uniques_force_asset_status_V1 - freezer */;
            return _toStringLookupSource_V1(
                &m->basic.uniques_force_asset_status_V1.freezer,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 5: /* uniques_force_asset_status_V1 - free_holding */;
            return _toStringbool(
                &m->basic.uniques_force_asset_status_V1.free_holding,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 6: /* uniques_force_asset_status_V1 - is_frozen */;
            return _toStringbool(
                &m->basic.uniques_force_asset_status_V1.is_frozen,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13072: /* module 51 call 16 */
        switch (itemIdx) {
        case 0: /* uniques_set_attribute_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_set_attribute_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* uniques_set_attribute_V1 - maybe_instance */;
            return _toStringOptionInstanceId_V1(
                &m->basic.uniques_set_attribute_V1.maybe_instance,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* uniques_set_attribute_V1 - key */;
            return _toStringBytes(
                &m->basic.uniques_set_attribute_V1.key,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* uniques_set_attribute_V1 - value */;
            return _toStringBytes(
                &m->basic.uniques_set_attribute_V1.value,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13073: /* module 51 call 17 */
        switch (itemIdx) {
        case 0: /* uniques_clear_attribute_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_clear_attribute_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* uniques_clear_attribute_V1 - maybe_instance */;
            return _toStringOptionInstanceId_V1(
                &m->basic.uniques_clear_attribute_V1.maybe_instance,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* uniques_clear_attribute_V1 - key */;
            return _toStringBytes(
                &m->basic.uniques_clear_attribute_V1.key,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13074: /* module 51 call 18 */
        switch (itemIdx) {
        case 0: /* uniques_set_metadata_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_set_metadata_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* uniques_set_metadata_V1 - instance */;
            return _toStringCompactInstanceId_V1(
                &m->basic.uniques_set_metadata_V1.instance,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* uniques_set_metadata_V1 - data */;
            return _toStringBytes(
                &m->basic.uniques_set_metadata_V1.data,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* uniques_set_metadata_V1 - is_frozen */;
            return _toStringbool(
                &m->basic.uniques_set_metadata_V1.is_frozen,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13075: /* module 51 call 19 */
        switch (itemIdx) {
        case 0: /* uniques_clear_metadata_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_clear_metadata_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* uniques_clear_metadata_V1 - instance */;
            return _toStringCompactInstanceId_V1(
                &m->basic.uniques_clear_metadata_V1.instance,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13076: /* module 51 call 20 */
        switch (itemIdx) {
        case 0: /* uniques_set_class_metadata_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_set_class_metadata_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* uniques_set_class_metadata_V1 - data */;
            return _toStringBytes(
                &m->basic.uniques_set_class_metadata_V1.data,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* uniques_set_class_metadata_V1 - is_frozen */;
            return _toStringbool(
                &m->basic.uniques_set_class_metadata_V1.is_frozen,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 13077: /* module 51 call 21 */
        switch (itemIdx) {
        case 0: /* uniques_clear_class_metadata_V1 - class_ */;
            return _toStringCompactClassId_V1(
                &m->basic.uniques_clear_class_metadata_V1.class_,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
#endif
    default:
        return parser_ok;
    }

    return parser_ok;
}

bool _getMethod_ItemIsExpert_V1(uint8_t moduleIdx, uint8_t callIdx, uint8_t itemIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {

    default:
        return false;
    }
}

bool _getMethod_IsNestingSupported_V1(uint8_t moduleIdx, uint8_t callIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 9: // System:Remark with event
    case 256: // ParachainSystem:Set upgrade block
    case 257: // ParachainSystem:Set validation data
    case 258: // ParachainSystem:Sudo send upward message
    case 259: // ParachainSystem:Authorize upgrade
    case 260: // ParachainSystem:Enact authorized upgrade
    case 768: // Timestamp:Set
    case 5120: // Authorship:Set uncles
    case 5376: // CollatorSelection:Set invulnerables
    case 5377: // CollatorSelection:Set desired candidates
    case 5378: // CollatorSelection:Set candidacy bond
    case 5379: // CollatorSelection:Register as candidate
    case 5380: // CollatorSelection:Leave intent
    case 5632: // Session:Set keys
    case 5633: // Session:Purge keys
    case 7936: // PolkadotXcm:Send
    case 7937: // PolkadotXcm:Teleport assets
    case 7938: // PolkadotXcm:Reserve transfer assets
    case 7939: // PolkadotXcm:Execute
    case 8448: // DmpQueue:Service overweight
    case 10240: // Utility:Batch
    case 10241: // Utility:As derivative
    case 10242: // Utility:Batch all
    case 10753: // Proxy:Add proxy
    case 10754: // Proxy:Remove proxy
    case 10755: // Proxy:Remove proxies
    case 10756: // Proxy:Anonymous
    case 10757: // Proxy:Kill anonymous
    case 10758: // Proxy:Announce
    case 10759: // Proxy:Remove announcement
    case 10760: // Proxy:Reject announcement
    case 10761: // Proxy:Proxy announced
    case 13056: // Uniques:Create
    case 13057: // Uniques:Force create
    case 13058: // Uniques:Destroy
    case 13059: // Uniques:Mint
    case 13060: // Uniques:Burn
    case 13061: // Uniques:Transfer
    case 13062: // Uniques:Redeposit
    case 13063: // Uniques:Freeze
    case 13064: // Uniques:Thaw
    case 13065: // Uniques:Freeze class
    case 13066: // Uniques:Thaw class
    case 13067: // Uniques:Transfer ownership
    case 13068: // Uniques:Set team
    case 13069: // Uniques:Approve transfer
    case 13070: // Uniques:Cancel approval
    case 13071: // Uniques:Force asset status
    case 13072: // Uniques:Set attribute
    case 13073: // Uniques:Clear attribute
    case 13074: // Uniques:Set metadata
    case 13075: // Uniques:Clear metadata
    case 13076: // Uniques:Set class metadata
    case 13077: // Uniques:Clear class metadata
        return false;
    default:
        return true;
    }
}
