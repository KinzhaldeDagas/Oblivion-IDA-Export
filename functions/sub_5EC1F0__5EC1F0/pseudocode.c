double __thiscall sub_5EC1F0(TESObjectREFR *this, float *a2)
{
  char v4; // bl
  int *v5; // eax
  TESObjectCELL *v6; // ecx
  bool v7; // zf
  TESObjectCELL *ParentCell; // eax
  void *v9; // eax
  TESWorldSpace *WorldSpace; // eax
  TESActorBase *v11; // ebx
  TESForm *v12; // esi
  float v14; // [esp+1Ch] [ebp-10h]
  int v17; // [esp+20h] [ebp-Ch] BYREF
  float v18; // [esp+24h] [ebp-8h]
  int v19; // [esp+28h] [ebp-4h]
  char v20; // [esp+30h] [ebp+4h]

  v14 = 1.0;
  if ( a2 )
  {
    if ( sub_4E8040(a2) )
    {
      if ( this->vtbl->GetBaseForm(this)->member.type != kFormType_Creature )
        v14 = 1.0 - flt_B3A400;
    }
    v20 = 0;
    v4 = 0;
    if ( sub_67ECC0(a2) || sub_67EC90(a2) )
    {
      v20 = sub_67ED20(a2);
      v4 = sub_67ECF0(a2);
    }
    else
    {
      if ( sub_67ECF0(a2) )
      {
        v4 = 1;
        v5 = (int *)sub_4BEF40((char *)a2);
        v17 = *v5;
        v6 = (TESObjectCELL *)dword_B3B784;
        v7 = dword_B3B784 == 0;
        v18 = *((float *)v5 + 1);
        v19 = v5[2];
        if ( v7 || !TESObjectCELL_IsInterior(v6) && !sub_4CC540(dword_B3B784, (float *)&v17) )
        {
          ParentCell = TESObjectREFR_GetParentCell(this);
          if ( TESObjectCELL_IsInterior(ParentCell) )
          {
            v9 = TESObjectREFR_GetParentCell(this);
          }
          else
          {
            WorldSpace = TESObjectREFR_GetWorldSpace(this);
            v9 = sub_44A270((TESWorldSpace **)TESDataHandler, *(float *)&v17, v18, WorldSpace, 0);
          }
          dword_B3B784 = (int)v9;
        }
        if ( Actor_IsUnderwater__(this, (int)&v17, (ExtraDataList *)dword_B3B784, flt_A6E688) )
          v20 = 1;
      }
      sub_67ED30(a2, v20);
    }
    if ( v20 )
    {
      v11 = 0;
      v12 = this->vtbl->GetBaseForm(this);
      if ( v12 )
      {
        if ( this->vtbl->IsActor(this) )
          v11 = (TESActorBase *)v12;
      }
      if ( !TESActorBase_CanSwim(v11) )
        return (float)(flt_B3A408 + v14);
      if ( !sub_5EA640(this) && !sub_5E3400((Actor *)this) )
        return (float)(*(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B3A418) + v14);
    }
    else
    {
      if ( sub_5E1E90(this) )
        v14 = flt_B3A408 + v14;
      if ( v4 )
      {
        if ( !sub_5E3400((Actor *)this) )
          return (float)(flt_B3A410 + v14);
      }
    }
  }
  return v14;
}
