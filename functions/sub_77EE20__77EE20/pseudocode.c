void __cdecl sub_77EE20(TESObjectCELL *a1)
{
  MEF_U32PointerMapLayout32 *v1; // ecx
  unsigned int bucketCount; // esi
  unsigned int v3; // eax
  MEF_U32PointerMapEntry32 **buckets; // edx
  MEF_U32PointerMapEntry32 *v5; // eax
  void *valueOut; // [esp+4h] [ebp-Ch] BYREF
  unsigned int keyOut; // [esp+8h] [ebp-8h] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+Ch] [ebp-4h] BYREF

  v1 = (MEF_U32PointerMapLayout32 *)unk_B428AC; /*0x77ee20*/
  if ( unk_B428AC ) /*0x77ee20*/
  {
    bucketCount = v1->bucketCount; /*0x77ee31*/
    v3 = 0; /*0x77ee34*/
    if ( bucketCount ) /*0x77ee39*/
    {
      buckets = v1->buckets; /*0x77ee3e*/
      while ( !*buckets ) /*0x77ee42*/
      {
        ++v3; /*0x77ee44*/
        ++buckets; /*0x77ee47*/
        if ( v3 >= bucketCount ) /*0x77ee4c*/
          goto LABEL_6; /*0x77ee4c*/
      }
      v5 = v1->buckets[v3]; /*0x77ee5e*/
    }
    else
    {
LABEL_6:
      v5 = 0; /*0x77ee4e*/
    }
    position = v5; /*0x77ee52*/
    if ( v5 ) /*0x77ee56*/
    {
      while ( 1 ) /*0x77ee78*/
      {
        keyOut = 0; /*0x77ee78*/
        valueOut = 0; /*0x77ee7c*/
        NiTMap_U32Pointer_GetNextEntry(v1, &position, &keyOut, &valueOut); /*0x77ee80*/
        if ( a1 == valueOut ) /*0x77ee89*/
          NiTMap_RemoveAt((_DWORD *)unk_B428AC, keyOut); /*0x77ee96*/
        if ( !position ) /*0x77ee9f*/
          break; /*0x77ee9f*/
        v1 = (MEF_U32PointerMapLayout32 *)unk_B428AC; /*0x77ee63*/
      }
    }
  }
}
