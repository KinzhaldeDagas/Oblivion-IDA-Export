// Three-argument cdecl routine: returns float surface distance from 'from' to 'to'. All 24 callers push exactly from, to, and useActorProjection then reclaim 0x0C. The prior EDI register argument, fourth stack byte, and double return were analysis pollution.
float __cdecl TESObjectREFR_GetSurfaceDistance(TESObjectREFR *from, TESObjectREFR *to, bool useActorProjection)
{
  double v4; // st7
  bool v5; // bl
  float *v6; // eax
  float v7; // edx
  float v8; // ecx
  float v9; // eax
  TESObjectREFRVtbl *vtbl; // edx
  float *v11; // eax
  int v12; // edx
  int v13; // ecx
  float v14; // edx
  float v15; // ecx
  float v16; // edx
  int v17; // eax
  int v18; // eax
  void (__thiscall *v19)(UInt32); // edx
  int v20; // eax
  void (__thiscall *Unk_56)(TESObjectREFR *); // edx
  int v22; // eax
  double v23; // st7
  double v24; // st5
  bool v25; // c0
  bool v26; // c3
  double v27; // st7
  double v28; // st7
  TESObjectREFRVtbl *v29; // eax
  double v30; // st7
  void (__thiscall *Unk_57)(UInt32); // edx
  double v32; // st7
  TESObjectREFRVtbl *v33; // eax
  float (__thiscall *GetScale)(TESObjectREFR *); // edx
  double v35; // st7
  int v36; // eax
  double v38; // [esp+18h] [ebp-48h] BYREF
  double v39; // [esp+24h] [ebp-3Ch]
  int v40; // [esp+2Ch] [ebp-34h]
  double v41; // [esp+30h] [ebp-30h] BYREF
  float v42; // [esp+38h] [ebp-28h]
  float v43; // [esp+3Ch] [ebp-24h]
  float v44; // [esp+40h] [ebp-20h]
  float v45; // [esp+44h] [ebp-1Ch]
  float v46; // [esp+48h] [ebp-18h] BYREF
  float v47; // [esp+4Ch] [ebp-14h]
  float v48; // [esp+50h] [ebp-10h]
  float v49; // [esp+54h] [ebp-Ch]
  float v50[2]; // [esp+58h] [ebp-8h] BYREF
  float toa; // [esp+68h] [ebp+8h]
  char v53; // [esp+70h] [ebp+10h]

  if ( to ) /*0x612f5a*/
  {
    toa = TesObjectREF_GetDistance(from, to, 0); /*0x612f72*/
    v4 = toa; /*0x612f76*/
    if ( toa == dbl_A3A5B0 ) /*0x612f85*/
      return v4; /*0x612f85*/
    if ( !from->vtbl->IsActor(from) ) /*0x612f97*/
      goto LABEL_19; /*0x612f97*/
    if ( !to->vtbl->IsActor(to) ) /*0x612fab*/
      goto LABEL_19; /*0x612fab*/
    v5 = Actor_IsSwimming((Actor *)from) && Actor_IsSwimming((Actor *)to); /*0x612fbf*/
    v6 = from->vtbl->GetPos(from); /*0x612fdc*/
    v7 = v6[1]; /*0x612fde*/
    v8 = *v6; /*0x612fe1*/
    v9 = v6[2]; /*0x612fe3*/
    v45 = v7; /*0x612fe6*/
    vtbl = to->vtbl; /*0x612fea*/
    v44 = v8; /*0x612fec*/
    v46 = v9; /*0x612ff0*/
    v11 = vtbl->GetPos(to); /*0x612ffc*/
    v12 = *((_DWORD *)v11 + 1); /*0x613000*/
    *((float *)&v39 + 1) = *v11; /*0x613003*/
    v13 = *((_DWORD *)v11 + 2); /*0x613007*/
    v40 = v12; /*0x61300a*/
    v14 = *v11; /*0x61300e*/
    LODWORD(v41) = v13; /*0x613010*/
    v15 = v11[1]; /*0x613014*/
    v47 = v14; /*0x613017*/
    v16 = v11[2]; /*0x61301b*/
    v48 = v15; /*0x613020*/
    v49 = v16; /*0x613024*/
    if ( !v5 ) /*0x613029*/
    {
      if ( !v53 /*0x613063*/
        || (*(float *)&v38 = v46 - v49,
            *(float *)&v38 = fabs(*(float *)&v38),
            *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x196]) > (double)*(float *)&v38) )
      {
LABEL_19:
        v28 = *(float *)(((int (__thiscall *)(TESObjectREFR *, float *))to->vtbl->Unk_57)(to, v50) + 4);// Surface-distance tail reads each reference's boundMax.y via vtable slot 0x57, multiplies by GetScale, integer-converts their sum, and subtracts it from center distance. /*0x61314c*/
        v29 = to->vtbl; /*0x613160*/
        v41 = v28; /*0x613162*/
        v30 = ((double (__thiscall *)(TESObjectREFR *))v29->GetScale)(to); /*0x61316e*/
        Unk_57 = from->vtbl->Unk_57; /*0x613176*/
        v39 = v30 * v41; /*0x613180*/
        v32 = *(float *)(((int (__thiscall *)(TESObjectREFR *, float *))Unk_57)(from, &v46) + 4); /*0x613189*/
        v33 = from->vtbl; /*0x61318c*/
        v41 = v32; /*0x61318e*/
        GetScale = v33->GetScale; /*0x613196*/
        v38 = toa; /*0x61319e*/
        v35 = ((double (__thiscall *)(TESObjectREFR *))GetScale)(from); /*0x6131a2*/
        v36 = Double_To_SInt32(v35 * v41 + v39); /*0x6131ac*/
        return v38 - (double)v36; /*0x6131c1*/
      }
    }
    v17 = ((int (__thiscall *)(TESObjectREFR *, char *))from->vtbl->Unk_57)(from, (char *)&v41 + 4); /*0x613078*/
    *(float *)&v38 = *(float *)(v17 + 8) + v46; /*0x61308e*/
    v18 = ((int (__thiscall *)(TESObjectREFR *, char *))from->vtbl->Unk_56)(from, (char *)&v41 + 4); /*0x613094*/
    v19 = to->vtbl->Unk_57; /*0x61309f*/
    *((float *)&v41 + 1) = *(float *)(v18 + 8) + v46; /*0x6130aa*/
    v20 = ((int (__thiscall *)(TESObjectREFR *, char *))v19)(to, (char *)&v38 + 4); /*0x6130b0*/
    Unk_56 = to->vtbl->Unk_56; /*0x6130bb*/
    *((float *)&v38 + 1) = *(float *)(v20 + 8) + *(float *)&v41; /*0x6130c6*/
    v22 = ((int (__thiscall *)(TESObjectREFR *, float *))Unk_56)(to, v50); /*0x6130cc*/
    *((float *)&v39 + 1) = *(float *)(v22 + 8) + *(float *)&v41; /*0x6130d5*/
    v23 = *(float *)&v38; /*0x6130d9*/
    v24 = *((float *)&v39 + 1); /*0x6130e5*/
    if ( *((float *)&v38 + 1) < (double)*(float *)&v38 ) /*0x6130ec*/
    {
      v27 = *((float *)&v39 + 1); /*0x61312c*/
    }
    else
    {
      v25 = v24 < v23; /*0x6130ee*/
      v26 = v24 == v23; /*0x6130ee*/
      v27 = *((float *)&v39 + 1); /*0x6130f2*/
      if ( v25 || v26 ) /*0x6130f4*/
      {
LABEL_15:
        *((float *)&v41 + 1) = v44 - v47; /*0x6130fd*/
        v42 = v45 - v48; /*0x613115*/
        v43 = 0.0 - 0.0; /*0x61311d*/
        NiPoint3_Length((float *)&v41 + 1); /*0x613121*/
        goto LABEL_19; /*0x61312a*/
      }
    }
    if ( *((float *)&v41 + 1) > (double)*((float *)&v38 + 1) || *((float *)&v41 + 1) < v27 ) /*0x613144*/
      goto LABEL_19; /*0x613144*/
    goto LABEL_15; /*0x613144*/
  }
  return 0.0; /*0x612f5e*/
}
