char __thiscall sub_676D30(int this)
{
  Actor *v1; // eax
  Actor *v2; // esi
  TESObjectREFR *vtbl; // edi

  v1 = sub_7616D0((ActorList *)(this + 0x68));
  v2 = v1;
  while ( v2 )
  {
    if ( !v2->vtbl )
      break;
    vtbl = 0;
    LOBYTE(v1) = (*((int (__thiscall **)(ActorVtbl *))v2->vtbl->super.super.super.super.InitializeComponent + 0x64))(v2->vtbl);
    if ( (_BYTE)v1 )
      vtbl = (TESObjectREFR *)v2->vtbl;
    v2 = *(Actor **)&v2->members.super.super.super.type;
    if ( vtbl )
    {
      LOBYTE(v1) = sub_5E6B40(vtbl);
      if ( (_BYTE)v1 )
      {
        v1 = (Actor *)sub_5EAE10(vtbl);
        if ( v1 != (Actor *)TESDataHandler_g_PlayerRef )
          LOBYTE(v1) = vtbl->vtbl[1].GetAnimData(vtbl);
      }
    }
  }
  return (char)v1;
}
