void __thiscall sub_77D980(NiGeometryGroup *this)
{
  unsigned int v1; // edx
  MEF_U32PointerMapLayout32 *v2; // esi
  unsigned int v3; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // ecx
  MEF_U32PointerMapEntry32 *v6; // eax
  void *v7; // edi
  MEF_U32PointerMapEntry32 *position; // [esp+8h] [ebp-Ch] BYREF
  unsigned int keyOut; // [esp+Ch] [ebp-8h] BYREF
  void *valueOut; // [esp+10h] [ebp-4h] BYREF

  v1 = *((_DWORD *)this + 4); /*0x77d980*/
  v2 = (MEF_U32PointerMapLayout32 *)(this + 1); /*0x77d987*/
  v3 = 0; /*0x77d98a*/
  if ( v1 ) /*0x77d98f*/
  {
    v4 = *((_DWORD **)this + 5); /*0x77d991*/
    v5 = v4; /*0x77d994*/
    while ( !*v5 ) /*0x77d999*/
    {
      ++v3; /*0x77d99b*/
      ++v5; /*0x77d99e*/
      if ( v3 >= v1 ) /*0x77d9a3*/
        goto LABEL_5; /*0x77d9a3*/
    }
    v6 = (MEF_U32PointerMapEntry32 *)v4[v3]; /*0x77d9f7*/
  }
  else
  {
LABEL_5:
    v6 = 0; /*0x77d9a5*/
  }
  position = v6; /*0x77d9a9*/
  while ( position ) /*0x77d9ad*/
  {
    NiTMap_U32Pointer_GetNextEntry(v2, &position, &keyOut, &valueOut); /*0x77d9c1*/
    NiTMap_RemoveAt(v2, keyOut); /*0x77d9cd*/
    v7 = valueOut; /*0x77d9d2*/
    if ( valueOut ) /*0x77d9d8*/
    {
      sub_77D490(valueOut); /*0x77d9dc*/
      FormHeapFree((unsigned int)v7); /*0x77d9e2*/
    }
  }
}
