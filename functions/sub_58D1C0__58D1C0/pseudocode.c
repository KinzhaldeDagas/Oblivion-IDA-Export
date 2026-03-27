void __thiscall sub_58D1C0(float *this, float a2, int a3)
{
  int v4; // edi
  _DWORD *PropertyByCode; // eax
  _DWORD *v6; // ecx
  float v7; // edi
  bool v8; // zf
  _DWORD *v9; // eax
  int v10; // edx
  _DWORD *v11; // eax
  int v12; // edi
  _DWORD *v13; // ecx
  _DWORD *v14; // ecx
  float v15; // [esp+Ch] [ebp-4h] BYREF

  v4 = *((_DWORD *)this + 4);
  if ( v4 )
  {
    if ( !*(_BYTE *)(v4 + 4) )
    {
      v15 = Tile_GetFloat((_DWORD *)v4, 0xFD0) - dbl_A2F928;
      PropertyByCode = Tile_GetPropertyByCode_((_DWORD *)v4, (_DWORD *)0xFD0);
      if ( PropertyByCode )
        Tile_Property_SetFloatValue_((int)PropertyByCode, v15);
      v6 = (_DWORD *)(*((_DWORD *)this + 4) + 0x30);
      v15 = *(float *)&this;
      sub_776690(v6, (int *)&v15);
    }
  }
  v7 = a2;
  v8 = LODWORD(a2) == 0;
  *(this + 4) = a2;
  if ( !v8 )
  {
    a2 = Tile_GetFloat((_DWORD *)LODWORD(v7), 0xFD0) + dbl_A2F928;
    v9 = Tile_GetPropertyByCode_((_DWORD *)LODWORD(v7), (_DWORD *)0xFD0);
    if ( v9 )
      Tile_Property_SetFloatValue_((int)v9, a2);
    if ( a3 )
    {
      v10 = *((_DWORD *)this + 4);
      v11 = *(_DWORD **)(v10 + 0x34);
      if ( v11 )
      {
        while ( 1 )
        {
          v8 = v11[2] == a3;
          v12 = (int)v11;
          v11 = (_DWORD *)*v11;
          if ( v8 )
            break;
          if ( !v11 )
            goto LABEL_13;
        }
        a2 = *(float *)&this;
        sub_776690((_DWORD *)(v10 + 0x30), (int *)&a2);
        v13 = (_DWORD *)(*((_DWORD *)this + 4) + 0x30);
        a2 = *(float *)&this;
        sub_5986D0(v13, v12, &a2);
      }
      else
      {
LABEL_13:
        a2 = *(float *)&this;
        sub_6AA320((_DWORD *)(v10 + 0x30), &a2);
      }
    }
    else
    {
      v14 = (_DWORD *)(*((_DWORD *)this + 4) + 0x30);
      a2 = *(float *)&this;
      sub_6AA320(v14, &a2);
    }
  }
}
