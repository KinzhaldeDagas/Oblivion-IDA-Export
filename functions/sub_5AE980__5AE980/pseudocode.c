BSStringT *__usercall sub_5AE980@<eax>(
        int a1@<ecx>,
        double a2@<st7>,
        double a3@<st6>,
        double a4@<st5>,
        double a5@<st4>,
        double a6@<st3>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>)
{
  _DWORD *v10; // esi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  int v12; // edx
  int v13; // edx
  UInt32 v14; // esi
  signed int v15; // edi
  int v16; // ebp
  _DWORD *v17; // eax
  BSStringT *result; // eax
  char v19[300]; // [esp+10h] [ebp-130h] BYREF

  v10 = *(_DWORD **)(*(_DWORD *)(a1 + 0x48) + 0x34);
  while ( v10 )
  {
    v11 = (void (__thiscall ***)(_DWORD, int))v10[2];
    v10 = (_DWORD *)*v10;
    if ( v11 )
      (**v11)(v11, 1);
  }
  NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)(*(_DWORD *)(a1 + 0x48) + 0x30));
  sub_459400(SaveLoad_CurrentSavegame, v12);
  sub_45D450(SaveLoad_CurrentSavegame, v13);
  v14 = SaveLoad_CurrentSavegame[1].unk01C[0];
  v15 = 0;
  v16 = 0;
  *(_DWORD *)(a1 + 0x54) = v14;
  v17 = (_DWORD *)v14;
  if ( !v14 )
    return sub_5AE6D0(a1, a2, a3, a4, a5, a6, a7, a8, a9, v19, 0, 0, 0);
  do
  {
    if ( *v17 )
      ++v16;
    v17 = (_DWORD *)v17[1];
  }
  while ( v17 );
  if ( !v16 )
    return sub_5AE6D0(a1, a2, a3, a4, a5, a6, a7, a8, a9, v19, 0, 0, 0);
  do
  {
    result = *(BSStringT **)v14;
    if ( !*(_DWORD *)v14 )
      break;
    result = sub_5AE6D0(a1, a2, a3, a4, a5, a6, a7, a8, a9, v19, v15, (int)result, v16);
    v14 = *(_DWORD *)(v14 + 4);
    ++v15;
  }
  while ( v14 );
  return result;
}
