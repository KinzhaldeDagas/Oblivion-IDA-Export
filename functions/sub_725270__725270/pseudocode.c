char *__thiscall sub_725270(float *this, NiTArray_NiTexturingPropertyMap *a2)
{
  va_list v2; // edi
  char *v3; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  char *v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  char *v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  char *result; // eax
  char *v13; // ebx
  unsigned int v14; // edi
  NiTexturingProperty_Map *data; // ecx
  float *v16; // edx
  size_t v17; // [esp-Ch] [ebp-5Ch]
  char *v18; // [esp+Ch] [ebp-44h]
  char *ArgList; // [esp+44h] [ebp-Ch]
  char *v20; // [esp+48h] [ebp-8h] BYREF
  float *v21; // [esp+4Ch] [ebp-4h]

  v2 = (va_list)this; /*0x725281*/
  v18 = (char *)LODWORD(MEMORY[0xB3F9B0][0xF2]); /*0x725283*/
  v21 = this; /*0x725284*/
  v3 = TESOutput_PrintString(v18); /*0x725288*/
  end = a2->end; /*0x725290*/
  capacity = a2->capacity; /*0x725294*/
  v20 = v3; /*0x72529d*/
  if ( end >= capacity ) /*0x7252a1*/
    NiTArray_SetSize((unsigned __int16 *)a2, end + a2->growSize); /*0x7252ac*/
  NiTArray_SetAt(a2, end, &v20); /*0x7252b9*/
  v6 = sub_707280((float *)v2 + 2, "m_kCenter"); /*0x7252c6*/
  v7 = a2->end; /*0x7252cb*/
  v8 = a2->capacity; /*0x7252cf*/
  v20 = v6; /*0x7252d5*/
  if ( v7 >= v8 ) /*0x7252d9*/
    NiTArray_SetSize((unsigned __int16 *)a2, v7 + a2->growSize); /*0x7252e4*/
  NiTArray_SetAt(a2, v7, &v20); /*0x7252f1*/
  v9 = sub_707280((float *)v2 + 5, "m_kWorldCenter"); /*0x7252fe*/
  v10 = a2->end; /*0x725303*/
  v11 = a2->capacity; /*0x725307*/
  v20 = v9; /*0x72530d*/
  if ( v10 >= v11 ) /*0x725311*/
    NiTArray_SetSize((unsigned __int16 *)a2, v10 + a2->growSize); /*0x72531c*/
  NiTArray_SetAt(a2, v10, &v20); /*0x725329*/
  result = 0; /*0x72532e*/
  ArgList = 0; /*0x725333*/
  if ( *((_DWORD *)v2 + 8) ) /*0x725330*/
  {
    v20 = 0; /*0x72533d*/
    while ( 1 ) /*0x72535a*/
    {
      v13 = (char *)FormHeapAlloc(0x80u); /*0x72535a*/
      HIDWORD(v17) = "range[%d] = %g   %g"; /*0x725370*/
      LODWORD(v17) = 0x80; /*0x725375*/
      sub_6C5D40(v2, v13, v17, ArgList, *(float *)&v20[*((_DWORD *)v2 + 9)], *(float *)&v20[*((_DWORD *)v2 + 9) + 4]); /*0x72537b*/
      v14 = a2->end; /*0x725380*/
      if ( v14 >= a2->capacity ) /*0x72538d*/
        NiTArray_SetSize((unsigned __int16 *)a2, v14 + a2->growSize); /*0x725398*/
      if ( v14 < a2->end ) /*0x7253a3*/
      {
        if ( v13 ) /*0x7253b9*/
        {
          if ( !*((_DWORD *)&a2->data->vtbl + v14) ) /*0x7253be*/
            ++a2->numObjs; /*0x7253c4*/
        }
        else if ( *((_DWORD *)&a2->data->vtbl + v14) ) /*0x7253ce*/
        {
          --a2->numObjs; /*0x7253d4*/
        }
      }
      else
      {
        a2->end = v14 + 1; /*0x7253aa*/
        if ( v13 ) /*0x7253ae*/
          ++a2->numObjs; /*0x7253b0*/
      }
      data = a2->data; /*0x7253de*/
      v16 = v21; /*0x7253e1*/
      v20 += 0x10; /*0x7253e5*/
      result = ArgList + 1; /*0x7253ea*/
      *((_DWORD *)&data->vtbl + v14) = v13; /*0x7253ed*/
      if ( (unsigned int)++ArgList >= *((_DWORD *)v16 + 8) ) /*0x7253f7*/
        break; /*0x7253f7*/
      v2 = (va_list)v16; /*0x725343*/
    }
  }
  return result; /*0x7253fd*/
}
