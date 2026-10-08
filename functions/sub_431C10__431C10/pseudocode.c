unsigned int __thiscall sub_431C10(unsigned __int16 *this, NiTArray_NiTexturingPropertyMap *a2)
{
  unsigned __int16 *v2; // edi
  char *v3; // eax
  unsigned int end; // ebx
  unsigned int result; // eax
  int v6; // ebp
  char *v7; // eax
  unsigned int v8; // edi
  char *v9; // ebx
  char *v11; // [esp+14h] [ebp-4h] BYREF

  v2 = this; /*0x431c17*/
  v3 = TESOutput_PrintLabeledUnsignedInt("FileFinder Paths", *(this + 8)); /*0x431c27*/
  end = a2->end; /*0x431c30*/
  v11 = v3; /*0x431c34*/
  if ( end >= a2->capacity ) /*0x431c41*/
    NiTArray_SetSize((unsigned __int16 *)a2, end + a2->growSize); /*0x431c4c*/
  result = NiTArray_SetAt(a2, end, &v11); /*0x431c59*/
  v6 = 0; /*0x431c5e*/
  if ( v2[8] ) /*0x431c60*/
  {
    while ( 1 ) /*0x431c7e*/
    {
      v7 = TESOutput_PrintLabeledString(word_A36430, *(const char **)(*((_DWORD *)v2 + 2) + 4 * v6)); /*0x431c7e*/
      v8 = a2->end; /*0x431c83*/
      v9 = v7; /*0x431c90*/
      if ( v8 >= a2->capacity ) /*0x431c92*/
        NiTArray_SetSize((unsigned __int16 *)a2, v8 + a2->growSize); /*0x431c9d*/
      if ( v8 < a2->end ) /*0x431ca8*/
      {
        if ( v9 ) /*0x431cbe*/
        {
          if ( !*((_DWORD *)&a2->data->vtbl + v8) ) /*0x431cc3*/
            ++a2->numObjs; /*0x431cc9*/
        }
        else if ( *((_DWORD *)&a2->data->vtbl + v8) ) /*0x431cd3*/
        {
          --a2->numObjs; /*0x431cd9*/
        }
      }
      else
      {
        a2->end = v8 + 1; /*0x431caf*/
        if ( v9 ) /*0x431cb3*/
          ++a2->numObjs; /*0x431cb5*/
      }
      *((_DWORD *)&a2->data->vtbl + v8) = v9; /*0x431ce6*/
      result = *(this + 8); /*0x431ce9*/
      if ( ++v6 >= result ) /*0x431cf2*/
        break; /*0x431cf2*/
      v2 = this; /*0x431c70*/
    }
  }
  return result; /*0x431cf8*/
}
