BSStringT *__userpurge sub_5C4800@<eax>(
        _DWORD *this@<ecx>,
        double st7_0@<st0>,
        TileWindow *a3,
        const char *ArgList,
        int a5)
{
  int v8; // eax
  int v9; // ebp
  BSStringT *TileFromTemplate; // esi
  char *m_data; // ebx
  BSStringT v13[3]; // [esp-4h] [ebp-38h] BYREF
  int v14; // [esp+18h] [ebp-1Ch]
  BSStringT *v15; // [esp+1Ch] [ebp-18h]
  BSStringT a2; // [esp+20h] [ebp-14h] BYREF
  int v17; // [esp+30h] [ebp-4h]
  float v18; // [esp+38h] [ebp+4h]

  v8 = unk_B3B5D4 + 1; /*0x5c482e*/
  *(_DWORD *)&v13[0].m_dataLen = 0; /*0x5c4833*/
  v9 = v8; /*0x5c4834*/
  unk_B3B5D4 = v8; /*0x5c4836*/
  v17 = 1; /*0x5c4845*/
  v14 = v8; /*0x5c4849*/
  TileFromTemplate = Menu::RenderTemplate(this, st7_0, a3, "race_template_text", *(int *)&v13[0].m_dataLen); /*0x5c4852*/
  a2.m_data = 0; /*0x5c4854*/
  a2.m_dataLen = 0; /*0x5c4858*/
  a2.m_bufLen = 0; /*0x5c485d*/
  BSStringT_Static_Format(&a2, "%s", ArgList); /*0x5c4876*/
  v15 = v13; /*0x5c4880*/
  v13[0].m_data = 0; /*0x5c4885*/
  *(_DWORD *)&v13[0].m_dataLen = 0; /*0x5c4887*/
  m_data = a2.m_data; /*0x5c488f*/
  BSStringT_Set(v13, a2.m_data, 0); /*0x5c4894*/
  sub_58A020(TileFromTemplate, v13[0].m_data, *(int *)&v13[0].m_dataLen); /*0x5c489b*/
  *(float *)&v13[0].m_dataLen = (float)v14; /*0x5c48a7*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFA8, *(float *)&v13[0].m_dataLen); /*0x5c48af*/
  v18 = Tile_GetFloat(a3, 0xFD0) - dbl_A2F928; /*0x5c48cb*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAA, v18); /*0x5c48db*/
  *(_DWORD *)&v13[0].m_dataLen = m_data; /*0x5c48e0*/
  *(this + v9 + 0x25) = TileFromTemplate; /*0x5c48e1*/
  FormHeapFree(*(unsigned int *)&v13[0].m_dataLen); /*0x5c48e8*/
  FormHeapFree((unsigned int)ArgList); /*0x5c48f2*/
  return TileFromTemplate; /*0x5c48fc*/
}
