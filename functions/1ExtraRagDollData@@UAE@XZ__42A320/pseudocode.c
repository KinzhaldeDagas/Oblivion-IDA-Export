void __thiscall ExtraRagDollData::~ExtraRagDollData(ExtraRagDollData *this)
{
  _DWORD *v2; // edi

  *(_DWORD *)this = &ExtraRagDollData::`vftable'; /*0x42a349*/
  v2 = *((_DWORD **)this + 3); /*0x42a34f*/
  if ( v2 ) /*0x42a35c*/
  {
    sub_497220(v2); /*0x42a360*/
    FormHeapFree((unsigned int)v2); /*0x42a366*/
  }
  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x42a36e*/
}
