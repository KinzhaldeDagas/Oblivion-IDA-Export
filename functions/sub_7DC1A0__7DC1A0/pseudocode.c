char __thiscall sub_7DC1A0(WaterShader *this)
{
  int i; // esi
  NiD3DPass **v3; // ebx
  NiD3DPass *v4; // ecx
  bool v5; // zf
  NiD3DPass *v6; // eax
  NiD3DPass *v7; // eax
  unsigned int **v8; // ebx
  NiD3DTextureStage *v9; // eax
  NiD3DTextureStage *v10; // ecx
  unsigned int **v11; // ebx
  NiD3DTextureStage *v12; // eax
  NiD3DTextureStage *v13; // ecx
  unsigned int **v14; // ebx
  NiD3DTextureStage *v15; // eax
  NiD3DTextureStage *v16; // ecx
  unsigned int **v17; // ebx
  NiD3DTextureStage *v18; // eax
  NiD3DTextureStage *v19; // ecx
  NiD3DTextureStage *v20; // eax
  UInt32 v21; // ebp
  volatile LONG *v22; // ebx
  NiD3DPixelShader **v23; // ebp
  NiD3DPixelShader *v24; // eax
  UInt32 v25; // ebp
  volatile LONG *v26; // ebx
  NiD3DPixelShader **v27; // ebp
  NiD3DPixelShader *v28; // eax
  UInt32 v29; // ebx
  UInt32 v30; // ebp
  UInt32 v31; // ebx
  UInt32 v32; // ebx
  UInt32 v33; // ebx
  UInt32 v34; // ebx
  UInt32 v35; // ebx
  UInt32 v36; // ebx
  UInt32 v37; // ebx
  UInt32 v38; // ebx
  UInt32 v39; // ebp
  UInt32 v40; // ebp
  UInt32 v41; // ebx
  UInt32 v42; // ebx
  UInt32 v43; // ebx
  UInt32 v44; // ebx
  UInt32 v45; // ebx
  UInt32 v46; // ebx
  UInt32 v47; // ebp
  UInt32 v48; // ebx
  UInt32 v49; // ebx
  unsigned int *a3; // [esp+14h] [ebp-28h] BYREF
  NiD3DPixelShader *v52; // [esp+18h] [ebp-24h]
  NiD3DPass *v53; // [esp+1Ch] [ebp-20h] BYREF
  NiD3DTextureStage *v54; // [esp+20h] [ebp-1Ch] BYREF
  NiD3DTextureStage *v55; // [esp+24h] [ebp-18h] BYREF
  NiD3DTextureStage *v56; // [esp+28h] [ebp-14h] BYREF
  NiD3DTextureStage *v57; // [esp+2Ch] [ebp-10h] BYREF
  int v58; // [esp+38h] [ebp-4h]

  for ( i = 0; i < 0x10; ++i )
  {
    if ( !this->Unk07C[i] )
    {
      v3 = sub_7606A0(&v53);
      v4 = (NiD3DPass *)this->Unk07C[i];
      v5 = v4 == *v3;
      v58 = 0;
      if ( !v5 )
      {
        if ( v4 )
        {
          v5 = v4->RefCount-- == 1;
          if ( v5 )
            sub_7604D0(v4);
        }
        v6 = *v3;
        v5 = *v3 == 0;
        this->Unk07C[i] = (UInt32)*v3;
        if ( !v5 )
          ++v6->RefCount;
      }
      v7 = v53;
      v58 = 0xFFFFFFFF;
      if ( v53 )
      {
        --v53->RefCount;
        if ( !v7->RefCount )
          sub_7604D0(v7);
      }
      sub_772630(&a3);
      v58 = 1;
      sub_801110((int)a3, 0, 3, 2);
      sub_771640((_DWORD **)a3, 1);
      sub_760010((NiD3DPass *)this->Unk07C[i], *(_DWORD *)(this->Unk07C[i] + 0x14), a3);
      v8 = (unsigned int **)sub_772630(&v54);
      v9 = (NiD3DTextureStage *)a3;
      v5 = a3 == *v8;
      LOBYTE(v58) = 2;
      if ( !v5 )
      {
        if ( a3 )
        {
          --a3[0x17];
          if ( !v9[7].Unk08 )
            sub_772560(v9);
        }
        v9 = (NiD3DTextureStage *)*v8;
        a3 = *v8;
        if ( a3 )
        {
          ++v9[7].Unk08;
          v9 = (NiD3DTextureStage *)a3;
        }
      }
      v10 = v54;
      LOBYTE(v58) = 1;
      if ( v54 )
      {
        --v54[7].Unk08;
        if ( !v10[7].Unk08 )
          sub_772560(v10);
        v9 = (NiD3DTextureStage *)a3;
      }
      sub_801110((int)v9, 1, 1, 2);
      sub_771640((_DWORD **)a3, 1);
      sub_760010((NiD3DPass *)this->Unk07C[i], *(_DWORD *)(this->Unk07C[i] + 0x14), a3);
      v11 = (unsigned int **)sub_772630(&v55);
      v12 = (NiD3DTextureStage *)a3;
      v5 = a3 == *v11;
      LOBYTE(v58) = 3;
      if ( !v5 )
      {
        if ( a3 )
        {
          --a3[0x17];
          if ( !v12[7].Unk08 )
            sub_772560(v12);
        }
        v12 = (NiD3DTextureStage *)*v11;
        a3 = *v11;
        if ( a3 )
        {
          ++v12[7].Unk08;
          v12 = (NiD3DTextureStage *)a3;
        }
      }
      v13 = v55;
      LOBYTE(v58) = 1;
      if ( v55 )
      {
        --v55[7].Unk08;
        if ( !v13[7].Unk08 )
          sub_772560(v13);
        v12 = (NiD3DTextureStage *)a3;
      }
      sub_801110((int)v12, 2, 1, 2);
      sub_771640((_DWORD **)a3, 1);
      sub_760010((NiD3DPass *)this->Unk07C[i], *(_DWORD *)(this->Unk07C[i] + 0x14), a3);
      v14 = (unsigned int **)sub_772630(&v56);
      v15 = (NiD3DTextureStage *)a3;
      v5 = a3 == *v14;
      LOBYTE(v58) = 4;
      if ( !v5 )
      {
        if ( a3 )
        {
          --a3[0x17];
          if ( !v15[7].Unk08 )
            sub_772560(v15);
        }
        v15 = (NiD3DTextureStage *)*v14;
        a3 = *v14;
        if ( a3 )
        {
          ++v15[7].Unk08;
          v15 = (NiD3DTextureStage *)a3;
        }
      }
      v16 = v56;
      LOBYTE(v58) = 1;
      if ( v56 )
      {
        --v56[7].Unk08;
        if ( !v16[7].Unk08 )
          sub_772560(v16);
        v15 = (NiD3DTextureStage *)a3;
      }
      sub_801110((int)v15, 3, 3, 2);
      sub_771640((_DWORD **)a3, 1);
      sub_760010((NiD3DPass *)this->Unk07C[i], *(_DWORD *)(this->Unk07C[i] + 0x14), a3);
      v17 = (unsigned int **)sub_772630(&v57);
      v18 = (NiD3DTextureStage *)a3;
      v5 = a3 == *v17;
      LOBYTE(v58) = 5;
      if ( !v5 )
      {
        if ( a3 )
        {
          --a3[0x17];
          if ( !v18[7].Unk08 )
            sub_772560(v18);
        }
        v18 = (NiD3DTextureStage *)*v17;
        a3 = *v17;
        if ( a3 )
        {
          ++v18[7].Unk08;
          v18 = (NiD3DTextureStage *)a3;
        }
      }
      v19 = v57;
      LOBYTE(v58) = 1;
      if ( v57 )
      {
        --v57[7].Unk08;
        if ( !v19[7].Unk08 )
          sub_772560(v19);
        v18 = (NiD3DTextureStage *)a3;
      }
      sub_801110((int)v18, 4, 3, 2);
      sub_771640((_DWORD **)a3, 1);
      sub_760010((NiD3DPass *)this->Unk07C[i], *(_DWORD *)(this->Unk07C[i] + 0x14), a3);
      v20 = (NiD3DTextureStage *)a3;
      v58 = 0xFFFFFFFF;
      if ( a3 )
      {
        --a3[0x17];
        if ( !v20[7].Unk08 )
          sub_772560(v20);
      }
    }
    if ( i == 7 || i == 9 || i == 8 || i == 0xA )
    {
      v21 = this->Unk07C[i];
      v22 = *(volatile LONG **)(v21 + 0x58);
      v23 = (NiD3DPixelShader **)(v21 + 0x58);
      v52 = this->Vertex[1];
      if ( v22 != (volatile LONG *)v52 )
      {
        if ( v22 )
        {
          if ( !InterlockedDecrement(v22 + 1) )
            (**(void (__thiscall ***)(volatile LONG *, int))v22)(v22, 1);
        }
        v24 = v52;
        v5 = v52 == 0;
        *v23 = v52;
        if ( !v5 )
          InterlockedIncrement((volatile LONG *)v24 + 1);
      }
    }
    else
    {
      sub_7AECB0((NiD3DPass *)this->Unk07C[i], this->Vertex[0]);
    }
    v25 = this->Unk07C[i];
    v26 = *(volatile LONG **)(v25 + 0x44);
    v27 = (NiD3DPixelShader **)(v25 + 0x44);
    v52 = this->Pixel[i];
    if ( v26 != (volatile LONG *)v52 )
    {
      if ( v26 )
      {
        if ( !InterlockedDecrement(v26 + 1) )
          (**(void (__thiscall ***)(volatile LONG *, int))v26)(v26, 1);
      }
      v28 = v52;
      v5 = v52 == 0;
      *v27 = v52;
      if ( !v5 )
        InterlockedIncrement((volatile LONG *)v28 + 1);
    }
    v29 = this->Unk07C[i];
    if ( !*(_DWORD *)(v29 + 0x30) )
      *(_DWORD *)(v29 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v29 + 0x30), 7, 1, 0);
    v30 = this->Unk07C[i];
    if ( !*(_DWORD *)(v30 + 0x30) )
      *(_DWORD *)(v30 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v30 + 0x30), 0x17, 4, 0);
    v31 = this->Unk07C[i];
    if ( !*(_DWORD *)(v31 + 0x30) )
      *(_DWORD *)(v31 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v31 + 0x30), 0x34, 0, 0);
    v32 = this->Unk07C[i];
    if ( !*(_DWORD *)(v32 + 0x30) )
      *(_DWORD *)(v32 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v32 + 0x30), 0xF, 1, 0);
    v33 = this->Unk07C[i];
    if ( !*(_DWORD *)(v33 + 0x30) )
      *(_DWORD *)(v33 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v33 + 0x30), 0x18, 0, 0);
    v34 = this->Unk07C[i];
    if ( !*(_DWORD *)(v34 + 0x30) )
      *(_DWORD *)(v34 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v34 + 0x30), 0x19, 5, 0);
    v35 = this->Unk07C[i];
    if ( !*(_DWORD *)(v35 + 0x30) )
      *(_DWORD *)(v35 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v35 + 0x30), 0xA8, 7, 0);
    if ( i == 0xC )
    {
      v36 = this->Unk07C[0xC];
      if ( !*(_DWORD *)(v36 + 0x30) )
        *(_DWORD *)(v36 + 0x30) = sub_772DF0();
      sub_772CD0(*(_DWORD **)(v36 + 0x30), 0x1B, 0, 0);
      v37 = this->Unk07C[0xC];
      if ( !*(_DWORD *)(v37 + 0x30) )
        *(_DWORD *)(v37 + 0x30) = sub_772DF0();
      sub_772CD0(*(_DWORD **)(v37 + 0x30), 0xE, 1, 0);
    }
    else
    {
      v38 = this->Unk07C[i];
      if ( !*(_DWORD *)(v38 + 0x30) )
        *(_DWORD *)(v38 + 0x30) = sub_772DF0();
      sub_772CD0(*(_DWORD **)(v38 + 0x30), 0x1B, 1, 0);
      v39 = this->Unk07C[i];
      if ( !*(_DWORD *)(v39 + 0x30) )
        *(_DWORD *)(v39 + 0x30) = sub_772DF0();
      sub_772CD0(*(_DWORD **)(v39 + 0x30), 0x13, 5, 0);
      v40 = this->Unk07C[i];
      if ( !*(_DWORD *)(v40 + 0x30) )
        *(_DWORD *)(v40 + 0x30) = sub_772DF0();
      sub_772CD0(*(_DWORD **)(v40 + 0x30), 0x14, 6, 0);
      v41 = this->Unk07C[i];
      if ( !*(_DWORD *)(v41 + 0x30) )
        *(_DWORD *)(v41 + 0x30) = sub_772DF0();
      sub_772CD0(*(_DWORD **)(v41 + 0x30), 0xE, 1, 0);
      if ( i == 7 || i == 8 || i == 9 || i == 0xA )
      {
        v42 = this->Unk07C[i];
        if ( !*(_DWORD *)(v42 + 0x30) )
          *(_DWORD *)(v42 + 0x30) = sub_772DF0();
        sub_772CD0(*(_DWORD **)(v42 + 0x30), 0x34, 1, 0);
        v43 = this->Unk07C[i];
        if ( !*(_DWORD *)(v43 + 0x30) )
          *(_DWORD *)(v43 + 0x30) = sub_772DF0();
        sub_772CD0(*(_DWORD **)(v43 + 0x30), 0x39, 0, 0);
        v44 = this->Unk07C[i];
        if ( !*(_DWORD *)(v44 + 0x30) )
          *(_DWORD *)(v44 + 0x30) = sub_772DF0();
        sub_772CD0(*(_DWORD **)(v44 + 0x30), 0x37, 7, 0);
        v45 = this->Unk07C[i];
        if ( !*(_DWORD *)(v45 + 0x30) )
          *(_DWORD *)(v45 + 0x30) = sub_772DF0();
        sub_772CD0(*(_DWORD **)(v45 + 0x30), 0x38, 8, 0);
      }
      if ( !i || i == 2 || i == 1 || i == 3 || i == 4 || i == 5 )
      {
        v46 = this->Unk07C[i];
        if ( !*(_DWORD *)(v46 + 0x30) )
          *(_DWORD *)(v46 + 0x30) = sub_772DF0();
        sub_772CD0(*(_DWORD **)(v46 + 0x30), 0x34, 1, 0);
        v47 = this->Unk07C[i];
        if ( !*(_DWORD *)(v47 + 0x30) )
          *(_DWORD *)(v47 + 0x30) = sub_772DF0();
        sub_772CD0(*(_DWORD **)(v47 + 0x30), 0x38, 3, 0);
        v48 = this->Unk07C[i];
        if ( !*(_DWORD *)(v48 + 0x30) )
          *(_DWORD *)(v48 + 0x30) = sub_772DF0();
        sub_772CD0(*(_DWORD **)(v48 + 0x30), 0x39, 0, 0);
        v49 = this->Unk07C[i];
        if ( !*(_DWORD *)(v49 + 0x30) )
          *(_DWORD *)(v49 + 0x30) = sub_772DF0();
        sub_772CD0(*(_DWORD **)(v49 + 0x30), 0x37, 1, 0);
      }
    }
  }
  return 1;
}
