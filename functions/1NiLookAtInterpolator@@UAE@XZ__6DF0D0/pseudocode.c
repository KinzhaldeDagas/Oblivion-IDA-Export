void __thiscall NiLookAtInterpolator::~NiLookAtInterpolator(NiLookAtInterpolator *this)
{
  *(_DWORD *)this = &NiLookAtInterpolator::`vftable'; /*0x6df0f8*/
  FormHeapFree(*((_DWORD *)this + 5)); /*0x6df10a*/
  *((_DWORD *)this + 5) = 0; /*0x6df11f*/
  _LN21((char *)this + 0x38, 4u, 3, (void (__thiscall *)(void *))NiPointerSlot_Release); /*0x6df12b*/
  sub_6EBA30(this); /*0x6df13a*/
}
