void __usercall ScriptRunner_RunScript(int a1@<ecx>, int a2@<ebx>, double a3@<st0>, double a4@<st2>, double a5@<st1>)
{
  bool v6; // zf
  int *v7; // esi
  int v8; // ecx
  void *v9; // ecx
  TESObjectREFR **v10; // esi
  TESObjectREFR **v11; // edi
  TESObjectREFR *v12; // edi
  unsigned int v13; // eax
  unsigned int i; // edi
  unsigned int j; // esi
  TESObjectCELL *cell; // ecx

  if ( !byte_B33A58 && sub_4F9FA0() )
  {
    v6 = TESDataHandler == 0xFFFFFF7C;
    v7 = (int *)(TESDataHandler + 0x84);
    byte_B33A58 = 1;
    if ( !v6 )
    {
      do
      {
        v8 = *v7;
        v6 = *v7 == 0;
        v7 = (int *)v7[1];
        if ( !v6 && (*(_BYTE *)(v8 + 0x3C) & 1) != 0 )
          sub_529AA0((_DWORD *)v8, a4, a5);
      }
      while ( v7 );
    }
    v9 = *(void **)(a1 + 0x34);
    if ( v9 )
    {
      sub_4CB8C0(v9, a4, a5, 0, 0);
    }
    else
    {
      v13 = uGridsToLoad;
      for ( i = 0; i < v13; ++i )
      {
        for ( j = 0; j < v13; ++j )
        {
          cell = GetGridEntry(*(GridCellArray **)(a1 + 8), i, j)->cell;
          if ( cell && cell->members.cellProcessLevel == 6 && sub_4CB8C0(cell, a4, a5, 0, 0) )
            goto LABEL_10;
          v13 = uGridsToLoad;
        }
      }
    }
LABEL_10:
    v10 = *(TESObjectREFR ***)(a1 + 0x88);
    if ( v10 )
    {
      *(_DWORD *)(a1 + 0x88) = 0;
      v11 = v10;
      do
      {
        if ( *v11 )
          RunScripts(*v11, a4, a5, a3);
        v11 = (TESObjectREFR **)v11[1];
      }
      while ( v11 );
      if ( v10[1] )
      {
        do
        {
          v12 = *(TESObjectREFR **)&v10[1]->member.super.type;
          FormHeapFree((unsigned int)v10[1]);
          v10[1] = v12;
        }
        while ( v12 );
      }
      *v10 = 0;
      FormHeapFree((unsigned int)v10);
    }
    sub_4FA580(a2, a1, a3, a4, a5);
    byte_B33A58 = 0;
  }
}
