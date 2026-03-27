void __thiscall NiMorphData::~NiMorphData(NiMorphData *this)
{
  int *v2; // eax
  unsigned int v3; // edi

  *(_DWORD *)this = &NiMorphData::`vftable';
  v2 = *((int **)this + 4);
  if ( v2 )
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFF);
    _LN21(v2, 0xCu, v2[0xFFFFFFFF], (void (__thiscall *)(void *))sub_6DE0D0);
    FormHeapFree(v3);
  }
  NiRefObject_destr(this);
}
