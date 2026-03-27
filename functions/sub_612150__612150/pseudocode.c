int __usercall sub_612150@<eax>(
        int a1@<ecx>,
        char a2@<bpl>,
        int a3@<edi>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>)
{
  int v7; // ecx

  *(_DWORD *)a1 = &Character::`vftable'{for `Character'};
  *(_DWORD *)(a1 + 0x18) = &Character::`vftable'{for `TESChildCell'};
  *(_DWORD *)(a1 + 0x5C) = &Character::`vftable'{for `MagicCaster'};
  *(_DWORD *)(a1 + 0x68) = &Character::`vftable'{for `MagicTarget'};
  if ( (*(_DWORD *)(a1 + 8) & 0x4000) == 0 )
  {
    v7 = *(_DWORD *)(a1 + 0xD4);
    if ( v7 )
    {
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 0x38C))(v7, 0);
      sub_611EB0((TESObjectREFR *)a1, 0.0);
    }
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x154))(a1) )
    {
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x380))(a1) )
        sub_5F0410((TESObjectREFR *)a1, a2);
    }
    TESObjectREFR_Set3D((TESObjectREFR *)a1, a4, a5, a6, 0);
    sub_6116D0(a1, a2, a3, a1);
  }
  return sub_5F13D0((Actor *)a1, a2, a4, a5, a6);
}
