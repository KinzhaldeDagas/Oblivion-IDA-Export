char __thiscall sub_695A50(Concurrency::details::SchedulerBase *this, int a2, int a3)
{
  TESObjectCELL *DwordAtOffset40; // eax
  int v9; // eax
  unsigned int v10; // edi
  int v11; // ebx
  int (__thiscall *v12)(Concurrency::details::SchedulerBase *); // eax
  NiControllerManager *SequenceByName; // eax
  float *v14; // ebx
  int v15; // edi
  int v16; // eax
  bool v17; // zf
  int v18; // eax
  NiObject *v19; // eax
  float v21; // [esp+24h] [ebp+4h]
  float v22; // [esp+28h] [ebp+8h]
  float v23; // [esp+28h] [ebp+8h]

  sub_69F1E0((TESObjectREFR *)this, a2, a3); /*0x695a81*/
  MagicBallProjectile_PlaySpecialIdle((MagicBallProjectile *)this); /*0x695a88*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x695a90*/
  TESObjectCELL_AddReference(DwordAtOffset40, (TESObjectREFR *)this); /*0x695a97*/
  if ( *((_DWORD *)this + 0x20) != 2 ) /*0x695aa3*/
  {
    v9 = *((_DWORD *)this + 0x1D); /*0x695aa5*/
    if ( *(_DWORD *)(v9 + 0x84) ) /*0x695aa8*/
    {
      v10 = *((_DWORD *)this + 0x22); /*0x695ab1*/
      v11 = *(_DWORD *)(*(_DWORD *)(v9 + 0x84) + 0xC); /*0x695abf*/
      if ( v10 ) /*0x695ac2*/
      {
        sub_6B73E0(*((_DWORD **)this + 0x22)); /*0x695ac6*/
        FormHeapFree(v10); /*0x695acc*/
        *((_DWORD *)this + 0x22) = 0; /*0x695ad4*/
      }
      *((_DWORD *)this + 0x22) = sub_65AC50(this, v11, 1, 0x102, 1); /*0x695aef*/
    }
  }
  if ( (*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x154))(this) ) /*0x695aff*/
  {
    v22 = fabs(*((float *)this + 0x21)); /*0x695b21*/
    *(float *)((*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x154))(this) + 0x60) = v22; /*0x695b29*/
  }
  v12 = *(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x154); /*0x695b34*/
  v21 = *((float *)this + 0x23); /*0x695b3a*/
  *((_DWORD *)this + 0x23) = 0; /*0x695b40*/
  SequenceByName = (NiControllerManager *)v12(this); /*0x695b4a*/
  if ( SequenceByName ) /*0x695b4e*/
  {
    SequenceByName = *((NiControllerManager **)this + 0x1D); /*0x695b54*/
    if ( *((_DWORD *)SequenceByName + 0x1C) ) /*0x695b57*/
    {
      v14 = (float *)FormHeapAlloc(0x1Cu); /*0x695b68*/
      if ( v14 ) /*0x695b7b*/
      {
        v15 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 0x1D) + 0x70) + 0xC); /*0x695b85*/
        v16 = (*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x154))(this); /*0x695b90*/
        SequenceByName = (NiControllerManager *)MagicCaster_CastingVFX_constr(v14, v15, v16); /*0x695b96*/
      }
      else
      {
        SequenceByName = 0; /*0x695b9d*/
      }
      v17 = *((_DWORD *)this + 0x20) == 2; /*0x695b9f*/
      *((_DWORD *)this + 0x23) = SequenceByName; /*0x695bae*/
      if ( v17 ) /*0x695bb4*/
      {
        if ( SequenceByName ) /*0x695bb8*/
        {
          v18 = (*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x154))(this); /*0x695bc4*/
          if ( v18 ) /*0x695bc8*/
            v19 = *(NiObject **)(v18 + 0xC); /*0x695bca*/
          else
            v19 = 0; /*0x695bcf*/
          SequenceByName = (NiControllerManager *)NiRTTI_Cast((BSStringT *)&stru_B3CAC0, v19); /*0x695bd7*/
          if ( SequenceByName ) /*0x695be1*/
          {
            SequenceByName = NiControllerManager_FindSequenceByName(SequenceByName, "SpecialIdle_AreaEffect"); /*0x695bea*/
            if ( SequenceByName ) /*0x695bf1*/
            {
              v23 = *((float *)SequenceByName + 0xC) * dbl_A31C70; /*0x695c03*/
              LOBYTE(SequenceByName) = MagicCaster_CastingVFX_ClearSomething___(*((_DWORD *)this + 0x23), 0, v23); /*0x695c10*/
              *(float *)(*((_DWORD *)this + 0x23) + 0x10) = v21; /*0x695c1f*/
            }
          }
        }
      }
    }
  }
  return (char)SequenceByName; /*0x695c22*/
}
