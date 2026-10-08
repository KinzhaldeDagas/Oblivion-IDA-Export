char __thiscall sub_676D30(int this)
{
  Actor *v1; // eax
  Actor *v2; // esi
  TESObjectREFR *vtbl; // edi

  v1 = ActorList_ReturnHead((ActorList *)(this + 0x68)); /*0x676d34*/
  v2 = v1; /*0x676d39*/
  while ( v2 ) /*0x676d3d*/
  {
    if ( !v2->vtbl ) /*0x676d40*/
      break; /*0x676d44*/
    vtbl = 0; /*0x676d4e*/
    LOBYTE(v1) = (*((int (__thiscall **)(ActorVtbl *))v2->vtbl->super.super.super.super.InitializeComponent + 0x64))(v2->vtbl); /*0x676d50*/
    if ( (_BYTE)v1 ) /*0x676d54*/
      vtbl = (TESObjectREFR *)v2->vtbl; /*0x676d56*/
    v2 = *(Actor **)&v2->members.super.super.super.type; /*0x676d5a*/
    if ( vtbl ) /*0x676d5d*/
    {
      LOBYTE(v1) = Actor_IsInDialogueProcedure(vtbl); /*0x676d61*/
      if ( (_BYTE)v1 ) /*0x676d68*/
      {
        v1 = (Actor *)sub_5EAE10(vtbl); /*0x676d6c*/
        if ( v1 != (Actor *)reference ) /*0x676d77*/
          LOBYTE(v1) = vtbl->vtbl[1].GetAnimData(vtbl); /*0x676d83*/
      }
    }
  }
  return (char)v1; /*0x676d8a*/
}
