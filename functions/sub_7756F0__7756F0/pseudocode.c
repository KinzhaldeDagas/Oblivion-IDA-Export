void __thiscall sub_7756F0(_DWORD *this)
{
  unsigned int v1; // edx
  NiTMap_TESCELL *v2; // esi
  unsigned int v3; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // ecx
  NiTMap_Entry_TESCELL *v6; // eax
  NiTMap_Entry_TESCELL *v7; // [esp+8h] [ebp-Ch] BYREF
  TESObjectCELL *v8; // [esp+Ch] [ebp-8h] BYREF
  void *v9; // [esp+10h] [ebp-4h] BYREF

  v1 = *(this + 3);
  v2 = (NiTMap_TESCELL *)(this + 2);
  v3 = 0;
  if ( v1 )
  {
    v4 = (_DWORD *)*(this + 4);
    v5 = v4;
    while ( !*v5 )
    {
      ++v3;
      ++v5;
      if ( v3 >= v1 )
        goto LABEL_5;
    }
    v6 = (NiTMap_Entry_TESCELL *)v4[v3];
  }
  else
  {
LABEL_5:
    v6 = 0;
  }
  v7 = v6;
  while ( v7 )
  {
    sub_452600(v2, &v7, &v9, &v8);
    FormHeapFree((unsigned int)v8);
  }
  v2->vtbl = &NiTPointerMap<enum _D3DFORMAT,NiDX9DeviceDesc::DisplayFormatInfo::RenderTargetInfo *>::`vftable';
  NiTMap_Clear(v2);
  v2->vtbl = &NiTMapBase<NiTPointerAllocator<unsigned int>,enum _D3DFORMAT,NiDX9DeviceDesc::DisplayFormatInfo::RenderTargetInfo *>::`vftable';
  NiTMap_Clear(v2);
  FormHeapFree((unsigned int)v2->m_buckets);
}
