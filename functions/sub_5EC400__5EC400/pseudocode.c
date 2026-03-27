void __userpurge sub_5EC400(
        TESObjectREFR *this@<ecx>,
        float a2@<ebp>,
        float a3,
        float a4,
        float a5,
        float a6,
        int a7,
        UInt32 a8,
        const char *a9,
        float a10,
        float a11,
        float a12,
        int a13)
{
  double v14; // st7
  double v15; // rt1
  TESForm *v16; // edi
  TESForm *v17; // ebx
  TESForm *v18; // edi
  TESForm *v19; // ebx
  TESForm *v20; // edi
  TESForm *v21; // ebx
  NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiAVObject *> *ParentCell; // eax
  TESForm *v23; // ebx
  TESForm *v24; // edi
  TESForm *v25; // edi
  TESForm *v26; // ebx
  signed int v27; // edi
  TESObjectCELL *v28; // eax
  unsigned int v29; // edi
  NiNode *NiNode; // eax
  int v31; // eax
  int v32; // ebx
  float *v33; // eax
  float v34; // edi
  int v35; // eax
  TESObjectCELL *v36; // eax
  NiNode *(__thiscall *GetNiNode)(TESObjectREFR *); // edx
  NiNode *v38; // ebp
  float *v39; // eax
  float v40; // ecx
  float v41; // edx
  float v42; // eax
  double v43; // st6
  double v44; // st6
  double v45; // rt0
  double v46; // st7
  double v47; // rt1
  double v48; // rt2
  double v49; // st7
  TESObjectREFRVtbl *vtbl; // edx
  int v51; // ebx
  int v52; // edi
  TESForm *v53; // edi
  TESForm *v54; // ebx
  TESObjectCELL *v55; // eax
  int v56; // [esp-4h] [ebp-F8h]
  int v57; // [esp+0h] [ebp-F4h]
  int v58; // [esp+4h] [ebp-F0h]
  const char *v59; // [esp+8h] [ebp-ECh]
  float v60; // [esp+8h] [ebp-ECh]
  float v61; // [esp+Ch] [ebp-E8h]
  int v62; // [esp+Ch] [ebp-E8h]
  int v63; // [esp+10h] [ebp-E4h]
  float v64; // [esp+10h] [ebp-E4h]
  int v65; // [esp+10h] [ebp-E4h]
  float v66; // [esp+14h] [ebp-E0h]
  int v67; // [esp+14h] [ebp-E0h]
  const char *v68; // [esp+14h] [ebp-E0h]
  float v69; // [esp+18h] [ebp-DCh]
  float v70; // [esp+1Ch] [ebp-D8h]
  int v71; // [esp+24h] [ebp-D0h]
  int v72; // [esp+28h] [ebp-CCh]
  float v73; // [esp+40h] [ebp-B4h] BYREF
  float v74; // [esp+44h] [ebp-B0h]
  float v75; // [esp+48h] [ebp-ACh]
  float v76; // [esp+4Ch] [ebp-A8h]
  int v77; // [esp+50h] [ebp-A4h]
  float v78; // [esp+54h] [ebp-A0h]
  float v79; // [esp+58h] [ebp-9Ch]
  float v80; // [esp+5Ch] [ebp-98h]
  float v81; // [esp+60h] [ebp-94h]
  float v82; // [esp+64h] [ebp-90h]
  float v83; // [esp+68h] [ebp-8Ch]
  float v84; // [esp+6Ch] [ebp-88h]
  float v85; // [esp+70h] [ebp-84h]
  float v86; // [esp+74h] [ebp-80h]
  float v87; // [esp+78h] [ebp-7Ch]
  float v88; // [esp+7Ch] [ebp-78h]
  float v89; // [esp+80h] [ebp-74h]
  float v90; // [esp+84h] [ebp-70h]
  float v91; // [esp+88h] [ebp-6Ch]
  float v92; // [esp+8Ch] [ebp-68h]
  float v93; // [esp+90h] [ebp-64h]
  float v94; // [esp+94h] [ebp-60h]
  int v95; // [esp+98h] [ebp-5Ch] BYREF
  float v96; // [esp+9Ch] [ebp-58h]
  float v97; // [esp+A0h] [ebp-54h]
  float v98; // [esp+A4h] [ebp-50h]
  float v99; // [esp+A8h] [ebp-4Ch]
  float v100; // [esp+ACh] [ebp-48h]
  float v101; // [esp+B0h] [ebp-44h]
  float v102; // [esp+B4h] [ebp-40h]
  float v103; // [esp+B8h] [ebp-3Ch]
  float v104; // [esp+BCh] [ebp-38h]
  float v105; // [esp+C0h] [ebp-34h]
  float v106; // [esp+C4h] [ebp-30h]
  float v107; // [esp+C8h] [ebp-2Ch]
  float v108; // [esp+CCh] [ebp-28h]
  float v109; // [esp+D0h] [ebp-24h]
  float v110; // [esp+D4h] [ebp-20h]
  float v111; // [esp+D8h] [ebp-1Ch]
  int v112; // [esp+DCh] [ebp-18h]
  int v113; // [esp+E0h] [ebp-14h]
  int v114; // [esp+E4h] [ebp-10h]
  unsigned int v115; // [esp+F0h] [ebp-4h]

  if ( sub_5E1B30(this) )
  {
    v14 = flt_B148DC;
    if ( v14 < dbl_A2F928 )
      v14 = 1.0;
    v80 = v14;
    if ( v80 < (double)a3 )
    {
      v76 = a3;
      v81 = *(float *)&a7 - a4;
      v82 = *(float *)&a8 - a5;
      v79 = *(float *)&a9 - a6;
      v15 = dbl_A3D0C0;
      v81 = v81 * v15;
      v111 = v82 * v15;
      *(float *)&v77 = v15 * v79;
      do
      {
        v83 = Rand4(flt_A6E68C, flt_A524B0);
        v84 = Rand4(flt_A6E68C, flt_A524B0);
        v85 = Rand4(flt_A6E68C, flt_A524B0);
        v79 = a10 + v83;
        v82 = a11 + v84;
        v78 = a12 + v85;
        v79 = v79 + v81;
        v82 = v82 + v111;
        v78 = v78 + *(float *)&v77;
        v86 = v79;
        v73 = v79;
        v87 = v82;
        v74 = v82;
        v88 = v78;
        v75 = v78;
        sub_43F350(&v73);
        v16 = 0;
        v17 = this->vtbl->GetBaseForm(this);
        if ( v17 )
        {
          if ( this->vtbl->IsActor(this) )
            v16 = v17;
        }
        if ( (*(int (__thiscall **)(UInt32 *))(v16[1].member.refID + 0x38))(&v16[1].member.refID) )
        {
          v18 = 0;
          v19 = this->vtbl->GetBaseForm(this);
          if ( v19 )
          {
            if ( this->vtbl->IsActor(this) )
              v18 = v19;
          }
          if ( *(_BYTE *)(*(int (__thiscall **)(UInt32 *))(v18[1].member.refID + 0x38))(&v18[1].member.refID) )
          {
            v20 = 0;
            v21 = this->vtbl->GetBaseForm(this);
            if ( v21 )
            {
              if ( this->vtbl->IsActor(this) )
                v20 = v21;
            }
            v70 = COERCE_FLOAT((*(int (__thiscall **)(UInt32 *))(v20[1].member.refID + 0x38))(&v20[1].member.refID));
            v63 = LODWORD(v73);
            v66 = v74;
            v69 = v75;
            ParentCell = (NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiAVObject *> *)TESObjectREFR_GetParentCell(this);
            NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiAVObject *>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiAVObject *>(
              ParentCell,
              SLOBYTE(a2),
              a7,
              a8,
              (int)a9,
              v63,
              v66,
              v69,
              v70,
              0.0,
              NAN,
              0);
          }
        }
        v23 = 0;
        v24 = this->vtbl->GetBaseForm(this);
        if ( v24 )
        {
          if ( this->vtbl->IsActor(this) )
            v23 = v24;
        }
        if ( (*(int (__thiscall **)(UInt32 *))(v23[1].member.refID + 0x40))(&v23[1].member.refID) )
        {
          v25 = 0;
          v26 = this->vtbl->GetBaseForm(this);
          if ( v26 )
          {
            if ( this->vtbl->IsActor(this) )
              v25 = v26;
          }
          if ( *(_BYTE *)(*(int (__thiscall **)(UInt32 *))(v25[1].member.refID + 0x40))(&v25[1].member.refID) )
          {
            TESObjectREFR_GetParentCell(this);
            v27 = sub_4C9BE0(this);
            v28 = TESObjectREFR_GetParentCell(this);
            v29 = v27 + 2;
            NiNode = TESObjectCELL_GetNiNode_(v28);
            if ( NiNode
              && NiNode->members.children.end > v29
              && (v31 = *((_DWORD *)&NiNode->members.children.data->vtbl + v29)) != 0
              && *(_WORD *)(v31 + 0xB6) > 3u )
            {
              v32 = *(_DWORD *)(*(_DWORD *)(v31 + 0xB0) + 0xC);
            }
            else
            {
              v32 = 0;
            }
            a2 = COERCE_FLOAT(FormHeapAlloc(0x20u));
            v79 = a2;
            v33 = 0;
            v115 = 0;
            if ( a2 != 0.0 )
            {
              v34 = 0.0;
              v78 = COERCE_FLOAT((int)this->vtbl->GetBaseForm(this));
              if ( v78 != 0.0 && this->vtbl->IsActor(this) )
                v34 = v78;
              v35 = (*(int (__thiscall **)(int))(*(_DWORD *)(LODWORD(v34) + 0x24) + 0x40))(LODWORD(v34) + 0x24);
              v61 = v73;
              v64 = v74;
              v59 = (const char *)v35;
              v67 = LODWORD(v75);
              v36 = TESObjectREFR_GetParentCell(this);
              v33 = sub_5713F0(
                      (void *)LODWORD(a2),
                      (int)v36,
                      1.0,
                      v32,
                      v59,
                      v61,
                      v64,
                      v67,
                      *(float *)&a7,
                      a8,
                      a9,
                      1.0,
                      1);
            }
            v115 = 0xFFFFFFFF;
            sub_678D30((int *)&ActorProcessManager_ptr, (volatile LONG *)v33);
          }
        }
        v76 = v76 * dbl_A3C770;
      }
      while ( v80 < (double)v76 );
      GetNiNode = this->vtbl->GetNiNode;
      v95 = 0xFFFFFFFF;
      v38 = GetNiNode(this);
      v76 = a3;
      if ( v38 )
      {
        if ( v80 < (double)a3 )
        {
          v39 = this->vtbl->GetPos(this);
          v40 = *v39;
          v41 = v39[1];
          v42 = v39[2];
          v73 = v40;
          v43 = dbl_A46E48;
          v73 = v40 + v43;
          v74 = v41 + v43;
          v75 = v43 + v42;
          if ( v80 < (double)a3 )
          {
            v105 = v73 - *(float *)&a7;
            v106 = v74 - *(float *)&a8;
            v107 = v75 - *(float *)&a9;
            do
            {
              v86 = Rand4(flt_A641B0, flt_A47E6C);
              v87 = Rand5(flt_A524B0);
              v88 = Rand4(flt_A641B0, flt_A47E6C);
              v44 = dbl_A3F3E8;
              v99 = v86 * v44;
              v100 = v87 * v44;
              v101 = v44 * v88;
              v89 = v105 + v99;
              v90 = v106 + v100;
              v91 = v107 + v101;
              v45 = dbl_A2FAA0;
              v92 = v89 * v45;
              v93 = v90 * v45;
              v94 = v45 * v91;
              v83 = v92 + *(float *)&a7;
              v84 = v93 + *(float *)&a8;
              v85 = v94 + *(float *)&a9;
              v46 = Rand5(flt_A46B10);
              v77 = (int)floor(v46);
              LOBYTE(v78) = v77;
              v73 = v83 - a4;
              v74 = v84 - a5;
              v75 = v85 - a6;
              sub_43F350(&v73);
              v47 = dbl_A3C770;
              v96 = v73 * v47;
              v97 = v74 * v47;
              v98 = v47 * v75;
              v102 = a10 - v96;
              v73 = v102;
              v103 = a11 - v97;
              v74 = v103;
              v104 = a12 - v98;
              v75 = v104;
              sub_43F350(&v73);
              v48 = dbl_A46970;
              v108 = v73 * v48;
              v109 = v74 * v48;
              v110 = v48 * v75;
              *(float *)&v112 = v83 - v108;
              *(float *)&v113 = v84 - v109;
              *(float *)&v114 = v85 - v110;
              v49 = Rand5(flt_A46B14);
              vtbl = this->vtbl;
              *(float *)&v77 = v49;
              v51 = 0;
              v52 = (int)vtbl->GetBaseForm(this);
              if ( v52 )
              {
                if ( this->vtbl->IsActor(this) )
                  v51 = v52;
              }
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)(v51 + 0x24) + 0x38))(v51 + 0x24) )
              {
                v53 = 0;
                v54 = this->vtbl->GetBaseForm(this);
                if ( v54 )
                {
                  if ( this->vtbl->IsActor(this) )
                    v53 = v54;
                }
                if ( *(_BYTE *)(*(int (__thiscall **)(UInt32 *))(v53[1].member.refID + 0x38))(&v53[1].member.refID) )
                {
                  v72 = LODWORD(v78);
                  v71 = v77;
                  v68 = (const char *)sub_5E1BB0(this);
                  v60 = v73;
                  v62 = LODWORD(v74);
                  v65 = LODWORD(v75);
                  v56 = v112;
                  v57 = v113;
                  v58 = v114;
                  v55 = TESObjectREFR_GetParentCell(this);
                  sub_4CF1A0(v55, v56, v57, v58, v60, v62, v65, v68, v38, &v95, 0, *(float *)&v71, v72);
                }
              }
              v76 = v76 * dbl_A3C770;
            }
            while ( v80 < (double)v76 );
          }
        }
      }
    }
  }
}
