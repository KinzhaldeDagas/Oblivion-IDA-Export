char __thiscall sub_7EBEE0(NiD3DPass **this)
{
  NiD3DPass **v2; // edi
  NiD3DPass *v3; // ecx
  bool v4; // zf
  NiD3DPass *v5; // eax
  NiD3DPass *v6; // eax
  unsigned int **v7; // edi
  NiD3DTextureStage *v8; // eax
  NiD3DTextureStage *v9; // ecx
  int v10; // ebx
  int v11; // ebp
  int v12; // edi
  int v13; // ebp
  int v14; // ebx
  int v15; // edi
  int v16; // edi
  int v17; // edi
  int v18; // edi
  int v19; // edi
  int v20; // edi
  NiD3DPass **v21; // edi
  NiD3DPass *v22; // ecx
  NiD3DPass *v23; // edi
  NiD3DPass *v24; // eax
  unsigned int **v25; // edi
  NiD3DTextureStage *v26; // eax
  NiD3DTextureStage *v27; // ecx
  int v28; // ebx
  int v29; // ebp
  int v30; // edi
  int v31; // ebp
  int v32; // ebx
  int v33; // edi
  int v34; // edi
  int v35; // edi
  int v36; // edi
  int v37; // edi
  int v38; // edi
  NiD3DPass **v39; // edi
  NiD3DPass *v40; // ecx
  NiD3DPass *v41; // eax
  NiD3DPass *v42; // eax
  unsigned int **v43; // edi
  NiD3DTextureStage *v44; // eax
  NiD3DTextureStage *v45; // ecx
  int v46; // ebx
  int v47; // ebp
  int v48; // edi
  int v49; // ebp
  int v50; // ebx
  int v51; // edi
  int v52; // edi
  int v53; // edi
  int v54; // edi
  int v55; // edi
  int v56; // esi
  NiD3DTextureStage *v57; // eax
  unsigned int *a3; // [esp+18h] [ebp-18h] BYREF
  NiD3DPass *v60; // [esp+1Ch] [ebp-14h] BYREF
  NiD3DTextureStage *v61; // [esp+20h] [ebp-10h] BYREF
  int v62; // [esp+2Ch] [ebp-4h]

  v2 = sub_7606A0(&v60);
  v3 = *(this + 0x1C);
  v4 = v3 == *v2;
  v62 = 0;
  if ( !v4 )
  {
    if ( v3 )
    {
      v4 = v3->RefCount-- == 1;
      if ( v4 )
        sub_7604D0(v3);
    }
    v5 = *v2;
    v4 = *v2 == 0;
    *(this + 0x1C) = *v2;
    if ( !v4 )
      ++v5->RefCount;
  }
  v6 = v60;
  v62 = 0xFFFFFFFF;
  if ( v60 )
  {
    --v60->RefCount;
    if ( !v6->RefCount )
      sub_7604D0(v6);
  }
  sub_772630(&a3);
  v62 = 1;
  sub_801110((int)a3, 0, 3, 2);
  sub_771640((_DWORD **)a3, 0);
  sub_760010(*(this + 0x1C), (*(this + 0x1C))->CurrentStage, a3);
  v7 = (unsigned int **)sub_772630(&v60);
  v8 = (NiD3DTextureStage *)a3;
  v4 = a3 == *v7;
  LOBYTE(v62) = 2;
  if ( !v4 )
  {
    if ( a3 )
    {
      --a3[0x17];
      if ( !v8[7].Unk08 )
        sub_772560(v8);
    }
    v8 = (NiD3DTextureStage *)*v7;
    a3 = *v7;
    if ( a3 )
    {
      ++v8[7].Unk08;
      v8 = (NiD3DTextureStage *)a3;
    }
  }
  v9 = (NiD3DTextureStage *)v60;
  LOBYTE(v62) = 1;
  if ( v60 )
  {
    --*(_DWORD *)&v60->SoftwareVP;
    if ( !v9[7].Unk08 )
      sub_772560(v9);
    v8 = (NiD3DTextureStage *)a3;
  }
  sub_801110((int)v8, 1, 3, 2);
  sub_771640((_DWORD **)a3, 1);
  sub_760010(*(this + 0x1C), (*(this + 0x1C))->CurrentStage, a3);
  v10 = (int)*(this + 0x1C);
  v11 = (int)*(this + 0x27);
  v12 = *(_DWORD *)(v10 + 0x58);
  if ( v12 != v11 )
  {
    if ( v12 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v12 + 4)) )
        (**(void (__thiscall ***)(int, int))v12)(v12, 1);
    }
    *(_DWORD *)(v10 + 0x58) = v11;
    if ( v11 )
      InterlockedIncrement((volatile LONG *)(v11 + 4));
  }
  v13 = (int)*(this + 0x1C);
  v14 = (int)*(this + 0x2A);
  v15 = *(_DWORD *)(v13 + 0x44);
  if ( v15 != v14 )
  {
    if ( v15 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) )
        (**(void (__thiscall ***)(int, int))v15)(v15, 1);
    }
    *(_DWORD *)(v13 + 0x44) = v14;
    if ( v14 )
      InterlockedIncrement((volatile LONG *)(v14 + 4));
  }
  v16 = (int)*(this + 0x1C);
  if ( !*(_DWORD *)(v16 + 0x30) )
    *(_DWORD *)(v16 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v16 + 0x30), 7, 0, 0);
  v17 = (int)*(this + 0x1C);
  if ( !*(_DWORD *)(v17 + 0x30) )
    *(_DWORD *)(v17 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v17 + 0x30), 0xE, 0, 0);
  v18 = (int)*(this + 0x1C);
  if ( !*(_DWORD *)(v18 + 0x30) )
    *(_DWORD *)(v18 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v18 + 0x30), 0x1B, 0, 0);
  v19 = (int)*(this + 0x1C);
  if ( !*(_DWORD *)(v19 + 0x30) )
    *(_DWORD *)(v19 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v19 + 0x30), 0xF, 0, 0);
  v20 = (int)*(this + 0x1C);
  if ( !*(_DWORD *)(v20 + 0x30) )
    *(_DWORD *)(v20 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v20 + 0x30), 0xA8, 7, 0);
  v21 = sub_7606A0(&v60);
  v22 = *(this + 0x2B);
  v4 = v22 == *v21;
  LOBYTE(v62) = 3;
  if ( !v4 )
  {
    if ( v22 )
    {
      v4 = v22->RefCount-- == 1;
      if ( v4 )
        sub_7604D0(v22);
    }
    v23 = *v21;
    *(this + 0x2B) = v23;
    if ( v23 )
      ++v23->RefCount;
  }
  v24 = v60;
  LOBYTE(v62) = 1;
  if ( v60 )
  {
    --v60->RefCount;
    if ( !v24->RefCount )
      sub_7604D0(v24);
  }
  v25 = (unsigned int **)sub_772630(&v60);
  v26 = (NiD3DTextureStage *)a3;
  v4 = a3 == *v25;
  LOBYTE(v62) = 4;
  if ( !v4 )
  {
    if ( a3 )
    {
      --a3[0x17];
      if ( !v26[7].Unk08 )
        sub_772560(v26);
    }
    v26 = (NiD3DTextureStage *)*v25;
    a3 = *v25;
    if ( a3 )
    {
      ++v26[7].Unk08;
      v26 = (NiD3DTextureStage *)a3;
    }
  }
  v27 = (NiD3DTextureStage *)v60;
  LOBYTE(v62) = 1;
  if ( v60 )
  {
    --*(_DWORD *)&v60->SoftwareVP;
    if ( !v27[7].Unk08 )
      sub_772560(v27);
    v26 = (NiD3DTextureStage *)a3;
  }
  sub_801110((int)v26, 0, 3, 2);
  sub_771640((_DWORD **)a3, 1);
  sub_760010(*(this + 0x2B), (*(this + 0x2B))->CurrentStage, a3);
  v28 = (int)*(this + 0x2B);
  v29 = (int)*(this + 0x26);
  v30 = *(_DWORD *)(v28 + 0x58);
  if ( v30 != v29 )
  {
    if ( v30 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v30 + 4)) )
        (**(void (__thiscall ***)(int, int))v30)(v30, 1);
    }
    *(_DWORD *)(v28 + 0x58) = v29;
    if ( v29 )
      InterlockedIncrement((volatile LONG *)(v29 + 4));
  }
  v31 = (int)*(this + 0x2B);
  v32 = (int)*(this + 0x29);
  v33 = *(_DWORD *)(v31 + 0x44);
  if ( v33 != v32 )
  {
    if ( v33 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v33 + 4)) )
        (**(void (__thiscall ***)(int, int))v33)(v33, 1);
    }
    *(_DWORD *)(v31 + 0x44) = v32;
    if ( v32 )
      InterlockedIncrement((volatile LONG *)(v32 + 4));
  }
  v34 = (int)*(this + 0x2B);
  if ( !*(_DWORD *)(v34 + 0x30) )
    *(_DWORD *)(v34 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v34 + 0x30), 7, 0, 0);
  v35 = (int)*(this + 0x2B);
  if ( !*(_DWORD *)(v35 + 0x30) )
    *(_DWORD *)(v35 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v35 + 0x30), 0xE, 0, 0);
  v36 = (int)*(this + 0x2B);
  if ( !*(_DWORD *)(v36 + 0x30) )
    *(_DWORD *)(v36 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v36 + 0x30), 0x1B, 0, 0);
  v37 = (int)*(this + 0x2B);
  if ( !*(_DWORD *)(v37 + 0x30) )
    *(_DWORD *)(v37 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v37 + 0x30), 0xF, 0, 0);
  v38 = (int)*(this + 0x2B);
  if ( !*(_DWORD *)(v38 + 0x30) )
    *(_DWORD *)(v38 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v38 + 0x30), 0xA8, 7, 0);
  v39 = sub_7606A0(&v60);
  v40 = *(this + 0x2C);
  v4 = v40 == *v39;
  LOBYTE(v62) = 5;
  if ( !v4 )
  {
    if ( v40 )
    {
      v4 = v40->RefCount-- == 1;
      if ( v4 )
        sub_7604D0(v40);
    }
    v41 = *v39;
    v4 = *v39 == 0;
    *(this + 0x2C) = *v39;
    if ( !v4 )
      ++v41->RefCount;
  }
  v42 = v60;
  LOBYTE(v62) = 1;
  if ( v60 )
  {
    --v60->RefCount;
    if ( !v42->RefCount )
      sub_7604D0(v42);
  }
  v43 = (unsigned int **)sub_772630(&v61);
  v44 = (NiD3DTextureStage *)a3;
  v4 = a3 == *v43;
  LOBYTE(v62) = 6;
  if ( !v4 )
  {
    if ( a3 )
    {
      --a3[0x17];
      if ( !v44[7].Unk08 )
        sub_772560(v44);
    }
    v44 = (NiD3DTextureStage *)*v43;
    a3 = *v43;
    if ( a3 )
    {
      ++v44[7].Unk08;
      v44 = (NiD3DTextureStage *)a3;
    }
  }
  v45 = v61;
  LOBYTE(v62) = 1;
  if ( v61 )
  {
    --v61[7].Unk08;
    if ( !v45[7].Unk08 )
      sub_772560(v45);
    v44 = (NiD3DTextureStage *)a3;
  }
  sub_801110((int)v44, 0, 3, 2);
  sub_771640((_DWORD **)a3, 1);
  sub_760010(*(this + 0x2C), (*(this + 0x2C))->CurrentStage, a3);
  v46 = (int)*(this + 0x2C);
  v47 = (int)*(this + 0x25);
  v48 = *(_DWORD *)(v46 + 0x58);
  if ( v48 != v47 )
  {
    if ( v48 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v48 + 4)) )
        (**(void (__thiscall ***)(int, int))v48)(v48, 1);
    }
    *(_DWORD *)(v46 + 0x58) = v47;
    if ( v47 )
      InterlockedIncrement((volatile LONG *)(v47 + 4));
  }
  v49 = (int)*(this + 0x2C);
  v50 = (int)*(this + 0x28);
  v51 = *(_DWORD *)(v49 + 0x44);
  if ( v51 != v50 )
  {
    if ( v51 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v51 + 4)) )
        (**(void (__thiscall ***)(int, int))v51)(v51, 1);
    }
    *(_DWORD *)(v49 + 0x44) = v50;
    if ( v50 )
      InterlockedIncrement((volatile LONG *)(v50 + 4));
  }
  v52 = (int)*(this + 0x2C);
  if ( !*(_DWORD *)(v52 + 0x30) )
    *(_DWORD *)(v52 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v52 + 0x30), 7, 0, 0);
  v53 = (int)*(this + 0x2C);
  if ( !*(_DWORD *)(v53 + 0x30) )
    *(_DWORD *)(v53 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v53 + 0x30), 0xE, 0, 0);
  v54 = (int)*(this + 0x2C);
  if ( !*(_DWORD *)(v54 + 0x30) )
    *(_DWORD *)(v54 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v54 + 0x30), 0x1B, 0, 0);
  v55 = (int)*(this + 0x2C);
  if ( !*(_DWORD *)(v55 + 0x30) )
    *(_DWORD *)(v55 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v55 + 0x30), 0xF, 0, 0);
  v56 = (int)*(this + 0x2C);
  if ( !*(_DWORD *)(v56 + 0x30) )
    *(_DWORD *)(v56 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v56 + 0x30), 0xA8, 7, 0);
  v57 = (NiD3DTextureStage *)a3;
  v62 = 0xFFFFFFFF;
  if ( a3 )
  {
    --a3[0x17];
    if ( !v57[7].Unk08 )
      sub_772560(v57);
  }
  return 1;
}
