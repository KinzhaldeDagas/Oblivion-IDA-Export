void __thiscall sub_7E7F70(void *this)
{
  unsigned int **v2; // edi
  NiD3DTextureStage *v3; // eax
  bool v4; // zf
  NiD3DTextureStage *v5; // ecx
  unsigned int **v6; // edi
  NiD3DTextureStage *v7; // eax
  NiD3DTextureStage *v8; // ecx
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  int v21; // ebx
  int v22; // ebp
  int v23; // edi
  int v24; // ebp
  int v25; // ebx
  int v26; // edi
  unsigned int **v27; // edi
  NiD3DTextureStage *v28; // eax
  NiD3DTextureStage *v29; // ecx
  unsigned int **v30; // edi
  NiD3DTextureStage *v31; // eax
  NiD3DTextureStage *v32; // ecx
  unsigned int **v33; // edi
  NiD3DTextureStage *v34; // eax
  NiD3DTextureStage *v35; // ecx
  unsigned int **v36; // edi
  NiD3DTextureStage *v37; // eax
  NiD3DTextureStage *v38; // ecx
  unsigned int **v39; // edi
  NiD3DTextureStage *v40; // eax
  NiD3DTextureStage *v41; // ecx
  unsigned int **v42; // edi
  NiD3DTextureStage *v43; // eax
  NiD3DTextureStage *v44; // ecx
  int v45; // edi
  int v46; // edi
  int v47; // edi
  int v48; // edi
  int v49; // edi
  int v50; // edi
  int v51; // edi
  int v52; // edi
  int v53; // edi
  int v54; // edi
  int v55; // edi
  int v56; // edi
  int v57; // ebx
  int v58; // ebp
  int v59; // edi
  int v60; // ebp
  int v61; // ebx
  int v62; // edi
  unsigned int **v63; // edi
  NiD3DTextureStage *v64; // eax
  NiD3DTextureStage *v65; // ecx
  unsigned int **v66; // edi
  NiD3DTextureStage *v67; // eax
  NiD3DTextureStage *v68; // ecx
  int v69; // edi
  int v70; // edi
  int v71; // edi
  int v72; // edi
  int v73; // edi
  int v74; // edi
  int v75; // edi
  int v76; // edi
  int v77; // edi
  int v78; // edi
  int v79; // edi
  NiD3DTextureStage *v80; // eax
  unsigned int *a3; // [esp+14h] [ebp-14h] BYREF
  NiD3DTextureStage *v82; // [esp+18h] [ebp-10h] BYREF
  unsigned int v83; // [esp+24h] [ebp-4h]

  sub_772630(&a3);
  v83 = 0;
  sub_801110((int)a3, 0, 3, 2);
  sub_760010(*((NiD3DPass **)this + 0x1F), *(_DWORD *)(*((_DWORD *)this + 0x1F) + 0x14), a3);
  v2 = (unsigned int **)sub_772630(&v82);
  v3 = (NiD3DTextureStage *)a3;
  v4 = a3 == *v2;
  LOBYTE(v83) = 1;
  if ( !v4 )
  {
    if ( a3 )
    {
      --a3[0x17];
      if ( !v3[7].Unk08 )
        sub_772560(v3);
    }
    v3 = (NiD3DTextureStage *)*v2;
    a3 = *v2;
    if ( a3 )
    {
      ++v3[7].Unk08;
      v3 = (NiD3DTextureStage *)a3;
    }
  }
  v5 = v82;
  LOBYTE(v83) = 0;
  if ( v82 )
  {
    --v82[7].Unk08;
    if ( !v5[7].Unk08 )
      sub_772560(v5);
    v3 = (NiD3DTextureStage *)a3;
  }
  sub_801110((int)v3, 1, 1, 2);
  sub_760010(*((NiD3DPass **)this + 0x1F), *(_DWORD *)(*((_DWORD *)this + 0x1F) + 0x14), a3);
  v6 = (unsigned int **)sub_772630(&v82);
  v7 = (NiD3DTextureStage *)a3;
  v4 = a3 == *v6;
  LOBYTE(v83) = 2;
  if ( !v4 )
  {
    if ( a3 )
    {
      --a3[0x17];
      if ( !v7[7].Unk08 )
        sub_772560(v7);
    }
    v7 = (NiD3DTextureStage *)*v6;
    a3 = *v6;
    if ( a3 )
    {
      ++v7[7].Unk08;
      v7 = (NiD3DTextureStage *)a3;
    }
  }
  v8 = v82;
  LOBYTE(v83) = 0;
  if ( v82 )
  {
    --v82[7].Unk08;
    if ( !v8[7].Unk08 )
      sub_772560(v8);
    v7 = (NiD3DTextureStage *)a3;
  }
  sub_801110((int)v7, 2, 1, 2);
  sub_760010(*((NiD3DPass **)this + 0x1F), *(_DWORD *)(*((_DWORD *)this + 0x1F) + 0x14), a3);
  v9 = *((_DWORD *)this + 0x1F);
  if ( !*(_DWORD *)(v9 + 0x30) )
    *(_DWORD *)(v9 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v9 + 0x30), 0x1B, 0, 0);
  v10 = *((_DWORD *)this + 0x1F);
  if ( ShaderPackage < 2 )
  {
    if ( !*(_DWORD *)(v10 + 0x30) )
      *(_DWORD *)(v10 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v10 + 0x30), 0xF, 0, 0);
  }
  else
  {
    if ( !*(_DWORD *)(v10 + 0x30) )
      *(_DWORD *)(v10 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v10 + 0x30), 0xF, 1, 0);
    v11 = *((_DWORD *)this + 0x1F);
    if ( !*(_DWORD *)(v11 + 0x30) )
      *(_DWORD *)(v11 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v11 + 0x30), 0x19, 5, 0);
    v12 = *((_DWORD *)this + 0x1F);
    if ( !*(_DWORD *)(v12 + 0x30) )
      *(_DWORD *)(v12 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v12 + 0x30), 0x18, 0xA, 0);
    if ( UseHDR )
    {
      v13 = *((_DWORD *)this + 0x1F);
      if ( !*(_DWORD *)(v13 + 0x30) )
        *(_DWORD *)(v13 + 0x30) = sub_772DF0();
      sub_772CD0(*(_DWORD **)(v13 + 0x30), 0x1B, 1, 0);
      v14 = *((_DWORD *)this + 0x1F);
      if ( !*(_DWORD *)(v14 + 0x30) )
        *(_DWORD *)(v14 + 0x30) = sub_772DF0();
      sub_772CD0(*(_DWORD **)(v14 + 0x30), 0x13, 5, 0);
      v15 = *((_DWORD *)this + 0x1F);
      if ( !*(_DWORD *)(v15 + 0x30) )
        *(_DWORD *)(v15 + 0x30) = sub_772DF0();
      sub_772CD0(*(_DWORD **)(v15 + 0x30), 0x14, 6, 0);
    }
  }
  v16 = *((_DWORD *)this + 0x1F);
  if ( !*(_DWORD *)(v16 + 0x30) )
    *(_DWORD *)(v16 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v16 + 0x30), 7, 1, 0);
  v17 = *((_DWORD *)this + 0x1F);
  if ( !*(_DWORD *)(v17 + 0x30) )
    *(_DWORD *)(v17 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v17 + 0x30), 0x17, 4, 0);
  v18 = *((_DWORD *)this + 0x1F);
  if ( !*(_DWORD *)(v18 + 0x30) )
    *(_DWORD *)(v18 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v18 + 0x30), 0xE, 1, 0);
  v19 = *((_DWORD *)this + 0x1F);
  if ( !*(_DWORD *)(v19 + 0x30) )
    *(_DWORD *)(v19 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v19 + 0x30), 0xA8, 7, 0);
  v20 = *((_DWORD *)this + 0x1F);
  if ( !*(_DWORD *)(v20 + 0x30) )
    *(_DWORD *)(v20 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v20 + 0x30), 0x1C, 0, 0);
  v21 = *((_DWORD *)this + 0x1F);
  v22 = *((_DWORD *)this + 0x25);
  v23 = *(_DWORD *)(v21 + 0x58);
  if ( v23 != v22 )
  {
    if ( v23 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) )
        (**(void (__thiscall ***)(int, int))v23)(v23, 1);
    }
    *(_DWORD *)(v21 + 0x58) = v22;
    if ( v22 )
      InterlockedIncrement((volatile LONG *)(v22 + 4));
  }
  v24 = *((_DWORD *)this + 0x1F);
  v25 = *((_DWORD *)this + 0x4D);
  v26 = *(_DWORD *)(v24 + 0x44);
  if ( v26 != v25 )
  {
    if ( v26 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) )
        (**(void (__thiscall ***)(int, int))v26)(v26, 1);
    }
    *(_DWORD *)(v24 + 0x44) = v25;
    if ( v25 )
      InterlockedIncrement((volatile LONG *)(v25 + 4));
  }
  v27 = (unsigned int **)sub_772630(&v82);
  v28 = (NiD3DTextureStage *)a3;
  v4 = a3 == *v27;
  LOBYTE(v83) = 3;
  if ( !v4 )
  {
    if ( a3 )
    {
      --a3[0x17];
      if ( !v28[7].Unk08 )
        sub_772560(v28);
    }
    v28 = (NiD3DTextureStage *)*v27;
    a3 = *v27;
    if ( a3 )
    {
      ++v28[7].Unk08;
      v28 = (NiD3DTextureStage *)a3;
    }
  }
  v29 = v82;
  LOBYTE(v83) = 0;
  if ( v82 )
  {
    --v82[7].Unk08;
    if ( !v29[7].Unk08 )
      sub_772560(v29);
    v28 = (NiD3DTextureStage *)a3;
  }
  sub_801110((int)v28, 0, 3, 2);
  sub_760010(*((NiD3DPass **)this + 0x20), *(_DWORD *)(*((_DWORD *)this + 0x20) + 0x14), a3);
  if ( ShaderPackage < 2 )
  {
    v39 = (unsigned int **)sub_772630(&v82);
    v40 = (NiD3DTextureStage *)a3;
    v4 = a3 == *v39;
    LOBYTE(v83) = 7;
    if ( !v4 )
    {
      if ( a3 )
      {
        --a3[0x17];
        if ( !v40[7].Unk08 )
          sub_772560(v40);
      }
      v40 = (NiD3DTextureStage *)*v39;
      a3 = *v39;
      if ( a3 )
      {
        ++v40[7].Unk08;
        v40 = (NiD3DTextureStage *)a3;
      }
    }
    v41 = v82;
    LOBYTE(v83) = 0;
    if ( v82 )
    {
      --v82[7].Unk08;
      if ( !v41[7].Unk08 )
        sub_772560(v41);
      v40 = (NiD3DTextureStage *)a3;
    }
    sub_801110((int)v40, 1, 3, 2);
    sub_760010(*((NiD3DPass **)this + 0x20), *(_DWORD *)(*((_DWORD *)this + 0x20) + 0x14), a3);
    v42 = (unsigned int **)sub_772630(&v82);
    v43 = (NiD3DTextureStage *)a3;
    v4 = a3 == *v42;
    LOBYTE(v83) = 8;
    if ( !v4 )
    {
      if ( a3 )
      {
        --a3[0x17];
        if ( !v43[7].Unk08 )
          sub_772560(v43);
      }
      v43 = (NiD3DTextureStage *)*v42;
      a3 = *v42;
      if ( a3 )
      {
        ++v43[7].Unk08;
        v43 = (NiD3DTextureStage *)a3;
      }
    }
    v44 = v82;
    LOBYTE(v83) = 0;
    if ( v82 )
    {
      --v82[7].Unk08;
      if ( !v44[7].Unk08 )
        sub_772560(v44);
      v43 = (NiD3DTextureStage *)a3;
    }
    sub_801110((int)v43, 2, 3, 2);
  }
  else
  {
    v30 = (unsigned int **)sub_772630(&v82);
    v31 = (NiD3DTextureStage *)a3;
    v4 = a3 == *v30;
    LOBYTE(v83) = 4;
    if ( !v4 )
    {
      if ( a3 )
      {
        --a3[0x17];
        if ( !v31[7].Unk08 )
          sub_772560(v31);
      }
      v31 = (NiD3DTextureStage *)*v30;
      a3 = *v30;
      if ( a3 )
      {
        ++v31[7].Unk08;
        v31 = (NiD3DTextureStage *)a3;
      }
    }
    v32 = v82;
    LOBYTE(v83) = 0;
    if ( v82 )
    {
      --v82[7].Unk08;
      if ( !v32[7].Unk08 )
        sub_772560(v32);
      v31 = (NiD3DTextureStage *)a3;
    }
    sub_801110((int)v31, 1, 3, 2);
    sub_760010(*((NiD3DPass **)this + 0x20), *(_DWORD *)(*((_DWORD *)this + 0x20) + 0x14), a3);
    v33 = (unsigned int **)sub_772630(&v82);
    v34 = (NiD3DTextureStage *)a3;
    v4 = a3 == *v33;
    LOBYTE(v83) = 5;
    if ( !v4 )
    {
      if ( a3 )
      {
        --a3[0x17];
        if ( !v34[7].Unk08 )
          sub_772560(v34);
      }
      v34 = (NiD3DTextureStage *)*v33;
      a3 = *v33;
      if ( a3 )
      {
        ++v34[7].Unk08;
        v34 = (NiD3DTextureStage *)a3;
      }
    }
    v35 = v82;
    LOBYTE(v83) = 0;
    if ( v82 )
    {
      --v82[7].Unk08;
      if ( !v35[7].Unk08 )
        sub_772560(v35);
      v34 = (NiD3DTextureStage *)a3;
    }
    sub_801110((int)v34, 2, 1, 2);
    sub_760010(*((NiD3DPass **)this + 0x20), *(_DWORD *)(*((_DWORD *)this + 0x20) + 0x14), a3);
    v36 = (unsigned int **)sub_772630(&v82);
    v37 = (NiD3DTextureStage *)a3;
    v4 = a3 == *v36;
    LOBYTE(v83) = 6;
    if ( !v4 )
    {
      if ( a3 )
      {
        --a3[0x17];
        if ( !v37[7].Unk08 )
          sub_772560(v37);
      }
      v37 = (NiD3DTextureStage *)*v36;
      a3 = *v36;
      if ( a3 )
      {
        ++v37[7].Unk08;
        v37 = (NiD3DTextureStage *)a3;
      }
    }
    v38 = v82;
    LOBYTE(v83) = 0;
    if ( v82 )
    {
      --v82[7].Unk08;
      if ( !v38[7].Unk08 )
        sub_772560(v38);
      v37 = (NiD3DTextureStage *)a3;
    }
    sub_801110((int)v37, 3, 1, 2);
  }
  sub_760010(*((NiD3DPass **)this + 0x20), *(_DWORD *)(*((_DWORD *)this + 0x20) + 0x14), a3);
  v45 = *((_DWORD *)this + 0x20);
  if ( !*(_DWORD *)(v45 + 0x30) )
    *(_DWORD *)(v45 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v45 + 0x30), 0x1B, 0, 0);
  v46 = *((_DWORD *)this + 0x20);
  if ( ShaderPackage < 2 )
  {
    if ( !*(_DWORD *)(v46 + 0x30) )
      *(_DWORD *)(v46 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v46 + 0x30), 0xF, 0, 0);
  }
  else
  {
    if ( !*(_DWORD *)(v46 + 0x30) )
      *(_DWORD *)(v46 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v46 + 0x30), 0xF, 1, 0);
    v47 = *((_DWORD *)this + 0x20);
    if ( !*(_DWORD *)(v47 + 0x30) )
      *(_DWORD *)(v47 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v47 + 0x30), 0x19, 5, 0);
    v48 = *((_DWORD *)this + 0x20);
    if ( !*(_DWORD *)(v48 + 0x30) )
      *(_DWORD *)(v48 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v48 + 0x30), 0x18, 0xA, 0);
    if ( UseHDR )
    {
      v49 = *((_DWORD *)this + 0x20);
      if ( !*(_DWORD *)(v49 + 0x30) )
        *(_DWORD *)(v49 + 0x30) = sub_772DF0();
      sub_772CD0(*(_DWORD **)(v49 + 0x30), 0x1B, 1, 0);
      v50 = *((_DWORD *)this + 0x20);
      if ( !*(_DWORD *)(v50 + 0x30) )
        *(_DWORD *)(v50 + 0x30) = sub_772DF0();
      sub_772CD0(*(_DWORD **)(v50 + 0x30), 0x13, 5, 0);
      v51 = *((_DWORD *)this + 0x20);
      if ( !*(_DWORD *)(v51 + 0x30) )
        *(_DWORD *)(v51 + 0x30) = sub_772DF0();
      sub_772CD0(*(_DWORD **)(v51 + 0x30), 0x14, 6, 0);
    }
  }
  v52 = *((_DWORD *)this + 0x20);
  if ( !*(_DWORD *)(v52 + 0x30) )
    *(_DWORD *)(v52 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v52 + 0x30), 7, 1, 0);
  v53 = *((_DWORD *)this + 0x20);
  if ( !*(_DWORD *)(v53 + 0x30) )
    *(_DWORD *)(v53 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v53 + 0x30), 0x17, 4, 0);
  v54 = *((_DWORD *)this + 0x20);
  if ( !*(_DWORD *)(v54 + 0x30) )
    *(_DWORD *)(v54 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v54 + 0x30), 0xE, 1, 0);
  v55 = *((_DWORD *)this + 0x20);
  if ( !*(_DWORD *)(v55 + 0x30) )
    *(_DWORD *)(v55 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v55 + 0x30), 0xA8, 7, 0);
  v56 = *((_DWORD *)this + 0x20);
  if ( !*(_DWORD *)(v56 + 0x30) )
    *(_DWORD *)(v56 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v56 + 0x30), 0x1C, 0, 0);
  v57 = *((_DWORD *)this + 0x20);
  v58 = *((_DWORD *)this + 0x29);
  v59 = *(_DWORD *)(v57 + 0x58);
  if ( v59 != v58 )
  {
    if ( v59 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v59 + 4)) )
        (**(void (__thiscall ***)(int, int))v59)(v59, 1);
    }
    *(_DWORD *)(v57 + 0x58) = v58;
    if ( v58 )
      InterlockedIncrement((volatile LONG *)(v58 + 4));
  }
  v60 = *((_DWORD *)this + 0x20);
  v61 = *((_DWORD *)this + 0x4E);
  v62 = *(_DWORD *)(v60 + 0x44);
  if ( v62 != v61 )
  {
    if ( v62 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v62 + 4)) )
        (**(void (__thiscall ***)(int, int))v62)(v62, 1);
    }
    *(_DWORD *)(v60 + 0x44) = v61;
    if ( v61 )
      InterlockedIncrement((volatile LONG *)(v61 + 4));
  }
  if ( ShaderPackage >= 2 )
  {
    v63 = (unsigned int **)sub_772630(&v82);
    v64 = (NiD3DTextureStage *)a3;
    v4 = a3 == *v63;
    LOBYTE(v83) = 9;
    if ( !v4 )
    {
      if ( a3 )
      {
        --a3[0x17];
        if ( !v64[7].Unk08 )
          sub_772560(v64);
      }
      v64 = (NiD3DTextureStage *)*v63;
      a3 = *v63;
      if ( a3 )
      {
        ++v64[7].Unk08;
        v64 = (NiD3DTextureStage *)a3;
      }
    }
    v65 = v82;
    LOBYTE(v83) = 0;
    if ( v82 )
    {
      --v82[7].Unk08;
      if ( !v65[7].Unk08 )
        sub_772560(v65);
      v64 = (NiD3DTextureStage *)a3;
    }
    sub_801110((int)v64, 0, 3, 2);
    sub_760010(*((NiD3DPass **)this + 0x21), *(_DWORD *)(*((_DWORD *)this + 0x21) + 0x14), a3);
    v66 = (unsigned int **)sub_772630(&v82);
    v67 = (NiD3DTextureStage *)a3;
    v4 = a3 == *v66;
    LOBYTE(v83) = 0xA;
    if ( !v4 )
    {
      if ( a3 )
      {
        --a3[0x17];
        if ( !v67[7].Unk08 )
          sub_772560(v67);
      }
      v67 = (NiD3DTextureStage *)*v66;
      a3 = *v66;
      if ( a3 )
      {
        ++v67[7].Unk08;
        v67 = (NiD3DTextureStage *)a3;
      }
    }
    v68 = v82;
    LOBYTE(v83) = 0;
    if ( v82 )
    {
      --v82[7].Unk08;
      if ( !v68[7].Unk08 )
        sub_772560(v68);
      v67 = (NiD3DTextureStage *)a3;
    }
    sub_801110((int)v67, 1, 3, 2);
    sub_760010(*((NiD3DPass **)this + 0x21), *(_DWORD *)(*((_DWORD *)this + 0x21) + 0x14), a3);
    v69 = *((_DWORD *)this + 0x21);
    if ( !*(_DWORD *)(v69 + 0x30) )
      *(_DWORD *)(v69 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v69 + 0x30), 0xF, 1, 0);
    v70 = *((_DWORD *)this + 0x21);
    if ( !*(_DWORD *)(v70 + 0x30) )
      *(_DWORD *)(v70 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v70 + 0x30), 0x19, 5, 0);
    v71 = *((_DWORD *)this + 0x21);
    if ( !*(_DWORD *)(v71 + 0x30) )
      *(_DWORD *)(v71 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v71 + 0x30), 0x18, 0xA, 0);
    v72 = *((_DWORD *)this + 0x21);
    if ( !*(_DWORD *)(v72 + 0x30) )
      *(_DWORD *)(v72 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v72 + 0x30), 0x1B, 1, 0);
    v73 = *((_DWORD *)this + 0x21);
    if ( !*(_DWORD *)(v73 + 0x30) )
      *(_DWORD *)(v73 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v73 + 0x30), 0x13, 9, 0);
    v74 = *((_DWORD *)this + 0x21);
    if ( !*(_DWORD *)(v74 + 0x30) )
      *(_DWORD *)(v74 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v74 + 0x30), 0x14, 1, 0);
    v75 = *((_DWORD *)this + 0x21);
    if ( !*(_DWORD *)(v75 + 0x30) )
      *(_DWORD *)(v75 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v75 + 0x30), 7, 1, 0);
    v76 = *((_DWORD *)this + 0x21);
    if ( !*(_DWORD *)(v76 + 0x30) )
      *(_DWORD *)(v76 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v76 + 0x30), 0x17, 4, 0);
    v77 = *((_DWORD *)this + 0x21);
    if ( !*(_DWORD *)(v77 + 0x30) )
      *(_DWORD *)(v77 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v77 + 0x30), 0xE, 0, 0);
    v78 = *((_DWORD *)this + 0x21);
    if ( !*(_DWORD *)(v78 + 0x30) )
      *(_DWORD *)(v78 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v78 + 0x30), 0xA8, 7, 0);
    v79 = *((_DWORD *)this + 0x21);
    if ( !*(_DWORD *)(v79 + 0x30) )
      *(_DWORD *)(v79 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v79 + 0x30), 0x1C, 0, 0);
    sub_7AECB0(*((NiD3DPass **)this + 0x21), *((NiD3DVertexShader **)this + 0x4D));
    sub_7AEC60(*((NiD3DPassVtbl ***)this + 0x21), *((NiD3DPixelShader **)this + 0x53));
  }
  v80 = (NiD3DTextureStage *)a3;
  v83 = 0xFFFFFFFF;
  if ( a3 )
  {
    --a3[0x17];
    if ( !v80[7].Unk08 )
      sub_772560(v80);
  }
}
