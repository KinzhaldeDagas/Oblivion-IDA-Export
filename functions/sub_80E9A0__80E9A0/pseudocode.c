int __thiscall sub_80E9A0(char *this, float *a2, int a3, int a4, _DWORD *a5, int a6, int a7, int a8)
{
  int v10; // ebp
  char v11; // bl
  double v13; // st7
  int v14; // edi
  BOOL v15; // eax
  _DWORD *v16; // eax
  NiDX9Renderer *v17; // edi
  _DWORD *v18; // ebp
  NiDX9Renderer *v19; // eax
  int v20; // eax
  char v21; // al
  NiD3DTextureStage *v22; // eax
  NiD3DPassVtbl ***v23; // edi
  NiRenderedTexture *v24; // eax
  __int16 v25; // ax
  NiD3DPass *v26; // ecx
  NiD3DPixelShader *v27; // eax
  NiD3DVertexShader *v28; // eax
  NiD3DPassVtbl **v29; // ebp
  NiD3DPassVtbl **v30; // ebp
  NiD3DPassVtbl **v31; // ebp
  NiD3DPassVtbl **v32; // ebp
  NiD3DPassVtbl **v33; // ebp
  NiD3DPassVtbl **v34; // ebp
  NiD3DPassVtbl **v35; // ebp
  float v38; // [esp+14h] [ebp-34h]
  float v39; // [esp+18h] [ebp-30h]
  float v40; // [esp+1Ch] [ebp-2Ch]
  int v41; // [esp+20h] [ebp-28h]
  int v42; // [esp+24h] [ebp-24h]
  int v43; // [esp+28h] [ebp-20h]
  float v44; // [esp+4Ch] [ebp+4h]
  float v45; // [esp+58h] [ebp+10h]
  float v46; // [esp+58h] [ebp+10h]
  float v47; // [esp+58h] [ebp+10h]
  int v48; // [esp+58h] [ebp+10h]
  NiD3DTextureStage *v49; // [esp+58h] [ebp+10h]

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 0x80))(this);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 6) + 8))(*((_DWORD *)this + 6), a5[2]);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 6) + 0x20))(*((_DWORD *)this + 6), a5[7]);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 6) + 0x28))(*((_DWORD *)this + 6), a5[0xB]);
  (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 6) + 0x24))(*((_DWORD *)this + 6), a5[0xA]);
  v10 = a5[3];
  v11 = 0;
  if ( v10 )
  {
    v39 = *(float *)(v10 + 0x2C);
    v40 = *(float *)(v10 + 0x30);
    v44 = a2[0x22] - *(float *)&dword_B46658;
    v45 = a2[0x23] - *(float *)&dword_B4665C;
    v38 = a2[0x24] - *(float *)&dword_B46660;
    v46 = v45 * v45 + v44 * v44 + v38 * v38;
    v47 = sqrt(v46);
    if ( v39 < (double)v47 )
    {
      v13 = v39;
    }
    else
    {
      v13 = v39;
      if ( v39 >= v47 + *(float *)(a8 + 0xC) )
        goto LABEL_4;
    }
    v41 = *(_DWORD *)(v10 + 0x20);
    v42 = *(_DWORD *)(v10 + 0x24);
    *(float *)&v48 = v40 - v13;
    v43 = *(_DWORD *)(v10 + 0x28);
    v11 = 1;
    *(float *)&dword_B46638 = v40;
    dword_B4663C = v48;
    *(float *)&dword_B46640 = 0.0;
    *(float *)&dword_B46644 = 0.0;
    dword_B46648 = v41;
    dword_B4664C = v42;
    dword_B46650 = v43;
    *(float *)&dword_B46654 = 0.0;
  }
