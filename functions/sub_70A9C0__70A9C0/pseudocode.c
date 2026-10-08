int __thiscall sub_70A9C0(_WORD *this)
{
  unsigned int i; // esi
  int v3; // ecx
  NiTransform transform; // [esp+8h] [ebp-34h] BYREF

  for ( i = 0; i < (unsigned __int16)*(this + 0x5B); ++i ) /*0x70a9c9*/
  {
    v3 = *(_DWORD *)(*((_DWORD *)this + 0x2C) + 4 * i); /*0x70a9d8*/
    if ( v3 ) /*0x70a9dd*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 0x50))(v3); /*0x70a9e4*/
  }
  sub_718A80((float *)this + 0x19, &transform); /*0x70a9fc*/
  return NiBound_TransformInto((NiBound *)(this + 0x66), (const NiBound *)this + 2, &transform); /*0x70aa15*/
}
