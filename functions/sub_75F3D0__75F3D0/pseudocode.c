char __thiscall sub_75F3D0(NiTimeController *this, float applicationTime)
{
  char result; // al
  int v4; // ecx
  int v5; // ecx

  result = LOBYTE(this->members.flags) >> 5; /*0x75f3d6*/
  if ( (this->members.flags & 0x20) != 0 ) /*0x75f3db*/
  {
    this->members.cachedScaledTime = flt_A7A164; /*0x75f3e3*/
LABEL_6:
    v5 = *((_DWORD *)this + 0xF); /*0x75f40e*/
    if ( v5 ) /*0x75f413*/
    {
      result = (*(int (__stdcall **)(float, NiNode *, float *))(*(_DWORD *)v5 + 0x60))( /*0x75f42a*/
                 this->members.cachedScaledTime,
                 this->members.m_pTarget,
                 &applicationTime);
      if ( result ) /*0x75f42e*/
        return ((char (__thiscall *)(NiTimeController *, _DWORD))this->vtbl[1].super.Unk_0F)( /*0x75f43f*/
                 this,
                 LODWORD(applicationTime));
    }
    return result; /*0x75f43f*/
  }
  result = NiTimeController_IsUpdateUnchanged(this, applicationTime); /*0x75f3f0*/
  if ( !result ) /*0x75f3f7*/
    goto LABEL_6; /*0x75f3f7*/
  v4 = *((_DWORD *)this + 0xF); /*0x75f3f9*/
  if ( v4 ) /*0x75f3fe*/
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x94))(v4); /*0x75f408*/
    if ( result ) /*0x75f40c*/
      goto LABEL_6; /*0x75f40c*/
  }
  return result; /*0x75f441*/
}
