// positive sp value has been detected, the output may be wrong!
int __userpurge sub_636674@<eax>(
        int (__thiscall *a1)(float *)@<eax>,
        TESPackage *a2@<ebx>,
        float *a3@<edi>,
        int *a4@<esi>,
        float a5,
        int a6,
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
  int *SafeFloatPointer; // eax
  float *(__thiscall *GetPos)(TESObjectREFR *); // eax
  float *v25; // eax
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
  TESObjectCELL *ParentCell; // [esp+1Ch] [ebp-3Ch]
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

  v14 = (TESObjectREFR *)a1(a3);
  sub_625290(v14, &a5);
  a14 = *a4;
  WorldSpace = TESObjectREFR_GetWorldSpace(v14);
  LODWORD(v42[1]) = TESObjectREFR_GetParentCell(v14);
  v40 = a5;
  v41 = a6;
  v42[0] = a7;
  if ( !(*(unsigned __int8 (__thiscall **)(int *, float *))(a14 + 0x3DC))(a4, a3) )
    goto LABEL_39;
  if ( sub_64ADA0((Actor *)a4) )
  {
    packageFlags = a2->members.packageFlags;
    if ( (packageFlags & 2) == 0 && (packageFlags & 4) == 0 )
    {
      v16 = *a4;
      v17 = sub_673980(a2->members.procedureArrayIndex);
      return (*(int (__thiscall **)(int *, int))(v16 + 0x17C))(a4, v17 - 1);
    }
  }
  location = a2->members.location;
  if ( location )
  {
    v20 = (TESObjectREFR *)sub_5697E0(location);
    if ( v20 )
    {
      if ( v20->vtbl->IsActor(v20) )
      {
        if ( a2->members.type == 0x16 )
        {
          if ( sub_5E3290(v20) && TesObjectREF_GetDistance((TESObjectREFR *)a3, v20, 0) < flt_A6B324 )
          {
            v26 = (*(int (__thiscall **)(int *))(*a4 + 0x410))(a4);
            if ( v26 )
            {
              if ( sub_683AA0(v26) )
              {
                sub_625290(v20, &v45);
                if ( sub_4D7E30(a3, &v45) > flt_A6B324 )
                  return (*(int (__thiscall **)(float *, float *))(*(_DWORD *)a3 + 0x1CC))(a3, &v45);
              }
            }
          }
        }
        else
        {
          v21 = v20->vtbl->GetPos(v20);
          v22 = sub_4121A0((float *)a4 + 0x35, &v45, v21);
          a8 = sub_404C90(v22);
          SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&flt_B36A88);
          if ( *(float *)SafeFloatPointer < (double)a8 || (double)(int)WorldSpace < v44 && *((_BYTE *)a4 + 0xD0) )
          {
            GetPos = v20->vtbl->GetPos;
            a7 = *(float *)a4;
            a8 = COERCE_FLOAT((int)GetPos(v20));
            v38 = TESObjectREFR_GetWorldSpace(v20);
            ParentCell = TESObjectREFR_GetParentCell(v20);
            v36 = *(_DWORD *)(LODWORD(a8) + 4);
            if ( !(*(unsigned __int8 (__thiscall **)(int *))(LODWORD(a7) + 0x3DC))(a4) )
              goto LABEL_39;
            v25 = v20->vtbl->GetPos(v20);
            a4[0x35] = *(_DWORD *)v25;
            a4[0x36] = *((_DWORD *)v25 + 1);
            a4[0x37] = *((_DWORD *)v25 + 2);
          }
        }
      }
    }
  }
  if ( (*(int (__thiscall **)(int *))(*a4 + 0x36C))(a4)
    && (!(*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 0x380))(a3)
     || (*(int (__thiscall **)(int *))(*a4 + 0x36C))(a4) != 4) )
  {
    if ( !ParentCell || !sub_4D74B0(ParentCell) )
      return (*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 0x320))(a3);
LABEL_39:
    JUMPOUT(0x636FBE);
  }
  if ( (a2->members.packageFlags & 0x2000) != 0 )
  {
    v27 = 0x201;
  }
  else
  {
    v27 = v47;
    if ( v47 == 0xFFFFFFFF )
    {
      v28 = a4[2];
      LOBYTE(v46) = 0;
      if ( v28 )
      {
        v29 = *(_BYTE *)(v28 + 0x20);
        if ( v29 == 0xF || v29 == 0xC )
          LOBYTE(v46) = 1;
      }
      v35 = v46;
      v46 = 2 * (_DWORD)v38;
      v34 = (float)(2 * (int)v38);
      v33 = (float)(int)v38;
      v27 = sub_629F40(a4, (Concurrency::details::SchedulerBase *)a3, v40, v33, v34, v35, 1);
    }
  }
  (*(void (__thiscall **)(int *, float *, int))(*a4 + 0x238))(a4, a3, v27);
  sub_566B30(a2, (int)&v39, (Actor *)a3);
  if ( v36 )
  {
    if ( v36 == (*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 0x380))(a3) )
    {
      v30 = (void *)(*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 0x380))(a3);
      v31 = sub_625290(v30, v42);
      v39 = *(_DWORD *)v31;
      v40 = v31[1];
      v41 = *((_DWORD *)v31 + 2);
    }
  }
  v32 = *a4;
  sub_566940(a2, (Actor *)a3);
  sub_566A40((char **)a2, (Actor *)a3);
  return (*(int (__thiscall **)(int *))(v32 + 0x414))(a4);
}
