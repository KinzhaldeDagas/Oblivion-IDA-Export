void __cdecl sub_88AB60(int a1, int a2)
{
  NiRTTI *v2; // eax
  char v3; // al
  int v4; // ecx
  int v5; // esi
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // esi
  int v12; // eax
  _DWORD *v13; // ecx
  int v14; // edx
  int v15; // edx
  int v16; // esi
  int v17; // eax

  if ( a1 )
  {
    v2 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1); /*0x88ab70*/
    if ( v2 ) /*0x88ab74*/
    {
      while ( v2 != &MEMORY[0xBA7A20] ) /*0x88ab7b*/
      {
        v2 = v2->parent; /*0x88ab7d*/
        if ( !v2 ) /*0x88ab82*/
          goto LABEL_5; /*0x88ab82*/
      }
      v3 = 1; /*0x88aba0*/
    }
    else
    {
LABEL_5:
      v3 = 0; /*0x88ab84*/
    }
    v4 = v3 != 0 ? a1 : 0;
    if ( v4 )
    {
      if ( *(_DWORD *)(a2 + 0xC) )
      {
        v5 = v3 != 0 ? a1 : 0;
        v6 = *(_DWORD *)(v4 + 0x24); /*0x88f0e3*/
        *(_DWORD *)(v4 + 0x24) = v6 + 1; /*0x88f0f0*/
        if ( !v6 ) /*0x88f0f3*/
        {
          if ( unk_BA7A8C != 3 ) /*0x88f0fd*/
          {
            if ( (*(_BYTE *)(v4 + 0xC) & 0x40) != 0 ) /*0x88f108*/
            {
              if ( unk_BA7A8C != 2 ) /*0x88f10d*/
              {
                sub_89EAE0((_DWORD *)v4); /*0x88f111*/
                *(_WORD *)(v5 + 0xC) &= ~0x40u; /*0x88f116*/
              }
            }
            else if ( (*(_BYTE *)(v4 + 0xC) & 1) != 0 ) /*0x88f122*/
            {
              (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x64))(v4, a1); /*0x88f12b*/
            }
          }
          v7 = *(_DWORD **)(v5 + 0x10); /*0x88f12d*/
          if ( v7 ) /*0x88f132*/
          {
            v8 = v7[2]; /*0x88f134*/
            if ( v8 && (v9 = v8 + 0x14) != 0 ) /*0x88f13e*/
              v10 = *(_DWORD *)(v9 + 0x1C); /*0x88f140*/
            else
              LOBYTE(v10) = 0; /*0x88f145*/
            if ( (v10 & 0x3F) == 8 ) /*0x88f14b*/
            {
              v11 = *(_DWORD *)(v5 + 0x20); /*0x88f14d*/
              if ( v11 ) /*0x88f152*/
                (*(void (__thiscall **)(_DWORD *, int))(*v7 + 0x5C))(v7, v11); /*0x88f15a*/
            }
          }
        }
      }
      else
      {
        v12 = v3 != 0 ? a1 : 0;
        if ( (int)--*(_DWORD *)(v4 + 0x24) <= 0 ) /*0x88f16b*/
        {
          v13 = *(_DWORD **)(v4 + 0x10); /*0x88f16d*/
          *(_DWORD *)(v12 + 0x24) = 0; /*0x88f172*/
          if ( v13 ) /*0x88f179*/
          {
            v14 = v13[2]; /*0x88f17b*/
            if ( v14 && (v15 = v14 + 0x14) != 0 ) /*0x88f186*/
              v16 = *(_DWORD *)(v15 + 0x1C); /*0x88f188*/
            else
              LOBYTE(v16) = 0; /*0x88f18d*/
            if ( (v16 & 0x3F) == 8 ) /*0x88f198*/
            {
              v17 = *(_DWORD *)(v12 + 0x20); /*0x88f19a*/
              if ( v17 ) /*0x88f19f*/
                (*(void (__thiscall **)(_DWORD *, int))(*v13 + 0x5C))(v13, v17); /*0x88f1a7*/
            }
          }
        }
      }
    }
  }
}
