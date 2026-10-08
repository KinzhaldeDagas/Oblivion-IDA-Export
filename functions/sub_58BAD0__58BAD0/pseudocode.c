// Verified: detects Value already in global evaluation stack, logs Loop Detected and nullifies reference actions; otherwise pushes Value. Stack globals 0xB3AF10 and depth 0xB3B0AC. This guard concerns property evaluation, not plugin global menu scratch state.
bool __cdecl Tile::Value::CheckEvaluationCycle(OblivionTileValueView *value)
{
  int v1; // esi
  OblivionTileValueView *v2; // eax
  unsigned int v3; // eax
  int v5; // esi
  char *m_data; // esi
  OblivionTileActionNode *i; // eax
  BSStringT Format; // [esp+10h] [ebp-14h] BYREF
  int v9; // [esp+20h] [ebp-4h]

  Format.m_data = 0; /*0x58baf8*/
  Format.m_dataLen = 0; /*0x58bafc*/
  Format.m_bufLen = 0; /*0x58bb01*/
  v9 = 0; /*0x58bb0a*/
  v1 = 0; /*0x58bb0e*/
  while ( 1 ) /*0x58bb10*/
  {
    v2 = *(OblivionTileValueView **)(4 * v1 + 0xB3AF10); /*0x58bb10*/
    if ( !v2 ) /*0x58bb19*/
    {
LABEL_5:
      v3 = g_TileValueEvaluationDepth; /*0x58bb27*/
      *(_DWORD *)(4 * v3 + 0xB3AF10) = value; /*0x58bb2c*/
      g_TileValueEvaluationDepth = v3 + 1; /*0x58bb37*/
      FormHeapFree(0); /*0x58bb3c*/
      return 0; /*0x58bb58*/
    }
    if ( v2 == value ) /*0x58bb1d*/
      break; /*0x58bb1d*/
    if ( ++v1 >= 0x64 ) /*0x58bb25*/
      goto LABEL_5; /*0x58bb25*/
  }
  sub_40FEC0("\n*****\n"); /*0x58bb5e*/
  sub_40FEC0("***** ERROR: Loop Detected\n");
  sub_40FEC0("***** Loop Involves Tiles:"); /*0x58bb72*/
  v5 = 4 * v1 + 0xB3AF10; /*0x58bb7f*/
  do /*0x58bbb7*/
  {
    if ( !*(_DWORD *)v5 ) /*0x58bb86*/
      break; /*0x58bb8a*/
    BSStringT_Static_Format(&Format, "  %s", *(const char **)(**(_DWORD **)v5 + 8)); /*0x58bb9c*/
    sub_40FEC0(Format.m_data); /*0x58bba6*/
    v5 += 4; /*0x58bbab*/
  }
  while ( v5 < (int)&unk_B3B0A0 ); /*0x58bbb7*/
  BSStringT_Static_Format( /*0x58bbc9*/
    &Format,
    "\n***** [ All references targeting %s have been nullified. ]\n",
    *((const char **)value->owner + 2));
  m_data = Format.m_data; /*0x58bbce*/
  sub_40FEC0(Format.m_data); /*0x58bbd3*/
  sub_40FEC0("*****\n\n"); /*0x58bbdd*/
  for ( i = value->actionHead; i; i = i->nextAction ) /*0x58bbea*/
    i->opcode = 0; /*0x58bbf0*/
  FormHeapFree((unsigned int)m_data); /*0x58bbfb*/
  return 1; /*0x58bb46*/
}
