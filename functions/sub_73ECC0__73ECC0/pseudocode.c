char *__thiscall sub_73ECC0(float *this, NiTArray_NiTexturingPropertyMap *a2)
{
  char *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  char *v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // ecx
  char *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ecx
  char *result; // eax
  va_list v13; // edi
  bool v14; // zf
  char *v15; // ebx
  unsigned int v16; // edi
  float *v17; // ecx
  size_t v19; // [esp-Ch] [ebp-54h]
  char *v20; // [esp+4h] [ebp-44h]
  char *v21; // [esp+40h] [ebp-8h] BYREF
  float *v22; // [esp+44h] [ebp-4h]

  v20 = (char *)LODWORD(MEMORY[0xB3F9B0][0x204]); /*0x73ecd3*/
  v22 = this; /*0x73ecd4*/
  v3 = TESOutput_PrintString(v20); /*0x73ecd8*/
  end = a2->end; /*0x73ece0*/
  capacity = a2->capacity; /*0x73ece4*/
  v21 = v3; /*0x73eced*/
  if ( end >= capacity ) /*0x73ecf1*/
    NiTArray_SetSize((unsigned __int16 *)a2, end + a2->growSize); /*0x73ecfc*/
  NiTArray_SetAt(a2, end, &v21); /*0x73ed09*/
  v6 = sub_72A040(this + 2, "Bound"); /*0x73ed16*/
  v7 = a2->end; /*0x73ed1b*/
  v8 = a2->capacity; /*0x73ed1f*/
  v21 = v6; /*0x73ed25*/
  if ( v7 >= v8 ) /*0x73ed29*/
    NiTArray_SetSize((unsigned __int16 *)a2, v7 + a2->growSize); /*0x73ed34*/
  NiTArray_SetAt(a2, v7, &v21); /*0x73ed41*/
  v9 = sub_72A040(this + 6, "World Bound"); /*0x73ed4e*/
  v10 = a2->end; /*0x73ed53*/
  v11 = a2->capacity; /*0x73ed57*/
  v21 = v9; /*0x73ed5d*/
  if ( v10 >= v11 ) /*0x73ed61*/
    NiTArray_SetSize((unsigned __int16 *)a2, v10 + a2->growSize); /*0x73ed6c*/
  result = (char *)NiTArray_SetAt(a2, v10, &v21); /*0x73ed79*/
  v13 = 0; /*0x73ed7e*/
  v14 = *((_DWORD *)this + 0xA) == 0; /*0x73ed80*/
  v21 = 0; /*0x73ed83*/
  if ( !v14 ) /*0x73ed87*/
  {
    while ( 1 ) /*0x73edad*/
    {
      HIDWORD(v19) = "Proportion[%d] = %g"; /*0x73edad*/
      v15 = (char *)FormHeapAlloc(0x80u); /*0x73edb2*/
      LODWORD(v19) = 0x80; /*0x73edb4*/
      sub_6C5D40(v13, v15, v19, v13, *(float *)(*((_DWORD *)v22 + 0xB) + 4 * (_DWORD)v13)); /*0x73edba*/
      v16 = a2->end; /*0x73edbf*/
      if ( v16 >= a2->capacity ) /*0x73edcc*/
        NiTArray_SetSize((unsigned __int16 *)a2, v16 + a2->growSize); /*0x73edd7*/
      if ( v16 < a2->end ) /*0x73ede2*/
      {
        if ( v15 ) /*0x73edf8*/
        {
          if ( !*((_DWORD *)&a2->data->vtbl + v16) ) /*0x73edfd*/
            ++a2->numObjs; /*0x73ee03*/
        }
        else if ( *((_DWORD *)&a2->data->vtbl + v16) ) /*0x73ee0d*/
        {
          --a2->numObjs; /*0x73ee13*/
        }
      }
      else
      {
        a2->end = v16 + 1; /*0x73ede9*/
        if ( v15 ) /*0x73eded*/
          ++a2->numObjs; /*0x73edef*/
      }
      v17 = v22; /*0x73ee1c*/
      *((_DWORD *)&a2->data->vtbl + v16) = v15; /*0x73ee20*/
      result = v21 + 1; /*0x73ee27*/
      if ( (unsigned int)++v21 >= *((_DWORD *)v17 + 0xA) ) /*0x73ee2a*/
        break; /*0x73ee31*/
      v13 = v21; /*0x73ed90*/
    }
  }
  return result; /*0x73ee37*/
}
