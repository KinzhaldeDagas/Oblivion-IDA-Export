int __thiscall sub_578960(_DWORD *this, BSStringT *a2, _DWORD *a3)
{
  _DWORD *v4; // eax
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
  _DWORD *v16; // [esp+70h] [ebp+8h]

  if ( !a2->m_data )
    goto LABEL_21;
  if ( (int)a3[7] < 2 )
    a3[7] = 0x7FFFFFFF;
  if ( (int)a3[8] < 2 )
    a3[8] = 0x7FFFFFFF;
  if ( sub_577C10(this, a2, a3) )
LABEL_21:
    JUMPOUT(0x578BE8);
  v4 = (_DWORD *)FormHeapAlloc(0x1Cu);
  if ( v4 )
  {
    v5 = a3[9];
    v6 = a3[8];
    v7 = a3[7];
    v4[3] = 0;
    v4[1] = 0;
    v4[2] = 0;
    *v4 = &NiTList<FontManager::TextPage *>::`vftable';
    v4[4] = v7;
    v4[5] = v6;
    v4[6] = v5;
    v16 = v4;
  }
  else
  {
    v16 = 0;
  }
  sub_576F30(v15, 0, 0x20, SLODWORD(flt_A68A90), SLODWORD(flt_A68A8C), SLODWORD(flt_A68A88), COERCE_INT(1.0), 1);
  v15[0x10] = 0.0;
  sub_577690(v15);
  v8 = *((float *)a3 + 2);
  v9 = *((float *)a3 + 3);
  v15[0] = *(float *)a3;
  v15[4] = *((float *)a3 + 4);
  LOWORD(v10) = a2->m_dataLen;
  v15[2] = v8;
  v11 = *((float *)a3 + 5);
  v15[3] = v9;
  v12 = *((float *)a3 + 1);
  v15[5] = v11;
  v15[6] = v12;
  if ( (_WORD)v10 == 0xFFFF )
    v10 = strlen(a2->m_data);
  else
    v10 = (unsigned __int16)v10;
  if ( !v10 )
    BSStringT_Set(a2, word_A36430, 0);
  BSStringT_Set((BSStringT *)a3 + 7, a2->m_data, 0);
  if ( !BSStringT_GetLen(a2) )
    JUMPOUT(0x578B50);
  switch ( *a2->m_data )
  {
    case 0x91:
    case 0x92:
      v13 = 0x27;
      break;
    case 0x93:
    case 0x94:
      v13 = 0x22;
      break;
    default:
      JUMPOUT(0x578B04);
  }
  LOBYTE(a2) = v13;
  return def_578AF3(a2, v16);
}
