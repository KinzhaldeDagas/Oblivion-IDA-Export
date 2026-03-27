void __thiscall sub_59C3F0(float *this, Tile *a2)
{
  _DWORD *v3; // ebp
  Tile *v4; // edi
  char **v5; // eax
  char *v6; // ecx
  _DWORD **v7; // edx
  char v8; // al
  const char *v9; // edi
  unsigned __int8 *v10; // eax
  char *m_data; // edi
  BSStringT v12; // [esp+18h] [ebp-28h] BYREF
  _DWORD *v13[8]; // [esp+20h] [ebp-20h] BYREF

  if ( a2 )
  {
    v3 = *(_DWORD **)(*((_DWORD *)this + 0xD) + 0x34);
    while ( v3 )
    {
      v4 = (Tile *)v3[2];
      v3 = (_DWORD *)*v3;
      if ( v4 )
      {
        if ( v4 != a2 )
        {
          Tile_SetFloat(v4, (_DWORD *)0xFC9, 1.0);
          Tile_SetFloat(v4, (_DWORD *)0xFCC, flt_A2FFE8);
          Tile_SetFloat(v4, (_DWORD *)0xFCD, flt_A2FFE8);
          Tile_SetFloat(v4, (_DWORD *)0xFCE, flt_A2FFE8);
        }
      }
    }
    Tile_SetFloat(*((Tile **)this + 0x15), (_DWORD *)0xFC9, 1.0);
    Tile_SetFloat(*((Tile **)this + 0x16), (_DWORD *)0xFC9, 1.0);
    *(this + 0x37) = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0xB), 0xFB1);
    *(this + 0x38) = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0xB), 0xFB2);
    Tile_SetFloat(*((Tile **)this + 0xB), (_DWORD *)0xFB1, 0.0);
    Tile_SetFloat(*((Tile **)this + 0xB), (_DWORD *)0xFB2, 0.0);
    Tile_SetFloat(*((Tile **)this + 1), (_DWORD *)0xFB2, 1.0);
    v12.m_data = 0;
    *(_DWORD *)&v12.m_dataLen = 0;
    v5 = *(char ***)(4 * *((_DWORD *)this + 0x17) + 0xB39548);
    v13[7] = 0;
    if ( v5 )
      v6 = *v5;
    else
      v6 = 0;
    v7 = v13;
    do
    {
      v8 = *v6;
      *(_BYTE *)v7 = *v6++;
      v7 = (_DWORD **)((char *)v7 + 1);
    }
    while ( v8 );
    v9 = (const char *)dword_B38EE8;
    v10 = _mbslwr((unsigned __int8 *)v13);
    BSStringT_Static_Format(&v12, "%s %s %s", *(const char **)dword_B38EE0, (const char *)v10, v9);
    m_data = v12.m_data;
    Tile_SetString(*((_DWORD **)this + 0x14), (_DWORD *)0xFDE, v12.m_data);
    *((_DWORD *)this + 0x36) = a2;
    FormHeapFree((unsigned int)m_data);
  }
}
