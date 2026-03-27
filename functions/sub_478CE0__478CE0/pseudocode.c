void __usercall sub_478CE0(char *this@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  Actor *v6; // edi
  _DWORD *AnimData; // eax

  sub_478780(this, a2, a3, a4, a5, (int)(this + 0xDC), 1, 0);
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x54) + 0x190))(*((_DWORD *)this + 0x54)) )
  {
    v6 = *((Actor **)this + 0x54);
    if ( !Actor_IsCreature(v6) )
    {
      if ( v6->members.super.process )
      {
        if ( Actor_IsWeaponOut(v6) )
        {
          if ( *((PlayerCharacter **)this + 0x54) == TESDataHandler_g_PlayerRef
            && this == (char *)sub_6600D0(TESDataHandler_g_PlayerRef, 1) )
          {
            AnimData = Player_GetAnimData((Actor *)TESDataHandler_g_PlayerRef, 1);
          }
          else
          {
            AnimData = TESObjectREFR_GetAnimData(v6);
          }
          if ( AnimData )
            AnimData[0x32] = v6;
        }
      }
    }
  }
}
