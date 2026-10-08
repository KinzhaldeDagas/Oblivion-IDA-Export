int __thiscall SettingCollectionMap_BuildOutputArray(_DWORD *this, char *valueOut)
{
  MEF_U32PointerMapLayout32 *v2; // esi
  unsigned int v3; // ecx
  int v4; // ebx
  unsigned int v5; // eax
  MEF_U32PointerMapEntry32 **buckets; // edx
  MEF_U32PointerMapEntry32 *v7; // eax
  unsigned __int16 *v8; // edi
  MEF_U32PointerMapEntry32 *position; // [esp+Ch] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+10h] [ebp-4h] BYREF

  v2 = (MEF_U32PointerMapLayout32 *)(this + 0x43); /*0x4a7cd5*/
  v3 = *(this + 0x44); /*0x4a7cdb*/
  v4 = 0; /*0x4a7cde*/
  v5 = 0; /*0x4a7ce0*/
  if ( v3 ) /*0x4a7ce5*/
  {
    buckets = v2->buckets; /*0x4a7cea*/
    while ( !*buckets ) /*0x4a7cf2*/
    {
      ++v5; /*0x4a7cf4*/
      ++buckets; /*0x4a7cf7*/
      if ( v5 >= v3 ) /*0x4a7cfc*/
        goto LABEL_5; /*0x4a7cfc*/
    }
    v7 = v2->buckets[v5]; /*0x4a7d49*/
  }
  else
  {
LABEL_5:
    v7 = 0; /*0x4a7cfe*/
  }
  position = v7; /*0x4a7d02*/
  if ( v7 ) /*0x4a7d06*/
  {
    v8 = (unsigned __int16 *)valueOut; /*0x4a7d08*/
    do /*0x4a7d3c*/
    {
      NiTMap_U32Pointer_GetNextEntry(v2, &position, &keyOut, (void **)&valueOut); /*0x4a7d21*/
      if ( valueOut ) /*0x4a7d2c*/
      {
        Setting_BuildOutputArray(valueOut, v8); /*0x4a7d2f*/
        ++v4; /*0x4a7d34*/
      }
    }
    while ( position ); /*0x4a7d3c*/
  }
  return v4; /*0x4a7d3e*/
}
