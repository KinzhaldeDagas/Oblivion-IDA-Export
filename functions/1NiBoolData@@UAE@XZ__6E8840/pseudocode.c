void __thiscall NiBoolData::~NiBoolData(NiBoolData *this)
{
  int *v2; // eax
  unsigned int v3; // edi

  *(_DWORD *)this = &NiBoolData::`vftable';
  v2 = *((int **)this + 3);
  if ( v2 )
  {
    v3 = (unsigned int)(v2 + 0xFFFFFFFF);
    _LN21(v2, 8u, v2[0xFFFFFFFF], TESTexture::ClearComponentReferences);
    FormHeapFree(v3);
  }
  NiRefObject_destr(this);
}
