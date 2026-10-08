Actor **__thiscall sub_675740(ActorProcessManager *this, int a2, char a3)
{
  Actor **v3; // edi
  ActorProcessManager *v4; // esi
  int v5; // ebp
  Actor *ListHead; // eax
  Actor *i; // ebx
  Actor *vtbl; // ebp
  TESPackage *CurrentPackage; // eax
  int v10; // esi
  Actor **v11; // eax
  Actor **v12; // eax
  int v14; // [esp+10h] [ebp-8h]

  v3 = 0; /*0x675747*/
  v4 = this; /*0x675749*/
  v5 = 0; /*0x67574b*/
  v14 = 0; /*0x675751*/
  do /*0x67584c*/
  {
    if ( v5 ) /*0x675757*/
    {
      if ( v5 == 1 ) /*0x67575f*/
      {
        ListHead = ActorProcessManager_GetListHead(v4, 1); /*0x675762*/
      }
      else if ( v5 == 2 ) /*0x675767*/
      {
        ListHead = ActorProcessManager_GetListHead(v4, 2); /*0x67576a*/
      }
      else
      {
        ListHead = ActorProcessManager_GetListHead(v4, 3); /*0x675770*/
      }
    }
    else
    {
      ListHead = ActorProcessManager_GetListHead(v4, 0); /*0x67575a*/
    }
    for ( i = ActorList_ReturnHead((ActorList *)ListHead); i; v4 = this ) /*0x675780*/
    {
      if ( !i->vtbl ) /*0x675786*/
        break; /*0x67578a*/
      if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))i->vtbl->super.super.super.super.InitializeComponent + 0x64))(i->vtbl) ) /*0x675798*/
      {
        vtbl = (Actor *)i->vtbl; /*0x6757a2*/
        if ( i->vtbl ) /*0x6757a2*/
        {
          CurrentPackage = Actor::GetCurrentPackage((Actor *)i->vtbl); /*0x6757ae*/
          v10 = (int)CurrentPackage; /*0x6757b3*/
          if ( CurrentPackage ) /*0x6757b7*/
          {
            if ( CurrentPackage->members.type == kPackageType_Alarm && sub_606AD0(CurrentPackage, a2) ) /*0x6757c6*/
            {
              if ( !v3 ) /*0x6757d1*/
              {
                v11 = (Actor **)FormHeapAlloc(8u); /*0x6757d5*/
                if ( v11 ) /*0x6757df*/
                {
                  *v11 = 0; /*0x6757e1*/
                  v11[1] = 0; /*0x6757e3*/
                }
                else
                {
                  v11 = 0; /*0x6757e8*/
                }
                v3 = v11; /*0x6757ea*/
              }
              if ( a3 ) /*0x6757f1*/
              {
                sub_606B50(v10, (int)i, (int)v3, a2, vtbl); /*0x6757fb*/
              }
              else
              {
                if ( *v3 ) /*0x675802*/
                {
                  v12 = (Actor **)FormHeapAlloc(8u); /*0x675809*/
                  if ( v12 ) /*0x675813*/
                  {
                    *v12 = *v3; /*0x675817*/
                    v12[1] = 0; /*0x675819*/
                  }
                  else
                  {
                    v12 = 0; /*0x675822*/
                  }
                  v12[1] = v3[1]; /*0x675827*/
                  v3[1] = (Actor *)v12; /*0x67582a*/
                }
                *v3 = vtbl; /*0x67582d*/
              }
            }
          }
        }
      }
      i = *(Actor **)&i->members.super.super.super.type; /*0x67582f*/
      v5 = v14; /*0x675834*/
    }
    v14 = ++v5; /*0x675848*/
  }
  while ( v5 < 4 ); /*0x67584c*/
  if ( !a3 ) /*0x675857*/
    return v3; /*0x67586e*/
  FormHeapFree((unsigned int)v3); /*0x67585a*/
  return 0; /*0x675862*/
}
