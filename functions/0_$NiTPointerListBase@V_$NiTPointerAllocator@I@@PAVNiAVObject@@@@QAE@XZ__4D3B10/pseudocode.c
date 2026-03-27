void __userpurge NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiAVObject *>::NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiAVObject *>(
        NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiAVObject *> *this@<ecx>,
        char a2@<bpl>,
        int a3,
        int a4,
        int a5,
        int a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        int a12)
{
  _DWORD *v13; // edi
  int v14; // eax
  NiNode *v15; // eax
  FreeEntry *v16; // eax
  unsigned __int8 v17; // cl
  _DWORD *v18; // eax
  hkAllCdPointCollector *v19; // eax
  int *v20; // eax
  double v21; // rt0
  int v22; // eax
  double v23; // rt1
  double v24; // rt2
  hkAllCdPointCollector *v25; // ecx
  UInt32 v26; // ebp
  const char *v27; // ebx
  int v28; // eax
  NiNode *v29; // esi
  _DWORD *v30; // eax
  bool v31; // zf
  _DWORD *v32; // edx
  _DWORD *v33; // eax
  _DWORD *v34; // esi
  _DWORD *v35; // eax
  TES *v36; // ecx
  NiNode *v37; // eax
  NiNode *v38; // esi
  TES *v39; // ecx
  double v40; // rtt
  NiNode *v41; // eax
  _DWORD *v42; // esi
  _DWORD *v43; // eax
  int v44; // [esp+Ch] [ebp-5Ch]
  float v45; // [esp+20h] [ebp-48h]
  float v46; // [esp+20h] [ebp-48h]
  float v47; // [esp+20h] [ebp-48h]
  float v48; // [esp+20h] [ebp-48h]
  float v49; // [esp+20h] [ebp-48h]
  float v50; // [esp+20h] [ebp-48h]
  float v51; // [esp+20h] [ebp-48h]
  float v52; // [esp+20h] [ebp-48h]
  float v53; // [esp+24h] [ebp-44h]
  float v54; // [esp+28h] [ebp-40h]
  float v55; // [esp+28h] [ebp-40h]
  int v56; // [esp+28h] [ebp-40h]
  float v58; // [esp+30h] [ebp-38h]
  float v59; // [esp+30h] [ebp-38h]
  float v60; // [esp+30h] [ebp-38h]
  float v61; // [esp+30h] [ebp-38h]
  float v62; // [esp+30h] [ebp-38h]
  float v63; // [esp+30h] [ebp-38h]
  float v64; // [esp+30h] [ebp-38h]
  int v65; // [esp+34h] [ebp-34h] BYREF
  float v66; // [esp+38h] [ebp-30h]
  float v67; // [esp+3Ch] [ebp-2Ch]
  float v68[3]; // [esp+40h] [ebp-28h] BYREF
  void **v69; // [esp+4Ch] [ebp-1Ch] BYREF
  _DWORD *v70; // [esp+50h] [ebp-18h]
  _DWORD *v71; // [esp+54h] [ebp-14h]
  int v72; // [esp+58h] [ebp-10h]
  int v73; // [esp+64h] [ebp-4h]

  v53 = Rand5(flt_A46B14);
  v54 = Rand5(flt_A46B10);
  v55 = floor(v54);
  v13 = 0;
  v56 = (int)v55;
  if ( a10 == 0.0 )
  {
    sub_43F350((float *)&a6);
    if ( !dword_B35C08 )
    {
      v16 = j_MemoryHeap_Alloc(&FormHeap, a2, 0x1000001C0uLL, v44);
      v17 = 0x10 - ((unsigned __int8)v16 & 0xF);
      v18 = (FreeEntry **)((char *)&v16->prev + v17);
      *((_BYTE *)v18 + 0xFFFFFFFF) = v17;
      a10 = *(float *)&v18;
      v19 = (hkAllCdPointCollector *)sub_533C40(v18, flt_A427E4, 0);
      v73 = 0xFFFFFFFF;
      dword_B35C08 = v19;
    }
    sub_8A7F20(0x1C, 8, 0);
    if ( (*((_BYTE *)this + 0x24) & 1) != 0 )
      v20 = (int *)sub_424180((ExtraDataList *)this + 2);
    else
      v20 = (int *)bhkWorldM;
    sub_5337E0(dword_B35C08, v20);
    v21 = dbl_A46B08;
    a10 = *(float *)&a6 * v21;
    v45 = a7 * v21;
    v58 = v21 * a8;
    a10 = a10 + *(float *)&a3;
    v46 = *(float *)&a4 + v45;
    v59 = *(float *)&a5 + v58;
    *(float *)&v65 = a10;
    v66 = v46;
    v67 = v59;
    v22 = sub_533830((int)dword_B35C08, (int)&a3, (int)&v65, flt_A427E4);
    v47 = *(float *)&v22;
    if ( !v22 )
    {
      a10 = -*(float *)&dword_B258E8;
      v60 = -*(float *)&dword_B258EC;
      v48 = -*(float *)&dword_B258F0;
      v23 = dbl_A3D0C0;
      a10 = a10 * v23;
      v61 = v60 * v23;
      v49 = v23 * v48;
      a10 = a10 + *(float *)&a6;
      v62 = a7 + v61;
      v50 = a8 + v49;
      *(float *)&v65 = a10;
      v66 = v62;
      v67 = v50;
      sub_43F350((float *)&v65);
      v24 = dbl_A46B08;
      a6 = v65;
      a10 = *(float *)&v65 * v24;
      a7 = v66;
      a8 = v67;
      v25 = dword_B35C08;
      v63 = v66 * v24;
      v51 = v24 * v67;
      a10 = a10 + *(float *)&a3;
      v64 = *(float *)&a4 + v63;
      v52 = *(float *)&a5 + v51;
      *(float *)&v65 = a10;
      v66 = v64;
      v67 = v52;
      v22 = sub_533830((int)v25, (int)&a3, (int)&v65, flt_A427E4);
      v47 = *(float *)&v22;
    }
    v72 = 0;
    v70 = 0;
    v71 = 0;
    v69 = &NiTPointerList<NiAVObject *>::`vftable';
    v26 = a12;
    v27 = (const char *)LODWORD(a9);
    v73 = 1;
    a10 = 0.0;
    if ( v22 > 0 )
    {
      do
      {
        v28 = sub_533930(dword_B35C08, SLODWORD(a10));
        v13 = v70;
        v29 = (NiNode *)v28;
        v30 = v70;
        if ( !v70 )
          goto LABEL_18;
        while ( 1 )
        {
          v31 = v29 == (NiNode *)v30[2];
          v32 = v30;
          v30 = (_DWORD *)*v30;
          if ( v31 )
            break;
          if ( !v30 )
            goto LABEL_18;
        }
        if ( !v32 )
        {
LABEL_18:
          sub_4CF1A0(this, a3, a4, a5, *(float *)&a6, SLODWORD(a7), SLODWORD(a8), v27, v29, (int *)&a11, v26, v53, v56);
          v33 = (_DWORD *)((int (__thiscall *)(void ***))v69[1])(&v69);
          v33[2] = v29;
          *v33 = 0;
          v33[1] = v71;
          if ( v71 )
          {
            *v71 = v33;
            v13 = v70;
          }
          else
          {
            v13 = v33;
            v70 = v33;
          }
          ++v72;
          v71 = v33;
        }
        ++LODWORD(a10);
      }
      while ( SLODWORD(a10) < SLODWORD(v47) );
    }
    v34 = v13;
    while ( v34 )
    {
      v35 = v34;
      v34 = (_DWORD *)*v34;
      ((void (__thiscall *)(void ***, _DWORD *))v69[2])(&v69, v35);
    }
    v36 = TES;
    v72 = 0;
    v70 = 0;
    v71 = 0;
    v37 = (NiNode *)sub_440880(v36, (float *)&a3);
    v38 = v37;
    if ( v37 )
    {
      sub_4CF1A0(this, a3, a4, a5, *(float *)&a6, SLODWORD(a7), SLODWORD(a8), v27, v37, (int *)&a11, v26, v53, v56);
      v39 = TES;
      v40 = dbl_A3F428;
      *(float *)&a12 = *(float *)&a6 * v40;
      a9 = a7 * v40;
      a10 = v40 * a8;
      *(float *)&a12 = *(float *)&a12 + *(float *)&a3;
      a9 = *(float *)&a4 + a9;
      a10 = *(float *)&a5 + a10;
      v68[0] = *(float *)&a12;
      v68[1] = a9;
      v68[2] = a10;
      v41 = (NiNode *)sub_440880(v39, v68);
      if ( v38 != v41 )
        sub_4CF1A0(this, a3, a4, a5, *(float *)&a6, SLODWORD(a7), SLODWORD(a8), v27, v41, (int *)&a11, v26, v53, v56);
    }
    sub_5337E0(dword_B35C08, 0);
    v69 = &NiTPointerListBase<NiTPointerAllocator<unsigned int>,NiAVObject *>::`vftable';
    v42 = v70;
    v73 = 2;
    while ( v42 )
    {
      v43 = v42;
      v42 = (_DWORD *)*v42;
      ((void (__thiscall *)(void ***, _DWORD *))v69[2])(&v69, v43);
    }
  }
  else
  {
    v14 = (*(int (__thiscall **)(float))(*(_DWORD *)LODWORD(a10) + 0x154))(COERCE_FLOAT(LODWORD(a10)));
    if ( v14 )
    {
      v15 = (NiNode *)(*(int (__thiscall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( v15 )
        sub_4CF1A0(
          this,
          a3,
          a4,
          a5,
          *(float *)&a6,
          SLODWORD(a7),
          SLODWORD(a8),
          (const char *)LODWORD(a9),
          v15,
          (int *)&a11,
          a12,
          v53,
          v56);
    }
  }
}
