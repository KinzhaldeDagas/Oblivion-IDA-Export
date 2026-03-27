void __thiscall ExtraSound::~ExtraSound(ExtraSound *this)
{
  _DWORD *v6; // edi

  *(_DWORD *)this = &ExtraSound::`vftable';
  v6 = *((_DWORD **)this + 3);
  if ( v6 )
  {
    sub_6B73E0(v6);
    FormHeapFree((unsigned int)v6);
  }
  *(_DWORD *)this = &BSExtraData::`vftable';
}
