int __usercall sub_4BDDF0@<eax>(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // eax
  TESObjectCELL *v6; // edi
  _DWORD *v7; // eax
  int v8; // esi
  int v9; // eax

  if ( a1[3] != 6 )
  {
    v5 = a1[7];
    v6 = *(TESObjectCELL **)(v5 + 0xC);
    if ( v6 )
    {
      if ( *(_BYTE *)(v5 + 0x10) )
      {
        if ( TESObjectCELL_GetNiNode_(*(TESObjectCELL **)(v5 + 0xC)) )
          sub_442740(TES, a2, a3, a4, v6);
      }
    }
  }
  *(_BYTE *)(a1[7] + 0x10) = 0;
  v7 = (_DWORD *)a1[7];
  v8 = a1[6];
  v9 = sub_4EF1D0(*v7, v7[1]);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 0x10))(v8, v9);
}
