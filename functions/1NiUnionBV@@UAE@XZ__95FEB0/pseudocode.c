void __thiscall NiUnionBV::~NiUnionBV(NiUnionBV *this)
{
  unsigned int v2; // [esp-4h] [ebp-8h]

  *(_DWORD *)this = &NiUnionBV::`vftable'; /*0x95feb3*/
  sub_95F900(this); /*0x95feb9*/
  v2 = *((_DWORD *)this + 2); /*0x95fec1*/
  *((_DWORD *)this + 1) = &NiTArray<NiBoundingVolume *>::`vftable'; /*0x95fec2*/
  FormHeapFree(v2); /*0x95fec9*/
  *(_DWORD *)this = &NiBoundingVolume::`vftable'; /*0x95fed1*/
}
