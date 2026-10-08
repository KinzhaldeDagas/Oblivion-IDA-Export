unsigned int *__thiscall sub_76CA10(_DWORD *this, NiD3DTextureStage *a3, int arg4)
{
  _DWORD *v4; // ecx
  unsigned int *p_Stage; // ebp
  unsigned int *v6; // ebx
  unsigned int *v7; // esi
  _DWORD *v8; // ecx
  int v9; // ebp
  _DWORD *v10; // ecx
  float *v11; // eax
  _DWORD *v12; // ecx
  int v13; // eax
  NiD3DTextureStage *v14; // eax

  v4 = (_DWORD *)*(this + 0xF); /*0x76ca14*/
  if ( !v4 ) /*0x76ca19*/
    return 0; /*0x76ca19*/
  p_Stage = &a3->Stage; /*0x76ca1f*/
  if ( !sub_75FA00(v4, 1, a3 != 0) ) /*0x76ca2d*/
    return 0; /*0x76cbec*/
  NiD3DTextureStagePool_Acquire(&a3); /*0x76ca41*/
  v6 = &a3->Stage; /*0x76ca52*/
  v7 = &a3[1].Stage; /*0x76ca56*/
  sub_772FF0((_DWORD *)a3[1].Stage, 0x1C, 1, 0); /*0x76ca5b*/
  if ( p_Stage && p_Stage[2] ) /*0x76ca68*/
  {
    NiD3DTextureStage_SetTexture((NiD3DTextureStage *)v6, (NiTexture *)p_Stage[2]); /*0x76ca76*/
    sub_772FF0((_DWORD *)*v7, 0xB, arg4, 0); /*0x76ca86*/
    sub_772FF0((_DWORD *)*v7, 1, 2, 0); /*0x76ca93*/
    sub_772FF0((_DWORD *)*v7, 2, 2, 0); /*0x76caa0*/
    sub_772FF0((_DWORD *)*v7, 3, 1, 0); /*0x76caad*/
    sub_772FF0((_DWORD *)*v7, 4, 3, 0); /*0x76caba*/
    sub_772FF0((_DWORD *)*v7, 5, 2, 0); /*0x76cac7*/
    v8 = (_DWORD *)*v7; /*0x76cad0*/
    if ( *((_BYTE *)this + 0x51) ) /*0x76cacc*/
    {
      sub_772FF0(v8, 6, 0, 0); /*0x76cada*/
      *((_BYTE *)this + 0x51) = 0; /*0x76cadf*/
    }
    else
    {
      sub_772FF0(v8, 6, 1, 0); /*0x76cae9*/
    }
    NiD3DTextureStage_ApplyFilterPreset((NiD3DTextureStage *)v6, *((_BYTE *)p_Stage + 5) & 0xF); /*0x76caf8*/
    NiD3DTextureStage_ApplyAddressModePreset((NiD3DTextureStage *)v6, (*((unsigned __int16 *)p_Stage + 2) >> 0xC) & 3); /*0x76cb0a*/
    v9 = p_Stage[3]; /*0x76cb0f*/
    if ( v9 ) /*0x76cb14*/
    {
      v11 = (float *)sub_76C710(v9); /*0x76cb31*/
      sub_76C820(v11, (int)v6); /*0x76cb39*/
    }
    else
    {
      v10 = (_DWORD *)*v7; /*0x76cb16*/
      *((_BYTE *)v6 + 0x5A) = 0; /*0x76cb1c*/
      sub_772FF0(v10, 0x18, 0, 0); /*0x76cb20*/
    }
    --*(this + 0x17); /*0x76cb25*/
  }
  else
  {
    sub_772FF0((_DWORD *)*v7, 1, 2, 0); /*0x76cb4c*/
    sub_772FF0((_DWORD *)*v7, 2, 0, 0); /*0x76cb59*/
    sub_772FF0((_DWORD *)*v7, 3, 1, 0); /*0x76cb66*/
    v12 = (_DWORD *)*v7; /*0x76cb6f*/
    if ( *((_BYTE *)this + 0x51) ) /*0x76cb6b*/
    {
      sub_772FF0(v12, 4, 2, 0); /*0x76cb79*/
      *((_BYTE *)this + 0x51) = 0; /*0x76cb7e*/
    }
    else
    {
      sub_772FF0(v12, 4, 3, 0); /*0x76cb88*/
    }
    sub_772FF0((_DWORD *)*v7, 5, 0, 0); /*0x76cb95*/
    sub_772FF0((_DWORD *)*v7, 6, 1, 0); /*0x76cba2*/
    v13 = *(this + 0x17); /*0x76cba7*/
    if ( v13 ) /*0x76cbac*/
      *(this + 0x17) = v13 - 1; /*0x76cbb1*/
  }
  --*(this + 0x16); /*0x76cbb4*/
  NiD3DPass_SetTextureStage((NiD3DPass *)*(this + 0xF), *(_DWORD *)(*(this + 0xF) + 0x14), v6); /*0x76cbc2*/
  v14 = a3; /*0x76cbc7*/
  if ( a3 ) /*0x76cbcd*/
  {
    --a3[7].Unk08; /*0x76cbcf*/
    if ( !v14[7].Unk08 ) /*0x76cbd8*/
      sub_772560(v14); /*0x76cbdd*/
  }
  return v6; /*0x76cbe6*/
}
