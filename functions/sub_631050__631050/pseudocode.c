char __userpurge sub_631050@<al>(
        int *ecx0@<ecx>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        TESObjectREFR *a4,
        float arg4)
{
  int v7; // eax
  TESPackage *v8; // edi
  TESObjectCELL *ParentCell; // eax
  int v10; // eax
  TESWorldSpace *WorldSpace; // eax
  TESForm *v12; // eax
  TESObjectREFRVtbl *vtbl; // edx
  float *v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // eax
  double v17; // st7
  float *v18; // eax
  int *v19; // eax
  bool v20; // zf
  int v21; // ebx
  int v22; // eax
  double v23; // st7
  unsigned int v24; // eax
  TESObjectREFR *v25; // ebx
  int v26; // eax
  _DWORD *v27; // ecx
  TESForm *v28; // eax
  double v29; // st7
  double Distance; // st7
  void (__thiscall **v31)(int *, TESObjectREFR *, int); // edi
  TESObjectCELL *v32; // eax
  int v33; // eax
  float *v34; // edi
  char *v35; // eax
  float *v36; // eax
  int v37; // eax
  double v38; // st7
  float *v39; // ebx
  unsigned int v40; // eax
  int v41; // eax
  double v42; // st7
  float *v43; // eax
  float *v44; // eax
  TESWorldSpace *v45; // eax
  int v46; // eax
  double v47; // st7
  int *v48; // eax
  int v49; // edx
  int v50; // eax
  void (__thiscall **v51)(int *, TESObjectREFR *, int *, TESObjectCELL *, TESWorldSpace *, _DWORD, _DWORD); // edi
  TESObjectCELL *v52; // eax
  char *Name; // eax
  float a3; // [esp+20h] [ebp-19Ch]
  char *a3a; // [esp+20h] [ebp-19Ch]
  float *v57; // [esp+24h] [ebp-198h]
  double v58; // [esp+24h] [ebp-198h]
  double v59; // [esp+24h] [ebp-198h]
  float a5; // [esp+28h] [ebp-194h]
  TESWorldSpace *a5a; // [esp+28h] [ebp-194h]
  TESWorldSpace *a5b; // [esp+28h] [ebp-194h]
  float v63; // [esp+2Ch] [ebp-190h]
  double v64; // [esp+2Ch] [ebp-190h]
  float v65; // [esp+2Ch] [ebp-190h]
  float v66; // [esp+2Ch] [ebp-190h]
  double v67; // [esp+2Ch] [ebp-190h]
  float v68; // [esp+30h] [ebp-18Ch]
  float v69; // [esp+30h] [ebp-18Ch]
  float v70; // [esp+30h] [ebp-18Ch]
  int *v71; // [esp+44h] [ebp-178h]
  int v72; // [esp+44h] [ebp-178h]
  float v73; // [esp+44h] [ebp-178h]
  float v74; // [esp+44h] [ebp-178h]
  float v75; // [esp+44h] [ebp-178h]
  float v76; // [esp+44h] [ebp-178h]
  float v77; // [esp+44h] [ebp-178h]
  int a2; // [esp+48h] [ebp-174h] BYREF
  int v79; // [esp+4Ch] [ebp-170h]
  float v80; // [esp+50h] [ebp-16Ch]
  int v81; // [esp+54h] [ebp-168h] BYREF
  float v82; // [esp+58h] [ebp-164h]
  float v83; // [esp+5Ch] [ebp-160h]
  TESObjectCELL *a1; // [esp+60h] [ebp-15Ch]
  int v85; // [esp+64h] [ebp-158h]
  _BYTE v86[12]; // [esp+68h] [ebp-154h] BYREF
  int v87[3]; // [esp+74h] [ebp-148h] BYREF
  float v88[3]; // [esp+80h] [ebp-13Ch] BYREF
  char Format[300]; // [esp+8Ch] [ebp-130h] BYREF

  if ( TESObjectREFR_GetParentCell(a4) )
  {
    v7 = (*(int (__thiscall **)(int *))(*ecx0 + 0x184))(ecx0);
    v8 = (TESPackage *)v7;
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 0x18) != 1 )
        (*(void (__thiscall **)(int *, TESObjectREFR *, unsigned int))(*ecx0 + 0x188))(ecx0, a4, 0xFFFFFFFF);
      ParentCell = TESObjectREFR_GetParentCell(a4);
      if ( !TESObjectCELL_IsInterior(ParentCell) )
      {
        v10 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>))a4->vtbl->GetPos)(a4, st7_0);
        a2 = *(int *)v10;
        v79 = *(int *)(v10 + 4);
        v80 = *(float *)(v10 + 8);
        WorldSpace = TESObjectREFR_GetWorldSpace(a4);
        v12 = sub_44A270((TESWorldSpace **)TESDataHandler, *(float *)&a2, *(float *)&v79, WorldSpace, 0);
        vtbl = a4->vtbl;
        a1 = (TESObjectCELL *)v12;
        v14 = vtbl->GetPos(a4);
        sub_566DB0(v8);
        v68 = (float)(v15 >> 2);
        sub_566DB0(v8);
        v17 = (double)(int)(2 * (v16 / 3));
        if ( ((v16 / 3) & 0x40000000) != 0 )
          v17 = v17 + flt_A2FC78;
        v63 = v17;
        v18 = sub_62E790((float *)&v81, *v14, v14[1], v14[2], v63, v68);
        a2 = *(int *)v18;
        v79 = *((int *)v18 + 1);
        v80 = v18[2];
        v19 = sub_5E2E20(a4, &v81, *(_DWORD *)v18, *((_DWORD *)v18 + 1), v18[2], a1, COERCE_FLOAT(1), 0, 0);
        v20 = dword_B3B928 == 0;
        a2 = *v19;
        v79 = v19[1];
        v80 = *((float *)v19 + 2);
        if ( v20 )
        {
          BSSimpleList_Clear(dword_B3B94C);
          v21 = 0;
          v71 = ecx0 + 0x6F;
          do
          {
            if ( !*v71 )
              break;
            BSSimpleList_PushFront(dword_B3B94C, *v71++);
            ++v21;
          }
          while ( v21 < 4 );
          sub_566DB0(v8);
          v23 = (double)v22;
          if ( v22 < 0 )
            v23 = v23 + flt_A2FC78;
          a5 = v23;
          v57 = (float *)sub_566B30(v8, (int)&v81, (Actor *)a4);
          sub_566DB0(v8);
          a3 = (float)(v24 >> 1);
          sub_446B90(
            a1,
            (float *)&a2,
            a3,
            v57,
            a5,
            (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_62EAA0,
            (int)a4);
        }
        v25 = (TESObjectREFR *)dword_B3B928;
        v20 = dword_B3B928 == 0;
        dword_B3B928 = 0;
        if ( v20 )
        {
          v36 = (float *)sub_566B30(v8, (int)v86, (Actor *)a4);
          *(float *)&v81 = *(float *)&a2 - *v36;
          v82 = *(float *)&v79 - v36[1];
          v83 = v80 - v36[2];
          v74 = v82 * v82 + *(float *)&v81 * *(float *)&v81 + v83 * v83;
          v75 = sqrt(v74);
          sub_566DB0(v8);
          v85 = v37;
          v38 = (double)v37;
          if ( v37 < 0 )
            v38 = v38 + flt_A2FC78;
          if ( v75 > v38 )
          {
            do
            {
              v39 = (float *)sub_566B30(v8, (int)v86, (Actor *)a4);
              sub_566DB0(v8);
              v85 = v40 >> 1;
              v69 = (float)(v40 >> 1);
              sub_566DB0(v8);
              v85 = v41;
              v42 = (double)v41;
              if ( v41 < 0 )
                v42 = v42 + flt_A2FC78;
              v65 = v42;
              v43 = sub_62E790(v88, *v39, v39[1], v39[2], v65, v69);
              a2 = *(int *)v43;
              v79 = *((int *)v43 + 1);
              v80 = v43[2];
              v44 = (float *)sub_566B30(v8, (int)v87, (Actor *)a4);
              *(float *)&v81 = *(float *)&a2 - *v44;
              v82 = *(float *)&v79 - v44[1];
              v83 = v80 - v44[2];
              v45 = TESObjectREFR_GetWorldSpace(a4);
              a1 = (TESObjectCELL *)sub_44A270((TESWorldSpace **)TESDataHandler, *(float *)&a2, *(float *)&v79, v45, 0);
              v76 = v82 * v82 + *(float *)&v81 * *(float *)&v81 + v83 * v83;
              v77 = sqrt(v76);
              sub_566DB0(v8);
              v85 = v46;
              v47 = (double)v46;
              if ( v46 < 0 )
                v47 = v47 + flt_A2FC78;
            }
            while ( v77 > v47 );
          }
          v48 = sub_5E2E20(a4, v87, a2, v79, v80, a1, COERCE_FLOAT(1), 0, 0);
          v20 = ecx0[0x72] == 0;
          a2 = *v48;
          v79 = v48[1];
          v80 = *((float *)v48 + 2);
          if ( !v20 )
          {
            v49 = ecx0[0x71];
            v50 = ecx0[0x72];
            ecx0[0x6F] = ecx0[0x70];
            ecx0[0x70] = v49;
            ecx0[0x71] = v50;
            ecx0[0x72] = 0;
          }
          if ( (*(int (__thiscall **)(int *))(*ecx0 + 0x36C))(ecx0) )
            (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x1B0))(ecx0, a4);
          v70 = flt_A30634;
          v51 = (void (__thiscall **)(int *, TESObjectREFR *, int *, TESObjectCELL *, TESWorldSpace *, _DWORD, _DWORD))(*ecx0 + 0x418);
          v66 = flt_A2FE7C;
          a5b = TESObjectREFR_GetWorldSpace(a4);
          v52 = TESObjectREFR_GetParentCell(a4);
          (*v51)(ecx0, a4, &a2, v52, a5b, LODWORD(v66), LODWORD(v70));
          if ( sub_579440() == a4 )
          {
            v67 = *(float *)&v79;
            v59 = *(float *)&a2;
            Name = TESObjectREFR_GetName(a4);
            _sprintf(Format, "%s is wandering to point x %.02f and y %.02f", Name, v59, v67);
            Interface_ConsolePrint(Format);
          }
        }
        else
        {
          if ( ecx0[0x72] )
          {
            ecx0[ecx0[0x80]++ + 0x6F] = (int)v25;
            if ( ecx0[0x80] > 3 )
              ecx0[0x80] = 0;
          }
          else
          {
            v26 = 0;
            v27 = ecx0 + 0x6F;
            while ( *v27 )
            {
              ++v26;
              ++v27;
              if ( v26 >= 4 )
                goto LABEL_24;
            }
            ecx0[v26 + 0x6F] = (int)v25;
          }
LABEL_24:
          v28 = v25->vtbl->GetBaseForm(v25);
          v29 = sub_46D5C0(v28);
          v72 = Double_To_SInt32(v29);
          if ( !v72 )
            v72 = dword_B36B28;
          v73 = (float)v72;
          Distance = TesObjectREF_GetDistance(a4, v25, 0);
          if ( v73 < st6_0 )
          {
            if ( (*(int (__usercall **)@<eax>(int *@<ecx>, double@<st0>))(*ecx0 + 0x36C))(ecx0, Distance) )
              (*(void (__thiscall **)(int *, TESObjectREFR *))(*ecx0 + 0x1B0))(ecx0, a4);
            v31 = (void (__thiscall **)(int *, TESObjectREFR *, int))(*ecx0 + 0x418);
            a5a = TESObjectREFR_GetWorldSpace(v25);
            v32 = TESObjectREFR_GetParentCell(v25);
            v33 = ((int (__thiscall *)(TESObjectREFR *, TESObjectCELL *, TESWorldSpace *, _DWORD, float))v25->vtbl->GetPos)(
                    v25,
                    v32,
                    a5a,
                    LODWORD(arg4),
                    COERCE_FLOAT(LODWORD(v73)));
            (*v31)(ecx0, a4, v33);
            if ( sub_579440() == a4 )
            {
              v34 = (float *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>))v25->vtbl->GetPos)(
                               v25,
                               arg4);
              v64 = v25->vtbl->GetPos(v25)[1];
              v58 = *v34;
              a3a = TESObjectREFR_GetName(v25);
              v35 = TESObjectREFR_GetName(a4);
              _sprintf(Format, "%s is wandering to object %s at x %.02f and y %.02f", v35, a3a, v58, v64);
              Interface_ConsolePrint(Format);
            }
          }
        }
      }
    }
  }
  return 0;
}
