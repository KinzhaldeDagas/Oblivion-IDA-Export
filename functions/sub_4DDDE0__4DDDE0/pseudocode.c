BSExtraData *__usercall sub_4DDDE0@<eax>(
        Actor *a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        double a4@<st2>,
        double a5@<st1>,
        double a6@<st0>)
{
  BSExtraData *result; // eax
  BSExtraData *v8; // edi
  Actor *v9; // ebp
  float *v10; // eax
  double v11; // st7
  ActorVtbl *vtbl; // edx
  float v13; // ecx
  float v14; // edx
  BSExtraDataVtbl *v15; // ecx
  TESObjectCELL *Destructor; // eax
  TESObjectCELL **WorldSpace; // ebx
  BSExtraDataVtbl *v18; // ecx
  TESObjectCELL *v19; // edi
  int v21; // [esp+0h] [ebp-28h]
  float v22; // [esp+Ch] [ebp-1Ch]
  float v23; // [esp+10h] [ebp-18h]
  float v24; // [esp+1Ch] [ebp-Ch]
  float v25[2]; // [esp+20h] [ebp-8h] BYREF
  float retaddr; // [esp+28h] [ebp+0h]

  ((void (__usercall *)(Actor *@<ecx>, void *, double@<st0>, double@<st1>))a1->vtbl->super.super.super.ClearModified)( /*0x4dddf1*/
    a1,
    &loc_800000,
    a6,
    a5);
  result = ExtraDataList_GetOblivionEntry(&a1->members.super.super.baseExtraList); /*0x4dddf6*/
  v8 = result; /*0x4dddfb*/
  if ( result ) /*0x4dddff*/
  {
    if ( result[2].vtbl ) /*0x4dde05*/
    {
      v9 = 0; /*0x4dde1a*/
      if ( ((unsigned __int8 (__thiscall *)(Actor *, int))a1->vtbl->super.super.IsActor)(a1, a3) ) /*0x4dde1c*/
      {
        v9 = a1; /*0x4dde26*/
        if ( a1->members.super.process ) /*0x4dde22*/
          sub_5EAE70(a1, a2, (int)v8, v21); /*0x4dde2c*/
      }
      v10 = (float *)(*((int (__thiscall **)(BSExtraDataVtbl *))v8[2].vtbl->Destructor + 0x5D))(v8[2].vtbl); /*0x4dde3d*/
      v22 = v10[1] - *(float *)&v8[1].members.type; /*0x4dde45*/
      v23 = v10[2] - *(float *)&v8[1].members.next; /*0x4dde4f*/
      v25[0] = *v10 - *(float *)&v8[1].vtbl; /*0x4dde5d*/
      v25[1] = v22; /*0x4dde65*/
      retaddr = v23; /*0x4dde6d*/
      v11 = Vector3_CalculateHeadingRadiansXY(v25); /*0x4dde7b*/
      v24 = v11; /*0x4dde80*/
      a1->members.super.super.rot.x = 0.0; /*0x4dde90*/
      a1->members.super.super.rot.y = 0.0; /*0x4dde93*/
      vtbl = a1->vtbl; /*0x4dde96*/
      a1->members.super.super.rot.z = v24; /*0x4dde9b*/
      vtbl->super.super.super.MarkAsModified((TESForm *)a1, 4); /*0x4ddea5*/
      v13 = *(float *)&v8[1].members.type; /*0x4ddeaa*/
      v14 = *(float *)&v8[1].members.next; /*0x4ddead*/
      LODWORD(a1->members.super.super.pos[0]) = v8[1].vtbl; /*0x4ddeb0*/
      a1->members.super.super.pos[1] = v13; /*0x4ddeb3*/
      a1->members.super.super.pos[2] = v14; /*0x4ddeb6*/
      a1->vtbl->super.super.super.MarkAsModified((TESForm *)a1, 4); /*0x4ddec2*/
      v15 = v8[2].vtbl; /*0x4ddec4*/
      Destructor = (TESObjectCELL *)v15[8].Destructor; /*0x4ddec7*/
      WorldSpace = 0; /*0x4ddeca*/
      if ( Destructor /*0x4ddedc*/
        || (Destructor = (TESObjectCELL *)(*(int (__thiscall **)(BSExtraDataVtbl *))v15[3].Destructor)(v15 + 3)) != 0 )
      {
        WorldSpace = (TESObjectCELL **)TESObjectCELL_GetWorldSpace(Destructor); /*0x4ddee5*/
      }
      v18 = v8[2].vtbl; /*0x4ddee7*/
      v19 = (TESObjectCELL *)v18[8].Destructor; /*0x4ddeea*/
      if ( v19 ) /*0x4ddeef*/
      {
        if ( !TESObjectCELL_IsInterior((TESObjectCELL *)v18[8].Destructor) ) /*0x4ddef3*/
          v19 = 0; /*0x4ddefc*/
      }
      if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) ) /*0x4ddf08*/
        sub_5E1360(a1, 0); /*0x4ddf12*/
      sub_4DD4B0((int)WorldSpace, a4, a5, v11, a1, v19, WorldSpace); /*0x4ddf1a*/
      if ( v9 ) /*0x4ddf25*/
      {
        if ( v9->members.super.process ) /*0x4ddf27*/
          v9->vtbl->super.MoveToLow((MobileObject *)v9); /*0x4ddf38*/
      }
      if ( a1->vtbl->super.super.IsDead((TESObjectREFR *)a1, 0) ) /*0x4ddf46*/
      {
        ExtraDataList_RemoveSavedMovementData(&a1->members.super.super.baseExtraList.vtbl); /*0x4ddf50*/
        ((void (__thiscall *)(Actor *, _DWORD))a1->vtbl->super.super.super.Unk_27)(a1, 0); /*0x4ddf61*/
      }
      ExtraDataList_SetOrRemoveOblivionEntry(&a1->members.super.super.baseExtraList, (int)a1, 0); /*0x4ddf69*/
      return ((BSExtraData *(__thiscall *)(Actor *, int))a1->vtbl->super.super.super.ClearModified)(a1, 0x4000); /*0x4ddf7a*/
    }
  }
  return result; /*0x4ddf7c*/
}
