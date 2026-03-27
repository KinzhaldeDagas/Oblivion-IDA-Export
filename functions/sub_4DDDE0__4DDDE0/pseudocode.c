BSExtraData *__usercall sub_4DDDE0@<eax>(Actor *a1@<ecx>, int a2@<ebx>, int a3@<ebp>, double a4@<st2>, double a5@<st1>)
{
  BSExtraData *result; // eax
  int v7; // edi
  Actor *v8; // ebp
  float *v9; // eax
  double v10; // st7
  ActorVtbl *vtbl; // edx
  float v12; // ecx
  float v13; // edx
  int v14; // ecx
  TESObjectCELL *v15; // eax
  TESWorldSpace *WorldSpace; // ebx
  int v17; // ecx
  TESObjectCELL *v18; // edi
  int v20; // [esp+0h] [ebp-28h]
  float v21; // [esp+Ch] [ebp-1Ch]
  float v22; // [esp+10h] [ebp-18h]
  float v23; // [esp+1Ch] [ebp-Ch]
  float v24[2]; // [esp+20h] [ebp-8h] BYREF
  float retaddr; // [esp+28h] [ebp+0h]

  a1->vtbl->super.super.super.ClearModified((TESForm *)a1, (UInt32)&loc_800000);
  result = sub_420190(&a1->members.super.super.baseExtraList);
  v7 = (int)result;
  if ( result )
  {
    if ( result[2].vtbl )
    {
      v8 = 0;
      if ( ((unsigned __int8 (__thiscall *)(Actor *, int))a1->vtbl->super.super.IsActor)(a1, a3) )
      {
        v8 = a1;
        if ( a1->members.super.process )
          sub_5EAE70(a1, a2, v7, v20);
      }
      v9 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v7 + 0x18) + 0x174))(*(_DWORD *)(v7 + 0x18));
      v21 = v9[1] - *(float *)(v7 + 0x10);
      v22 = v9[2] - *(float *)(v7 + 0x14);
      v24[0] = *v9 - *(float *)(v7 + 0xC);
      v24[1] = v21;
      retaddr = v22;
      v10 = sub_683CB0(v24);
      v23 = v10;
      a1->members.super.super.rot.x = 0.0;
      a1->members.super.super.rot.y = 0.0;
      vtbl = a1->vtbl;
      a1->members.super.super.rot.z = v23;
      vtbl->super.super.super.MarkAsModified((TESForm *)a1, 4);
      v12 = *(float *)(v7 + 0x10);
      v13 = *(float *)(v7 + 0x14);
      a1->members.super.super.pos[0] = *(float *)(v7 + 0xC);
      a1->members.super.super.pos[1] = v12;
      a1->members.super.super.pos[2] = v13;
      a1->vtbl->super.super.super.MarkAsModified((TESForm *)a1, 4);
      v14 = *(_DWORD *)(v7 + 0x18);
      v15 = *(TESObjectCELL **)(v14 + 0x40);
      WorldSpace = 0;
      if ( v15 || (v15 = (TESObjectCELL *)(**(int (__thiscall ***)(int))(v14 + 0x18))(v14 + 0x18)) != 0 )
        WorldSpace = TESObjectCELL_GetWorldSpace(v15);
      v17 = *(_DWORD *)(v7 + 0x18);
      v18 = *(TESObjectCELL **)(v17 + 0x40);
      if ( v18 )
      {
        if ( !TESObjectCELL_IsInterior(*(TESObjectCELL **)(v17 + 0x40)) )
          v18 = 0;
      }
      if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) )
        sub_5E1360(a1, 0);
      sub_4DD4B0((int)WorldSpace, a4, a5, v10, a1, v18, WorldSpace);
      if ( v8 )
      {
        if ( v8->members.super.process )
          v8->vtbl->super.Unk_6A((MobileObject *)v8);
      }
      if ( a1->vtbl->super.super.IsDead((TESObjectREFR *)a1, 0) )
      {
        sub_4212E0(&a1->members.super.super.baseExtraList.vtbl);
        ((void (__thiscall *)(Actor *, _DWORD))a1->vtbl->super.super.super.Unk_27)(a1, 0);
      }
      sub_4201A0(&a1->members.super.super.baseExtraList, (int)a1, 0);
      return (BSExtraData *)((int (__thiscall *)(Actor *, int))a1->vtbl->super.super.super.ClearModified)(a1, 0x4000);
    }
  }
  return result;
}
