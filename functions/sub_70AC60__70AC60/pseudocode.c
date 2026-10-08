//
// Verified parent copy707E90 first registers source->destination via700300->700770. Iterates source children+B0, extentWORD+B6; calls child CreateClone+18 and installs clone into destination using virtual+90. Parent/group mappings are therefore available while cloning children. Native clone postprocessing happens separately.
// [2026-10-03 group failure correction] Plugin group factory now checkpoints both cloning maps before mutation. After this copy returns, each nonnull source child must have a nonnull destination child at same index matching the clone map. Missing child triggers rollback of new map entries and replaced prior values before group/child release; incomplete group returnsnull. C++ exceptions run same cleanup then propagate. Native access violations/constructor faults are not claimed safely recoverable.
void __thiscall OB_NiNode_CopyMembersForClone(void *this, void *destination, void *cloningProcess)
{
  void *v3; // ebx
  unsigned int i; // esi
  int v6; // ecx
  int v7; // eax
  void (__thiscall ***v8)(void *, int); // edi

  v3 = destination; /*0x70ac65*/
  sub_707E90((char **)this, (NiGeometry *)destination, (_DWORD **)cloningProcess); /*0x70ac6f*/
  for ( i = 0; i < *((unsigned __int16 *)this + 0x5B); ++i ) /*0x70ac76*/
  {
    v6 = *(_DWORD *)(*((_DWORD *)this + 0x2C) + 4 * i); /*0x70ac86*/
    if ( v6 ) /*0x70ac8b*/
    {
      v7 = (*(int (__thiscall **)(int, void *))(*(_DWORD *)v6 + 0x18))(v6, cloningProcess); /*0x70ac97*/
      (*(void (__thiscall **)(void *, void **, unsigned int, int))(*(_DWORD *)v3 + 0x90))(v3, &destination, i, v7); /*0x70acaa*/
      if ( destination ) /*0x70acb2*/
      {
        v8 = (void (__thiscall ***)(void *, int))destination; /*0x70acb4*/
        if ( !InterlockedDecrement((volatile LONG *)destination + 1) ) /*0x70acba*/
          (**v8)(v8, 1); /*0x70acd0*/
      }
    }
  }
}
