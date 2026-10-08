// positive sp value has been detected, the output may be wrong!
int __userpurge sub_636674@<eax>(
        int (__thiscall *a1)(float *)@<eax>,
        TESPackage *a2@<ebx>,
        float *a3@<edi>,
        int *a4@<esi>,
        float a5,
        int pointXYZ,
        float a7,
        float a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  TESObjectREFR *v14; // ebp
  UInt32 packageFlags; // eax
  int v16; // edi
  int v17; // eax
  LocationData *location; // ecx
  TESObjectREFR *v20; // ebp
  float *v21; // eax
  float *v22; // eax
  float *SafeFloatPointer; // eax
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  int *v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  char v29; // al
  void *v30; // eax
  float *v31; // eax
  int v32; // ebp
  float v33; // [esp-4h] [ebp-5Ch]
  float v34; // [esp+0h] [ebp-58h]
  char v35; // [esp+4h] [ebp-54h]
  int v36; // [esp+14h] [ebp-44h]
  _DWORD *DwordAtOffset40; // [esp+1Ch] [ebp-3Ch]
  TESWorldSpace *v38; // [esp+20h] [ebp-38h]
  int v39; // [esp+24h] [ebp-34h] BYREF
  float v40; // [esp+28h] [ebp-30h]
  int v41; // [esp+2Ch] [ebp-2Ch]
  float v42[2]; // [esp+30h] [ebp-28h] BYREF
  TESWorldSpace *WorldSpace; // [esp+38h] [ebp-20h]
  float v44; // [esp+40h] [ebp-18h]
  float v45; // [esp+44h] [ebp-14h] BYREF
  int v46; // [esp+50h] [ebp-8h]
  int v47; // [esp+54h] [ebp-4h]

  v14 = (TESObjectREFR *)a1(a3); /*0x63667c*/
  sub_625290(v14, &a5); /*0x636681*/
  a14 = *a4; /*0x63668a*/
  WorldSpace = TESObjectREFR_GetWorldSpace(v14); /*0x636693*/
  LODWORD(v42[1]) = Shared_GetDwordAtOffset40(v14); /*0x6366a3*/
  v40 = a5; /*0x6366a9*/
  v41 = pointXYZ; /*0x6366af*/
  v42[0] = a7; /*0x6366f6*/
  if ( !(*(unsigned __int8 (__thiscall **)(int *, float *))(a14 + 0x3DC))(a4, a3) ) /*0x636706*/
    goto LABEL_39; /*0x636706*/
  if ( sub_64ADA0((Actor *)a4) ) /*0x63670e*/
  {
    packageFlags = a2->members.packageFlags; /*0x636717*/
    if ( (packageFlags & 2) == 0 && (packageFlags & 4) == 0 ) /*0x636728*/
    {
      v16 = *a4; /*0x63672d*/
      v17 = sub_673980(a2->members.procedureArrayIndex); /*0x636730*/
      return (*(int (__thiscall **)(int *, int))(v16 + 0x17C))(a4, v17 - 1); /*0x63674d*/
    }
  }
  location = a2->members.location; /*0x636750*/
  if ( location ) /*0x636755*/
  {
    v20 = (TESObjectREFR *)sub_5697E0(location); /*0x636760*/
    if ( v20 ) /*0x636764*/
    {
      if ( v20->vtbl->IsActor(v20) ) /*0x636775*/
      {
        if ( a2->members.type == kPackageType_MountHorse ) /*0x636785*/
        {
          if ( sub_5E3290(v20) && TesObjectREF_GetDistance((TESObjectREFR *)a3, v20, 0) < flt_A6B324 ) /*0x6368e9*/
          {
            v26 = (*(int (__thiscall **)(int *))(*a4 + 0x410))(a4); /*0x6368f9*/
            if ( v26 ) /*0x6368fd*/
            {
              if ( sub_683AA0(v26) ) /*0x636905*/
              {
                sub_625290(v20, &v45); /*0x636919*/
                if ( TESObjectREFR::GetDistanceToPoint((TESObjectREFR *)a3, &v45) > (double)flt_A6B324 ) /*0x636935*/
                  return (*(int (__thiscall **)(float *, float *))(*(_DWORD *)a3 + 0x1CC))(a3, &v45); /*0x636953*/
              }
            }
          }
        }
        else
        {
          v21 = v20->vtbl->GetPos(v20); /*0x636794*/
          v22 = sub_4121A0((float *)a4 + 0x35, &v45, v21); /*0x6367a2*/
          a8 = NiPoint3_Length(v22); /*0x6367ae*/
          SafeFloatPointer = GameSetting_GetSafeFloatPointer(flt_B36A88); /*0x6367b7*/
          if ( *SafeFloatPointer < (double)a8 || (double)(int)WorldSpace < v44 && *((_BYTE *)a4 + 0xD0) ) /*0x6367e0*/
          {
            GetPos = v20->vtbl->GetPos; /*0x6367ee*/
            a7 = *(float *)a4; /*0x6367f4*/
            a8 = COERCE_FLOAT((int)GetPos(v20)); /*0x6367fe*/
            v38 = TESObjectREFR_GetWorldSpace(v20); /*0x636807*/
            DwordAtOffset40 = (_DWORD *)Shared_GetDwordAtOffset40(v20); /*0x636815*/
            v36 = *(_DWORD *)(LODWORD(a8) + 4); /*0x636823*/
            if ( !(*(unsigned __int8 (__thiscall **)(int *))(LODWORD(a7) + 0x3DC))(a4) ) /*0x63683a*/
              goto LABEL_39; /*0x63683a*/
            v25 = (int *)v20->vtbl->GetPos(v20); /*0x63684b*/
            a4[0x35] = *v25; /*0x63684f*/
            a4[0x36] = v25[1]; /*0x636858*/
            a4[0x37] = v25[2]; /*0x636861*/
          }
        }
      }
    }
  }
  if ( (*(int (__thiscall **)(int *))(*a4 + 0x36C))(a4) /*0x63689a*/
    && (!(*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 0x380))(a3)
     || (*(int (__thiscall **)(int *))(*a4 + 0x36C))(a4) != 4) )
  {
    if ( !DwordAtOffset40 || !sub_4D74B0(DwordAtOffset40) ) /*0x6368a8*/
      return (*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 0x320))(a3); /*0x6368c8*/
