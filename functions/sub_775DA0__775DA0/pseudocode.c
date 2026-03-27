void __thiscall sub_775DA0(NiTPointerList__BSImageSpaceShader *this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edi

  v2 = *((_DWORD **)this + 0x4E);
  while ( v2 )
  {
    v3 = (_DWORD *)v2[2];
    v2 = (_DWORD *)*v2;
    if ( v3 )
    {
      sub_7756F0(v3);
      FormHeapFree((unsigned int)v3);
    }
  }
  *((_DWORD *)this + 0x4D) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiDX9DeviceDesc::DisplayFormatInfo *>::`vftable';
  NiTPointerList::FreeAllNodes(this + 0xB);
  *((_DWORD *)this + 0x4D) = &NiTListBase<NiTPointerAllocator<unsigned int>,NiDX9DeviceDesc::DisplayFormatInfo *>::`vftable';
}
