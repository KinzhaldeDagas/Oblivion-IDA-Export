BSStringT *__userpurge sub_5C4480@<eax>(
        _DWORD *this@<ecx>,
        double st7_0@<st0>,
        TileWindow *arg0,
        const char *ArgList,
        int ArgList_4,
        char *a6,
        int a7,
        char a8,
        char a9)
{
  int v12; // eax
  BSStringT *TileFromTemplate; // esi
  BSStringT v15; // [esp-4h] [ebp-34h] BYREF
  int a3; // [esp+18h] [ebp-18h]
  BSStringT a2; // [esp+1Ch] [ebp-14h] BYREF
  int v18; // [esp+2Ch] [ebp-4h]
  float v19; // [esp+34h] [ebp+4h]

  v12 = unk_B3B5D4; /*0x5c44a9*/
  *(_DWORD *)&v15.m_dataLen = 0; /*0x5c44b4*/
  ++v12; /*0x5c44b5*/
  v15.m_data = "race_template_button"; /*0x5c44b8*/
  v18 = 1; /*0x5c44be*/
  unk_B3B5D4 = v12; /*0x5c44c6*/
  a3 = v12; /*0x5c44cb*/
  TileFromTemplate = Menu::RenderTemplate(this, st7_0, arg0, v15.m_data, *(int *)&v15.m_dataLen); /*0x5c44d4*/
  a2.m_data = 0; /*0x5c44d6*/
  a2.m_dataLen = 0; /*0x5c44da*/
  a2.m_bufLen = 0; /*0x5c44df*/
  LOBYTE(v18) = 2; /*0x5c44f3*/
  BSStringT_Static_Format(&a2, "%s", ArgList); /*0x5c44f8*/
  v15.m_data = 0; /*0x5c450c*/
  *(_DWORD *)&v15.m_dataLen = 0; /*0x5c450e*/
  BSStringT_Set(&v15, a2.m_data, 0); /*0x5c4516*/
  sub_58A020(TileFromTemplate, v15.m_data, *(int *)&v15.m_dataLen); /*0x5c451d*/
  *(float *)&v15.m_dataLen = (float)a3; /*0x5c4529*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFA8, *(float *)&v15.m_dataLen); /*0x5c4531*/
  v19 = Tile_GetFloat(arg0, 0xFD0) - dbl_A2F928; /*0x5c454b*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAA, v19); /*0x5c455b*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAF, 0.0); /*0x5c456d*/
  if ( a8 ) /*0x5c4578*/
    *(_DWORD *)&v15.m_dataLen = ArgList; /*0x5c457e*/
  else
    *(_DWORD *)&v15.m_dataLen = "   "; /*0x5c4581*/
  Tile_SetString(TileFromTemplate, (_DWORD *)0xFB0, *(char **)&v15.m_dataLen); /*0x5c458b*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, flt_A6D2D8); /*0x5c45a1*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, 0.0); /*0x5c45b3*/
  Tile_SetString(TileFromTemplate, (_DWORD *)0xFB4, a6); /*0x5c45c4*/
  if ( a9 ) /*0x5c45cd*/
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFF0, fConstant_2); /*0x5c45e0*/
  *(_DWORD *)&v15.m_dataLen = a2.m_data; /*0x5c45ed*/
  *(this + a3 + 0x25) = TileFromTemplate; /*0x5c45ee*/
  FormHeapFree(*(unsigned int *)&v15.m_dataLen); /*0x5c45f5*/
  FormHeapFree((unsigned int)ArgList); /*0x5c45ff*/
  FormHeapFree((unsigned int)a6); /*0x5c4605*/
  return TileFromTemplate; /*0x5c460f*/
}
