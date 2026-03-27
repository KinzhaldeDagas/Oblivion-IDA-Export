bool *__thiscall sub_927680(int this, bool *a2, int a3, int a4)
{
  int v4; // eax
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // esi
  int v15; // eax
  int v16; // esi
  int v17; // eax
  int v18; // esi
  int v19; // esi
  int v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // esi
  int v24; // eax
  int v25; // esi
  int v26; // eax
  int v27; // esi
  int v28; // eax
  int v29; // esi
  int v30; // eax
  int v31; // esi
  int v32; // eax
  int v33; // esi
  int v34; // esi
  int v35; // eax
  int v36; // esi
  int v37; // eax
  int v38; // esi
  int v39; // eax
  int v40; // esi
  int v41; // eax
  int v42; // esi
  int v43; // eax
  int v44; // esi
  int v45; // eax
  int v46; // esi
  int v47; // eax
  int v48; // esi
  int v49; // esi
  int v50; // eax
  int v51; // esi
  int v52; // eax
  int v53; // esi
  int v54; // eax
  int v55; // esi
  int v56; // eax
  int v57; // esi
  int v58; // eax
  int v59; // esi
  int v60; // eax
  int v61; // esi

  if ( a3 && a4 )
  {
    v4 = 0;
    if ( (_BYTE)a3 )
    {
      if ( (a3 & 1) != 0 )
        v5 = *(_DWORD *)(this + 0x1C);
      else
        v5 = 0;
      if ( (a3 & 2) != 0 )
        v6 = *(_DWORD *)(this + 0x20);
      else
        v6 = 0;
      v7 = v6 | v5;
      if ( (a3 & 4) != 0 )
        v8 = *(_DWORD *)(this + 0x24);
      else
        v8 = 0;
      v9 = v8 | v7;
      if ( (a3 & 8) != 0 )
        v10 = *(_DWORD *)(this + 0x28);
      else
        v10 = 0;
      v11 = v10 | v9;
      if ( (a3 & 0x10) != 0 )
        v12 = *(_DWORD *)(this + 0x2C);
      else
        v12 = 0;
      v13 = v12 | v11;
      if ( (a3 & 0x20) != 0 )
        v14 = *(_DWORD *)(this + 0x30);
      else
        v14 = 0;
      v15 = v14 | v13;
      if ( (a3 & 0x40) != 0 )
        v16 = *(_DWORD *)(this + 0x34);
      else
        v16 = 0;
      v17 = v16 | v15;
      if ( (char)a3 >= 0 )
        v18 = 0;
      else
        v18 = *(_DWORD *)(this + 0x38);
      v4 = v18 | v17;
    }
    if ( BYTE1(a3) )
    {
      if ( (a3 & 0x100) != 0 )
        v19 = *(_DWORD *)(this + 0x3C);
      else
        v19 = 0;
      v20 = v19 | v4;
      if ( (a3 & 0x200) != 0 )
        v21 = *(_DWORD *)(this + 0x40);
      else
        v21 = 0;
      v22 = v21 | v20;
      if ( (a3 & 0x400) != 0 )
        v23 = *(_DWORD *)(this + 0x44);
      else
        v23 = 0;
      v24 = v23 | v22;
      if ( (a3 & 0x800) != 0 )
        v25 = *(_DWORD *)(this + 0x48);
      else
        v25 = 0;
      v26 = v25 | v24;
      if ( (a3 & 0x1000) != 0 )
        v27 = *(_DWORD *)(this + 0x4C);
      else
        v27 = 0;
      v28 = v27 | v26;
      if ( (a3 & 0x2000) != 0 )
        v29 = *(_DWORD *)(this + 0x50);
      else
        v29 = 0;
      v30 = v29 | v28;
      if ( (a3 & 0x4000) != 0 )
        v31 = *(_DWORD *)(this + 0x54);
      else
        v31 = 0;
      v32 = v31 | v30;
      if ( (a3 & 0x8000) == 0 )
        v33 = 0;
      else
        v33 = *(_DWORD *)(this + 0x58);
      v4 = v33 | v32;
    }
    if ( (a3 & 0xFF0000) != 0 )
    {
      if ( (a3 & 0x10000) != 0 )
        v34 = *(_DWORD *)(this + 0x5C);
      else
        v34 = 0;
      v35 = v34 | v4;
      if ( (a3 & 0x20000) != 0 )
        v36 = *(_DWORD *)(this + 0x60);
      else
        v36 = 0;
      v37 = v36 | v35;
      if ( (a3 & 0x40000) != 0 )
        v38 = *(_DWORD *)(this + 0x64);
      else
        v38 = 0;
      v39 = v38 | v37;
      if ( (a3 & 0x80000) != 0 )
        v40 = *(_DWORD *)(this + 0x68);
      else
        v40 = 0;
      v41 = v40 | v39;
      if ( (a3 & 0x100000) != 0 )
        v42 = *(_DWORD *)(this + 0x6C);
      else
        v42 = 0;
      v43 = v42 | v41;
      if ( (a3 & 0x200000) != 0 )
        v44 = *(_DWORD *)(this + 0x70);
      else
        v44 = 0;
      v45 = v44 | v43;
      if ( (a3 & 0x400000) != 0 )
        v46 = *(_DWORD *)(this + 0x74);
      else
        v46 = 0;
      v47 = v46 | v45;
      if ( ((unsigned int)&loc_800000 & a3) != 0 )
        v48 = *(_DWORD *)(this + 0x78);
      else
        v48 = 0;
      v4 = v48 | v47;
    }
    if ( (a3 & 0xFF000000) == 0 )
      goto LABEL_105;
    v49 = (a3 & 0x1000000) != 0 ? *(_DWORD *)(this + 0x7C) : 0;
    v50 = v49 | v4;
    v51 = (a3 & 0x2000000) != 0 ? *(_DWORD *)(this + 0x80) : 0;
    v52 = v51 | v50;
    v53 = (a3 & 0x4000000) != 0 ? *(_DWORD *)(this + 0x84) : 0;
    v54 = v53 | v52;
    v55 = (a3 & 0x8000000) != 0 ? *(_DWORD *)(this + 0x88) : 0;
    v56 = v55 | v54;
    v57 = (a3 & 0x10000000) != 0 ? *(_DWORD *)(this + 0x8C) : 0;
    v58 = v57 | v56;
    v59 = (a3 & 0x20000000) != 0 ? *(_DWORD *)(this + 0x90) : 0;
    v60 = v59 | v58;
    v61 = (a3 & 0x40000000) != 0 ? *(_DWORD *)(this + 0x94) : 0;
    v4 = v61 | v60;
    if ( a3 < 0 )
    {
      *a2 = ((*(_DWORD *)(this + 0x98) | v4) & a4) != 0;
      return a2;
    }
    else
    {
LABEL_105:
      *a2 = (v4 & a4) != 0;
      return a2;
    }
  }
  else
  {
    *a2 = *(_BYTE *)(this + 0x18);
    return a2;
  }
}
