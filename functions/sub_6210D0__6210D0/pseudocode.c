void __userpurge sub_6210D0(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        PlayerCharacter *a6,
        char a7)
{
  TESObjectREFR ***v8; // edi
  TESObjectREFR **i; // eax

  if ( !a7 )
  {
    v8 = *(TESObjectREFR ****)(a1 + 0x40);
    if ( v8 )
    {
      for ( i = *v8; *v8; i = *v8 )
        sub_6162D0((float *)a1, *i);
    }
    sub_616190(a1, a2, a3, a5, a6, 0, 0.0, 0.0, 0.0);
  }
  if ( *(_DWORD *)(a1 + 0x6C) == 7
    && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x174))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)) != a1 )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x178))(
      *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
      0);
  }
  sub_612DE0(a1, a7 != 0 ? 0xC : 7);
  sub_619920(a1, 0);
  sub_620E80(a1, a3, a4, a5);
}
