char __usercall sub_77CAB0@<al>(int a1@<ecx>, void *a2@<esi>, char *a3, int a4, size_t a5)
{
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  TESForm *v8; // esi
  int v9; // [esp+0h] [ebp-4h] BYREF

  v9 = a1;
  if ( !dword_B42898 )
    return 0;
  if ( NiTMap_GetAt((_DWORD *)dword_B42898 + 9, (int)a3, &v9) && v9 )
  {
    if ( *(_DWORD *)(v9 + 0x10) == a4 )
    {
      InterlockedIncrement((volatile LONG *)(v9 + 4));
      return 1;
    }
    return 0;
  }
  v6 = (_DWORD *)FormHeapAlloc(0x1Cu);
  if ( !v6 )
    return 0;
  v7 = sub_77C1B0(v6, a3, a4, a5, a2);
  v8 = (TESForm *)v7;
  if ( !v7 )
    return 0;
  InterlockedIncrement(v7 + 1);
  sub_412D30((_DWORD *)dword_B42898 + 9, v8->member.flags, v8);
  return 1;
}
