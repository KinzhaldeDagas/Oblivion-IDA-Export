char __thiscall sub_65E900(TESObjectREFR *this)
{
  BSExtraDataVtbl *AnimData; // eax
  _BYTE *v3; // ebx
  BSExtraDataVtbl *v4; // edi

  AnimData = TESObjectREFR_GetAnimData((Actor *)this); /*0x65e905*/
  v3 = *((_BYTE **)this + 0x173); /*0x65e90a*/
  v4 = AnimData; /*0x65e910*/
  if ( AnimData ) /*0x65e914*/
  {
    if ( v3 ) /*0x65e918*/
    {
      LOBYTE(AnimData) = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x138))(*((_DWORD *)this + 0x16)); /*0x65e925*/
      if ( (_BYTE)AnimData ) /*0x65e929*/
      {
        LOBYTE(AnimData) = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x304))(*((_DWORD *)this + 0x16)); /*0x65e936*/
        if ( (_BYTE)AnimData ) /*0x65e93a*/
        {
          AnimData = (BSExtraDataVtbl *)ActorAnimData_GetSlotActionState(v4, 3); /*0x65e940*/
          if ( AnimData == (BSExtraDataVtbl *)2 ) /*0x65e948*/
          {
            ActorAnimData_SetUpdateState(v4, 3); /*0x65e94e*/
            LOBYTE(AnimData) = ActorAnimData_SetUpdateState(v3, 3); /*0x65e957*/
          }
        }
      }
    }
  }
  return (char)AnimData; /*0x65e95c*/
}
