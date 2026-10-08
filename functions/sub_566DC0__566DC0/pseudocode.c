double __userpurge sub_566DC0@<st0>(
        TESPackage *this@<ecx>,
        double result@<st0>,
        double st6_0@<st1>,
        double a4@<st2>,
        Actor *a5,
        char a6,
        float a7)
{
  LocationData *location; // ecx
  TESWorldSpace *v10; // ebp
  TESObjectCELL *v11; // eax
  TESObjectCELL *v12; // edi
  TESWorldSpace *WorldSpace; // ebx
  TESObjectCELL *DwordAtOffset40; // eax
  TESPackage *v15; // ebp
  LocationData *v16; // ecx
  int Radius; // eax
  LocationData *v18; // ecx
  int v19; // ebx
  LocationData *v20; // ecx
  _DWORD *v21; // edi
  char *v22; // ecx
  Creature *v23; // eax
  LowProcess *process; // ecx
  int v25; // eax
  char v26; // al
  int v27; // edx
  void *v28; // eax
  bool v29; // zf
  int v30; // eax
  void *v31; // eax
  int v32; // eax
  bool v33; // bl
  CombatController *v34; // eax
  LowProcess *v35; // ecx
  float *v36; // eax
  float v37; // [esp+4h] [ebp-3Ch]
  int value; // [esp+1Ch] [ebp-24h]
  TESObjectCELL *v40; // [esp+20h] [ebp-20h]
  double v41; // [esp+20h] [ebp-20h]
  int v42; // [esp+28h] [ebp-18h] BYREF
  float v43; // [esp+2Ch] [ebp-14h]
  float v44; // [esp+30h] [ebp-10h]
  int v45; // [esp+34h] [ebp-Ch] BYREF
  float v46; // [esp+38h] [ebp-8h]
  float v47; // [esp+3Ch] [ebp-4h]
  float v48; // [esp+44h] [ebp+4h]
  char v49; // [esp+48h] [ebp+8h]
  float v50; // [esp+4Ch] [ebp+Ch]
  float v51; // [esp+4Ch] [ebp+Ch]

  if ( !a5 ) /*0x566dd1*/
    return result; /*0x566dd1*/
  location = this->members.location; /*0x566ddd*/
  if ( location ) /*0x566de2*/
  {
    if ( sub_569740((char *)location) == 3 && !sub_5E0260(a5) ) /*0x566df0*/
      return result; /*0x566df7*/
  }
  v10 = sub_566940(this, a5); /*0x566e0f*/
  v11 = (TESObjectCELL *)sub_566A40((char **)this, a5); /*0x566e11*/
  v12 = v11; /*0x566e16*/
  if ( v11 ) /*0x566e1a*/
  {
    if ( !TESObjectCELL_IsInterior(v11) ) /*0x566e1e*/
      v12 = 0; /*0x566e27*/
  }
  WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a5); /*0x566e33*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5); /*0x566e35*/
  v40 = DwordAtOffset40; /*0x566e3c*/
  if ( !DwordAtOffset40 ) /*0x566e40*/
    goto LABEL_11; /*0x566e40*/
  if ( !TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x566e44*/
  {
    v40 = 0; /*0x566e4d*/
LABEL_11:
    if ( !v12 && WorldSpace == v10 ) /*0x566e5f*/
    {
      v15 = this; /*0x566e65*/
      goto LABEL_14; /*0x566e65*/
    }
    return result; /*0x566e5f*/
  }
  if ( v40 == v12 ) /*0x566e7b*/
  {
    v15 = this; /*0x566e81*/
    v18 = this->members.location; /*0x566e85*/
    if ( !v18 || sub_569740((char *)v18) != 1 ) /*0x566e94*/
    {
LABEL_14:
      v16 = v15->members.location; /*0x566e69*/
      if ( v16 ) /*0x566e6e*/
        Radius = TESPackage_LocationData_GetRadius(v16); /*0x566e70*/
      else
        Radius = 0; /*0x566ea2*/
      v19 = Radius; /*0x566ea9*/
      value = Radius; /*0x566eab*/
      if ( a6 ) /*0x566eaf*/
      {
        v19 = 0; /*0x566eb1*/
        value = 0; /*0x566eb3*/
      }
      else
      {
        a4 = a7; /*0x566ec7*/
        if ( a7 != kTerrainLODQuadRayDirectionZ ) /*0x566ecc*/
        {
          v19 = Double_To_SInt32(result); /*0x566ed3*/
          value = v19; /*0x566ed5*/
        }
      }
      v49 = 0; /*0x566ee5*/
      sub_566B30(v15, (float *)&v42, a5); /*0x566eea*/
      v20 = v15->members.location; /*0x566eef*/
      v21 = 0; /*0x566ef2*/
      if ( v20 ) /*0x566ef6*/
        v21 = (_DWORD *)sub_5697E0(v20); /*0x566efd*/
      if ( v19 ) /*0x566f01*/
        goto LABEL_49; /*0x566f01*/
      v22 = (char *)v15->members.location; /*0x566f07*/
      if ( !v22 ) /*0x566f0c*/
        goto LABEL_48; /*0x566f0c*/
      if ( !v21 ) /*0x566f14*/
      {
        if ( sub_569740(v22) == 3 ) /*0x56715a*/
        {
          v49 = 1; /*0x567160*/
          value = 0xA; /*0x567165*/
          goto LABEL_49; /*0x56716d*/
        }
        goto LABEL_48; /*0x56715a*/
      }
      if ( v21 == (_DWORD *)((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>))a5->vtbl->GetMountedHorse)( /*0x566f2a*/
                              a5,
                              result,
                              st6_0)
        && a5->members.super.process )
      {
        v23 = a5->vtbl->GetMountedHorse(a5); /*0x566f39*/
        sub_625290(v23, (float *)&v45); /*0x566f42*/
        if ( !a5->members.super.process->GetProcessLevel(a5->members.super.process) ) /*0x566f4f*/
        {
          v42 = v45; /*0x566f61*/
          v43 = v46; /*0x566f65*/
          v44 = v47; /*0x566f69*/
        }
        value = 0xA; /*0x566f6d*/
        v49 = 1; /*0x566f75*/
        goto LABEL_49; /*0x566f7a*/
      }
      if ( sub_4D74B0(v21) ) /*0x566f81*/
      {
        process = a5->members.super.process; /*0x566f8a*/
        if ( process ) /*0x566f8f*/
        {
          if ( ((int (__thiscall *)(LowProcess *))process->GetUnk128)(process) ) /*0x566f99*/
          {
            if ( !a5->members.super.process->GetProcessLevel(a5->members.super.process) ) /*0x566fa7*/
            {
              v25 = ((int (__thiscall *)(LowProcess *))a5->members.super.process->GetUnk128)(a5->members.super.process); /*0x566fb8*/
              v42 = *(int *)v25; /*0x566fbc*/
              v43 = *(float *)(v25 + 4); /*0x566fc3*/
              v44 = *(float *)(v25 + 8); /*0x566fca*/
            }
LABEL_40:
            value = 0x14; /*0x566fce*/
            v49 = 1; /*0x566fd6*/
LABEL_49:
            if ( v15->members.type != kPackageType_Wander /*0x5670d9*/
              || !v40
              || (v41 = a5->vtbl->super.super.GetPos(a5)[2],
                  v50 = v41 - sub_566B30(v15, (float *)&v45, a5)[2],
                  v51 = fabs(v50),
                  a4 = v51,
                  v51 <= fCostant_100) )
            {
              v33 = 0; /*0x56717e*/
              if ( ((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, int, double@<st0>, double@<st1>))a5->vtbl->IsInCombat)( /*0x567180*/
                     a5,
                     1,
                     result,
                     st6_0) )
              {
                if ( a5->vtbl->GetCombatController(a5) ) /*0x567190*/
                {
                  v34 = a5->vtbl->GetCombatController(a5); /*0x5671a0*/
                  v33 = sub_6163A0((int)v34, (char)v21); /*0x5671a9*/
                }
              }
              result = (double)value; /*0x5671b0*/
              v37 = result; /*0x5671bd*/
              if ( !sub_684B30((MobileObject *)a5, (float *)&v42, v37, v49 == 0) || v33 ) /*0x5671d0*/
              {
                if ( v21 ) /*0x5671d8*/
                {
                  if ( sub_4D74B0(v21) ) /*0x5671e0*/
                  {
                    v35 = a5->members.super.process; /*0x5671e9*/
                    if ( v35 ) /*0x5671ee*/
                    {
                      if ( ((int (__thiscall *)(LowProcess *))v35->GetUnk128)(v35) ) /*0x5671f8*/
                      {
                        v36 = (float *)((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>, double@<st1>))a5->vtbl->super.super.GetPos)( /*0x567208*/
                                         a5,
                                         result,
                                         st6_0);
                        *(float *)&v45 = *(float *)&v42 - *v36; /*0x567214*/
                        v46 = v43 - v36[1]; /*0x56721f*/
                        v47 = v44 - v36[2]; /*0x56722a*/
                        result = NiPoint3_Length((float *)&v45); /*0x56722e*/
                        if ( a4 >= fCostant_100 /*0x56724f*/
                          || a5->vtbl->super.super.GetSleepState((TESObjectREFR *)a5) != kSitSleep_Sitting )
                        {
                          a5->vtbl->super.super.GetSleepState((TESObjectREFR *)a5); /*0x56725b*/
                        }
                      }
                    }
                  }
                }
              }
            }
            return result; /*0x56725b*/
          }
        }
      }
      if ( (*(int (__thiscall **)(_DWORD *))(*v21 + 0x170))(v21) == MEMORY[0xB35EB0] /*0x567006*/
        || (TESForm *)(*(int (__thiscall **)(_DWORD *))(*v21 + 0x170))(v21) == MEMORY[0xB35EAC] )
      {
        goto LABEL_40; /*0x567006*/
      }
      v26 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>))(*v21 + 0x190))(v21, result, st6_0); /*0x567012*/
      v27 = *v21; /*0x567016*/
      if ( v26 ) /*0x56701a*/
      {
        if ( (*(int (__thiscall **)(_DWORD *))(v27 + 0x18C))(v21) == 9 ) /*0x56702b*/
        {
          value = 0x5A; /*0x56702d*/
          v49 = 1; /*0x567035*/
          goto LABEL_49; /*0x56703a*/
        }
        v28 = (void *)(*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>))(*v21 + 0x170))( /*0x567046*/
                        v21,
                        result,
                        st6_0);
        result = sub_46D5C0(v28); /*0x567049*/
        a4 = (double)Double_To_SInt32(result) + dbl_A46E48; /*0x56705e*/
        value = Double_To_SInt32(result); /*0x567069*/
        v29 = value == 0; /*0x56706d*/
      }
      else
      {
        v48 = flt_A417B4; /*0x5670f7*/
        v30 = *(unsigned __int8 *)((*(int (__thiscall **)(_DWORD *))(v27 + 0x170))(v21) + 4); /*0x5670fd*/
        if ( v30 == 0x12 || v30 == 0x17 || v30 == 0x1C ) /*0x56710e*/
          v48 = 0.0; /*0x567112*/
        v31 = (void *)(*(int (__thiscall **)(_DWORD *))(*v21 + 0x170))(v21); /*0x567120*/
        result = sub_46D5C0(v31); /*0x567123*/
        a4 = (double)Double_To_SInt32(result) + v48; /*0x567138*/
        v32 = Double_To_SInt32(result); /*0x56713c*/
        v29 = v32 == 0; /*0x567141*/
        value = v32; /*0x567143*/
        if ( v32 < 0 ) /*0x567147*/
          goto LABEL_48; /*0x567147*/
      }
      if ( !v29 ) /*0x56706f*/
        goto LABEL_49; /*0x56706f*/
LABEL_48:
      value = (int)stru_B36B28.value; /*0x567071*/
      goto LABEL_49; /*0x567077*/
    }
  }
  return result; /*0x566dd3*/
}
