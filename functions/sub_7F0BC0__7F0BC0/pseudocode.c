void __thiscall sub_7F0BC0(_DWORD **this, float a2, int a3, int a4, _DWORD *a5, int a6, int a7, int a8)
{
  int v10; // edi
  double v12; // st7
  int v13; // esi
  BOOL v14; // ebx
  _DWORD *v15; // ebx
  NiD3DTextureStage *v16; // esi
  int v17; // eax
  NiTexture *Texture; // esi
  int v19; // edi
  NiD3DTextureStage *v20; // esi
  NiD3DVertexShader *v21; // eax
  NiD3DPass *v22; // ecx
  NiD3DPixelShader *v23; // eax
  int v24; // esi
  int v25; // esi
  int v26; // esi
  int v27; // esi
  int v28; // esi
  int v29; // edi
  int v30; // edi
  int v31; // ebp
  float v33; // [esp+14h] [ebp-38h]
  float v34; // [esp+18h] [ebp-34h]
  float v35; // [esp+1Ch] [ebp-30h]
  float v36; // [esp+20h] [ebp-2Ch]
  int v37; // [esp+24h] [ebp-28h]
  int v38; // [esp+28h] [ebp-24h]
  int v39; // [esp+2Ch] [ebp-20h]
  float v40; // [esp+50h] [ebp+4h]
  float v41; // [esp+50h] [ebp+4h]
  float v42; // [esp+50h] [ebp+4h]
  NiD3DTextureStage *v43; // [esp+50h] [ebp+4h]
  char v44; // [esp+5Ch] [ebp+10h]
  int v45; // [esp+5Ch] [ebp+10h]

  (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 6) + 8))(*(this + 6), a5[2]);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 6) + 0x28))(*(this + 6), a5[0xB]);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(this + 6) + 0x24))(*(this + 6), a5[0xA]);
  v10 = a5[3];
  v44 = 0;
  if ( v10 )
  {
    v35 = *(float *)(v10 + 0x2C);
    v36 = *(float *)(v10 + 0x30);
    v33 = *(float *)(LODWORD(a2) + 0x88) - *(float *)&dword_B46658;
    v40 = *(float *)(LODWORD(a2) + 0x8C) - *(float *)&dword_B4665C;
    v34 = *(float *)(LODWORD(a2) + 0x90) - *(float *)&dword_B46660;
    v41 = v40 * v40 + v33 * v33 + v34 * v34;
    v42 = sqrt(v41);
    if ( v35 < (double)v42 )
    {
      v12 = v35;
    }
    else
    {
      v12 = v35;
      if ( v35 >= v42 + *(float *)(a8 + 0xC) )
        goto LABEL_4;
    }
    v37 = *(_DWORD *)(v10 + 0x20);
    v38 = *(_DWORD *)(v10 + 0x24);
    *(float *)&v45 = v36 - v12;
    v39 = *(_DWORD *)(v10 + 0x28);
    *(float *)&dword_B46638 = v36;
    dword_B4663C = v45;
    v44 = 1;
    *(float *)&dword_B46640 = 0.0;
    *(float *)&dword_B46644 = 0.0;
    dword_B46648 = v37;
    dword_B4664C = v38;
    dword_B46650 = v39;
    *(float *)&dword_B46654 = 0.0;
  }
