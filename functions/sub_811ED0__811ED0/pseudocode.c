int __thiscall sub_811ED0(char *this, int _4C, int a3, int a4, _DWORD *a5, int a6, int a7, int a8)
{
  _DWORD *v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  int v15; // eax
  int v16; // ecx
  unsigned __int16 v17; // bp
  NiD3DTextureStage *v18; // eax
  NiD3DPass **v19; // esi
  NiD3DVertexShader *v20; // eax
  NiD3DPass *v21; // ebx
  NiD3DPass *v22; // ebx
  NiD3DPass *v23; // ebx
  NiD3DPass *v24; // ebx
  NiD3DPass *v25; // ebx
  unsigned __int16 v28; // [esp+14h] [ebp-34h]
  NiRenderedTexture *a2; // [esp+18h] [ebp-30h]
  int v30; // [esp+24h] [ebp-24h]
  int v31; // [esp+58h] [ebp+10h]
  NiD3DTextureStage *v32; // [esp+58h] [ebp+10h]

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 0x80))(this);
  v9 = (_DWORD *)a5[6];
  if ( v9 )
  {
    if ( (*(int (__thiscall **)(_DWORD))(*v9 + 0x54))(a5[6]) == 2 )
    {
      if ( byte_B42E86 )
        sub_7ECAE0(0, COERCE_INT(1.0), COERCE_INT(1.0), COERCE_INT(1.0), COERCE_INT(1.0));
      if ( a5[2] )
      {
        *((float *)this + 0x38) = flt_B2E148;
        *((float *)this + 0x39) = 0.0;
        *((float *)this + 0x3A) = 0.0;
        *((float *)this + 0x3B) = 0.0;
      }
      else
      {
        *((_DWORD *)this + 0x38) = dword_B25AD0;
        *((_DWORD *)this + 0x39) = dword_B25AD4;
        *((_DWORD *)this + 0x3A) = dword_B25AD8;
        *((_DWORD *)this + 0x3B) = dword_B25ADC;
      }
      v10 = a5[3];
      if ( v10 )
      {
        v11 = *(_DWORD *)(v10 + 0x20);
        v12 = *(_DWORD *)(v10 + 0x24);
        v30 = *(_DWORD *)(v10 + 0x28);
        *(float *)&v31 = *(float *)(v10 + 0x30) - *(float *)(v10 + 0x2C);
        dword_B46638 = *(int *)(v10 + 0x30);
        dword_B4663C = v31;
        *(float *)&dword_B46640 = 0.0;
        *(float *)&dword_B46644 = 0.0;
        dword_B46648 = v11;
        dword_B4664C = v12;
        dword_B46650 = v30;
        *(float *)&dword_B46654 = 0.0;
      }
      else
      {
        *(float *)&dword_B46638 = flt_A8C690;
        *(float *)&dword_B4663C = 0.0;
        v13 = dword_B25AD0;
        *(float *)&dword_B46640 = 0.0;
        v14 = dword_B25AD4;
        *(float *)&dword_B46644 = 0.0;
        v15 = dword_B25AD8;
        dword_B46648 = v13;
        v16 = dword_B25ADC;
        dword_B4664C = v14;
        dword_B46650 = v15;
        dword_B46654 = v16;
      }
      a2 = (NiRenderedTexture *)v9[0x28];
      sub_8115C0((void **)this, (int)v9);
      v17 = 0;
      v28 = 0;
      if ( ShaderPackage >= 2 )
      {
        v17 = 2;
        v28 = 1;
      }
      v32 = 0;
      v18 = **(NiD3DTextureStage ***)(*((_DWORD *)this + 0x1F) + 0x24);
      v19 = (NiD3DPass **)(this + 0x7C);
      if ( v18 )
      {
        ++v18[7].Unk08;
        v32 = v18;
      }
      sub_76C910(v32, a2);
      if ( (v9[7] & 0x2000) != 0 )
        v20 = *((NiD3DVertexShader **)this + v17 + 0x24);
      else
        v20 = *((NiD3DVertexShader **)this + v17 + 0x23);
      sub_7AECB0(*v19, v20);
      sub_7AEC60(&(*v19)->__vftable, *((NiD3DPixelShader **)this + v28 + 0x27));
      v21 = *v19;
      if ( LOWORD(dword_B42EAC) == 4 )
      {
        if ( !v21->RenderStateGroup )
          v21->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
        sub_772CD0((_DWORD *)v21->RenderStateGroup, 0x34, 1, 0);
        v22 = *v19;
        if ( !(*v19)->RenderStateGroup )
          v22->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
        sub_772CD0((_DWORD *)v22->RenderStateGroup, 0x38, 8, 0);
        v23 = *v19;
        if ( !(*v19)->RenderStateGroup )
          v23->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
        sub_772CD0((_DWORD *)v23->RenderStateGroup, 0x37, 7, 0);
        v24 = *v19;
        if ( !(*v19)->RenderStateGroup )
          v24->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
        sub_772CD0((_DWORD *)v24->RenderStateGroup, 0x35, 1, 0);
        v25 = *v19;
        if ( !(*v19)->RenderStateGroup )
          v25->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
        sub_772CD0((_DWORD *)v25->RenderStateGroup, 0x36, 1, 0);
      }
      else
      {
        if ( !v21->RenderStateGroup )
          v21->RenderStateGroup = (NiD3DRenderStateGroup *)sub_772DF0();
        sub_772CD0((_DWORD *)v21->RenderStateGroup, 0x34, 0, 0);
      }
      sub_76CE40((NiTArray_NiD3DPass *)this + 4, *((NiD3DPass **)this + 0xE), (NiD3DPass **)this + 0x1F);
      ++*((_DWORD *)this + 0xE);
      if ( v32 )
      {
        if ( v32[7].Unk08-- == 1 )
          sub_772560(v32);
      }
    }
  }
  return 0;
}
