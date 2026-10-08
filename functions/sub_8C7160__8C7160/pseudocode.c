unsigned int __thiscall sub_8C7160(_DWORD *this, unsigned int i)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  _DWORD *v3; // ebx
  char *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  int v7; // eax
  unsigned int v8; // ebp
  char *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ecx
  unsigned int result; // eax
  char *v13; // eax
  unsigned int v14; // edi
  char *v15; // ebp
  int v16; // eax
  int *v17; // ebx
  int v18; // eax
  char *v19; // eax
  unsigned int v20; // edi
  char *v21; // ebp
  int v22; // ebx
  char *v23; // eax
  unsigned int v24; // edi
  char *v25; // ebp
  _DWORD *v26; // eax
  bool v27; // zf
  int v28; // eax
  int *v29; // ebp
  int v30; // eax
  char *v31; // eax
  unsigned int v32; // edi
  char *v33; // ebx
  unsigned int v34; // [esp+10h] [ebp-14h]
  unsigned int v35; // [esp+14h] [ebp-10h] BYREF
  unsigned int v36; // [esp+18h] [ebp-Ch]
  _DWORD *v37; // [esp+1Ch] [ebp-8h]
  int v38; // [esp+20h] [ebp-4h] BYREF

  v2 = (NiTArray_NiTexturingPropertyMap *)i; /*0x8c7166*/
  v3 = this; /*0x8c716b*/
  v37 = this; /*0x8c716e*/
  sub_8CE640(this, (unsigned __int16 *)i); /*0x8c7172*/
  v4 = TESOutput_PrintString((char *)stru_BA8130.name); /*0x8c717d*/
  end = v2->end; /*0x8c7182*/
  capacity = v2->capacity; /*0x8c7186*/
  i = (unsigned int)v4; /*0x8c718f*/
  if ( end >= capacity ) /*0x8c7193*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8c719e*/
  NiTArray_SetAt(v2, end, &i); /*0x8c71ab*/
  if ( v3 && (v7 = v3[2]) != 0 ) /*0x8c71b9*/
  {
    v8 = *(_DWORD *)(v7 + 0x30); /*0x8c71bb*/
    i = v8; /*0x8c71be*/
  }
  else
  {
    i = 0; /*0x8c71c4*/
    v8 = 0; /*0x8c71cc*/
  }
  v36 = v8; /*0x8c71d6*/
  v9 = TESOutput_PrintLabeledUnsignedInt("Subparts", v8); /*0x8c71da*/
  v10 = v2->end; /*0x8c71df*/
  v11 = v2->capacity; /*0x8c71e3*/
  v35 = (unsigned int)v9; /*0x8c71ec*/
  if ( v10 >= v11 ) /*0x8c71f0*/
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x8c71fb*/
  result = NiTArray_SetAt(v2, v10, &v35); /*0x8c7208*/
  v35 = 0; /*0x8c7212*/
  if ( v8 > 5 ) /*0x8c7216*/
  {
    result = v36 - 5; /*0x8c721c*/
    i = 5; /*0x8c7222*/
    v8 = 5; /*0x8c722a*/
    v35 = v36 - 5; /*0x8c722e*/
    if ( v36 - 5 > 3 ) /*0x8c7232*/
      v35 = 3; /*0x8c7234*/
  }
  v34 = 0; /*0x8c723e*/
  if ( v8 )
  {
    while ( 1 )
    {
      v13 = TESOutput_PrintLabeledUnsignedInt("Part", v34); /*0x8c725e*/
      v14 = v2->end; /*0x8c7263*/
      v15 = v13; /*0x8c7270*/
      if ( v14 >= v2->capacity ) /*0x8c7272*/
        NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize); /*0x8c727d*/
      if ( v14 < v2->end ) /*0x8c7288*/
      {
        if ( v15 ) /*0x8c729e*/
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v14) ) /*0x8c72a3*/
            ++v2->numObjs; /*0x8c72a9*/
        }
        else if ( *((_DWORD *)&v2->data->vtbl + v14) ) /*0x8c72b3*/
        {
          --v2->numObjs; /*0x8c72b9*/
        }
      }
      else
      {
        v2->end = v14 + 1; /*0x8c728f*/
        if ( v15 ) /*0x8c7293*/
          ++v2->numObjs; /*0x8c7295*/
      }
      *((_DWORD *)&v2->data->vtbl + v14) = v15; /*0x8c72c4*/
      if ( v3 && (v16 = v3[2]) != 0 ) /*0x8c72ce*/
        v17 = (int *)(*(_DWORD *)(v16 + 0x28) + 8 * v34); /*0x8c72d7*/
      else
        v17 = &unk_BA8138; /*0x8c72dc*/
      v18 = *v17 ? (*(unsigned __int16 *)(*v17 + 0x2C) >> 6) & 0x3F : 0;
      v19 = TESOutput_PrintLabeledString("MATERIAL", *(const char **)(4 * v18 + 0xB2E908)); /*0x8c7302*/
      v20 = v2->end; /*0x8c7307*/
      v21 = v19; /*0x8c7314*/
      if ( v20 >= v2->capacity ) /*0x8c7316*/
        NiTArray_SetSize((unsigned __int16 *)v2, v20 + v2->growSize); /*0x8c7321*/
      if ( v20 < v2->end ) /*0x8c732c*/
      {
        if ( v21 ) /*0x8c7342*/
        {
          if ( !*((_DWORD *)&v2->data->vtbl + v20) ) /*0x8c7347*/
            ++v2->numObjs; /*0x8c734d*/
        }
        else if ( *((_DWORD *)&v2->data->vtbl + v20) ) /*0x8c7357*/
        {
          --v2->numObjs; /*0x8c735d*/
        }
      }
      else
      {
        v2->end = v20 + 1; /*0x8c7333*/
        if ( v21 ) /*0x8c7337*/
          ++v2->numObjs; /*0x8c7339*/
      }
      *((_DWORD *)&v2->data->vtbl + v20) = v21; /*0x8c7366*/
      v38 = v17[1]; /*0x8c7371*/
      sub_8A9100((unsigned int *)&v38, (unsigned __int16 *)v2); /*0x8c7375*/
      result = ++v34; /*0x8c737e*/
      if ( v34 >= i ) /*0x8c7389*/
        break; /*0x8c7389*/
      v3 = v37; /*0x8c7250*/
    }
  }
  for ( i = 0; i < v35; ++i ) /*0x8c7399*/
  {
    v22 = v36 - i - 1; /*0x8c73a8*/
    v23 = TESOutput_PrintLabeledUnsignedInt("Part", v22); /*0x8c73b1*/
    v24 = v2->end; /*0x8c73b6*/
    v25 = v23; /*0x8c73c3*/
    if ( v24 >= v2->capacity ) /*0x8c73c5*/
      NiTArray_SetSize((unsigned __int16 *)v2, v24 + v2->growSize); /*0x8c73d0*/
    if ( v24 < v2->end ) /*0x8c73db*/
    {
      if ( v25 ) /*0x8c73f1*/
      {
        if ( !*((_DWORD *)&v2->data->vtbl + v24) ) /*0x8c73f6*/
          ++v2->numObjs; /*0x8c73fc*/
      }
      else if ( *((_DWORD *)&v2->data->vtbl + v24) ) /*0x8c7406*/
      {
        --v2->numObjs; /*0x8c740c*/
      }
    }
    else
    {
      v2->end = v24 + 1; /*0x8c73e2*/
      if ( v25 ) /*0x8c73e6*/
        ++v2->numObjs; /*0x8c73e8*/
    }
    v26 = v37; /*0x8c7412*/
    v27 = v37 == 0; /*0x8c7416*/
    *((_DWORD *)&v2->data->vtbl + v24) = v25; /*0x8c741b*/
    if ( v27 || (v28 = v26[2]) == 0 ) /*0x8c7425*/
      v29 = &unk_BA8138; /*0x8c742f*/
    else
      v29 = (int *)(*(_DWORD *)(v28 + 0x28) + 8 * v22); /*0x8c742a*/
    if ( *v29 ) /*0x8c7434*/
      v30 = (*(unsigned __int16 *)(*v29 + 0x2C) >> 6) & 0x3F; /*0x8c7442*/
    else
      v30 = 0; /*0x8c7447*/
    v31 = TESOutput_PrintLabeledString("MATERIAL", *(const char **)(4 * v30 + 0xB2E908)); /*0x8c7456*/
    v32 = v2->end; /*0x8c745b*/
    v33 = v31; /*0x8c745f*/
    if ( v32 >= v2->capacity ) /*0x8c746a*/
      NiTArray_SetSize((unsigned __int16 *)v2, v32 + v2->growSize); /*0x8c7475*/
    if ( v32 < v2->end ) /*0x8c7480*/
    {
      if ( v33 ) /*0x8c7496*/
      {
        if ( !*((_DWORD *)&v2->data->vtbl + v32) ) /*0x8c749b*/
          ++v2->numObjs; /*0x8c74a1*/
      }
      else if ( *((_DWORD *)&v2->data->vtbl + v32) ) /*0x8c74ab*/
      {
        --v2->numObjs; /*0x8c74b1*/
      }
    }
    else
    {
      v2->end = v32 + 1; /*0x8c7487*/
      if ( v33 ) /*0x8c748b*/
        ++v2->numObjs; /*0x8c748d*/
    }
    *((_DWORD *)&v2->data->vtbl + v32) = v33; /*0x8c74ba*/
    v38 = v29[1]; /*0x8c74c0*/
    sub_8A9100((unsigned int *)&v38, (unsigned __int16 *)v2); /*0x8c74c9*/
    result = i + 1; /*0x8c74d2*/
  }
  return result; /*0x8c74e3*/
}
