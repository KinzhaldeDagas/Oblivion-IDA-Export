int __usercall ContainerExtraData_AddItem_::FixupEquippedAmmo@<eax>(
        _BYTE *a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  int v15; // esi
  int v16; // eax
  int v17; // esi
  ExtraDataList *v18; // edi
  int v19; // eax

  if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a3 + 4) + 0x190))(*(_DWORD *)(a3 + 4)) )
    return ContainerExtraData_AddItem_::FixupPersistentRefPointer(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15);
  v15 = *(_DWORD *)(a3 + 4);
  if ( !v15 )
    return ContainerExtraData_AddItem_::FixupPersistentRefPointer(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15);
  if ( !*(_DWORD *)(v15 + 0x58) )
    return ContainerExtraData_AddItem_::FixupPersistentRefPointer(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15);
  if ( sub_45A500(SaveLoad_CurrentSavegame) )
    return ContainerExtraData_AddItem_::FixupPersistentRefPointer(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15);
  if ( (SaveLoad_CurrentSavegame->flags & 0x1000) != 0 )
    return ContainerExtraData_AddItem_::FixupPersistentRefPointer(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15);
  v16 = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v15 + 0x58) + 0xF4))(*(_DWORD *)(v15 + 0x58), 0);
  v17 = v16;
  if ( !v16 || *(_DWORD *)(v16 + 8) != a13 )
    return ContainerExtraData_AddItem_::FixupPersistentRefPointer(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15);
  v18 = **(ExtraDataList ***)v16;
  LOWORD(v19) = a15 + ExtraDataList_GetExtraCount(v18);
  ExtraDataList_SetExtraCount(v18, v19);
  *(_DWORD *)(v17 + 4) += a15;
  return ContainerExtraData_AddItem_::FixupPersistentRefPointer(
           a1,
           a2,
           a8,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15);
}
