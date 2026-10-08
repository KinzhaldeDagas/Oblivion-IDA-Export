unsigned __int16 *__thiscall sub_716830(_DWORD *this, unsigned __int16 *position)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  const char *v8; // ecx
  unsigned int v9; // ebx
  unsigned __int16 *result; // eax
  unsigned int v11; // ecx
  MEF_U32PointerMapLayout32 *v12; // ebp
  unsigned int v13; // eax
  int v14; // edi
  MEF_U32PointerMapEntry32 **buckets; // edx
  char *v16; // ebx
  unsigned int v17; // edi
  bool v18; // zf
  unsigned int keyOut; // [esp+Ch] [ebp-8h] BYREF
  void *valueOut; // [esp+10h] [ebp-4h] BYREF

  v2 = (NiTArray_NiTexturingPropertyMap *)position; /*0x716835*/
  sub_72FD30(this, position); /*0x71683d*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FCB8.name); /*0x716848*/
  end = v2->end; /*0x71684d*/
  capacity = v2->capacity; /*0x716851*/
  position = v4; /*0x71685a*/
  if ( end >= capacity ) /*0x71685e*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x716869*/
  NiTArray_SetAt(v2, end, &position); /*0x716876*/
  v7 = (unsigned __int16 *)FormHeapAlloc(0x60u); /*0x71687d*/
  v8 = *(const char **)(*(this + 7) + 8); /*0x716885*/
  position = v7; /*0x71688d*/
  if ( !v8 ) /*0x716891*/
    v8 = "UNKNOWN"; /*0x716893*/
  _sprintf((char *)v7, "m_pkScene = %s", v8); /*0x71689f*/
  v9 = v2->end; /*0x7168a4*/
  if ( v9 >= v2->capacity ) /*0x7168b1*/
    NiTArray_SetSize((unsigned __int16 *)v2, v9 + v2->growSize); /*0x7168bc*/
  result = (unsigned __int16 *)NiTArray_SetAt(v2, v9, &position); /*0x7168c9*/
  if ( *(this + 5) ) /*0x7168ce*/
  {
    v11 = *(this + 3); /*0x7168d8*/
    v12 = (MEF_U32PointerMapLayout32 *)(this + 2); /*0x7168dc*/
    v13 = 0; /*0x7168df*/
    if ( v11 ) /*0x7168e3*/
    {
      v14 = *(this + 4); /*0x7168e5*/
      buckets = v12->buckets; /*0x7168e8*/
      while ( !*buckets ) /*0x7168f3*/
      {
        ++v13; /*0x7168f9*/
        ++buckets; /*0x7168fc*/
        if ( v13 >= v11 ) /*0x716901*/
          goto LABEL_12; /*0x716901*/
      }
      result = *(unsigned __int16 **)(v14 + 4 * v13); /*0x716977*/
    }
    else
    {
LABEL_12:
      result = 0; /*0x716903*/
    }
    position = result; /*0x716907*/
    if ( result ) /*0x71690b*/
    {
      do /*0x7169aa*/
      {
        NiTMap_U32Pointer_GetNextEntry(v12, (MEF_U32PointerMapEntry32 **)&position, &keyOut, &valueOut); /*0x716922*/
        v16 = (char *)FormHeapAlloc(0x60u); /*0x716933*/
        _sprintf(v16, "%s", (const char *)keyOut); /*0x71693b*/
        v17 = v2->end; /*0x716940*/
        if ( v17 >= v2->capacity ) /*0x71694d*/
          NiTArray_SetSize((unsigned __int16 *)v2, v17 + v2->growSize); /*0x716958*/
        if ( v17 < v2->end ) /*0x716963*/
        {
          if ( v16 ) /*0x71697e*/
          {
            if ( !*((_DWORD *)&v2->data->vtbl + v17) ) /*0x716983*/
              ++v2->numObjs; /*0x716989*/
          }
          else if ( *((_DWORD *)&v2->data->vtbl + v17) ) /*0x716993*/
          {
            --v2->numObjs; /*0x716999*/
          }
        }
        else
        {
          v2->end = v17 + 1; /*0x71696a*/
          if ( v16 ) /*0x71696e*/
            ++v2->numObjs; /*0x716970*/
        }
        v18 = position == 0; /*0x71699f*/
        result = (unsigned __int16 *)v2->data; /*0x7169a4*/
        *(_DWORD *)&result[2 * v17] = v16; /*0x7169a7*/
      }
      while ( !v18 ); /*0x7169aa*/
    }
  }
  return result; /*0x7169b1*/
}
