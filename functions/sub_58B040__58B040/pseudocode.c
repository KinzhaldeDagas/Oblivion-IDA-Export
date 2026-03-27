char *__cdecl sub_58B040(unsigned __int8 *a2, char *arg4)
{
  signed __int8 v2; // al
  int v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // edi
  const unsigned __int8 *v6; // eax
  char *v7; // ebp
  BSStringT *v8; // esi
  BSStringT *v9; // edi
  int v10; // edi
  _DWORD *v11; // esi
  const unsigned __int8 *v12; // ecx
  unsigned int v14; // esi
  unsigned int v15; // ecx
  int v16; // eax
  BSStringT v17[3]; // [esp-8h] [ebp-2Ch] BYREF
  BSStringT *v18; // [esp+14h] [ebp-10h]
  unsigned int v19; // [esp+20h] [ebp-4h]

  v2 = *a2;
  if ( *a2 == 0x26 )
  {
    v3 = 0x1B;
    goto LABEL_3;
  }
  if ( v2 != 0x5F )
  {
    v3 = v2 - 0x40;
    if ( v3 > 0x20 )
      v3 -= 0x20;
    if ( (unsigned int)v3 > 0x1A )
      v3 = 0;
LABEL_3:
    v4 = (_DWORD *)dword_B3B0B4[4 * v3];
    if ( v4 )
    {
      while ( 1 )
      {
        v5 = (_DWORD *)v4[2];
        v6 = (const unsigned __int8 *)v5[2];
        v4 = (_DWORD *)*v4;
        if ( *v6 )
        {
          if ( !_mbsicmp(v6, a2) )
            break;
        }
        if ( !v4 )
          goto LABEL_7;
      }
      ++v5[1];
      return (char *)*v5;
    }
LABEL_7:
    v7 = arg4;
    if ( arg4 == (char *)0xFFFFFFFF )
      v7 = (char *)((unsigned __int16)word_B13BCE + 0x2710);
    v8 = (BSStringT *)FormHeapAlloc(0x10u);
    v19 = 0;
    if ( v8 )
    {
      v18 = v17;
      v17[0].m_data = 0;
      v17[0].m_dataLen = 0;
      v17[0].m_bufLen = 0;
      BSStringT_Set(v17, (const char *)a2, 0);
      v9 = sub_589F20(v8, v7, v17[0].m_data, *(int *)&v17[0].m_dataLen);
    }
    else
    {
      v9 = 0;
    }
    *(_DWORD *)&v9->m_dataLen = 0;
    v14 = (unsigned __int16)word_B13BCE;
    v15 = (unsigned __int16)word_B13BCC;
    v19 = 0xFFFFFFFF;
    if ( v14 >= v15 )
      NiTArray_SetSize((unsigned __int16 *)&off_B13BC4, v14 + (unsigned __int16)word_B13BD2);
    v16 = dword_B13BC8;
    if ( v14 < (unsigned __int16)word_B13BCE )
    {
      if ( *(_DWORD *)(v16 + 4 * v14) )
      {
LABEL_30:
        *(_DWORD *)(v16 + 4 * v14) = v9;
        return v7;
      }
    }
    else
    {
      word_B13BCE = v14 + 1;
    }
    ++word_B13BD0;
    goto LABEL_30;
  }
  v10 = 0;
  if ( !word_B13BCE )
    goto LABEL_7;
  while ( 1 )
  {
    v11 = *(_DWORD **)(dword_B13BC8 + 4 * v10);
    v12 = (const unsigned __int8 *)v11[2];
    if ( *v12 )
    {
      if ( !_mbsicmp(v12, a2) )
        break;
    }
    if ( ++v10 >= (unsigned int)(unsigned __int16)word_B13BCE )
      goto LABEL_7;
  }
  ++v11[1];
  return (char *)*v11;
}
