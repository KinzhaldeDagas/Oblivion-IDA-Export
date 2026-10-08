void __thiscall sub_676D90(int this)
{
  Actor *v1; // edi
  TESObjectREFR *vtbl; // esi
  int v3; // eax
  TESObjectREFR *v4; // eax
  char *v5; // eax
  char *Name; // [esp-8h] [ebp-Ch]

  v1 = ActorList_ReturnHead((ActorList *)(this + 0x68)); /*0x676d99*/
  while ( v1 ) /*0x676d9d*/
  {
    if ( !v1->vtbl ) /*0x676da4*/
      break; /*0x676da8*/
    vtbl = 0; /*0x676db6*/
    if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v1->vtbl->super.super.super.super.InitializeComponent + 0x64))(v1->vtbl) ) /*0x676db8*/
      vtbl = (TESObjectREFR *)v1->vtbl; /*0x676dbe*/
    v1 = *(Actor **)&v1->members.super.super.super.type; /*0x676dc2*/
    if ( vtbl ) /*0x676dc5*/
    {
      if ( Actor_IsInDialogueProcedure(vtbl) ) /*0x676dc9*/
      {
        if ( (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl[1].vtbl->super.super.InitializeComponent + 0x33))(vtbl[1].vtbl) ) /*0x676ddd*/
        {
          v3 = (*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl[1].vtbl->super.super.InitializeComponent + 0x33))(vtbl[1].vtbl); /*0x676dee*/
          if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 0x190))(v3) ) /*0x676dfa*/
          {
            v4 = (TESObjectREFR *)(*((int (__thiscall **)(TESObjectREFRVtbl *))vtbl[1].vtbl->super.super.InitializeComponent /*0x676e0b*/
                                   + 0x33))(vtbl[1].vtbl);
            if ( v4 ) /*0x676e0f*/
            {
              Name = TESObjectREFR_GetName(v4); /*0x676e18*/
              v5 = TESObjectREFR_GetName(vtbl); /*0x676e20*/
              Interface_ConsolePrint("%s %s%", v5, "is talking to ", Name); /*0x676e2b*/
            }
          }
        }
      }
    }
  }
}
