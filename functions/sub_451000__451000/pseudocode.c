// Destroys every TESFile clone in the thread-ID map, clears and destroys the map, and nulls the owning TESFile's map pointer.
void __thiscall TESFile_ClearThreadSafeFiles(NiTMap_TESCELL **this)
{
  int v2; // ecx
  unsigned int v3; // edx
  unsigned int v4; // eax
  _DWORD *v5; // esi
  _DWORD *v6; // ecx
  NiTMap_Entry_TESCELL *v7; // eax
  NiTMap_TESCELL *v8; // ecx
  TESObjectCELL *v9; // esi
  void (__thiscall ***v10)(_DWORD, int); // ecx
  TESObjectCELL *v11; // [esp+4h] [ebp-Ch] BYREF
  NiTMap_Entry_TESCELL *v12; // [esp+8h] [ebp-8h] BYREF
  void *v13; // [esp+Ch] [ebp-4h] BYREF

  v2 = (int)*(this + 2); /*0x451006*/
  if ( v2 ) /*0x45100b*/
  {
    v3 = *(_DWORD *)(v2 + 4); /*0x451011*/
    v4 = 0; /*0x451014*/
    if ( v3 ) /*0x451019*/
    {
      v5 = *(_DWORD **)(v2 + 8); /*0x45101b*/
      v6 = v5; /*0x45101e*/
      while ( !*v6 ) /*0x451023*/
      {
        ++v4; /*0x451029*/
        ++v6; /*0x45102c*/
        if ( v4 >= v3 ) /*0x451031*/
          goto LABEL_6; /*0x451031*/
      }
      v7 = (NiTMap_Entry_TESCELL *)v5[v4]; /*0x4510a2*/
    }
    else
    {
LABEL_6:
      v7 = 0; /*0x451033*/
    }
    v12 = v7; /*0x451037*/
    while ( v12 ) /*0x45103b*/
    {
      v8 = *(this + 2); /*0x45104a*/
      v11 = 0; /*0x451052*/
      NiTMap_U32Pointer_GetNextEntry(v8, &v12, &v13, &v11); /*0x45105a*/
      v9 = v11; /*0x45105f*/
      if ( v11 ) /*0x451065*/
      {
        TESFile_destr((CHAR *)v11); /*0x451069*/
        FormHeapFree((unsigned int)v9); /*0x45106f*/
      }
    }
    NiTMap_Clear(*(this + 2)); /*0x451081*/
    v10 = (void (__thiscall ***)(_DWORD, int))*(this + 2); /*0x451086*/
    if ( v10 ) /*0x45108c*/
      (**v10)(v10, 1); /*0x451094*/
    *(this + 2) = 0; /*0x451096*/
  }
}
