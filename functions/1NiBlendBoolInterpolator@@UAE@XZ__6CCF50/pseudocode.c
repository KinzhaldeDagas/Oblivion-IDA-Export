void __thiscall NiBlendBoolInterpolator::~NiBlendBoolInterpolator(NiBlendBoolInterpolator *this)
{
  int *v2; // eax
  unsigned int v3; // edi

  *(_DWORD *)this = &NiBlendInterpolator::`vftable';
  v2 = *((int **)this + 5);
  if ( v2 )
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFF);
    _LN21(v2, 0x18u, v2[0xFFFFFFFF], (void (__thiscall *)(void *))sub_7016A0);
    FormHeapFree(v3);
  }
  sub_6EBA30(this);
}