LABEL_39:
    JUMPOUT(0x636FBE); /*0x636fbe*/
  }
  if ( (a2->members.packageFlags & 0x2000) != 0 ) /*0x63695e*/
  {
    v27 = 0x201; /*0x636960*/
  }
  else
  {
    v27 = v47; /*0x636967*/
    if ( v47 == 0xFFFFFFFF ) /*0x63696e*/
    {
      v28 = a4[2]; /*0x636970*/
      LOBYTE(v46) = 0; /*0x636975*/
      if ( v28 ) /*0x63697a*/
      {
        v29 = *(_BYTE *)(v28 + 0x20); /*0x63697c*/
        if ( v29 == 0xF || v29 == 0xC ) /*0x636985*/
          LOBYTE(v46) = 1; /*0x636987*/
      }
      v35 = v46; /*0x636999*/
      v46 = 2 * (_DWORD)v38; /*0x63699a*/
      v34 = (float)(2 * (int)v38); /*0x6369a7*/
      v33 = (float)(int)v38; /*0x6369af*/
      v27 = sub_629F40(a4, (Actor *)a3, v40, v33, v34, v35, 1); /*0x6369bb*/
    }
  }
  (*(void (__thiscall **)(int *, float *, int))(*a4 + 0x238))(a4, a3, v27); /*0x6369cc*/
  sub_566B30(a2, (float *)&v39, (Actor *)a3); /*0x6369d6*/
  if ( v36 ) /*0x6369e1*/
  {
    if ( v36 == (*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 0x380))(a3) ) /*0x6369f1*/
    {
      v30 = (void *)(*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 0x380))(a3); /*0x6369fd*/
      v31 = sub_625290(v30, v42); /*0x636a06*/
      v39 = *(_DWORD *)v31; /*0x636a0d*/
      v40 = v31[1]; /*0x636a14*/
      v41 = *((_DWORD *)v31 + 2); /*0x636a1b*/
    }
  }
  v32 = *a4; /*0x636a23*/
  sub_566940(a2, (Actor *)a3); /*0x636a2c*/
  sub_566A40((char **)a2, (Actor *)a3); /*0x636a35*/
  return (*(int (__thiscall **)(int *))(v32 + 0x414))(a4); /*0x63674d*/
}
