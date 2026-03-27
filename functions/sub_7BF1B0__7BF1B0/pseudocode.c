char __thiscall sub_7BF1B0(HDRShader *this)
{
  int v2; // esi
  NiD3DPass **v3; // ebp
  NiD3DPass *v4; // ecx
  bool v5; // zf
  NiD3DPass *v6; // ebp
  NiD3DPass *v7; // eax
  int v8; // eax
  NiD3DTextureStage *v9; // eax
  NiD3DPass **v10; // ebp
  NiD3DPass *v11; // ecx
  NiD3DPass *v12; // ebp
  NiD3DPass *v13; // eax
  int *v14; // ebp
  NiD3DTextureStage *v15; // eax
  NiD3DPass **v16; // ebp
  NiD3DPass *v17; // ecx
  NiD3DPass *v18; // ebp
  NiD3DPass *v19; // eax
  int *v20; // ebp
  NiD3DTextureStage *v21; // eax
  NiD3DPass **v22; // ebp
  NiD3DPass *v23; // ecx
  NiD3DPass *v24; // ebp
  NiD3DPass *v25; // eax
  int *v26; // ebp
  NiD3DTextureStage *v27; // eax
  NiD3DPass *v28; // ecx
  NiD3DPass *v29; // ecx
  NiD3DPass *v30; // ecx
  NiD3DPass **v31; // ebp
  NiD3DPass *v32; // ecx
  NiD3DPass *v33; // eax
  NiD3DPass *v34; // eax
  int *v35; // ebp
  NiD3DTextureStage *v36; // eax
  NiD3DPass *v37; // ecx
  NiD3DPass **v38; // ebp
  NiD3DPass *v39; // ecx
  NiD3DPass *v40; // eax
  NiD3DPass *v41; // eax
  int *v42; // ebp
  NiD3DTextureStage *v43; // eax
  NiD3DPass **v44; // ebp
  NiD3DPass *v45; // ecx
  NiD3DPass *v46; // ebp
  NiD3DPass *v47; // eax
  int *v48; // ebp
  NiD3DTextureStage *v49; // eax
  int *v50; // ebp
  NiD3DTextureStage *v51; // eax
  int *v52; // ebp
  NiD3DTextureStage *v53; // eax
  NiD3DPass **v54; // ebp
  NiD3DPass *v55; // ecx
  NiD3DPass *v56; // ebp
  NiD3DPass *v57; // eax
  int *v58; // ebp
  NiD3DTextureStage *v59; // eax
  NiD3DPass **v60; // ebp
  NiD3DPass *v61; // ecx
  NiD3DPass *v62; // ebp
  NiD3DPass *v63; // eax
  int *v64; // ebp
  NiD3DTextureStage *v65; // eax
  int *v66; // ebp
  NiD3DTextureStage *v67; // eax
  NiD3DPass **v68; // ebp
  NiD3DPass *v69; // ecx
  NiD3DPass *v70; // ebp
  NiD3DPass *v71; // eax
  int *v72; // ebp
  NiD3DTextureStage *v73; // eax
  NiD3DPass **passes; // edi
  NiD3DPass *v75; // ebp
  NiD3DPass *v76; // ebp
  NiD3DPass *v77; // ebp
  NiD3DPass *v78; // ebp
  NiD3DPass *v79; // ebp
  NiD3DPass *v81; // [esp+18h] [ebp-14h] BYREF
  NiD3DTextureStage *v82; // [esp+1Ch] [ebp-10h] BYREF
  unsigned int v83; // [esp+28h] [ebp-4h]

  v2 = 0;
  v83 = 0;
  v3 = sub_7606A0(&v81);
  v4 = this->passes[0];
  v5 = v4 == *v3;
  LOBYTE(v83) = 1;
  if ( !v5 )
  {
    if ( v4 )
    {
      v5 = v4->RefCount-- == 1;
      if ( v5 )
        sub_7604D0(v4);
    }
    v6 = *v3;
    this->passes[0] = v6;
    if ( v6 )
      ++v6->RefCount;
  }
  v7 = v81;
  LOBYTE(v83) = 0;
  if ( v81 )
  {
    --v81->RefCount;
    if ( !v7->RefCount )
      sub_7604D0(v7);
  }
  v8 = *sub_772630(&v81);
  if ( v8 )
  {
    v2 = v8;
    ++*(_DWORD *)(v8 + 0x5C);
  }
  v9 = (NiD3DTextureStage *)v81;
  LOBYTE(v83) = 0;
  if ( v81 )
  {
    --*(_DWORD *)&v81->SoftwareVP;
    if ( !v9[7].Unk08 )
      sub_772560(v9);
  }
  sub_801110(v2, 0, 3, 2);
  sub_771640((_DWORD **)v2, 0);
  sub_760010(this->passes[0], this->passes[0]->CurrentStage, (unsigned int *)v2);
  v10 = sub_7606A0(&v81);
  v11 = this->passes[1];
  v5 = v11 == *v10;
  LOBYTE(v83) = 3;
  if ( !v5 )
  {
    if ( v11 )
    {
      v5 = v11->RefCount-- == 1;
      if ( v5 )
        sub_7604D0(v11);
    }
    v12 = *v10;
    this->passes[1] = v12;
    if ( v12 )
      ++v12->RefCount;
  }
  v13 = v81;
  LOBYTE(v83) = 0;
  if ( v81 )
  {
    --v81->RefCount;
    if ( !v13->RefCount )
      sub_7604D0(v13);
  }
  v14 = sub_772630(&v81);
  v5 = v2 == *v14;
  LOBYTE(v83) = 4;
  if ( !v5 )
  {
    if ( v2 )
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1;
      if ( v5 )
        sub_772560((NiD3DTextureStage *)v2);
    }
    v2 = *v14;
    if ( *v14 )
      ++*(_DWORD *)(v2 + 0x5C);
  }
  v15 = (NiD3DTextureStage *)v81;
  LOBYTE(v83) = 0;
  if ( v81 )
  {
    --*(_DWORD *)&v81->SoftwareVP;
    if ( !v15[7].Unk08 )
      sub_772560(v15);
  }
  sub_801110(v2, 0, 3, 2);
  sub_771640((_DWORD **)v2, 0);
  sub_760010(this->passes[1], this->passes[1]->CurrentStage, (unsigned int *)v2);
  v16 = sub_7606A0(&v81);
  v17 = this->passes[2];
  v5 = v17 == *v16;
  LOBYTE(v83) = 5;
  if ( !v5 )
  {
    if ( v17 )
    {
      v5 = v17->RefCount-- == 1;
      if ( v5 )
        sub_7604D0(v17);
    }
    v18 = *v16;
    this->passes[2] = v18;
    if ( v18 )
      ++v18->RefCount;
  }
  v19 = v81;
  LOBYTE(v83) = 0;
  if ( v81 )
  {
    --v81->RefCount;
    if ( !v19->RefCount )
      sub_7604D0(v19);
  }
  v20 = sub_772630(&v81);
  v5 = v2 == *v20;
  LOBYTE(v83) = 6;
  if ( !v5 )
  {
    if ( v2 )
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1;
      if ( v5 )
        sub_772560((NiD3DTextureStage *)v2);
    }
    v2 = *v20;
    if ( *v20 )
      ++*(_DWORD *)(v2 + 0x5C);
  }
  v21 = (NiD3DTextureStage *)v81;
  LOBYTE(v83) = 0;
  if ( v81 )
  {
    --*(_DWORD *)&v81->SoftwareVP;
    if ( !v21[7].Unk08 )
      sub_772560(v21);
  }
  sub_801110(v2, 0, 3, 2);
  sub_771640((_DWORD **)v2, 0);
  sub_760010(this->passes[2], this->passes[2]->CurrentStage, (unsigned int *)v2);
  v22 = sub_7606A0(&v81);
  v23 = this->passes[3];
  v5 = v23 == *v22;
  LOBYTE(v83) = 7;
  if ( !v5 )
  {
    if ( v23 )
    {
      v5 = v23->RefCount-- == 1;
      if ( v5 )
        sub_7604D0(v23);
    }
    v24 = *v22;
    this->passes[3] = v24;
    if ( v24 )
      ++v24->RefCount;
  }
  v25 = v81;
  LOBYTE(v83) = 0;
  if ( v81 )
  {
    --v81->RefCount;
    if ( !v25->RefCount )
      sub_7604D0(v25);
  }
  v26 = sub_772630(&v81);
  v5 = v2 == *v26;
  LOBYTE(v83) = 8;
  if ( !v5 )
  {
    if ( v2 )
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1;
      if ( v5 )
        sub_772560((NiD3DTextureStage *)v2);
    }
    v2 = *v26;
    if ( *v26 )
      ++*(_DWORD *)(v2 + 0x5C);
  }
  v27 = (NiD3DTextureStage *)v81;
  LOBYTE(v83) = 0;
  if ( v81 )
  {
    --*(_DWORD *)&v81->SoftwareVP;
    if ( !v27[7].Unk08 )
      sub_772560(v27);
  }
  sub_801110(v2, 0, 3, 2);
  sub_771640((_DWORD **)v2, byte_B43071 != 0);
  sub_760010(this->passes[3], this->passes[3]->CurrentStage, (unsigned int *)v2);
  v28 = this->passes[4];
  if ( v28 )
  {
    v5 = v28->RefCount-- == 1;
    if ( v5 )
      sub_7604D0(v28);
    this->passes[4] = 0;
  }
  v29 = this->passes[5];
  if ( v29 )
  {
    v5 = v29->RefCount-- == 1;
    if ( v5 )
      sub_7604D0(v29);
    this->passes[5] = 0;
  }
  v30 = this->passes[6];
  if ( v30 )
  {
    v5 = v30->RefCount-- == 1;
    if ( v5 )
      sub_7604D0(v30);
    this->passes[6] = 0;
  }
  if ( LOBYTE(this->unk120) )
  {
    v31 = sub_7606A0(&v81);
    v32 = this->passes[7];
    v5 = v32 == *v31;
    LOBYTE(v83) = 9;
    if ( !v5 )
    {
      if ( v32 )
      {
        v5 = v32->RefCount-- == 1;
        if ( v5 )
          sub_7604D0(v32);
      }
      v33 = *v31;
      v5 = *v31 == 0;
      this->passes[7] = *v31;
      if ( !v5 )
        ++v33->RefCount;
    }
    v34 = v81;
    LOBYTE(v83) = 0;
    if ( v81 )
    {
      --v81->RefCount;
      if ( !v34->RefCount )
        sub_7604D0(v34);
    }
    v35 = sub_772630(&v81);
    v5 = v2 == *v35;
    LOBYTE(v83) = 0xA;
    if ( !v5 )
    {
      if ( v2 )
      {
        v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1;
        if ( v5 )
          sub_772560((NiD3DTextureStage *)v2);
      }
      v2 = *v35;
      if ( *v35 )
        ++*(_DWORD *)(v2 + 0x5C);
    }
    v36 = (NiD3DTextureStage *)v81;
    LOBYTE(v83) = 0;
    if ( v81 )
    {
      --*(_DWORD *)&v81->SoftwareVP;
      if ( !v36[7].Unk08 )
        sub_772560(v36);
    }
    sub_801110(v2, 0, 3, 2);
    sub_773100(*(_DWORD **)(v2 + 0xC), 5, 2, 0, 0);
    sub_773100(*(_DWORD **)(v2 + 0xC), 6, 3, 0, 0);
    sub_773100(*(_DWORD **)(v2 + 0xC), 7, 0, 0, 0);
    sub_760010(this->passes[7], this->passes[7]->CurrentStage, (unsigned int *)v2);
  }
  else
  {
    v37 = this->passes[7];
    if ( v37 )
    {
      v5 = v37->RefCount-- == 1;
      if ( v5 )
        sub_7604D0(v37);
      this->passes[7] = 0;
    }
  }
  v38 = sub_7606A0(&v81);
  v39 = this->passes[8];
  v5 = v39 == *v38;
  LOBYTE(v83) = 0xB;
  if ( !v5 )
  {
    if ( v39 )
    {
      v5 = v39->RefCount-- == 1;
      if ( v5 )
        sub_7604D0(v39);
    }
    v40 = *v38;
    v5 = *v38 == 0;
    this->passes[8] = *v38;
    if ( !v5 )
      ++v40->RefCount;
  }
  v41 = v81;
  LOBYTE(v83) = 0;
  if ( v81 )
  {
    --v81->RefCount;
    if ( !v41->RefCount )
      sub_7604D0(v41);
  }
  v42 = sub_772630(&v81);
  v5 = v2 == *v42;
  LOBYTE(v83) = 0xC;
  if ( !v5 )
  {
    if ( v2 )
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1;
      if ( v5 )
        sub_772560((NiD3DTextureStage *)v2);
    }
    v2 = *v42;
    if ( *v42 )
      ++*(_DWORD *)(v2 + 0x5C);
  }
  v43 = (NiD3DTextureStage *)v81;
  LOBYTE(v83) = 0;
  if ( v81 )
  {
    --*(_DWORD *)&v81->SoftwareVP;
    if ( !v43[7].Unk08 )
      sub_772560(v43);
  }
  sub_801110(v2, 0, 3, 2);
  sub_771640((_DWORD **)v2, 0);
  sub_760010(this->passes[8], this->passes[8]->CurrentStage, (unsigned int *)v2);
  v44 = sub_7606A0(&v81);
  v45 = this->passes[9];
  v5 = v45 == *v44;
  LOBYTE(v83) = 0xD;
  if ( !v5 )
  {
    if ( v45 )
    {
      v5 = v45->RefCount-- == 1;
      if ( v5 )
        sub_7604D0(v45);
    }
    v46 = *v44;
    this->passes[9] = v46;
    if ( v46 )
      ++v46->RefCount;
  }
  v47 = v81;
  LOBYTE(v83) = 0;
  if ( v81 )
  {
    --v81->RefCount;
    if ( !v47->RefCount )
      sub_7604D0(v47);
  }
  v48 = sub_772630(&v81);
  v5 = v2 == *v48;
  LOBYTE(v83) = 0xE;
  if ( !v5 )
  {
    if ( v2 )
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1;
      if ( v5 )
        sub_772560((NiD3DTextureStage *)v2);
    }
    v2 = *v48;
    if ( *v48 )
      ++*(_DWORD *)(v2 + 0x5C);
  }
  v49 = (NiD3DTextureStage *)v81;
  LOBYTE(v83) = 0;
  if ( v81 )
  {
    --*(_DWORD *)&v81->SoftwareVP;
    if ( !v49[7].Unk08 )
      sub_772560(v49);
  }
  sub_801110(v2, 0, 3, 2);
  sub_771640((_DWORD **)v2, byte_B43071 != 0);
  sub_760010(this->passes[9], this->passes[9]->CurrentStage, (unsigned int *)v2);
  v50 = sub_772630(&v81);
  v5 = v2 == *v50;
  LOBYTE(v83) = 0xF;
  if ( !v5 )
  {
    if ( v2 )
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1;
      if ( v5 )
        sub_772560((NiD3DTextureStage *)v2);
    }
    v2 = *v50;
    if ( *v50 )
      ++*(_DWORD *)(v2 + 0x5C);
  }
  v51 = (NiD3DTextureStage *)v81;
  LOBYTE(v83) = 0;
  if ( v81 )
  {
    --*(_DWORD *)&v81->SoftwareVP;
    if ( !v51[7].Unk08 )
      sub_772560(v51);
  }
  sub_801110(v2, 1, 3, 2);
  sub_771640((_DWORD **)v2, 0);
  sub_760010(this->passes[9], this->passes[9]->CurrentStage, (unsigned int *)v2);
  v52 = sub_772630(&v81);
  v5 = v2 == *v52;
  LOBYTE(v83) = 0x10;
  if ( !v5 )
  {
    if ( v2 )
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1;
      if ( v5 )
        sub_772560((NiD3DTextureStage *)v2);
    }
    v2 = *v52;
    if ( *v52 )
      ++*(_DWORD *)(v2 + 0x5C);
  }
  v53 = (NiD3DTextureStage *)v81;
  LOBYTE(v83) = 0;
  if ( v81 )
  {
    --*(_DWORD *)&v81->SoftwareVP;
    if ( !v53[7].Unk08 )
      sub_772560(v53);
  }
  sub_801110(v2, 2, 3, 2);
  sub_771640((_DWORD **)v2, 0);
  sub_760010(this->passes[9], this->passes[9]->CurrentStage, (unsigned int *)v2);
  v54 = sub_7606A0(&v81);
  v55 = this->passes[0xA];
  v5 = v55 == *v54;
  LOBYTE(v83) = 0x11;
  if ( !v5 )
  {
    if ( v55 )
    {
      v5 = v55->RefCount-- == 1;
      if ( v5 )
        sub_7604D0(v55);
    }
    v56 = *v54;
    this->passes[0xA] = v56;
    if ( v56 )
      ++v56->RefCount;
  }
  v57 = v81;
  LOBYTE(v83) = 0;
  if ( v81 )
  {
    --v81->RefCount;
    if ( !v57->RefCount )
      sub_7604D0(v57);
  }
  v58 = sub_772630(&v81);
  v5 = v2 == *v58;
  LOBYTE(v83) = 0x12;
  if ( !v5 )
  {
    if ( v2 )
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1;
      if ( v5 )
        sub_772560((NiD3DTextureStage *)v2);
    }
    v2 = *v58;
    if ( *v58 )
      ++*(_DWORD *)(v2 + 0x5C);
  }
  v59 = (NiD3DTextureStage *)v81;
  LOBYTE(v83) = 0;
  if ( v81 )
  {
    --*(_DWORD *)&v81->SoftwareVP;
    if ( !v59[7].Unk08 )
      sub_772560(v59);
  }
  sub_801110(v2, 0, 3, 2);
  sub_771640((_DWORD **)v2, 0);
  sub_760010(this->passes[0xA], this->passes[0xA]->CurrentStage, (unsigned int *)v2);
  v60 = sub_7606A0(&v81);
  v61 = this->passes[0xB];
  v5 = v61 == *v60;
  LOBYTE(v83) = 0x13;
  if ( !v5 )
  {
    if ( v61 )
    {
      v5 = v61->RefCount-- == 1;
      if ( v5 )
        sub_7604D0(v61);
    }
    v62 = *v60;
    this->passes[0xB] = v62;
    if ( v62 )
      ++v62->RefCount;
  }
  v63 = v81;
  LOBYTE(v83) = 0;
  if ( v81 )
  {
    --v81->RefCount;
    if ( !v63->RefCount )
      sub_7604D0(v63);
  }
  v64 = sub_772630(&v81);
  v5 = v2 == *v64;
  LOBYTE(v83) = 0x14;
  if ( !v5 )
  {
    if ( v2 )
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1;
      if ( v5 )
        sub_772560((NiD3DTextureStage *)v2);
    }
    v2 = *v64;
    if ( *v64 )
      ++*(_DWORD *)(v2 + 0x5C);
  }
  v65 = (NiD3DTextureStage *)v81;
  LOBYTE(v83) = 0;
  if ( v81 )
  {
    --*(_DWORD *)&v81->SoftwareVP;
    if ( !v65[7].Unk08 )
      sub_772560(v65);
  }
  sub_801110(v2, 0, 3, 2);
  sub_771640((_DWORD **)v2, 0);
  sub_760010(this->passes[0xB], this->passes[0xB]->CurrentStage, (unsigned int *)v2);
  v66 = sub_772630(&v81);
  v5 = v2 == *v66;
  LOBYTE(v83) = 0x15;
  if ( !v5 )
  {
    if ( v2 )
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1;
      if ( v5 )
        sub_772560((NiD3DTextureStage *)v2);
    }
    v2 = *v66;
    if ( *v66 )
      ++*(_DWORD *)(v2 + 0x5C);
  }
  v67 = (NiD3DTextureStage *)v81;
  LOBYTE(v83) = 0;
  if ( v81 )
  {
    --*(_DWORD *)&v81->SoftwareVP;
    if ( !v67[7].Unk08 )
      sub_772560(v67);
  }
  sub_801110(v2, 1, 3, 2);
  sub_771640((_DWORD **)v2, 0);
  sub_760010(this->passes[0xB], this->passes[0xB]->CurrentStage, (unsigned int *)v2);
  v68 = sub_7606A0(&v81);
  v69 = this->passes[0xC];
  v5 = v69 == *v68;
  LOBYTE(v83) = 0x16;
  if ( !v5 )
  {
    if ( v69 )
    {
      v5 = v69->RefCount-- == 1;
      if ( v5 )
        sub_7604D0(v69);
    }
    v70 = *v68;
    this->passes[0xC] = v70;
    if ( v70 )
      ++v70->RefCount;
  }
  v71 = v81;
  LOBYTE(v83) = 0;
  if ( v81 )
  {
    --v81->RefCount;
    if ( !v71->RefCount )
      sub_7604D0(v71);
  }
  v72 = sub_772630(&v82);
  v5 = v2 == *v72;
  LOBYTE(v83) = 0x17;
  if ( !v5 )
  {
    if ( v2 )
    {
      v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1;
      if ( v5 )
        sub_772560((NiD3DTextureStage *)v2);
    }
    v2 = *v72;
    if ( *v72 )
      ++*(_DWORD *)(v2 + 0x5C);
  }
  v73 = v82;
  LOBYTE(v83) = 0;
  if ( v82 )
  {
    --v82[7].Unk08;
    if ( !v73[7].Unk08 )
      sub_772560(v73);
  }
  sub_801110(v2, 0, 3, 2);
  sub_771640((_DWORD **)v2, 0);
  sub_760010(this->passes[0xC], this->passes[0xC]->CurrentStage, (unsigned int *)v2);
  passes = this->passes;
  v81 = (NiD3DPass *)0xD;
  do
  {
    v75 = *passes;
    if ( *passes )
    {
      if ( !v75->RenderStateGroup )
        v75->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
      sub_772CD0((_DWORD *)v75->RenderStateGroup, 7, 0, 0);
      v76 = *passes;
      if ( !(*passes)->RenderStateGroup )
        v76->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
      sub_772CD0((_DWORD *)v76->RenderStateGroup, 0xE, 0, 0);
      v77 = *passes;
      if ( !(*passes)->RenderStateGroup )
        v77->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
      sub_772CD0((_DWORD *)v77->RenderStateGroup, 0x1B, 0, 0);
      v78 = *passes;
      if ( !(*passes)->RenderStateGroup )
        v78->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
      sub_772CD0((_DWORD *)v78->RenderStateGroup, 0xF, 0, 0);
      v79 = *passes;
      if ( !(*passes)->RenderStateGroup )
        v79->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
      sub_772CD0((_DWORD *)v79->RenderStateGroup, 0xA8, 0xF, 0);
    }
    ++passes;
    v81 = (NiD3DPass *)((char *)v81 + 0xFFFFFFFF);
  }
  while ( v81 );
  this->__vftable->UnkB8(this);
  v83 = 0xFFFFFFFF;
  if ( v2 )
  {
    v5 = (*(_DWORD *)(v2 + 0x5C))-- == 1;
    if ( v5 )
      sub_772560((NiD3DTextureStage *)v2);
  }
  return 1;
}
