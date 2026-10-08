void __usercall sub_679A70(
        ActorProcessManager *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        unsigned int a5@<ebx>,
        TESObjectREFR *a6@<ebp>,
        MobileObject *a7@<edi>)
{
  ActorProcessManager *v7; // esi
  int v8; // edi
  Actor *ListHead; // eax
  Actor *v10; // ebx
  Actor *i; // ebp
  int vtbl; // esi
  TESObjectCELL *v13; // eax
  int v14; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectCELL *v16; // eax
  int v20; // [esp+4h] [ebp-8h]

  v7 = a1; /*0x679a7b*/
  if ( !unk_B3A6D4 ) /*0x679a73*/
  {
    v8 = 0; /*0x679a8a*/
    v20 = 0; /*0x679a8c*/
    do /*0x679bde*/
    {
      if ( v8 ) /*0x679a92*/
      {
        if ( v8 == 1 ) /*0x679a9a*/
        {
          ListHead = ActorProcessManager_GetListHead(v7, 1); /*0x679a9d*/
        }
        else if ( v8 == 2 ) /*0x679aa2*/
        {
          ListHead = ActorProcessManager_GetListHead(v7, 2); /*0x679aa5*/
        }
        else
        {
          ListHead = ActorProcessManager_GetListHead(v7, 3); /*0x679aab*/
        }
      }
      else
      {
        ListHead = ActorProcessManager_GetListHead(v7, 0); /*0x679a95*/
      }
      v10 = ActorList_ReturnHead((ActorList *)ListHead); /*0x679ab7*/
      for ( i = v10; v10; v8 = v20 ) /*0x679abd*/
      {
        if ( !v10->vtbl ) /*0x679ac3*/
          break; /*0x679ac7*/
        vtbl = 0; /*0x679ad5*/
        if ( (*((unsigned __int8 (__thiscall **)(ActorVtbl *))v10->vtbl->super.super.super.super.InitializeComponent /*0x679ad7*/
              + 0x64))(v10->vtbl) )
          vtbl = (int)v10->vtbl; /*0x679add*/
        v10 = *(Actor **)&v10->members.super.super.super.type; /*0x679adf*/
        if ( vtbl ) /*0x679ae6*/
        {
          if ( !(*(int (__thiscall **)(int))(*(_DWORD *)vtbl + 0x154))(vtbl) /*0x679b1b*/
            || Shared_GetDwordAtOffset40((void *)vtbl)
            && (v13 = (TESObjectCELL *)Shared_GetDwordAtOffset40((void *)vtbl),
                TESObjectCELL_IsProcessLevel_LowHigh(v13, 0)) )
          {
            if ( !(*(int (__thiscall **)(int))(*(_DWORD *)vtbl + 0x154))(vtbl) && !sub_4354F0(MEMORY[0xB33A1C], vtbl) ) /*0x679b4b*/
            {
              v14 = *(_DWORD *)(vtbl + 8); /*0x679b54*/
              if ( (v14 & 0x800) == 0 && (v14 & 0x20) == 0 ) /*0x679b66*/
              {
                if ( Shared_GetDwordAtOffset40((void *)vtbl) ) /*0x679b6a*/
                {
                  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40((void *)vtbl); /*0x679b77*/
                  if ( TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 1) ) /*0x679b83*/
                  {
                    v16 = (TESObjectCELL *)Shared_GetDwordAtOffset40((void *)vtbl); /*0x679b8f*/
                    TESObjectCELL_AddReference(v16, (TESObjectREFR *)vtbl); /*0x679b96*/
                    v10 = i; /*0x679b9b*/
                  }
                }
              }
            }
          }
          else
          {
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)vtbl + 0x150))(vtbl, 0); /*0x679b30*/
          }
        }
        v7 = a1; /*0x679bc6*/
      }
      v20 = ++v8; /*0x679bda*/
    }
    while ( v8 < 4 ); /*0x679bde*/
    sub_441610((TESObjectCELL **)MEMORY[0xB333A0]); /*0x679bea*/
    sub_678750((int)v7, a5, a6, a7, (int)v7, a2, a3, a4); /*0x679bf8*/
  }
}
