// positive sp value has been detected, the output may be wrong!
int __usercall MagicCaster_FindTouchTarget_::CalcDistToPlayer__@<eax>(int a1@<ebp>, int *edi0@<edi>)
{
  Actor *v2; // eax
  Actor *v3; // ebx
  TESObjectREFR *vtbl; // esi
  double DistanceBetween; // st7
  TESObjectREFR *v7; // [esp-28h] [ebp-28h]
  char v8; // [esp-20h] [ebp-20h]
  TESObjectREFR *v9; // [esp-18h] [ebp-18h]
  float v10; // [esp-14h] [ebp-14h]
  float v11; // [esp-10h] [ebp-10h]
  float v12; // [esp-Ch] [ebp-Ch] BYREF
  float v13[2]; // [esp-8h] [ebp-8h] BYREF

  v11 = flt_A32048;
  v7 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
  v12 = 0.0;
  if ( v13[1] >= TESObjectREFR_GetDistanceBetween_(edi0, (TESObjectREFR *)LODWORD(v10), v7, 0, v8) )
  {
    v13[0] = flt_A32048;
    if ( (!a1 || sub_6131D0(a1, (int)TESDataHandler_g_PlayerRef, v13)) && v13[0] <= dbl_A3A5B0 )
    {
      v11 = v13[0];
      v12 = *(float *)&TESDataHandler_g_PlayerRef;
    }
  }
  v2 = sub_673A50(&ActorProcessManager_ptr, 0);
  v3 = sub_7616D0((ActorList *)v2);
  while ( v3 )
  {
    if ( !*(_DWORD *)&v3->members.super.super.super.type && !v3->vtbl )
      break;
    vtbl = (TESObjectREFR *)v3->vtbl;
    if ( !v3->vtbl || !vtbl->vtbl->IsActor((TESObjectREFR *)v3->vtbl) )
      vtbl = 0;
    v3 = *(Actor **)&v3->members.super.super.super.type;
    if ( vtbl )
    {
      if ( vtbl != (TESObjectREFR *)LODWORD(v10)
        && !((unsigned __int8 (__thiscall *)(TESObjectREFR *))vtbl->vtbl->IsDead)(vtbl) )
      {
        if ( vtbl->vtbl->GetNiNode(vtbl) )
        {
          DistanceBetween = TESObjectREFR_GetDistanceBetween_(0, v9, vtbl, 0, 0);
          if ( v13[0] >= DistanceBetween )
          {
            v12 = flt_A32048;
            if ( (!a1 || sub_6131D0(a1, (int)vtbl, &v12)) && v10 >= (double)v12 )
            {
              v10 = v12;
              v11 = *(float *)&vtbl;
            }
          }
        }
      }
    }
  }
  if ( v11 == 0.0 )
    return 0;
  else
    return LODWORD(v11) + 0x68;
}
