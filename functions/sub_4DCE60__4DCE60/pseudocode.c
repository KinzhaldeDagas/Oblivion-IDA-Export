void __userpurge sub_4DCE60(
        Actor *a1@<ecx>,
        double a2@<st0>,
        double st5_0@<st2>,
        double a4@<st1>,
        int a5@<ebp>,
        _DWORD *a6,
        char a7)
{
  int v9; // eax
  PlayerCharacter *v10; // ecx
  int v11; // edi
  int v12; // ebx

  if ( a1->members.super.super.niNode )
  {
    v9 = ((int (__thiscall *)(Actor *))a1->vtbl->super.super.Unk_5A)(a1);
    v10 = TESDataHandler_g_PlayerRef;
    v11 = v9;
    v12 = 1;
    if ( a1 == (Actor *)TESDataHandler_g_PlayerRef )
      v12 = 2;
    while ( 1 )
    {
      if ( a1 == (Actor *)v10 && v12 == 1 )
        v11 = sub_6600D0(v10, v10->isThirdPerson);
      if ( v11 )
        sub_47A640(v11, st5_0, a4, a2, a6, a7);
      else
        PrintError("Creatures are not allowed to wear rings.");
      if ( !--v12 )
        break;
      v10 = TESDataHandler_g_PlayerRef;
    }
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) )
    {
      sub_5EA1A0((int)a1, a5, (_DWORD *)a1->members.super.super.niNode);
      sub_5EE1B0(a1, a2);
    }
  }
}
