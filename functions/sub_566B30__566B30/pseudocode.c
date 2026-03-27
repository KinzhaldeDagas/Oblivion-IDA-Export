int __thiscall sub_566B30(TESPackage *this, int a2, Actor *a3)
{
  float v3; // edx
  int v5; // ecx
  LocationData *location; // edi
  TESObjectCELL *v7; // eax
  TESObjectCELL *v8; // ebx
  TESObjectREFR *v9; // eax
  TESObjectCELL *v10; // eax
  TESObjectCELL *v11; // eax
  double v12; // st7
  _DWORD *v14; // eax
  void *v15; // eax
  float *v16; // eax
  int v17; // ecx
  int v18; // edx
  BSExtraDataMembr *v19; // eax
  LowProcess *process; // ecx
  int v21; // ecx
  BSExtraData *next; // edx
  int v23; // eax
  float v24[3]; // [esp+Ch] [ebp-18h] BYREF
  char v25[12]; // [esp+18h] [ebp-Ch] BYREF

  v3 = dword_B3F9B0;
  v5 = *((_DWORD *)&Vector3_InitValue_ + 1);
  location = this->members.location;
  *(float *)a2 = Vector3_InitValue_;
  *(_DWORD *)(a2 + 4) = v5;
  *(float *)(a2 + 8) = v3;
  if ( location && sub_569740((char *)location) != 2 )
  {
    switch ( sub_569740((char *)location) )
    {
      case 0:
        if ( !sub_5697E0(location) )
          return a2;
        v14 = (_DWORD *)sub_5697E0(location);
        if ( sub_4D74D0(v14) )
        {
          v15 = (void *)sub_5697E0(location);
          if ( v15 )
          {
            v16 = sub_625290(v15, v24);
            v17 = *((_DWORD *)v16 + 1);
            *(float *)a2 = *v16;
            v18 = *((_DWORD *)v16 + 2);
            *(_DWORD *)(a2 + 4) = v17;
            *(_DWORD *)(a2 + 8) = v18;
            return a2;
          }
        }
        v9 = (TESObjectREFR *)sub_5697E0(location);
LABEL_13:
        v19 = (BSExtraDataMembr *)v9->vtbl->GetPos(v9);
        break;
      case 1:
        v7 = (TESObjectCELL *)sub_569800(location);
        v8 = v7;
        if ( !v7 )
          return a2;
        v9 = sub_4CBA50(v7);
        if ( v9 )
          goto LABEL_13;
        if ( TESObjectCELL_IsInterior(v8) )
          return a2;
        v10 = (TESObjectCELL *)sub_569800(location);
        *(float *)a2 = (float)(TESObjectCELL_GetXCoordinate(v10) << 0xC);
        v11 = (TESObjectCELL *)sub_569800(location);
        v12 = (double)(TESObjectCELL_GetYCoordinate(v11) << 0xC);
        *(float *)(a2 + 4) = v12;
        *(float *)(a2 + 8) = 0.0;
        return a2;
      case 3:
        if ( !a3 )
          return a2;
        v19 = (BSExtraDataMembr *)((int (__thiscall *)(Actor *, char *))a3->vtbl->super.super.GetStartingPos)(a3, v25);
        goto LABEL_23;
      case 4:
      case 5:
        if ( !a3 )
          return a2;
        process = a3->members.super.process;
        if ( !process || process->GetCurrentPackage(process) != this )
          return a2;
        v9 = (TESObjectREFR *)((int (__thiscall *)(LowProcess *))a3->members.super.process->GetUnk030)(a3->members.super.process);
        if ( v9 )
          goto LABEL_13;
        v19 = (BSExtraDataMembr *)a3->vtbl->super.super.GetPos(a3);
        goto LABEL_23;
      default:
        return a2;
    }
    goto LABEL_23;
  }
  if ( a3 )
  {
    v19 = sub_4D79F0(a3);
LABEL_23:
    v21 = *(_DWORD *)&v19->type;
    next = v19->next;
    v23 = *(_DWORD *)&v19[1].type;
    *(_DWORD *)a2 = v21;
    *(_DWORD *)(a2 + 4) = next;
    *(_DWORD *)(a2 + 8) = v23;
  }
  return a2;
}
