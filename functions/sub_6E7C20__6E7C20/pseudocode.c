char __thiscall sub_6E7C20(int this, float a2, int a3, bool *a4)
{
  double v5; // st7
  char v6; // bl
  int v8; // eax
  int v9; // ecx
  int v10; // ebp
  unsigned int v11; // edi
  char v12; // al
  unsigned int v13; // esi
  int v14; // edx
  char v15; // al
  unsigned int v16; // ecx
  _BYTE *v17; // edx
  unsigned int v18; // ecx
  _BYTE *v19; // edx
  unsigned int i; // ecx
  char v21; // al
  char v22; // [esp+29h] [ebp-Bh]
  char v23; // [esp+2Ah] [ebp-Ah]
  unsigned __int8 v24; // [esp+2Ch] [ebp-8h]

  v5 = a2;
  if ( a2 == *(float *)(this + 8) )
  {
    v6 = *(_BYTE *)(this + 0xC);
    if ( v6 == byte_A7C6AC )
    {
      *a4 = 0;
      return 0;
    }
    else
    {
      *a4 = v6 != 0;
      return 1;
    }
  }
  v8 = *(_DWORD *)(this + 0x10);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 + 0x10);
    v10 = *(_DWORD *)(v8 + 0xC);
    v11 = *(_DWORD *)(v8 + 8);
    v24 = *(_BYTE *)(v8 + 0x14);
    if ( v11 )
    {
      *(_DWORD *)(this + 0x18) = *(_DWORD *)(this + 0x14);
      v12 = sub_6BDBA0(a2, v10, v9, v11, (int *)(this + 0x14), v24);
      v13 = *(_DWORD *)(this + 0x14);
      v23 = v12;
      v22 = v12;
      if ( v12 == *(_BYTE *)(this + 0x1C) )
      {
        v14 = *(_DWORD *)(this + 0x18);
        v15 = v12 == 0;
        if ( v14 == v13 || (v16 = v14 + 1, v14 + 1 <= v13) )
        {
          for ( i = v14 + 1; i < v13; ++i )
          {
            if ( i >= v11 )
              break;
            if ( *(_BYTE *)(i * v24 + v10 + 4) == v15 )
              goto LABEL_25;
          }
          goto LABEL_26;
        }
        if ( v16 >= v11 )
        {
LABEL_14:
          if ( v23 == v15 )
            goto LABEL_26;
          v18 = 0;
          if ( !v13 )
            goto LABEL_26;
          v19 = (_BYTE *)(v10 + 4);
          while ( *v19 != v15 )
          {
            ++v18;
            v19 += v24;
            if ( v18 >= v13 )
              goto LABEL_26;
          }
        }
        else
        {
          v17 = (_BYTE *)(v16 * v24 + v10 + 4);
          while ( *v17 != v15 )
          {
            ++v16;
            v17 += v24;
            if ( v16 >= v11 )
              goto LABEL_14;
          }
        }
LABEL_25:
        v22 = v15;
      }
LABEL_26:
      v5 = a2;
      *(_BYTE *)(this + 0xC) = v22 != 0;
      *(_BYTE *)(this + 0x1C) = v23;
    }
  }
  v21 = *(_BYTE *)(this + 0xC);
  if ( v21 == byte_A7C6AC )
  {
    *a4 = 0;
    return 0;
  }
  else
  {
    *a4 = v21 != 0;
    *(float *)(this + 8) = v5;
    return 1;
  }
}
