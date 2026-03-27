void __thiscall NiUnionBV::~NiUnionBV(NiUnionBV *this)
{
  unsigned int v2; // [esp-4h] [ebp-8h]

  *(_DWORD *)this = &NiUnionBV::`vftable';
  sub_95F900(this);
  v2 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 1) = &NiTArray<NiBoundingVolume *>::`vftable';
  FormHeapFree(v2);
  *(_DWORD *)this = &NiBoundingVolume::`vftable';
}
