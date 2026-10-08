void __thiscall sub_846890(NiTArray_NiD3DPass *this, int a2, int a3, int a4, float *a5, NiD3DPass *value)
{
  NiD3DPass *v6; // esi
  int v8; // ebp
  int v9; // eax
  int v10; // ebx
  NiTexture *Texture; // ebp
  int v12; // eax
  UInt32 m_uiRefCount; // ebx
  UInt32 Unk08; // ebp
  int v15; // ebx
  float v16; // ecx
  double v17; // st7
  double v18; // st6
  bool v19; // zf
  double v20; // st6
  double v21; // st6
  int v23; // [esp+18h] [ebp-30h]
  float v24; // [esp+1Ch] [ebp-2Ch]
  float v25; // [esp+1Ch] [ebp-2Ch]
  float v26; // [esp+20h] [ebp-28h]
  float v27; // [esp+24h] [ebp-24h]
  float v28; // [esp+24h] [ebp-24h]
  float v29; // [esp+24h] [ebp-24h]
  float v30; // [esp+28h] [ebp-20h]
  float v31; // [esp+28h] [ebp-20h]
  float v32; // [esp+2Ch] [ebp-1Ch]
  float v33; // [esp+2Ch] [ebp-1Ch]
  float v34; // [esp+30h] [ebp-18h]
  float v35; // [esp+30h] [ebp-18h]
  float v36; // [esp+34h] [ebp-14h]
  float v37; // [esp+38h] [ebp-10h]
  float v38; // [esp+4Ch] [ebp+4h]
  int v39; // [esp+58h] [ebp+10h]
  int v40; // [esp+58h] [ebp+10h]
  float v41; // [esp+58h] [ebp+10h]
  float v42; // [esp+58h] [ebp+10h]
  float v43; // [esp+58h] [ebp+10h]
  float v44; // [esp+58h] [ebp+10h]

  v6 = (NiD3DPass *)unk_B45B78; /*0x8468c4*/
  v8 = **(_DWORD **)(unk_B45B78 + 0x24); /*0x8468d3*/
  v23 = *(unsigned __int8 *)(*(_DWORD *)&OB_RendererGlobalState_010201A0.pad_00D[0x12] + 9); /*0x8468d5*/
  v9 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)a5 + 0x88))(a5, v23); /*0x8468e2*/
  v10 = *(_DWORD *)(v8 + 4); /*0x8468e4*/
  v39 = v9; /*0x8468e9*/
  if ( v10 != v9 ) /*0x8468ed*/
  {
    if ( v10 ) /*0x8468f1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x8468f7*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x84690d*/
      v9 = v39; /*0x84690f*/
    }
    *(_DWORD *)(v8 + 4) = v9; /*0x846915*/
    if ( v9 ) /*0x846918*/
      InterlockedIncrement((volatile LONG *)(v9 + 4)); /*0x84691e*/
  }
  sub_848FA0((_DWORD **)v8, (int)a5); /*0x84692c*/
  Texture = v6->Stages.data->Texture; /*0x846938*/
  v12 = sub_848FD0(a5, v23); /*0x84693f*/
  m_uiRefCount = Texture->members.super.super.m_uiRefCount; /*0x846944*/
  v40 = v12; /*0x846949*/
  if ( m_uiRefCount != v12 ) /*0x84694d*/
  {
    if ( m_uiRefCount ) /*0x846951*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(m_uiRefCount + 4)) ) /*0x846957*/
        (**(void (__thiscall ***)(UInt32, int))m_uiRefCount)(m_uiRefCount, 1); /*0x84696d*/
      v12 = v40; /*0x84696f*/
    }
    Texture->members.super.super.m_uiRefCount = v12; /*0x846975*/
    if ( v12 ) /*0x846978*/
      InterlockedIncrement((volatile LONG *)(v12 + 4)); /*0x84697e*/
  }
  sub_848FA0(Texture, (int)a5); /*0x84698a*/
  Unk08 = v6->Stages.data->Unk08; /*0x846992*/
  v15 = *(_DWORD *)(Unk08 + 4); /*0x84699a*/
  v16 = flt_B430DC[3]; /*0x84699f*/
  v41 = flt_B430DC[3]; /*0x8469a1*/
  if ( v15 != LODWORD(flt_B430DC[3]) ) /*0x8469a5*/
  {
    if ( v15 ) /*0x8469a9*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v15 + 4)) ) /*0x8469af*/
        (**(void (__thiscall ***)(int, int))v15)(v15, 1); /*0x8469c5*/
      v16 = v41; /*0x8469c7*/
    }
    *(float *)(Unk08 + 4) = v16; /*0x8469cd*/
    if ( v16 != 0.0 ) /*0x8469d0*/
      InterlockedIncrement((volatile LONG *)(LODWORD(v16) + 4)); /*0x8469d6*/
  }
  v17 = 0.0; /*0x8469e3*/
  v32 = *(float *)(a2 + 0x88); /*0x8469fb*/
  v34 = *(float *)(a2 + 0x8C); /*0x8469ff*/
  if ( unk_B42D78 ) /*0x8469dc*/
  {
    v42 = ((double (__cdecl *)(_DWORD, _DWORD))unk_B42D78)(0, 0); /*0x846a15*/
    v17 = 0.0; /*0x846a19*/
  }
  else
  {
    v42 = 0.0; /*0x846a20*/
  }
  v18 = (v42 - *(float *)&OB_RendererGlobalState_010201A0.pad_1DB[4]) / dbl_A94908; /*0x846a2e*/
  if ( v18 < 0.0 || v18 <= 1.0 ) /*0x846a50*/
  {
    if ( v18 < 0.0 ) /*0x846c3b*/
      v18 = 0.0; /*0x846c41*/
  }
  else
  {
    v18 = 1.0; /*0x846a56*/
  }
  v19 = (_BYTE)value == 0; /*0x846a5a*/
  v43 = v18; /*0x846a5f*/
  v27 = unk_B4312C - unk_B43134; /*0x846a83*/
  v30 = unk_B43130 - unk_B43138; /*0x846aa4*/
  v24 = v27 * v43; /*0x846ac6*/
  v26 = v43 * v30; /*0x846ace*/
  v28 = v24 + unk_B43134; /*0x846ada*/
  v31 = v26 + unk_B43138; /*0x846ae6*/
  v38 = a5[0x2B]; /*0x846afa*/
  v25 = v28 - v32; /*0x846b06*/
  v29 = v31 - v34; /*0x846b12*/
  flt_B46638[0] = a5[0x2A]; /*0x846b26*/
  flt_B46638[1] = v38; /*0x846b38*/
  flt_B46638[2] = v25; /*0x846b4a*/
  v20 = (double)dword_B2C684; /*0x846b57*/
  flt_B46638[3] = v29; /*0x846b5d*/
  v44 = v20 * dbl_A2FAA0; /*0x846b69*/
  v33 = v44 * dbl_A37650; /*0x846b77*/
  v21 = flt_A2FF44; /*0x846b7f*/
  flt_B46638[4] = v33; /*0x846b85*/
  v35 = v21; /*0x846b8b*/
  flt_B46638[5] = v35; /*0x846b93*/
  v36 = v17; /*0x846b98*/
  v37 = v17; /*0x846ba0*/
  flt_B46638[6] = v36; /*0x846ba8*/
  flt_B46638[7] = v37; /*0x846bae*/
  if ( !v19 ) /*0x846bb4*/
  {
    if ( byte_B2C67E ) /*0x846bb6*/
    {
      if ( OB_RendererGlobalState_010201A0.pad_1DB[3] ) /*0x846bbf*/
      {
        if ( (*(int (__thiscall **)(float *, int))(*(_DWORD *)a5 + 0x88))(a5, v23) ) /*0x846bd7*/
        {
          ++v6->RefCount; /*0x846be2*/
          value = v6; /*0x846be5*/
          NiTArray_NiD3DPass_SetAt(this + 4, *((_DWORD *)this + 0xE), &value); /*0x846c01*/
          v19 = v6->RefCount-- == 1; /*0x846c09*/
          if ( v19 ) /*0x846c10*/
            NiD3DPass_ReleaseToPool(v6); /*0x846c14*/
          ++*((_DWORD *)this + 0xE); /*0x846c19*/
        }
      }
    }
  }
}
