char __thiscall sub_43AF30(TESObjectREFR **this)
{
  TESObjectCELL *DwordAtOffset40; // eax
  char result; // al
  int v4; // esi
  char v5; // al
  char v6; // al
  _DWORD *v7; // ecx
  Ni2DBuffer *v8; // eax
  IOManager *v9; // esi
  int v10[5]; // [esp-4h] [ebp-14h] BYREF

  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(*(this + 8)); /*0x43af3b*/
  result = TESObjectCELL_IsProcessLevel_LowHigh(DwordAtOffset40, 0); /*0x43af47*/
  if ( result ) /*0x43af4e*/
  {
    v4 = 0; /*0x43af54*/
    if ( !MEMORY[0xB33E90][0x1245] || (Cmd_AddAchievement_PC_ReturnTrueNoOp(), v5) ) /*0x43af66*/
    {
LABEL_7:
      if ( !(*(this + 8))->vtbl->IsActor(*(this + 8)) ) /*0x43af99*/
      {
        if ( sub_441E90(*(this + 8)) ) /*0x43afa9*/
        {
          v7 = *(this + 8); /*0x43afb2*/
          if ( !v7[0xF] ) /*0x43afb5*/
          {
            v8 = (Ni2DBuffer *)(*(int (__thiscall **)(_DWORD *))(*v7 + 0x14C))(v7); /*0x43afc3*/
            NiSmartPointer_Set__((Ni2DBuffer **)this + 0xB, v8); /*0x43afc9*/
          }
        }
      }
    }
    else
    {
      while ( v4 < 3 ) /*0x43af73*/
      {
        Sleep(5u); /*0x43af77*/
        ++v4; /*0x43af79*/
        if ( MEMORY[0xB33E90][0x1245] ) /*0x43af83*/
        {
          Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x43af85*/
          if ( !v6 ) /*0x43af8c*/
            continue; /*0x43af8c*/
        }
        goto LABEL_7; /*0x43af8c*/
      }
    }
    v9 = MEMORY[0xB33A10]; /*0x43afce*/
    v10[0] = (int)this; /*0x43afd7*/
    v10[4] = (int)v10; /*0x43afd9*/
    InterlockedIncrement((volatile LONG *)this + 2); /*0x43afe1*/
    return sub_43A5F0(&v9->members.taskQueue->vtbl, v10[0]); /*0x43afea*/
  }
  return result; /*0x43afef*/
}
