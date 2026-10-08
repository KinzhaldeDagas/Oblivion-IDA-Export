void __thiscall sub_6FEC00(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  float *v3; // ebx
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx
  int v10; // ebp
  int v11; // eax
  char *v12; // eax
  unsigned int v13; // edi
  char *v14; // ebx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6fec04*/
  v3 = this; /*0x6fec09*/
  sub_7531E0(this, a2); /*0x6fec10*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3F54C.name); /*0x6fec1b*/
  end = v2->end; /*0x6fec20*/
  capacity = v2->capacity; /*0x6fec24*/
  a2 = v4; /*0x6fec2d*/
  if ( end >= capacity ) /*0x6fec31*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6fec3c*/
  NiTArray_SetAt(v2, end, &a2); /*0x6fec49*/
  v7 = (unsigned __int16 *)sub_6FE340("ArrayType", *((_DWORD *)v3 + 0x15)); /*0x6fec59*/
  v8 = v2->end; /*0x6fec5e*/
  v9 = v2->capacity; /*0x6fec62*/
  a2 = v7; /*0x6fec68*/
  if ( v8 >= v9 ) /*0x6fec6c*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6fec77*/
  NiTArray_SetAt(v2, v8, &a2); /*0x6fec84*/
  v10 = *((unsigned __int16 *)v3 + 0x31); /*0x6fec89*/
  if ( *((_WORD *)v3 + 0x31) ) /*0x6fec89*/
  {
    do /*0x6fed19*/
    {
      v11 = *(_DWORD *)(*((_DWORD *)v3 + 0x17) + 4 * v10-- - 4); /*0x6fec98*/
      if ( v11 ) /*0x6feca1*/
      {
        v12 = TESOutput_PrintLabeledString("E", *(const char **)(v11 + 8)); /*0x6fecac*/
        v13 = v2->end; /*0x6fecb1*/
        v14 = v12; /*0x6fecbe*/
        if ( v13 >= v2->capacity ) /*0x6fecc0*/
          NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x6feccb*/
        if ( v13 < v2->end ) /*0x6fecd6*/
        {
          if ( v14 ) /*0x6fecec*/
          {
            if ( !*((_DWORD *)&v2->data->vtbl + v13) ) /*0x6fecf1*/
              ++v2->numObjs; /*0x6fecf7*/
          }
          else if ( *((_DWORD *)&v2->data->vtbl + v13) ) /*0x6fed01*/
          {
            --v2->numObjs; /*0x6fed07*/
          }
        }
        else
        {
          v2->end = v13 + 1; /*0x6fecdd*/
          if ( v14 ) /*0x6fece1*/
            ++v2->numObjs; /*0x6fece3*/
        }
        *((_DWORD *)&v2->data->vtbl + v13) = v14; /*0x6fed10*/
        v3 = this; /*0x6fed13*/
      }
    }
    while ( v10 ); /*0x6fed19*/
  }
}