LABEL_4:
  if ( byte_B42E86 )
  {
    sub_7ECAE0(0, COERCE_INT(1.0), COERCE_INT(1.0), COERCE_INT(1.0), COERCE_INT(1.0));
    sub_7ECAE0(1u, COERCE_INT(0.0), SLODWORD(flt_A47E6C), COERCE_INT(0.0), COERCE_INT(0.0));
  }
  v13 = a5[6];
  if ( v13 )
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 0x54))(v13) == 9;
  else
    v14 = 0;
  v15 = v14 ? (_DWORD *)v13 : 0;
  qmemcpy(this + 0x1F, (const void *)(*(int (__thiscall **)(_DWORD *))(*v15 + 0xA0))(v15), 0x300u);
  flt_B4677C = *(float *)((*(int (__thiscall **)(_DWORD *))(*v15 + 0x9C))(v15) + 0x18) * flt_B4672C;
  flt_B4678C = *(float *)((*(int (__thiscall **)(_DWORD *))(*v15 + 0x9C))(v15) + 0x1C) * flt_B46730;
  flt_B46780 = *(float *)((*(int (__thiscall **)(_DWORD *))(*v15 + 0x9C))(v15) + 0x14);
  flt_B46790 = *(float *)((*(int (__thiscall **)(_DWORD *))(*v15 + 0x9C))(v15) + 0x10);
  flt_B467A0 = 0.0;
  flt_B467A4 = 0.0;
  flt_B467A8 = 0.0;
  flt_B467AC = 0.0;
  flt_B467A4 = *(float *)((*(int (__thiscall **)(_DWORD *))(*v15 + 0x9C))(v15) + 0xC);
  v16 = *(NiD3DTextureStage **)(*(this + 0xE5))[9];
  v43 = v16;
  if ( v16 )
    ++v16[7].Unk08;
  v17 = (*(int (__thiscall **)(_DWORD *))(*v15 + 0x78))(v15);
  Texture = v16->Texture;
  v19 = v17;
  if ( Texture == (NiTexture *)v17 )
  {
    v20 = v43;
  }
  else
  {
    if ( Texture )
    {
      if ( !InterlockedDecrement((volatile LONG *)&Texture->members) )
        Texture->__vftable->super.super.Destructor((NiRefObject *)Texture, 1);
    }
    v20 = v43;
    v43->Texture = (NiTexture *)v19;
    if ( v19 )
      InterlockedIncrement((volatile LONG *)(v19 + 4));
  }
  if ( byte_B42E86 )
  {
    v21 = (NiD3DVertexShader *)*(this + 0xDF);
  }
  else
  {
    if ( !(unsigned __int16)sub_7ED5D0(v15) )
    {
      v22 = (NiD3DPass *)*(this + 0xE5);
      if ( v44 )
      {
        sub_7AECB0(v22, (NiD3DVertexShader *)*(this + 0xE0));
        v23 = (NiD3DPixelShader *)*(this + 0xE4);
        goto LABEL_31;
      }
      v21 = (NiD3DVertexShader *)*(this + 0xDF);
      goto LABEL_30;
    }
    if ( v44 )
    {
      sub_7AECB0((NiD3DPass *)*(this + 0xE5), (NiD3DVertexShader *)*(this + 0xE2));
      v23 = (NiD3DPixelShader *)*(this + 0xE4);
      goto LABEL_31;
    }
    v21 = (NiD3DVertexShader *)*(this + 0xE1);
  }
  v22 = (NiD3DPass *)*(this + 0xE5);
LABEL_30:
  sub_7AECB0(v22, v21);
  v23 = (NiD3DPixelShader *)*(this + 0xE3);
LABEL_31:
  sub_7AEC60((NiD3DPassVtbl **)*(this + 0xE5), v23);
  if ( LOWORD(dword_B42EAC) == 4 )
  {
    v24 = (int)*(this + 0xE5);
    if ( !*(_DWORD *)(v24 + 0x30) )
      *(_DWORD *)(v24 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v24 + 0x30), 0x34, 1, 0);
    v25 = (int)*(this + 0xE5);
    if ( !*(_DWORD *)(v25 + 0x30) )
      *(_DWORD *)(v25 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v25 + 0x30), 0x38, 8, 0);
    v26 = (int)*(this + 0xE5);
    if ( !*(_DWORD *)(v26 + 0x30) )
      *(_DWORD *)(v26 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v26 + 0x30), 0x37, 7, 0);
    v27 = (int)*(this + 0xE5);
    if ( !*(_DWORD *)(v27 + 0x30) )
      *(_DWORD *)(v27 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v27 + 0x30), 0x35, 1, 0);
    v28 = (int)*(this + 0xE5);
    if ( !*(_DWORD *)(v28 + 0x30) )
      *(_DWORD *)(v28 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v28 + 0x30), 0x36, 1, 0);
    v20 = v43;
  }
  else
  {
    v29 = (int)*(this + 0xE5);
    if ( !*(_DWORD *)(v29 + 0x30) )
      *(_DWORD *)(v29 + 0x30) = sub_772DF0();
    sub_772CD0(*(_DWORD **)(v29 + 0x30), 0x34, 0, 0);
  }
  v30 = (int)*(this + 0xE5);
  if ( !*(_DWORD *)(v30 + 0x30) )
    *(_DWORD *)(v30 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v30 + 0x30), 0xA8, 7, 0);
  v31 = (int)*(this + 0xE5);
  if ( !*(_DWORD *)(v31 + 0x30) )
    *(_DWORD *)(v31 + 0x30) = sub_772DF0();
  sub_772CD0(*(_DWORD **)(v31 + 0x30), 0x1C, 0, 0);
  if ( v20 )
  {
    if ( v20[7].Unk08-- == 1 )
      sub_772560(v20);
  }
}
