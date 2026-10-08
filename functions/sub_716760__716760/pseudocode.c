MEF_U32PointerMapEntry32 *__thiscall sub_716760(_DWORD *this, signed int i)
{
  _DWORD *v2; // edi
  int (__cdecl *v4)(int, int *, int, signed int *, int); // eax
  MEF_U32PointerMapEntry32 *result; // eax
  unsigned int v6; // edx
  MEF_U32PointerMapLayout32 *v7; // esi
  unsigned int v8; // eax
  MEF_U32PointerMapEntry32 **buckets; // ecx
  int v10; // [esp-14h] [ebp-28h]
  int v11; // [esp+8h] [ebp-Ch] BYREF
  unsigned int keyOut; // [esp+Ch] [ebp-8h] BYREF
  void *valueOut; // [esp+10h] [ebp-4h] BYREF

  v2 = (_DWORD *)i; /*0x716765*/
  j_nullsub_3(i); /*0x71676c*/
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x2C))(v2, *(this + 7)); /*0x71677c*/
  v11 = *(this + 5); /*0x716788*/
  v10 = v2[0x88]; /*0x716799*/
  v4 = *(int (__cdecl **)(int, int *, int, signed int *, int))(v10 + 8); /*0x71679a*/
  i = 4; /*0x71679d*/
  result = (MEF_U32PointerMapEntry32 *)v4(v10, &v11, 4, &i, 1); /*0x7167a5*/
  if ( *(this + 5) ) /*0x7167aa*/
  {
    v6 = *(this + 3); /*0x7167b0*/
    v7 = (MEF_U32PointerMapLayout32 *)(this + 2); /*0x7167b3*/
    v8 = 0; /*0x7167b6*/
    if ( v6 ) /*0x7167bb*/
    {
      buckets = v7->buckets; /*0x7167c0*/
      while ( !*buckets ) /*0x7167c5*/
      {
        ++v8; /*0x7167c7*/
        ++buckets; /*0x7167ca*/
        if ( v8 >= v6 ) /*0x7167cf*/
          goto LABEL_6; /*0x7167cf*/
      }
      result = v7->buckets[v8]; /*0x71681f*/
    }
    else
    {
LABEL_6:
      result = 0; /*0x7167d1*/
    }
    i = (signed int)result; /*0x7167d5*/
    if ( result ) /*0x7167da*/
    {
      do /*0x716815*/
      {
        NiTMap_U32Pointer_GetNextEntry(v7, (MEF_U32PointerMapEntry32 **)&i, &keyOut, &valueOut); /*0x7167f1*/
        sub_713720(v2, (const char *)keyOut); /*0x7167fd*/
        result = (MEF_U32PointerMapEntry32 *)(*(int (__thiscall **)(_DWORD *, void *))(*v2 + 0x2C))(v2, valueOut); /*0x71680e*/
      }
      while ( i ); /*0x716815*/
    }
  }
  return result; /*0x716817*/
}
