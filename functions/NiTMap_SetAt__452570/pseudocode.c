//
// [2026-10-03 checkpoint contract] Verified45258F..4525A6 scans existing nodes; matching key enters4525DC ClearValue then SetValue on SAME node. Missing key allocates and prepends at4525A8..4525D1. Clone map ClearValue is no-op, so prior nodes/keys remain stable while values can change. This is the validated contract for plugin group clone rollback snapshots.
int __thiscall NiTMap_SetAt(_DWORD *this, int a2, int a3)
{
  int v4; // ebp
  _DWORD *v5; // edi

  v4 = (*(int (__thiscall **)(_DWORD *, int))(*this + 4))(this, a2); /*0x452582*/
  v5 = *(_DWORD **)(*(this + 2) + 4 * v4); /*0x452587*/
  if ( v5 ) /*0x45258c*/
    return NiTMap_SetAt_::BucketLoop((int)this, a2, v5, a2, a3); /*0x45258f*/
  else
    return NiTMap_SetAt_::InsertNode(v4, this, a2, a3); /*0x45258c*/
}
