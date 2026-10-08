int __usercall sub_612150@<eax>(int a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  int v7; // ecx

  *(_DWORD *)a1 = &Character::`vftable'{for `Character'}; /*0x612178*/
  *(_DWORD *)(a1 + 0x18) = &Character::`vftable'{for `TESChildCell'}; /*0x61217e*/
  *(_DWORD *)(a1 + 0x5C) = &Character::`vftable'{for `MagicCaster'}; /*0x612185*/
  *(_DWORD *)(a1 + 0x68) = &Character::`vftable'{for `MagicTarget'}; /*0x61218c*/
  if ( (*(_DWORD *)(a1 + 8) & 0x4000) == 0 ) /*0x6121a3*/
  {
    v7 = *(_DWORD *)(a1 + 0xD4); /*0x6121a5*/
    if ( v7 ) /*0x6121ad*/
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 0x38C))(v7, 0); /*0x6121b9*/
      sub_611EB0((TESObjectREFR *)a1, 0.0); /*0x6121bf*/
    }
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x154))(a1) ) /*0x6121ce*/
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x380))(a1) ) /*0x6121de*/
        sub_5F0410((TESObjectREFR *)a1, a2); /*0x6121e6*/
    }
    TESObjectREFR_Set3D((TESObjectREFR *)a1, a3, a4, a5, 0); /*0x6121ef*/
    Character::CleanupCurrentPackage((Character *)a1); /*0x6121f6*/
  }
  return sub_5F13D0((Actor *)a1, a2, a3, a4, a5); /*0x61220a*/
}
