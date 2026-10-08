char __thiscall sub_75F650(NiTimeController *this, float applicationTime)
{
  char result; // al
  int v4; // ecx
  int v5; // ecx

  result = LOBYTE(this->members.flags) >> 5; /*0x75f656*/
  if ( (this->members.flags & 0x20) != 0 ) /*0x75f65b*/
  {
    this->members.cachedScaledTime = flt_A7A164; /*0x75f663*/
LABEL_6:
    v5 = *((_DWORD *)this + 0xF); /*0x75f68e*/
    if ( v5 ) /*0x75f693*/
    {
      result = (*(int (__stdcall **)(float, NiNode *, float *))(*(_DWORD *)v5 + 0x5C))( /*0x75f6aa*/
                 this->members.cachedScaledTime,
                 this->members.m_pTarget,
                 &applicationTime);
      if ( result ) /*0x75f6ae*/
        return ((char (__thiscall *)(NiTimeController *, _DWORD))this->vtbl[1].super.Unk_0F)( /*0x75f6c2*/
                 this,
                 LODWORD(applicationTime));
    }
    return result; /*0x75f6c2*/
  }
  result = NiTimeController_IsUpdateUnchanged(this, applicationTime); /*0x75f670*/
  if ( !result ) /*0x75f677*/
    goto LABEL_6; /*0x75f677*/
  v4 = *((_DWORD *)this + 0xF); /*0x75f679*/
  if ( v4 ) /*0x75f67e*/
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x94))(v4); /*0x75f688*/
    if ( result ) /*0x75f68c*/
      goto LABEL_6; /*0x75f68c*/
  }
  return result; /*0x75f6c4*/
}
