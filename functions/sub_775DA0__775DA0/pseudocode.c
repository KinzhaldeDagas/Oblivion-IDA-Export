void __thiscall sub_775DA0(NiTPointerList__BSImageSpaceShader *this)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edi

  v2 = *((_DWORD **)this + 0x4E); /*0x775da4*/
  while ( v2 ) /*0x775dac*/
  {
    v3 = (_DWORD *)v2[2]; /*0x775db0*/
    v2 = (_DWORD *)*v2; /*0x775db8*/
    if ( v3 ) /*0x775dba*/
    {
      sub_7756F0(v3); /*0x775dbe*/
      FormHeapFree((unsigned int)v3); /*0x775dc4*/
    }
  }
  *((_DWORD *)this + 0x4D) = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiDX9DeviceDesc::DisplayFormatInfo *>::`vftable'; /*0x775dd9*/
  NiTPointerList::FreeAllNodes(this + 0xB); /*0x775ddf*/
  *((_DWORD *)this + 0x4D) = &NiTListBase<NiTPointerAllocator<unsigned int>,NiDX9DeviceDesc::DisplayFormatInfo *>::`vftable'; /*0x775de4*/
}
