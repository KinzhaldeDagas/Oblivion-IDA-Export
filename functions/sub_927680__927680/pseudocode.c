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
    v4 = 0; /*0x927699*/
    if ( (_BYTE)a3 ) /*0x92769e*/
    {
      if ( (a3 & 1) != 0 ) /*0x9276a3*/
        v5 = *(_DWORD *)(this + 0x1C); /*0x9276a5*/
      else
        v5 = 0; /*0x9276aa*/
      if ( (a3 & 2) != 0 ) /*0x9276af*/
        v6 = *(_DWORD *)(this + 0x20); /*0x9276b1*/
      else
        v6 = 0; /*0x9276b6*/
      v7 = v6 | v5; /*0x9276b8*/
      if ( (a3 & 4) != 0 ) /*0x9276bd*/
        v8 = *(_DWORD *)(this + 0x24); /*0x9276bf*/
      else
        v8 = 0; /*0x9276c4*/
      v9 = v8 | v7; /*0x9276c6*/
      if ( (a3 & 8) != 0 ) /*0x9276cb*/
        v10 = *(_DWORD *)(this + 0x28); /*0x9276cd*/
      else
        v10 = 0; /*0x9276d2*/
      v11 = v10 | v9; /*0x9276d4*/
      if ( (a3 & 0x10) != 0 ) /*0x9276d9*/
        v12 = *(_DWORD *)(this + 0x2C); /*0x9276db*/
      else
        v12 = 0; /*0x9276e0*/
      v13 = v12 | v11; /*0x9276e2*/
      if ( (a3 & 0x20) != 0 ) /*0x9276e7*/
        v14 = *(_DWORD *)(this + 0x30); /*0x9276e9*/
      else
        v14 = 0; /*0x9276ee*/
      v15 = v14 | v13; /*0x9276f0*/
      if ( (a3 & 0x40) != 0 ) /*0x9276f5*/
        v16 = *(_DWORD *)(this + 0x34); /*0x9276f7*/
      else
        v16 = 0; /*0x9276fc*/
      v17 = v16 | v15; /*0x9276fe*/
      if ( (char)a3 >= 0 ) /*0x927702*/
        v18 = 0; /*0x927709*/
      else
        v18 = *(_DWORD *)(this + 0x38); /*0x927704*/
      v4 = v18 | v17; /*0x92770b*/
    }
    if ( BYTE1(a3) ) /*0x927710*/
    {
      if ( (a3 & 0x100) != 0 ) /*0x927715*/
        v19 = *(_DWORD *)(this + 0x3C); /*0x927717*/
      else
        v19 = 0; /*0x92771c*/
      v20 = v19 | v4; /*0x92771e*/
      if ( (a3 & 0x200) != 0 ) /*0x927723*/
        v21 = *(_DWORD *)(this + 0x40); /*0x927725*/
      else
        v21 = 0; /*0x92772a*/
      v22 = v21 | v20; /*0x92772c*/
      if ( (a3 & 0x400) != 0 ) /*0x927731*/
        v23 = *(_DWORD *)(this + 0x44); /*0x927733*/
      else
        v23 = 0; /*0x927738*/
      v24 = v23 | v22; /*0x92773a*/
      if ( (a3 & 0x800) != 0 ) /*0x92773f*/
        v25 = *(_DWORD *)(this + 0x48); /*0x927741*/
      else
        v25 = 0; /*0x927746*/
      v26 = v25 | v24; /*0x927748*/
      if ( (a3 & 0x1000) != 0 ) /*0x92774d*/
        v27 = *(_DWORD *)(this + 0x4C); /*0x92774f*/
      else
        v27 = 0; /*0x927754*/
      v28 = v27 | v26; /*0x927756*/
      if ( (a3 & 0x2000) != 0 ) /*0x92775b*/
        v29 = *(_DWORD *)(this + 0x50); /*0x92775d*/
      else
        v29 = 0; /*0x927762*/
      v30 = v29 | v28; /*0x927764*/
      if ( (a3 & 0x4000) != 0 ) /*0x927769*/
        v31 = *(_DWORD *)(this + 0x54); /*0x92776b*/
      else
        v31 = 0; /*0x927770*/
      v32 = v31 | v30; /*0x927772*/
      if ( (a3 & 0x8000) == 0 ) /*0x927776*/
        v33 = 0; /*0x92777d*/
      else
        v33 = *(_DWORD *)(this + 0x58); /*0x927778*/
      v4 = v33 | v32; /*0x92777f*/
    }
    if ( (a3 & 0xFF0000) != 0 ) /*0x927787*/
    {
      if ( (a3 & 0x10000) != 0 ) /*0x927793*/
        v34 = *(_DWORD *)(this + 0x5C); /*0x927795*/
      else
        v34 = 0; /*0x92779a*/
      v35 = v34 | v4; /*0x92779c*/
      if ( (a3 & 0x20000) != 0 ) /*0x9277a4*/
        v36 = *(_DWORD *)(this + 0x60); /*0x9277a6*/
      else
        v36 = 0; /*0x9277ab*/
      v37 = v36 | v35; /*0x9277ad*/
      if ( (a3 & 0x40000) != 0 ) /*0x9277b5*/
        v38 = *(_DWORD *)(this + 0x64); /*0x9277b7*/
      else
        v38 = 0; /*0x9277bc*/
      v39 = v38 | v37; /*0x9277be*/
      if ( (a3 & 0x80000) != 0 ) /*0x9277c6*/
        v40 = *(_DWORD *)(this + 0x68); /*0x9277c8*/
      else
        v40 = 0; /*0x9277cd*/
      v41 = v40 | v39; /*0x9277cf*/
      if ( (a3 & 0x100000) != 0 ) /*0x9277d7*/
        v42 = *(_DWORD *)(this + 0x6C); /*0x9277d9*/
      else
        v42 = 0; /*0x9277de*/
      v43 = v42 | v41; /*0x9277e0*/
      if ( (a3 & 0x200000) != 0 ) /*0x9277e8*/
        v44 = *(_DWORD *)(this + 0x70); /*0x9277ea*/
      else
        v44 = 0; /*0x9277ef*/
      v45 = v44 | v43; /*0x9277f1*/
      if ( (a3 & 0x400000) != 0 ) /*0x9277f9*/
        v46 = *(_DWORD *)(this + 0x74); /*0x9277fb*/
      else
        v46 = 0; /*0x927800*/
      v47 = v46 | v45; /*0x927802*/
      if ( ((unsigned int)&loc_800000 & a3) != 0 ) /*0x92780a*/
        v48 = *(_DWORD *)(this + 0x78); /*0x92780c*/
      else
        v48 = 0; /*0x927811*/
      v4 = v48 | v47; /*0x927813*/
    }
    if ( (a3 & 0xFF000000) == 0 ) /*0x92781b*/
      goto LABEL_105; /*0x92781b*/
    v49 = (a3 & 0x1000000) != 0 ? *(_DWORD *)(this + 0x7C) : 0;
    v50 = v49 | v4; /*0x927830*/
    v51 = (a3 & 0x2000000) != 0 ? *(_DWORD *)(this + 0x80) : 0;
    v52 = v51 | v50; /*0x927844*/
    v53 = (a3 & 0x4000000) != 0 ? *(_DWORD *)(this + 0x84) : 0;
    v54 = v53 | v52; /*0x927858*/
    v55 = (a3 & 0x8000000) != 0 ? *(_DWORD *)(this + 0x88) : 0;
    v56 = v55 | v54; /*0x92786c*/
    v57 = (a3 & 0x10000000) != 0 ? *(_DWORD *)(this + 0x8C) : 0;
    v58 = v57 | v56; /*0x927880*/
    v59 = (a3 & 0x20000000) != 0 ? *(_DWORD *)(this + 0x90) : 0;
    v60 = v59 | v58; /*0x927894*/
    v61 = (a3 & 0x40000000) != 0 ? *(_DWORD *)(this + 0x94) : 0;
    v4 = v61 | v60; /*0x9278a8*/
    if ( a3 < 0 ) /*0x9278ac*/
    {
      *a2 = ((*(_DWORD *)(this + 0x98) | v4) & a4) != 0; /*0x9278c0*/
      return a2; /*0x9278b8*/
    }
    else
    {
LABEL_105:
      *a2 = (v4 & a4) != 0; /*0x9278d4*/
      return a2; /*0x9278cc*/
    }
  }
  else
  {
    *a2 = *(_BYTE *)(this + 0x18); /*0x9278e1*/
    return a2; /*0x9278dd*/
  }
}
