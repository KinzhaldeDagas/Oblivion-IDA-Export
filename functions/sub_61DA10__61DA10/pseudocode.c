void __usercall sub_61DA10(int a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  _DWORD *v6; // eax
  unsigned int v7; // ecx
  int v8; // eax
  TESObjectREFR ***v9; // edi
  PlayerCharacter *v10; // ebx
  TESObjectREFR **i; // eax
  char *Name; // eax

  v6 = *(_DWORD **)(a1 + 0x40);
  v7 = 0;
  if ( v6 )
  {
    do
    {
      if ( *v6 )
        ++v7;
      v6 = (_DWORD *)v6[1];
    }
    while ( v6 );
    if ( v7 > 1 )
    {
      v8 = sub_6135F0(a1);
      v9 = *(TESObjectREFR ****)(a1 + 0x40);
      v10 = (PlayerCharacter *)v8;
      if ( v9 )
      {
        for ( i = *v9; *v9; i = *v9 )
          sub_6162D0((float *)a1, *i);
      }
      a5 = 0.0;
      sub_616190(a1, a2, a3, 0.0, v10, 0, 0.0, 0.0, 0.0);
    }
  }
  if ( *(_DWORD *)(a1 + 0x6C) == 7
    && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x174))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)) != a1 )
  {
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x178))(
      *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
      0);
  }
  if ( *(_DWORD *)(a1 + 0x70) != 5 )
  {
    if ( byte_B3B908 )
    {
      Name = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C));
      Interface_ConsolePrint("%.20s is going to %s!", Name, "attempt to Yield");
    }
    *(float *)(a1 + 0x188) = flt_A30634;
  }
  *(_DWORD *)(a1 + 0x70) = 5;
  sub_619920(a1, 0);
  sub_619640(a1, a3, a4, a5);
}
