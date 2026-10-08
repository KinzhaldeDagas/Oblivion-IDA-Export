char __userpurge sub_631050@<al>(
        int *ecx0@<ecx>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        double a4@<st2>,
        TESObjectREFR *arg0,
        float arg4)
{
  int v7; // eax
  TESPackage *v8; // edi
  TESObjectCELL *DwordAtOffset40; // eax
  TESWorldSpace *WorldSpace; // eax
  TESForm *v11; // eax
  TESObjectREFRVtbl *vtbl; // edx
  float *v13; // ebx
  unsigned int v14; // eax
  unsigned int v15; // eax
  double v16; // st7
  NiPoint3 *v17; // eax
  NiPoint3 *v18; // eax
  bool v19; // zf
  int v20; // ebx
  int v21; // eax
  double v22; // st7
  unsigned int v23; // eax
  TESObjectREFR *v24; // ebx
  int v25; // eax
  int *v26; // ecx
  TESForm *v27; // eax
  double v28; // st7
  double Distance; // st7
  void (__thiscall **v30)(int *, TESObjectREFR *, int); // edi
  UInt32 v31; // eax
  int v32; // eax
  float *v33; // edi
  char *v34; // eax
  float *v35; // eax
  int v36; // eax
  double v37; // st7
  float *v38; // ebx
  unsigned int v39; // eax
  int v40; // eax
  double v41; // st7
  float *v42; // eax
  TESWorldSpace *v43; // eax
  int v44; // eax
  double v45; // st7
  NiPoint3 *v46; // eax
  int v47; // edx
  int v48; // eax
  void (__thiscall **v49)(int *, TESObjectREFR *, NiPoint3 *, UInt32, TESWorldSpace *, _DWORD, _DWORD); // edi
  UInt32 v50; // eax
  char *Name; // eax
  float a3; // [esp+20h] [ebp-19Ch]
  char *a3a; // [esp+20h] [ebp-19Ch]
  float *v55; // [esp+24h] [ebp-198h]
  double v56; // [esp+24h] [ebp-198h]
  double x; // [esp+24h] [ebp-198h]
  float a5; // [esp+28h] [ebp-194h]
  TESWorldSpace *a5a; // [esp+28h] [ebp-194h]
  TESWorldSpace *a5b; // [esp+28h] [ebp-194h]
  float v61; // [esp+2Ch] [ebp-190h]
  double v62; // [esp+2Ch] [ebp-190h]
  float v63; // [esp+2Ch] [ebp-190h]
  float v64; // [esp+2Ch] [ebp-190h]
  double y; // [esp+2Ch] [ebp-190h]
  float v66; // [esp+30h] [ebp-18Ch]
  float v67; // [esp+30h] [ebp-18Ch]
  float v68; // [esp+30h] [ebp-18Ch]
  int *v69; // [esp+44h] [ebp-178h]
  const char *value; // [esp+44h] [ebp-178h]
  float v71; // [esp+44h] [ebp-178h]
  float v72; // [esp+44h] [ebp-178h]
  float v73; // [esp+44h] [ebp-178h]
  float v74; // [esp+44h] [ebp-178h]
  float v75; // [esp+44h] [ebp-178h]
  NiPoint3 a2; // [esp+48h] [ebp-174h] BYREF
  int v77; // [esp+54h] [ebp-168h] BYREF
  float v78; // [esp+58h] [ebp-164h]
  float v79; // [esp+5Ch] [ebp-160h]
  TESObjectCELL *a1; // [esp+60h] [ebp-15Ch]
  int v81; // [esp+64h] [ebp-158h]
  float v82[3]; // [esp+68h] [ebp-154h] BYREF
  int v83[3]; // [esp+74h] [ebp-148h] BYREF
  float v84[3]; // [esp+80h] [ebp-13Ch] BYREF
  char Format[300]; // [esp+8Ch] [ebp-130h] BYREF

  if ( Shared_GetDwordAtOffset40(arg0) ) /*0x631073*/
  {
    v7 = (*(int (__thiscall **)(int *))(*ecx0 + 0x184))(ecx0); /*0x63108b*/
    v8 = (TESPackage *)v7; /*0x63108d*/
    if ( v7 ) /*0x631091*/
    {
      if ( *(_DWORD *)(v7 + 0x18) != 1 ) /*0x63109b*/
        (*(void (__thiscall **)(int *, TESObjectREFR *, unsigned int))(*ecx0 + 0x188))(ecx0, arg0, 0xFFFFFFFF); /*0x6310ab*/
      DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(arg0); /*0x6310af*/
      if ( !TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x6310b6*/
      {
        a2 = *(NiPoint3 *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))arg0->vtbl->GetPos)( /*0x6310d1*/
                            arg0,
                            st7_0,
                            st6_0);
        WorldSpace = TESObjectREFR_GetWorldSpace(arg0); /*0x6310e7*/
        v11 = sub_44A270((TESWorldSpace **)g_TESDataHandler, a2.x, a2.y, WorldSpace, 0); /*0x631105*/
        vtbl = arg0->vtbl; /*0x63110a*/
        a1 = (TESObjectCELL *)v11; /*0x63110c*/
        v13 = vtbl->GetPos(arg0); /*0x63111c*/
        sub_566DB0(v8); /*0x63111e*/
        v66 = (float)(v14 >> 2); /*0x63113b*/
        sub_566DB0(v8); /*0x63113e*/
        v16 = (double)(int)(2 * (v15 / 3)); /*0x631156*/
        if ( ((v15 / 3) & 0x40000000) != 0 ) /*0x63115a*/
          v16 = v16 + flt_A2FC78; /*0x63115c*/
        v61 = v16; /*0x63116c*/
        v17 = (NiPoint3 *)sub_62E790((float *)&v77, *v13, v13[1], v13[2], v61, v66); /*0x631180*/
        a2 = *v17; /*0x63118a*/
        v18 = (NiPoint3 *)Actor_ChoosePathGridSteeringPosition(arg0, (float *)&v77, *v17, a1, COERCE_FLOAT(1), 0.0, 0); /*0x6311c3*/
        v19 = unk_B3B928 == 0; /*0x6311c8*/
        a2 = *v18; /*0x6311d1*/
        if ( v19 ) /*0x6311e3*/
        {
          BSSimpleList_Clear(&stru_B3B94C); /*0x6311ee*/
          v20 = 0; /*0x6311f9*/
          v69 = ecx0 + 0x6F; /*0x6311fb*/
          do /*0x631220*/
          {
            if ( !*v69 ) /*0x631204*/
              break; /*0x631208*/
            BSSimpleList_PushFront(&stru_B3B94C, *v69++); /*0x631210*/
            ++v20; /*0x63121a*/
          }
          while ( v20 < 4 ); /*0x631220*/
          sub_566DB0(v8); /*0x63122a*/
          v22 = (double)v21; /*0x631235*/
          if ( v21 < 0 ) /*0x631239*/
            v22 = v22 + flt_A2FC78; /*0x63123b*/
          a5 = v22; /*0x631242*/
          v55 = sub_566B30(v8, (float *)&v77, (Actor *)arg0); /*0x631252*/
          sub_566DB0(v8); /*0x631255*/
          a3 = (float)(v23 >> 1); /*0x631273*/
          sub_446B90(a1, &a2.x, a3, v55, a5, (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_62EAA0, (int)arg0); /*0x631282*/
        }
        v24 = (TESObjectREFR *)unk_B3B928; /*0x631287*/
        v19 = unk_B3B928 == 0; /*0x63128f*/
        unk_B3B928 = 0; /*0x631291*/
        if ( v19 ) /*0x631297*/
        {
          v35 = sub_566B30(v8, v82, (Actor *)arg0); /*0x631409*/
          *(float *)&v77 = a2.x - *v35; /*0x631414*/
          v78 = a2.y - v35[1]; /*0x63141f*/
          v79 = a2.z - v35[2]; /*0x63142a*/
          v72 = v78 * v78 + *(float *)&v77 * *(float *)&v77 + v79 * v79; /*0x63144a*/
          v73 = sqrt(v72); /*0x631457*/
          sub_566DB0(v8); /*0x631465*/
          v81 = v36; /*0x63146c*/
          v37 = (double)v36; /*0x631470*/
          if ( v36 < 0 ) /*0x631474*/
            v37 = v37 + flt_A2FC78; /*0x631476*/
          if ( v73 > v37 ) /*0x631487*/
          {
            do /*0x6315c2*/
            {
              v38 = sub_566B30(v8, v82, (Actor *)arg0); /*0x63149f*/
              sub_566DB0(v8); /*0x6314a1*/
              v81 = v39 >> 1; /*0x6314aa*/
              v67 = (float)(v39 >> 1); /*0x6314bd*/
              sub_566DB0(v8); /*0x6314c0*/
              v81 = v40; /*0x6314c7*/
              v41 = (double)v40; /*0x6314cb*/
              if ( v40 < 0 ) /*0x6314cf*/
                v41 = v41 + flt_A2FC78; /*0x6314d1*/
              v63 = v41; /*0x6314e1*/
              a2 = *(NiPoint3 *)sub_62E790(v84, *v38, v38[1], v38[2], v63, v67); /*0x6314fc*/
              v42 = sub_566B30(v8, (float *)v83, (Actor *)arg0); /*0x631519*/
              *(float *)&v77 = a2.x - *v42; /*0x631528*/
              v78 = a2.y - v42[1]; /*0x631533*/
              v79 = a2.z - v42[2]; /*0x63153e*/
              v43 = TESObjectREFR_GetWorldSpace(arg0); /*0x631542*/
              a1 = (TESObjectCELL *)sub_44A270((TESWorldSpace **)g_TESDataHandler, a2.x, a2.y, v43, 0); /*0x631569*/
              v74 = v78 * v78 + *(float *)&v77 * *(float *)&v77 + v79 * v79; /*0x631585*/
              v75 = sqrt(v74); /*0x631592*/
              sub_566DB0(v8); /*0x6315a0*/
              v81 = v44; /*0x6315a7*/
              v45 = (double)v44; /*0x6315ab*/
              if ( v44 < 0 ) /*0x6315af*/
                v45 = v45 + flt_A2FC78; /*0x6315b1*/
            }
            while ( v75 > v45 ); /*0x6315c2*/
          }
          v46 = (NiPoint3 *)Actor_ChoosePathGridSteeringPosition(arg0, (float *)v83, a2, a1, COERCE_FLOAT(1), 0.0, 0); /*0x6315f3*/
          v19 = ecx0[0x72] == 0; /*0x6315f8*/
          a2 = *v46; /*0x631601*/
          if ( !v19 ) /*0x631613*/
          {
            v47 = ecx0[0x71]; /*0x63161b*/
            v48 = ecx0[0x72]; /*0x631621*/
            ecx0[0x6F] = ecx0[0x70]; /*0x631627*/
            ecx0[0x70] = v47; /*0x63162d*/
            ecx0[0x71] = v48; /*0x631633*/
            ecx0[0x72] = 0; /*0x631639*/
          }
          if ( (*(int (__thiscall **)(int *))(*ecx0 + 0x36C))(ecx0) ) /*0x63164e*/
            (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x1B0))(ecx0, arg0); /*0x631660*/
          v68 = kTerrainLODQuadRayDirectionZ; /*0x63166e*/
          v49 = (void (__thiscall **)(int *, TESObjectREFR *, NiPoint3 *, UInt32, TESWorldSpace *, _DWORD, _DWORD))(*ecx0 + 0x418); /*0x63167a*/
          v64 = flt_A2FE7C; /*0x631680*/
          a5b = TESObjectREFR_GetWorldSpace(arg0); /*0x631688*/
          v50 = Shared_GetDwordAtOffset40(arg0); /*0x63168b*/
          (*v49)(ecx0, arg0, &a2, v50, a5b, LODWORD(v64), LODWORD(v68)); /*0x63169b*/
          if ( sub_579440() == arg0 ) /*0x6316a4*/
          {
            y = a2.y; /*0x6316ad*/
            x = a2.x; /*0x6316b7*/
            Name = TESObjectREFR_GetName(arg0); /*0x6316ba*/
            _sprintf(Format, "%s is wandering to point x %.02f and y %.02f", Name, x, y); /*0x6316ca*/
            Interface_ConsolePrint(Format); /*0x6316d4*/
          }
        }
        else
        {
          if ( ecx0[0x72] ) /*0x63129d*/
          {
            ecx0[ecx0[0x80]++ + 0x6F] = (int)v24; /*0x6312ab*/
            if ( ecx0[0x80] > 3 ) /*0x6312c0*/
              ecx0[0x80] = 0; /*0x6312c2*/
          }
          else
          {
            v25 = 0; /*0x6312ca*/
            v26 = ecx0 + 0x6F; /*0x6312cc*/
            while ( *v26 ) /*0x6312d4*/
            {
              ++v25; /*0x6312d6*/
              ++v26; /*0x6312d9*/
              if ( v25 >= 4 ) /*0x6312df*/
                goto LABEL_24; /*0x6312df*/
            }
            ecx0[v25 + 0x6F] = (int)v24; /*0x6312e3*/
          }
LABEL_24:
          v27 = v24->vtbl->GetBaseForm(v24); /*0x6312ea*/
          v28 = sub_46D5C0(v27); /*0x6312f7*/
          value = (const char *)Double_To_SInt32(v28); /*0x631306*/
          if ( !value ) /*0x63130a*/
            value = stru_B36B28.value; /*0x631312*/
          v71 = (float)(int)value; /*0x63131f*/
          Distance = TesObjectREF_GetDistance(arg0, v24, 0); /*0x631323*/
          if ( v71 < a4 ) /*0x631333*/
          {
            if ( (*(int (__usercall **)@<eax>(int *@<ecx>, double@<st0>, double@<st1>))(*ecx0 + 0x36C))( /*0x631344*/
                   ecx0,
                   Distance,
                   st6_0) )
            {
              (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x1B0))(ecx0, arg0); /*0x631356*/
            }
            v30 = (void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x418); /*0x63136f*/
            a5a = TESObjectREFR_GetWorldSpace(v24); /*0x63137d*/
            v31 = Shared_GetDwordAtOffset40(v24); /*0x631380*/
            v32 = ((int (__thiscall *)(TESObjectREFR *, UInt32, TESWorldSpace *, _DWORD, float))v24->vtbl->GetPos)( /*0x631390*/
                    v24,
                    v31,
                    a5a,
                    LODWORD(arg4),
                    COERCE_FLOAT(LODWORD(v71)));
            (*v30)(ecx0, arg0, v32); /*0x631398*/
            if ( sub_579440() == arg0 ) /*0x6313a1*/
            {
              v33 = (float *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))v24->vtbl->GetPos)( /*0x6313b3*/
                               v24,
                               arg4,
                               st6_0);
              v62 = v24->vtbl->GetPos(v24)[1]; /*0x6313c7*/
              v56 = *v33; /*0x6313cf*/
              a3a = TESObjectREFR_GetName(v24); /*0x6313d7*/
              v34 = TESObjectREFR_GetName(arg0); /*0x6313da*/
              _sprintf(Format, "%s is wandering to object %s at x %.02f and y %.02f", v34, a3a, v56, v62); /*0x6313ea*/
              Interface_ConsolePrint(Format); /*0x6313f4*/
            }
          }
        }
      }
    }
  }
  return 0; /*0x6316dc*/
}
