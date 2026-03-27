void __thiscall hkNiTriStripsShape::~hkNiTriStripsShape(hkNiTriStripsShape *this)
{
  int *v2; // eax
  unsigned int v3; // edi

  *(_DWORD *)this = &hkNiTriStripsShape::`vftable';
  v2 = *((int **)this + 0xA);
  *((_DWORD *)this + 9) = &NiTLargeArray<hkNiTriStripsData>::`vftable';
  if ( v2 )
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFF);
    _LN21(v2, 8u, v2[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v3);
  }
  *(_DWORD *)this = &hkBaseObject::`vftable';
}
