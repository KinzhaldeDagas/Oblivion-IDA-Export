void __thiscall ExtraRagDollData::~ExtraRagDollData(ExtraRagDollData *this)
{
  _DWORD *v2; // edi

  *(_DWORD *)this = &ExtraRagDollData::`vftable';
  v2 = *((_DWORD **)this + 3);
  if ( v2 )
  {
    sub_497220(v2);
    FormHeapFree((unsigned int)v2);
  }
  *(_DWORD *)this = &BSExtraData::`vftable';
}
