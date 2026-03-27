char __thiscall sub_65E900(TESObjectREFR *this)
{
  BSExtraDataVtbl *AnimData; // eax
  _BYTE *v3; // ebx
  BSExtraDataVtbl *v4; // edi

  AnimData = TESObjectREFR_GetAnimData((Actor *)this);
  v3 = *((_BYTE **)this + 0x173);
  v4 = AnimData;
  if ( AnimData )
  {
    if ( v3 )
    {
      LOBYTE(AnimData) = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x138))(*((_DWORD *)this + 0x16));
      if ( (_BYTE)AnimData )
      {
        LOBYTE(AnimData) = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x304))(*((_DWORD *)this + 0x16));
        if ( (_BYTE)AnimData )
        {
          AnimData = (BSExtraDataVtbl *)ActorAnimData_GetSomethingFromField8Value(v4, 3);
          if ( AnimData == (BSExtraDataVtbl *)2 )
          {
            sub_4706D0(v4, 3);
            LOBYTE(AnimData) = sub_4706D0(v3, 3);
          }
        }
      }
    }
  }
  return (char)AnimData;
}
