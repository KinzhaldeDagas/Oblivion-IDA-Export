int __thiscall sub_574A80(_DWORD *this, BSStringT *a2, _DWORD *a3, int *a4, int a5, char a6)
{
  const char *m_data; // edi
  int v8; // eax
  unsigned int v9; // eax
  char v10; // al
  int result; // eax

  m_data = a2->m_data; /*0x574a8b*/
  if ( !a2->m_data ) /*0x574a8b*/
    return 0; /*0x574a8b*/
  v8 = *(this + 0xE); /*0x574a9d*/
  if ( !v8 ) /*0x574aa2*/
    return 0; /*0x574de3*/
  Double_To_SInt32(*(float *)(v8 + 0x850)); /*0x574aba*/
  LOWORD(v9) = a2->m_dataLen; /*0x574ac3*/
  if ( (_WORD)v9 == 0xFFFF ) /*0x574acf*/
    v9 = strlen(m_data); /*0x574ad3*/
  else
    v9 = (unsigned __int16)v9; /*0x574ae3*/
  if ( !*a3 ) /*0x574af4*/
    *a3 = 0xF423F; /*0x574afc*/
  if ( !v9 || (v10 = *a2->m_data) == 0 ) /*0x574b24*/
    JUMPOUT(0x574DA2); /*0x574da2*/
  if ( v10 == 9 ) /*0x574b30*/
    JUMPOUT(0x574D2A); /*0x574d2a*/
  if ( v10 == 0xA ) /*0x574b39*/
    JUMPOUT(0x574CFB); /*0x574cfb*/
  switch ( v10 ) /*0x574b56*/
  {
    case 0x91: /*0x574b56*/
    case 0x92: /*0x574b56*/
      result = def_574B56(0x27u, 0, (int)this, 0, a2, 0, a3, a4, a5, a6); /*0x574b5f*/
      break; /*0x574b5f*/
    case 0x93: /*0x574b56*/
    case 0x94: /*0x574b56*/
      result = def_574B56(0x22u, 0, (int)this, 0, a2, 0, a3, a4, a5, a6); /*0x574b62*/
      break; /*0x574b62*/
    default:
      JUMPOUT(0x574B63); /*0x574b63*/
  }
  return result; /*0x574de0*/
}
