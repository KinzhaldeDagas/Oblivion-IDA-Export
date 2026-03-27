void __thiscall TESObjectCELL_CreateGroupRecord(int this, int *a2, int a3)
{
  int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  unsigned int v13; // eax

  if ( a2 )
  {
    *a2 = 0;
    if ( (*(_BYTE *)(this + 0x24) & 1) != 0 )
    {
      if ( !a3 )
      {
        v10 = dword_B05E20;
        a2[3] = 0;
        *a2 = v10;
        v11 = dword_B06048;
        a2[4] = 0;
        a2[1] = 0;
        a2[2] = v11;
        return;
      }
      v12 = *(_DWORD *)(a3 + 0xC);
      if ( !v12 )
      {
        if ( *(_DWORD *)(a3 + 8) != dword_B06048 )
          return;
        v7 = dword_B05E20;
        a2[3] = 2;
        goto LABEL_25;
      }
      if ( v12 == 2 && *(_DWORD *)(a3 + 8) == sub_4CA5F0(this) )
      {
        *a2 = dword_B05E20;
        a2[3] = 3;
        v13 = sub_4CA640(this);
        a2[4] = 0;
        a2[1] = 0;
        a2[2] = v13;
      }
    }
    else
    {
      if ( !a3 )
        return;
      v4 = *(_DWORD *)(a3 + 0xC);
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          if ( v5 == 3 && *(_DWORD *)(a3 + 8) == sub_4CA5F0(this) && (*(_DWORD *)(this + 8) & 0x400) == 0 )
          {
            *a2 = dword_B05E20;
            a2[3] = 5;
            v6 = sub_4CA640(this);
            a2[4] = 0;
            a2[1] = 0;
            a2[2] = v6;
          }
          return;
        }
        if ( *(_DWORD *)(a3 + 8) == *(_DWORD *)(*(_DWORD *)(this + 0x50) + 0xC) && (*(_DWORD *)(this + 8) & 0x400) == 0 )
        {
          v7 = dword_B05E20;
          a2[3] = 4;
LABEL_25:
          *a2 = v7;
          a2[2] = sub_4CA5F0(this);
          a2[4] = 0;
          a2[1] = 0;
        }
      }
      else if ( *(_DWORD *)(a3 + 8) == dword_B06084 )
      {
        *a2 = dword_B05E20;
        a2[3] = 1;
        v8 = 0;
        if ( (*(_BYTE *)(this + 0x24) & 1) == 0 )
          v8 = *(_DWORD *)(this + 0x50);
        v9 = *(_DWORD *)(v8 + 0xC);
        a2[4] = 0;
        a2[1] = 0;
        a2[2] = v9;
      }
    }
  }
}