LABEL_4:
  if ( byte_B42E86 )
    sub_7ECAE0(0, COERCE_INT(1.0), COERCE_INT(1.0), COERCE_INT(1.0), COERCE_INT(1.0));
  v14 = a5[6];
  if ( v14 )
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x54))(v14) == 8;
  else
    v15 = 0;
  v16 = v15 ? (_DWORD *)v14 : 0;
  v17 = dword_B43104;
  v18 = v16;
  if ( dword_B43104 )
  {
    v20 = (*(int (__thiscall **)(NiDX9Renderer *))&v17->__vftable->super.gap0[4])(dword_B43104);
    if ( v20 )
    {
      while ( (_UNKNOWN *)v20 != &unk_B42168 )
      {
        v20 = *(_DWORD *)(v20 + 4);
        if ( !v20 )
          goto LABEL_16;
      }
      v21 = 1;
    }
    else
    {
LABEL_16:
      v21 = 0;
    }
    v19 = v21 != 0 ? v17 : 0;
  }
  else
  {
    v19 = 0;
  }
  if ( v18 && v19 )
  {
    v22 = **(NiD3DTextureStage ***)(*((_DWORD *)this + 0x25) + 0x24);
    v23 = (NiD3DPassVtbl ***)(this + 0x94);
    v49 = v22;
    if ( v22 )
      ++v22[7].Unk08;
    v24 = (NiRenderedTexture *)(*(int (__thiscall **)(_DWORD *))(*v18 + 0x78))(v18);
    sub_76C910(v49, v24);
    v25 = sub_7ED5D0(v18);
    v26 = (NiD3DPass *)*v23;
    if ( v25 )
    {
      if ( v11 )
      {
        sub_7AECB0(v26, *((NiD3DVertexShader **)this + 0x22));
        v27 = *((NiD3DPixelShader **)this + 0x24);
        goto LABEL_31;
      }
      v28 = *((NiD3DVertexShader **)this + 0x21);
    }
    else
    {
      if ( v11 )
      {
        sub_7AECB0(v26, *((NiD3DVertexShader **)this + 0x20));
        v27 = *((NiD3DPixelShader **)this + 0x24);
LABEL_31:
        sub_7AEC60(*v23, v27);
        v29 = *v23;
        if ( LOWORD(dword_B42EAC) == 4 )
        {
          if ( !v29[0xC] )
            v29[0xC] = (NiD3DPassVtbl *)sub_772DF0();
          sub_772CD0(v29[0xC], 0x34, 1, 0);
          v30 = *v23;
          if ( !(*v23)[0xC] )
            v30[0xC] = (NiD3DPassVtbl *)sub_772DF0();
          sub_772CD0(v30[0xC], 0x38, 8, 0);
          v31 = *v23;
          if ( !(*v23)[0xC] )
            v31[0xC] = (NiD3DPassVtbl *)sub_772DF0();
          sub_772CD0(v31[0xC], 0x37, 7, 0);
          v32 = *v23;
          if ( !(*v23)[0xC] )
            v32[0xC] = (NiD3DPassVtbl *)sub_772DF0();
          sub_772CD0(v32[0xC], 0x35, 1, 0);
          v33 = *v23;
          if ( !(*v23)[0xC] )
            v33[0xC] = (NiD3DPassVtbl *)sub_772DF0();
          sub_772CD0(v33[0xC], 0x36, 1, 0);
        }
        else
        {
          if ( !v29[0xC] )
            v29[0xC] = (NiD3DPassVtbl *)sub_772DF0();
          sub_772CD0(v29[0xC], 0x34, 0, 0);
        }
        v34 = *v23;
        if ( !(*v23)[0xC] )
          v34[0xC] = (NiD3DPassVtbl *)sub_772DF0();
        sub_772CD0(v34[0xC], 0xA8, 7, 0);
        v35 = *v23;
        if ( !(*v23)[0xC] )
          v35[0xC] = (NiD3DPassVtbl *)sub_772DF0();
        sub_772CD0(v35[0xC], 0x1C, 0, 0);
        sub_76CE40((NiTArray_NiD3DPass *)this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)this + 0x25);
        ++*((_DWORD *)this + 0xE);
        if ( v49 )
        {
          if ( v49[7].Unk08-- == 1 )
            sub_772560(v49);
        }
        return 0;
      }
      v28 = *((NiD3DVertexShader **)this + 0x1F);
    }
    sub_7AECB0(v26, v28);
    v27 = *((NiD3DPixelShader **)this + 0x23);
    goto LABEL_31;
  }
  return 0;
}
