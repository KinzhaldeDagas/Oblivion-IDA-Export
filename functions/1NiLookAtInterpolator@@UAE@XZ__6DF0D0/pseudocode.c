void __thiscall NiLookAtInterpolator::~NiLookAtInterpolator(NiLookAtInterpolator *this)
{
  *(_DWORD *)this = &NiLookAtInterpolator::`vftable';
  FormHeapFree(*((_DWORD *)this + 5));
  *((_DWORD *)this + 5) = 0;
  _LN21((char *)this + 0x38, 4u, 3, (void (__thiscall *)(void *))sub_7016A0);
  sub_6EBA30(this);
}
