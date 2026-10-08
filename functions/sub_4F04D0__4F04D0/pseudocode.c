// Verified: WorldSpace destructor clears the derived SubSpace index (+0x60), frees all per-coordinate linked-list nodes and destroys the 16-byte map. The separate persistent-reference index (+0x64) is cleared earlier by TESWorldSpace_ClearReferenceIndex.
void __thiscall TESWorldSpace_ClearSubSpaceIndex(TESWorldSpace *this)
{
  UInt32 unknown060; // ecx
  unsigned int v3; // edx
  unsigned int v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // ecx
  MEF_U32PointerMapEntry32 *v7; // eax
  MEF_U32PointerMapLayout32 *v8; // ecx
  _DWORD *v9; // esi
  int v10; // edi
  void (__thiscall ***v11)(_DWORD, int); // ecx
  void *valueOut; // [esp+4h] [ebp-Ch] BYREF
  MEF_U32PointerMapEntry32 *position; // [esp+8h] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+Ch] [ebp-4h] BYREF

  unknown060 = this->unknown060; /*0x4f04d6*/
  if ( unknown060 ) /*0x4f04db*/
  {
    v3 = *(_DWORD *)(unknown060 + 4); /*0x4f04e1*/
    v4 = 0; /*0x4f04e4*/
    if ( v3 ) /*0x4f04e9*/
    {
      v5 = *(_DWORD **)(unknown060 + 8); /*0x4f04eb*/
      v6 = v5; /*0x4f04ee*/
      while ( !*v6 ) /*0x4f04f3*/
      {
        ++v4; /*0x4f04f9*/
        ++v6; /*0x4f04fc*/
        if ( v4 >= v3 ) /*0x4f0501*/
          goto LABEL_6; /*0x4f0501*/
      }
      v7 = (MEF_U32PointerMapEntry32 *)v5[v4]; /*0x4f0591*/
    }
    else
    {
LABEL_6:
      v7 = 0; /*0x4f0503*/
    }
    position = v7; /*0x4f0507*/
    while ( position ) /*0x4f050b*/
    {
      v8 = (MEF_U32PointerMapLayout32 *)this->unknown060; /*0x4f051a*/
      valueOut = 0; /*0x4f0522*/
      NiTMap_U32Pointer_GetNextEntry(v8, &position, &keyOut, &valueOut); /*0x4f052a*/
      v9 = valueOut; /*0x4f052f*/
      if ( valueOut ) /*0x4f0535*/
      {
        if ( *((_DWORD *)valueOut + 1) ) /*0x4f0537*/
        {
          do /*0x4f0554*/
          {
            v10 = *(_DWORD *)(v9[1] + 4); /*0x4f0543*/
            FormHeapFree(v9[1]); /*0x4f0547*/
            v9[1] = v10; /*0x4f0551*/
          }
          while ( v10 ); /*0x4f0554*/
        }
        *v9 = 0; /*0x4f0557*/
        FormHeapFree((unsigned int)v9); /*0x4f055d*/
      }
    }
    NiTMap_Clear((_DWORD *)this->unknown060); /*0x4f0570*/
    v11 = (void (__thiscall ***)(_DWORD, int))this->unknown060; /*0x4f0575*/
    if ( v11 ) /*0x4f057b*/
      (**v11)(v11, 1); /*0x4f0583*/
    this->unknown060 = 0; /*0x4f0585*/
  }
}
