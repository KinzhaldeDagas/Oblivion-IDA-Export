void __thiscall TESNPC_SetFaceGenAge(float *this, signed int a2)
{
  int (__thiscall *v3)(float *, int); // eax
  int v4; // eax
  float *v5; // ecx
  double v6; // st6
  double v7; // st4
  double v8; // st7
  double v9; // st5
  double v10; // st3
  double v11; // st6
  double v12; // st7
  float *v13; // esi
  bool v14; // zf
  float *v15; // eax
  DWORD CurrentThreadId; // eax
  int v17; // eax
  unsigned int v18; // edi
  int v19; // ecx
  int v20; // eax
  NiGeometry *v21; // ebp
  NiObject *v22; // eax
  NiObject *v23; // esi
  NiObject *v24; // eax
  float value; // [esp+10h] [ebp-158h]
  float ControlValue; // [esp+28h] [ebp-140h]
  float v27; // [esp+28h] [ebp-140h]
  unsigned int v28; // [esp+28h] [ebp-140h]
  float v29; // [esp+2Ch] [ebp-13Ch]
  int v30; // [esp+2Ch] [ebp-13Ch]
  float v31; // [esp+30h] [ebp-138h]
  int v32; // [esp+30h] [ebp-138h]
  unsigned int v33; // [esp+38h] [ebp-130h]
  FaceGenHeadParameters a1; // [esp+3Ch] [ebp-12Ch] BYREF
  FaceGenHeadParameters outDelta; // [esp+9Ch] [ebp-CCh] BYREF
  FaceGenHeadParameters raceParameters; // [esp+FCh] [ebp-6Ch] BYREF
  unsigned int v37; // [esp+164h] [ebp-4h]

  ArrayConstructor( /*0x5278a2*/
    (char *)&a1,
    0x18u,
    4,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  v37 = 0; /*0x5278bd*/
  ArrayConstructor( /*0x5278c8*/
    (char *)&outDelta,
    0x18u,
    4,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  v3 = *(int (__thiscall **)(float *, int))(*(_DWORD *)this + 0x128); /*0x5278cf*/
  LOBYTE(v37) = 1; /*0x5278d9*/
  v4 = v3(this, 0x45); /*0x5278e1*/
  v5 = this + 0x5A; /*0x5278e5*/
  if ( !v4 ) /*0x5278eb*/
    v5 = this + 0x42; /*0x5278ed*/
  FaceGenHeadParameters_Combine( /*0x52790d*/
    (const FaceGenHeadParameters *)(*((_DWORD *)this + 0x3A) + 0x29C),
    (const FaceGenHeadParameters *)v5,
    &a1,
    0,
    0.0);
  ControlValue = FaceGenHeadParameters_GetControlValue(&a1, 0, 0); /*0x527920*/
  v31 = FaceGenHeadParameters_GetControlValue(&a1, 0, 1); /*0x527932*/
  v29 = (float)a2; /*0x527940*/
  v27 = v31 - (ControlValue - v29); /*0x527956*/
  v6 = dbl_A492F0; /*0x52795a*/
  if ( v6 < v29 && flt_A47800 <= (double)v29 ) /*0x52797c*/
  {
    v9 = flt_A47800; /*0x5279c8*/
    v8 = flt_A468FC; /*0x5279c8*/
    v7 = v9; /*0x5279ce*/
  }
  else
  {
    v7 = v29; /*0x52797e*/
    if ( v29 <= v6 ) /*0x527987*/
      v7 = flt_A468FC; /*0x52798f*/
    v8 = flt_A468FC; /*0x527995*/
    v9 = flt_A47800; /*0x527997*/
  }
  v10 = v27; /*0x527999*/
  if ( v27 > v6 && v10 >= v9 ) /*0x5279ad*/
  {
    v12 = v7; /*0x5279da*/
    v27 = v9; /*0x5279dc*/
  }
  else if ( v10 > v6 ) /*0x5279bc*/
  {
    v12 = v7; /*0x5279e2*/
  }
  else
  {
    v11 = v8; /*0x5279be*/
    v12 = v7; /*0x5279be*/
    v27 = v11; /*0x5279c0*/
  }
  value = v12; /*0x5279e5*/
  FaceGenHeadParameters_SetControlValue(&a1, 0, 0, value); /*0x5279f1*/
  FaceGenHeadParameters_SetControlValue(&a1, 0, 1, v27); /*0x527a09*/
  FaceGenHeadParameters_Initialize(&outDelta); /*0x527a16*/
  ArrayConstructor( /*0x527a34*/
    (char *)&raceParameters,
    0x18u,
    4,
    (void (__thiscall *)(char *))FaceGenMatrix_Construct,
    (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
  LOBYTE(v37) = 2; /*0x527a43*/
  TESNPC_BuildAbsoluteFaceGenParameters((const TESNPC *)this, &raceParameters); /*0x527a4b*/
  FaceGenHeadParameters_ComputeRaceDelta(&raceParameters, &a1, &outDelta); /*0x527a65*/
  v13 = this + 0x5A; /*0x527a7d*/
  if ( !(*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 0x128))(this, 0x45) ) /*0x527a79*/
    v13 = this + 0x42; /*0x527a85*/
  v14 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 0x128))(this, 0x45) == 0; /*0x527a99*/
  v15 = this + 0x5A; /*0x527a9b*/
  if ( v14 ) /*0x527aa1*/
    v15 = this + 0x42; /*0x527aa3*/
  FaceGenHeadParameters_Combine(&outDelta, (const FaceGenHeadParameters *)v15, (FaceGenHeadParameters *)v13, 0, 0.0); /*0x527abb*/
  EnterCriticalSection(&unk_B39C00); /*0x527ac8*/
  CurrentThreadId = GetCurrentThreadId(); /*0x527ace*/
  ++unk_B39C7C; /*0x527ad4*/
  unk_B39C78 = CurrentThreadId; /*0x527adb*/
  v17 = *((_DWORD *)this + 0x75); /*0x527ae0*/
  v30 = v17; /*0x527ae8*/
  if ( v17 ) /*0x527aec*/
  {
    v32 = 2; /*0x527af2*/
    while ( 1 ) /*0x527b04*/
    {
      if ( v17 ) /*0x527b06*/
      {
        v18 = 0; /*0x527b13*/
        v33 = *(unsigned __int16 *)(v17 + 0xB6); /*0x527b17*/
        v28 = 0; /*0x527b1b*/
        if ( *(_WORD *)(v17 + 0xB6) ) /*0x527b0c*/
        {
          while ( 1 ) /*0x527b34*/
          {
            if ( *(unsigned __int16 *)(v17 + 0xB6) > v18 ) /*0x527b3d*/
            {
              v19 = *(_DWORD *)(*(_DWORD *)(v17 + 0xB0) + 4 * v18); /*0x527b49*/
              if ( v19 ) /*0x527b4e*/
              {
                v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 0x10))(v19); /*0x527b55*/
                v21 = (NiGeometry *)v20; /*0x527b57*/
                if ( v20 ) /*0x527b5b*/
                {
                  v22 = sub_550790(v20); /*0x527b5e*/
                  v23 = v22; /*0x527b63*/
                  if ( v22 ) /*0x527b6a*/
                  {
                    if ( v22->__vftable[1].Unk_02(v22) ) /*0x527b73*/
                    {
                      v24 = v23->__vftable[1].Unk_02(v23); /*0x527b91*/
                      BSFaceGenModel_ApplyEGMMorph(v24, &outDelta, v21, 1.0, 0); /*0x527b95*/
                      if ( !strcmp(v21->member.super.super.m_pcName, "FaceGenHair") ) /*0x527ba9*/
                        BSFaceGen_ApplyHairLengthMorph((int)v21, *(this + 0x73));// After an age remorph rewrites FaceGenHair vertices, reapply the NPC's stored hairLength so the independent hair morph is preserved. /*0x527bc0*/
                      v18 = v28; /*0x527bc8*/
                    }
                  }
                }
              }
            }
            v28 = ++v18; /*0x527bd3*/
            if ( v18 >= v33 ) /*0x527bd7*/
              break; /*0x527bd7*/
            v17 = v30; /*0x527b30*/
          }
        }
        v30 = *((_DWORD *)this + 0x76); /*0x527be3*/
      }
      if ( !--v32 ) /*0x527bec*/
        break; /*0x527bec*/
      v17 = v30; /*0x527b00*/
    }
  }
  v14 = unk_B39C7C-- == 1; /*0x527bf2*/
  if ( v14 ) /*0x527bf9*/
    unk_B39C78 = 0; /*0x527bfb*/
  LeaveCriticalSection(&unk_B39C00); /*0x527c0a*/
  LOBYTE(v37) = 1; /*0x527c21*/
  _LN21((char *)&raceParameters, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x527c29*/
  LOBYTE(v37) = 0; /*0x527c3f*/
  _LN21((char *)&outDelta, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x527c47*/
  v37 = 0xFFFFFFFF; /*0x527c5a*/
  _LN21((char *)&a1, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x527c65*/
}
