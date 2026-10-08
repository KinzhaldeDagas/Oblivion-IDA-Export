// [Controller decode 2026-07-09] Starts row rebind capture for selected logical control.
void __thiscall ControlsMenu::StartControlRebind(float *this, Tile *a2)
{
  _DWORD *v3; // ebp
  Tile *v4; // edi
  char **v5; // eax
  char *v6; // ecx
  _DWORD **v7; // edx
  char v8; // al
  const char *value; // edi
  unsigned __int8 *v10; // eax
  char *m_data; // edi
  BSStringT v12; // [esp+18h] [ebp-28h] BYREF
  _DWORD *v13[8]; // [esp+20h] [ebp-20h] BYREF

  if ( a2 ) /*0x59c42a*/
  {
    v3 = *(_DWORD **)(*((_DWORD *)this + 0xD) + 0x34); /*0x59c433*/
    while ( v3 ) /*0x59c438*/
    {
      v4 = (Tile *)v3[2]; /*0x59c43a*/
      v3 = (_DWORD *)*v3; /*0x59c442*/
      if ( v4 ) /*0x59c445*/
      {
        if ( v4 != a2 ) /*0x59c44b*/
        {
          Tile_SetFloat(v4, 0xFC9u, 1.0); /*0x59c45a*/
          Tile_SetFloat(v4, 0xFCCu, flt_A2FFE8); /*0x59c470*/
          Tile_SetFloat(v4, 0xFCDu, flt_A2FFE8); /*0x59c486*/
          Tile_SetFloat(v4, 0xFCEu, flt_A2FFE8); /*0x59c49c*/
        }
      }
    }
    Tile_SetFloat(*((Tile **)this + 0x15), 0xFC9u, 1.0); /*0x59c4b3*/
    Tile_SetFloat(*((Tile **)this + 0x16), 0xFC9u, 1.0); /*0x59c4c6*/
    *(this + 0x37) = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0xB), 0xFB1); /*0x59c4d8*/
    *(this + 0x38) = Tile_GetFloat((_DWORD *)*((_DWORD *)this + 0xB), 0xFB2); /*0x59c4eb*/
    Tile_SetFloat(*((Tile **)this + 0xB), 0xFB1u, 0.0); /*0x59c4ff*/
    Tile_SetFloat(*((Tile **)this + 0xB), 0xFB2u, 0.0); /*0x59c512*/
    Tile_SetFloat(*((Tile **)this + 1), 0xFB2u, 1.0); /*0x59c525*/
    v12.m_data = 0; /*0x59c52a*/
    *(_DWORD *)&v12.m_dataLen = 0; /*0x59c52e*/
    v5 = *(char ***)(4 * *((_DWORD *)this + 0x17) + 0xB39548); /*0x59c53b*/
    v13[7] = 0; /*0x59c544*/
    if ( v5 ) /*0x59c548*/
      v6 = *v5; /*0x59c54a*/
    else
      v6 = 0; /*0x59c54e*/
    v7 = v13; /*0x59c550*/
    do /*0x59c560*/
    {
      v8 = *v6; /*0x59c554*/
      *(_BYTE *)v7 = *v6++; /*0x59c556*/
      v7 = (_DWORD **)((char *)v7 + 1); /*0x59c55b*/
    }
    while ( v8 ); /*0x59c560*/
    value = stru_B38EE8.value; /*0x59c562*/
    v10 = _mbslwr((unsigned __int8 *)v13); /*0x59c56d*/
    BSStringT_Static_Format(&v12, "%s %s %s", stru_B38EE0.value, (const char *)v10, value); /*0x59c584*/
    m_data = v12.m_data; /*0x59c589*/
    Tile_SetString(*((_DWORD **)this + 0x14), (_DWORD *)0xFDE, v12.m_data); /*0x59c599*/
    *((_DWORD *)this + 0x36) = a2; /*0x59c5a3*/
    FormHeapFree((unsigned int)m_data); /*0x59c5a9*/
  }
}
