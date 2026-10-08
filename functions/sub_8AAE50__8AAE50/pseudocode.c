unsigned int __thiscall sub_8AAE50(unsigned __int8 *this, NiTArray_NiTexturingPropertyMap *a2)
{
  unsigned __int8 *v2; // edi
  char *v3; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  char *v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  unsigned int result; // eax
  bool v10; // zf
  char *v11; // ebx
  unsigned int v12; // edi
  NiTexturingProperty_Map *data; // edx
  unsigned __int8 *v14; // ecx
  bool v15; // cf
  char *v16; // [esp+44h] [ebp-54h] BYREF
  unsigned int v17; // [esp+48h] [ebp-50h]
  unsigned __int8 *v18; // [esp+4Ch] [ebp-4Ch]
  char v19[68]; // [esp+50h] [ebp-48h] BYREF

  v2 = this; /*0x8aae6a*/
  v18 = this; /*0x8aae6d*/
  NiTimeController_GetViewerStrings(this, (unsigned __int16 *)a2); /*0x8aae71*/
  v3 = TESOutput_PrintString((char *)MEMORY[0xBA7F3C].name); /*0x8aae7c*/
  end = a2->end; /*0x8aae81*/
  capacity = a2->capacity; /*0x8aae85*/
  v16 = v3; /*0x8aae8e*/
  if ( end >= capacity ) /*0x8aae92*/
    NiTArray_SetSize((unsigned __int16 *)a2, end + a2->growSize); /*0x8aae9d*/
  NiTArray_SetAt(a2, end, &v16); /*0x8aaeaa*/
  v6 = TESOutput_PrintLabeledUnsignedInt("iKeys", *((_DWORD *)v2 + 0x14)); /*0x8aaeb8*/
  v7 = a2->end; /*0x8aaebd*/
  v8 = a2->capacity; /*0x8aaec1*/
  v16 = v6; /*0x8aaeca*/
  if ( v7 >= v8 ) /*0x8aaece*/
    NiTArray_SetSize((unsigned __int16 *)a2, v7 + a2->growSize); /*0x8aaed9*/
  NiTArray_SetAt(a2, v7, &v16); /*0x8aaee6*/
  result = 0; /*0x8aaeeb*/
  v10 = *((_DWORD *)v2 + 0x14) == 0; /*0x8aaeed*/
  v17 = 0; /*0x8aaef0*/
  if ( !v10 )
  {
    v16 = 0; /*0x8aaefa*/
    while ( 1 )
    {
      _sprintf(
        v19,
        "Key%d: %.4f, %.4f, %.4f",
        v17,
        *(float *)&v16[*((_DWORD *)v2 + 0x11)],
        *(float *)&v16[*((_DWORD *)v2 + 0x11) + 4],
        *(float *)&v16[*((_DWORD *)v2 + 0x11) + 8]);
      v11 = (char *)FormHeapAlloc(strlen(v19) + 1); /*0x8aaf54*/
      strcpy(v11, v19); /*0x8aaf56*/
      v12 = a2->end; /*0x8aaf6f*/
      if ( v12 >= a2->capacity ) /*0x8aaf79*/
        NiTArray_SetSize((unsigned __int16 *)a2, v12 + a2->growSize); /*0x8aaf84*/
      if ( v12 < a2->end ) /*0x8aaf8f*/
      {
        if ( v11 ) /*0x8aafa5*/
        {
          if ( !*((_DWORD *)&a2->data->vtbl + v12) ) /*0x8aafaa*/
            ++a2->numObjs; /*0x8aafb0*/
        }
        else if ( *((_DWORD *)&a2->data->vtbl + v12) ) /*0x8aafba*/
        {
          --a2->numObjs; /*0x8aafc0*/
        }
      }
      else
      {
        a2->end = v12 + 1; /*0x8aaf96*/
        if ( v11 ) /*0x8aaf9a*/
          ++a2->numObjs; /*0x8aaf9c*/
      }
      data = a2->data; /*0x8aafca*/
      v14 = v18; /*0x8aafcd*/
      v16 += 0xC; /*0x8aafd1*/
      result = v17 + 1; /*0x8aafd6*/
      *((_DWORD *)&data->vtbl + v12) = v11; /*0x8aafd9*/
      v15 = result < *((_DWORD *)v14 + 0x14); /*0x8aafdc*/
      v17 = result; /*0x8aafdf*/
      if ( !v15 ) /*0x8aafe3*/
        break; /*0x8aafe3*/
      v2 = v14; /*0x8aaf00*/
    }
  }
  return result; /*0x8aafe9*/
}
