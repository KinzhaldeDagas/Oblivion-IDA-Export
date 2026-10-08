void __thiscall ExtraSound::~ExtraSound(ExtraSound *this)
{
  _DWORD *v2; // edi

  *(_DWORD *)this = &ExtraSound::`vftable'; /*0x42abb9*/
  v2 = *((_DWORD **)this + 3); /*0x42abbf*/
  if ( v2 ) /*0x42abcc*/
  {
    sub_6B73E0(v2); /*0x42abd0*/
    FormHeapFree((unsigned int)v2); /*0x42abd6*/
  }
  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x42abde*/
}
