double __userpurge sub_566DC0@<st0>(
        TESPackage *this@<ecx>,
        double a2@<st0>,
        double st6_0@<st1>,
        Actor *a3,
        char a4,
        float a5)
{
  LocationData *location; // ecx
  TESWorldSpace *v9; // ebp
  TESObjectCELL *v10; // eax
  TESObjectCELL *v11; // edi
  TESWorldSpace *WorldSpace; // ebx
  TESObjectCELL *ParentCell; // eax
  TESPackage *v14; // ebp
  LocationData *v15; // ecx
  int Radius; // eax
  LocationData *v17; // ecx
  int v18; // ebx
  LocationData *v19; // ecx
  _DWORD *v20; // edi
  char *v21; // ecx
  Creature *v22; // eax
  LowProcess *process; // ecx
  int v24; // eax
  char v25; // al
  int v26; // edx
  void *v27; // eax
  bool v28; // zf
  int v29; // eax
  void *v30; // eax
  int v31; // eax
  bool v32; // bl
  CombatController *v33; // eax
  LowProcess *v34; // ecx
  float *v35; // eax
  float v36; // [esp+4h] [ebp-3Ch]
  int v38; // [esp+1Ch] [ebp-24h]
  TESObjectCELL *v39; // [esp+20h] [ebp-20h]
  double v40; // [esp+20h] [ebp-20h]
  int v41; // [esp+28h] [ebp-18h] BYREF
  float v42; // [esp+2Ch] [ebp-14h]
  float v43; // [esp+30h] [ebp-10h]
  int v44; // [esp+34h] [ebp-Ch] BYREF
  float v45; // [esp+38h] [ebp-8h]
  float v46; // [esp+3Ch] [ebp-4h]
  float v47; // [esp+44h] [ebp+4h]
  char v48; // [esp+48h] [ebp+8h]
  float v49; // [esp+4Ch] [ebp+Ch]
  float v50; // [esp+4Ch] [ebp+Ch]

  if ( !a3 )
    return a2;
  location = this->members.location;
  if ( location )
  {
    if ( sub_569740((char *)location) == 3 && !sub_5E0260(a3) )
      return a2;
  }
  v9 = sub_566940(this, a3);
  v10 = sub_566A40((char **)this, a3);
  v11 = v10;
  if ( v10 )
  {
    if ( !TESObjectCELL_IsInterior(v10) )
      v11 = 0;
  }
  WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a3);
  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a3);
  v39 = ParentCell;
  if ( !ParentCell )
    goto LABEL_11;
  if ( !TESObjectCELL_IsInterior(ParentCell) )
  {
    v39 = 0;
LABEL_11:
    if ( !v11 && WorldSpace == v9 )
    {
      v14 = this;
      goto LABEL_14;
    }
    return a2;
  }
  if ( v39 == v11 )
  {
    v14 = this;
    v17 = this->members.location;
    if ( !v17 || sub_569740((char *)v17) != 1 )
    {
LABEL_14:
      v15 = v14->members.location;
      if ( v15 )
        Radius = TESPackage_LocationData_GetRadius(v15);
      else
        Radius = 0;
      v18 = Radius;
      v38 = Radius;
      if ( a4 )
      {
        v18 = 0;
        v38 = 0;
      }
      else
      {
        st6_0 = a5;
        if ( a5 != flt_A30634 )
        {
          v18 = Double_To_SInt32(a2);
          v38 = v18;
        }
      }
      v48 = 0;
      sub_566B30(v14, (int)&v41, a3);
      v19 = v14->members.location;
      v20 = 0;
      if ( v19 )
        v20 = (_DWORD *)sub_5697E0(v19);
      if ( v18 )
        goto LABEL_49;
      v21 = (char *)v14->members.location;
      if ( !v21 )
        goto LABEL_48;
      if ( !v20 )
      {
        if ( sub_569740(v21) == 3 )
        {
          v48 = 1;
          v38 = 0xA;
          goto LABEL_49;
        }
        goto LABEL_48;
      }
      if ( v20 == (_DWORD *)((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>))a3->vtbl->GetMountedHorse)(a3, a2)
        && a3->members.super.process )
      {
        v22 = a3->vtbl->GetMountedHorse(a3);
        sub_625290(v22, (float *)&v44);
        if ( !a3->members.super.process->GetProcessLevel(a3->members.super.process) )
        {
          v41 = v44;
          v42 = v45;
          v43 = v46;
        }
        v38 = 0xA;
        v48 = 1;
        goto LABEL_49;
      }
      if ( sub_4D74B0(v20) )
      {
        process = a3->members.super.process;
        if ( process )
        {
          if ( ((int (__thiscall *)(LowProcess *))process->GetUnk128)(process) )
          {
            if ( !a3->members.super.process->GetProcessLevel(a3->members.super.process) )
            {
              v24 = ((int (__thiscall *)(LowProcess *))a3->members.super.process->GetUnk128)(a3->members.super.process);
              v41 = *(int *)v24;
              v42 = *(float *)(v24 + 4);
              v43 = *(float *)(v24 + 8);
            }
LABEL_40:
            v38 = 0x14;
            v48 = 1;
LABEL_49:
            if ( v14->members.type != 5
              || !v39
              || (v40 = a3->vtbl->super.super.GetPos(a3)[2],
                  v49 = v40 - *(float *)(sub_566B30(v14, (int)&v44, a3) + 8),
                  v50 = fabs(v49),
                  st6_0 = v50,
                  v50 <= fCostant_100) )
            {
              v32 = 0;
              if ( ((unsigned __int8 (__usercall *)@<al>(Actor *@<ecx>, int, double@<st0>))a3->vtbl->IsInCombat)(
                     a3,
                     1,
                     a2) )
              {
                if ( a3->vtbl->GetCombatController(a3) )
                {
                  v33 = a3->vtbl->GetCombatController(a3);
                  v32 = sub_6163A0((int)v33, (char)v20);
                }
              }
              a2 = (double)v38;
              v36 = a2;
              if ( !sub_684B30((int)a3, (int)&v41, v36, v48 == 0) || v32 )
              {
                if ( v20 )
                {
                  if ( sub_4D74B0(v20) )
                  {
                    v34 = a3->members.super.process;
                    if ( v34 )
                    {
                      if ( ((int (__thiscall *)(LowProcess *))v34->GetUnk128)(v34) )
                      {
                        v35 = (float *)((int (__usercall *)@<eax>(Actor *@<ecx>, double@<st0>))a3->vtbl->super.super.GetPos)(
                                         a3,
                                         a2);
                        *(float *)&v44 = *(float *)&v41 - *v35;
                        v45 = v42 - v35[1];
                        v46 = v43 - v35[2];
                        a2 = sub_404C90((float *)&v44);
                        if ( st6_0 >= fCostant_100
                          || a3->vtbl->super.super.GetSleepState((TESObjectREFR *)a3) != kSitSleep_Sitting )
                        {
                          a3->vtbl->super.super.GetSleepState((TESObjectREFR *)a3);
                        }
                      }
                    }
                  }
                }
              }
            }
            return a2;
          }
        }
      }
      if ( (*(int (__thiscall **)(_DWORD *))(*v20 + 0x170))(v20) == TESDataHandler_g_XMarkerHeading
        || (TESForm *)(*(int (__thiscall **)(_DWORD *))(*v20 + 0x170))(v20) == TESDataHandler_g_XMarker )
      {
        goto LABEL_40;
      }
      v25 = (*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>))(*v20 + 0x190))(v20, a2);
      v26 = *v20;
      if ( v25 )
      {
        if ( (*(int (__thiscall **)(_DWORD *))(v26 + 0x18C))(v20) == 9 )
        {
          v38 = 0x5A;
          v48 = 1;
          goto LABEL_49;
        }
        v27 = (void *)(*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>))(*v20 + 0x170))(v20, a2);
        a2 = sub_46D5C0(v27);
        st6_0 = (double)Double_To_SInt32(a2) + dbl_A46E48;
        v38 = Double_To_SInt32(a2);
        v28 = v38 == 0;
      }
      else
      {
        v47 = flt_A417B4;
        v29 = *(unsigned __int8 *)((*(int (__thiscall **)(_DWORD *))(v26 + 0x170))(v20) + 4);
        if ( v29 == 0x12 || v29 == 0x17 || v29 == 0x1C )
          v47 = 0.0;
        v30 = (void *)(*(int (__thiscall **)(_DWORD *))(*v20 + 0x170))(v20);
        a2 = sub_46D5C0(v30);
        st6_0 = (double)Double_To_SInt32(a2) + v47;
        v31 = Double_To_SInt32(a2);
        v28 = v31 == 0;
        v38 = v31;
        if ( v31 < 0 )
          goto LABEL_48;
      }
      if ( !v28 )
        goto LABEL_49;
LABEL_48:
      v38 = dword_B36B28;
      goto LABEL_49;
    }
  }
  return a2;
}
