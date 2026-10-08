void __thiscall sub_776B10(MEF_U32PointerMapLayout32 *this)
{
  unsigned int bucketCount; // edx
  unsigned int v3; // eax
  MEF_U32PointerMapEntry32 **buckets; // esi
  MEF_U32PointerMapEntry32 **v5; // ecx
  MEF_U32PointerMapEntry32 *v6; // eax
  _BYTE *v7; // ebp
  unsigned int v8; // esi
  _DWORD *v9; // eax
  bool v10; // zf
  void *v11; // ecx
  unsigned int v12; // [esp-8h] [ebp-20h]
  void *valueOut; // [esp+Ch] [ebp-Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+10h] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+14h] [ebp-4h] BYREF

  bucketCount = this->bucketCount; /*0x776b17*/
  v3 = 0; /*0x776b1a*/
  if ( bucketCount ) /*0x776b1e*/
  {
    buckets = this->buckets; /*0x776b20*/
    v5 = buckets; /*0x776b23*/
    while ( !*v5 ) /*0x776b28*/
    {
      ++v3; /*0x776b2e*/
      ++v5; /*0x776b31*/
      if ( v3 >= bucketCount ) /*0x776b36*/
        goto LABEL_5; /*0x776b36*/
    }
    v6 = buckets[v3]; /*0x776bf0*/
  }
  else
  {
LABEL_5:
    v6 = 0; /*0x776b38*/
  }
  position = v6; /*0x776b3c*/
  while ( position ) /*0x776b40*/
  {
    valueOut = 0; /*0x776b61*/
    NiTMap_U32Pointer_GetNextEntry(this, &position, &keyOut, &valueOut); /*0x776b69*/
    v7 = valueOut; /*0x776b6e*/
    if ( valueOut ) /*0x776b74*/
    {
      (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 8) + 0xD4))( /*0x776b88*/
        *((_DWORD *)this + 8),
        *((_DWORD *)valueOut + 0x1B),
        0);
      v8 = keyOut; /*0x776b8a*/
      v12 = keyOut; /*0x776b8e*/
      v7[0x71] = 0; /*0x776b91*/
      NiTMap_RemoveAt(this, v12); /*0x776b95*/
      v9 = *((_DWORD **)this + 5); /*0x776b9a*/
      if ( v9 ) /*0x776ba2*/
      {
        while ( 1 ) /*0x776ba4*/
        {
          v10 = v8 == v9[2]; /*0x776ba4*/
          v11 = v9; /*0x776baa*/
          v9 = (_DWORD *)*v9; /*0x776bac*/
          if ( v10 ) /*0x776bae*/
            break; /*0x776bae*/
          if ( !v9 ) /*0x776bb2*/
            goto LABEL_11; /*0x776bb2*/
        }
      }
      else
      {
LABEL_11:
        v11 = 0; /*0x776bb4*/
      }
      valueOut = v11; /*0x776bb8*/
      if ( v11 ) /*0x776bbc*/
        NiTPointerList_RemoveNode(this + 1, &valueOut); /*0x776bc5*/
      *(_DWORD *)(v8 + 0x104) = 0; /*0x776bcb*/
      FormHeapFree((unsigned int)v7); /*0x776bd5*/
    }
  }
}
