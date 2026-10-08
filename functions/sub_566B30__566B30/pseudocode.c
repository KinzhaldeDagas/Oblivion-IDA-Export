float *__thiscall sub_566B30(TESPackage *this, float *a2, Actor *a3)
{
  float z; // edx
  float y; // ecx
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

  z = g_zeroNiPoint3.z; /*0x566b35*/
  y = g_zeroNiPoint3.y; /*0x566b46*/
  location = this->members.location; /*0x566b4d*/
  *a2 = g_zeroNiPoint3.x; /*0x566b52*/
  a2[1] = y; /*0x566b54*/
  a2[2] = z; /*0x566b57*/
  if ( location && sub_569740((char *)location) != 2 ) /*0x566b6a*/
  {
    switch ( sub_569740((char *)location) ) /*0x566b80*/
    {
      case 0: /*0x566b80*/
        if ( !sub_5697E0(location) ) /*0x566c06*/
          return a2; /*0x566c06*/
        v14 = (_DWORD *)sub_5697E0(location); /*0x566c0e*/
        if ( TESObjectREFR_HasHorseCreatureBase(v14) ) /*0x566c15*/
        {
          v15 = (void *)sub_5697E0(location); /*0x566c20*/
          if ( v15 ) /*0x566c27*/
          {
            v16 = sub_625290(v15, v24); /*0x566c30*/
            v17 = *((_DWORD *)v16 + 1); /*0x566c37*/
            *a2 = *v16; /*0x566c3a*/
            v18 = *((_DWORD *)v16 + 2); /*0x566c3c*/
            *((_DWORD *)a2 + 1) = v17; /*0x566c3f*/
            *((_DWORD *)a2 + 2) = v18; /*0x566c43*/
            return a2; /*0x566c4d*/
          }
        }
        v9 = (TESObjectREFR *)sub_5697E0(location); /*0x566c52*/
LABEL_13:
        v19 = (BSExtraDataMembr *)v9->vtbl->GetPos(v9); /*0x566c57*/
        break; /*0x566c63*/
      case 1: /*0x566b80*/
        v7 = (TESObjectCELL *)sub_569800(location); /*0x566b89*/
        v8 = v7; /*0x566b8e*/
        if ( !v7 ) /*0x566b92*/
          return a2; /*0x566b92*/
        v9 = sub_4CBA50(v7); /*0x566b9a*/
        if ( v9 ) /*0x566ba1*/
          goto LABEL_13; /*0x566ba1*/
        if ( TESObjectCELL_IsInterior(v8) ) /*0x566ba9*/
          return a2; /*0x566bb0*/
        v10 = (TESObjectCELL *)sub_569800(location); /*0x566bb8*/
        *a2 = (float)(TESObjectCELL_GetXCoordinate(v10) << 0xC); /*0x566bd1*/
        v11 = (TESObjectCELL *)sub_569800(location); /*0x566bd3*/
        v12 = (double)(TESObjectCELL_GetYCoordinate(v11) << 0xC); /*0x566be6*/
        a2[1] = v12; /*0x566bed*/
        a2[2] = 0.0; /*0x566bf2*/
        return a2; /*0x566bfa*/
      case 3: /*0x566b80*/
        if ( !a3 ) /*0x566c6b*/
          return a2; /*0x566c6b*/
        v19 = (BSExtraDataMembr *)((int (__thiscall *)(Actor *, char *))a3->vtbl->super.super.GetStartingPos)(a3, v25); /*0x566c7a*/
        goto LABEL_23; /*0x566c7c*/
      case 4: /*0x566b80*/
      case 5: /*0x566b80*/
        if ( !a3 ) /*0x566c84*/
          return a2; /*0x566c84*/
        process = a3->members.super.process; /*0x566c86*/
        if ( !process || process->GetCurrentPackage(process) != this ) /*0x566c99*/
          return a2; /*0x566c99*/
        v9 = (TESObjectREFR *)((int (__thiscall *)(LowProcess *))a3->members.super.process->GetUnk030)(a3->members.super.process); /*0x566ca6*/
        if ( v9 ) /*0x566caa*/
          goto LABEL_13; /*0x566caa*/
        v19 = (BSExtraDataMembr *)a3->vtbl->super.super.GetPos(a3); /*0x566cb6*/
        goto LABEL_23; /*0x566cb8*/
      default:
        return a2;
    }
    goto LABEL_23; /*0x566c63*/
  }
  if ( a3 ) /*0x566cc0*/
  {
    v19 = sub_4D79F0(a3); /*0x566cc2*/
LABEL_23:
    v21 = *(_DWORD *)&v19->type; /*0x566cc7*/
    next = v19->next; /*0x566cc9*/
    v23 = *(_DWORD *)&v19[1].type; /*0x566ccc*/
    *(_DWORD *)a2 = v21; /*0x566ccf*/
    *((_DWORD *)a2 + 1) = next; /*0x566cd1*/
    *((_DWORD *)a2 + 2) = v23; /*0x566cd4*/
  }
  return a2; /*0x566bf5*/
}
