void __thiscall sub_666820(Actor *this, TESForm *a6, int a7)
{
  unsigned int *v8; // eax
  int v9; // edx
  unsigned int v10; // ebx

  sub_5E4440(this, (int)a6, a7); /*0x66682f*/
  v8 = sub_4D8D70(this, a6, a6->member.refID); /*0x66683b*/
  v10 = (unsigned int)v8; /*0x666840*/
  if ( v8 ) /*0x666844*/
  {
    ContainerEntryExtraData_DestroyDataTable(v8, v9); /*0x666848*/
    FormHeapFree(v10); /*0x66684e*/
    sub_664850(this, (int)a6); /*0x666859*/
  }
  else
  {
    if ( this[6].members.super.super.super.modlist.data ) /*0x666864*/
      PlayerCharacter_SetCurrentMagicItem(this, 0); /*0x666871*/
    this[6].members.super.super.super.modlist.data = 0; /*0x66687a*/
    PlayerCharacter_SetCurrentMagicItem(this, 0); /*0x666884*/
  }
}
