int *__thiscall sub_578960(_DWORD *this, BSStringT *a2, _DWORD *a3)
{
  int *v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // ebp
  float v8; // ecx
  float v9; // edx
  unsigned int v10; // eax
  float v11; // ecx
  float v12; // edx
  char v13; // al
  float v15[17]; // [esp+24h] [ebp-44h] BYREF
  int *v16; // [esp+70h] [ebp+8h]

  if ( !a2->m_data ) /*0x57898b*/
    goto LABEL_21; /*0x57898b*/
  if ( (int)a3[7] < 2 ) /*0x5789a9*/
    a3[7] = 0x7FFFFFFF; /*0x5789ab*/
  if ( (int)a3[8] < 2 ) /*0x5789b2*/
    a3[8] = 0x7FFFFFFF; /*0x5789b4*/
  if ( sub_577C10(this, a2, a3) ) /*0x5789b9*/
LABEL_21:
    JUMPOUT(0x578BE8); /*0x578be8*/
  v4 = (int *)FormHeapAlloc(0x1Cu); /*0x5789c8*/
  if ( v4 ) /*0x5789d2*/
  {
    v5 = a3[9]; /*0x5789d4*/
    v6 = a3[8]; /*0x5789d7*/
    v7 = a3[7]; /*0x5789da*/
    v4[3] = 0; /*0x5789dd*/
    v4[1] = 0; /*0x5789e0*/
    v4[2] = 0; /*0x5789e3*/
    *v4 = (int)&NiTList<FontManager::TextPage *>::`vftable'; /*0x5789e6*/
    v4[4] = v7; /*0x5789ec*/
    v4[5] = v6; /*0x5789ef*/
    v4[6] = v5; /*0x5789f2*/
    v16 = v4; /*0x5789f5*/
  }
  else
  {
    v16 = 0; /*0x5789fb*/
  }
  sub_576F30(v15, 0, 0x20, SLODWORD(flt_A68A90), SLODWORD(flt_A68A8C), SLODWORD(flt_A68A88), COERCE_INT(1.0), 1); /*0x578a4c*/
  v15[0x10] = 0.0; /*0x578a55*/
  sub_577690(v15); /*0x578a59*/
  v8 = *((float *)a3 + 2); /*0x578a60*/
  v9 = *((float *)a3 + 3); /*0x578a63*/
  v15[0] = *(float *)a3; /*0x578a66*/
  v15[4] = *((float *)a3 + 4); /*0x578a6d*/
  LOWORD(v10) = a2->m_dataLen; /*0x578a71*/
  v15[2] = v8; /*0x578a79*/
  v11 = *((float *)a3 + 5); /*0x578a7d*/
  v15[3] = v9; /*0x578a80*/
  v12 = *((float *)a3 + 1); /*0x578a84*/
  v15[5] = v11; /*0x578a87*/
  v15[6] = v12; /*0x578a8b*/
  if ( (_WORD)v10 == 0xFFFF ) /*0x578a8f*/
    v10 = strlen(a2->m_data); /*0x578a9f*/
  else
    v10 = (unsigned __int16)v10; /*0x578aa3*/
  if ( !v10 ) /*0x578aa8*/
    BSStringT_Set(a2, word_A36430, 0); /*0x578ab2*/
  BSStringT_Set((BSStringT *)a3 + 7, a2->m_data, 0); /*0x578abe*/
  if ( !BSStringT_GetLen(a2) ) /*0x578ace*/
    JUMPOUT(0x578B50); /*0x578b50*/
  switch ( *a2->m_data ) /*0x578af3*/
  {
    case 0x91: /*0x578af3*/
    case 0x92: /*0x578af3*/
      v13 = 0x27; /*0x578afa*/
      break; /*0x578afc*/
    case 0x93: /*0x578af3*/
    case 0x94: /*0x578af3*/
      v13 = 0x22; /*0x578afe*/
      break; /*0x578afe*/
    default:
      JUMPOUT(0x578B04); /*0x578b04*/
  }
  return def_578AF3(v13, 0, 0, a2, (int)a3, v13, v16);
}
