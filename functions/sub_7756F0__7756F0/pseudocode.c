void __thiscall sub_7756F0(_DWORD *this)
{
  unsigned int v1; // edx
  MEF_U32PointerMapLayout32 *v2; // esi
  unsigned int v3; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // ecx
  MEF_U32PointerMapEntry32 *v6; // eax
  MEF_U32PointerMapEntry32 *position; // [esp+8h] [ebp-Ch] BYREF
  void *valueOut; // [esp+Ch] [ebp-8h] BYREF
  unsigned int keyOut; // [esp+10h] [ebp-4h] BYREF

  v1 = *(this + 3); /*0x7756f0*/
  v2 = (MEF_U32PointerMapLayout32 *)(this + 2); /*0x7756f7*/
  v3 = 0; /*0x7756fa*/
  if ( v1 ) /*0x7756ff*/
  {
    v4 = (_DWORD *)*(this + 4); /*0x775701*/
    v5 = v4; /*0x775704*/
    while ( !*v5 ) /*0x775709*/
    {
      ++v3; /*0x77570b*/
      ++v5; /*0x77570e*/
      if ( v3 >= v1 ) /*0x775713*/
        goto LABEL_5; /*0x775713*/
    }
    v6 = (MEF_U32PointerMapEntry32 *)v4[v3]; /*0x775776*/
  }
  else
  {
LABEL_5:
    v6 = 0; /*0x775715*/
  }
  position = v6; /*0x775719*/
  while ( position ) /*0x77571d*/
  {
    NiTMap_U32Pointer_GetNextEntry(v2, &position, &keyOut, &valueOut); /*0x775731*/
    FormHeapFree((unsigned int)valueOut); /*0x77573b*/
  }
  v2->vtable = &NiTPointerMap<enum _D3DFORMAT,NiDX9DeviceDesc::DisplayFormatInfo::RenderTargetInfo *>::`vftable'; /*0x77574c*/
  NiTMap_Clear(v2); /*0x775752*/
  v2->vtable = &NiTMapBase<NiTPointerAllocator<unsigned int>,enum _D3DFORMAT,NiDX9DeviceDesc::DisplayFormatInfo::RenderTargetInfo *>::`vftable'; /*0x775759*/
  NiTMap_Clear(v2); /*0x77575f*/
  FormHeapFree((unsigned int)v2->buckets); /*0x775768*/
}
