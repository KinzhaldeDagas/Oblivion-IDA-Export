void __thiscall sub_529530(float *this, float a2)
{
  const FaceGenHeadParameters *p_next; // ebx
  int v4; // edi
  signed int v5; // eax
  TESRace *v6; // ecx
  NiTexture *vtbl; // eax
  int v8; // esi
  int v9; // eax
  float SliderValue; // [esp+18h] [ebp-13Ch]
  float value; // [esp+18h] [ebp-13Ch]
  float ControlValue; // [esp+18h] [ebp-13Ch]
  double v13; // [esp+1Ch] [ebp-138h]
  FaceGenHeadParameters a1; // [esp+24h] [ebp-130h] BYREF
  FaceGenRenderState parameters; // [esp+84h] [ebp-D0h] BYREF
  unsigned int v16; // [esp+150h] [ebp-4h]

  if ( MEMORY[0xB36308] ) /*0x52955f*/
  {
    p_next = (const FaceGenHeadParameters *)&MEMORY[0xB36308][0x1B].member.modlist.next; /*0x529574*/
    FaceGenHeadParameters_Initialize((FaceGenHeadParameters *)(this + 0x5A)); /*0x52957a*/
    v4 = 0; /*0x52958d*/
    v13 = (a2 - 0.0) / (fCostant_100 - 0.0); /*0x529597*/
    do /*0x5295e1*/
    {
      SliderValue = FaceGenHeadParameters_GetSliderValue(p_next, 1, 0, v4); /*0x5295ab*/
      value = (SliderValue - 0.0) * v13 + 0.0; /*0x5295c2*/
      FaceGenHeadParameters_SetSliderValue((FaceGenHeadParameters *)(this + 0x5A), 1, 0, v4++, value); /*0x5295d3*/
    }
    while ( v4 < 0x1F ); /*0x5295e1*/
    ArrayConstructor( /*0x5295f6*/
      (char *)&a1,
      0x18u,
      4,
      (void (__thiscall *)(char *))FaceGenMatrix_Construct,
      (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
    v16 = 0; /*0x529602*/
    TESNPC_BuildAbsoluteFaceGenParameters((const TESNPC *)this, &a1); /*0x52960d*/
    ControlValue = FaceGenHeadParameters_GetControlValue(&a1, 0, 0); /*0x529620*/
    v5 = Double_To_SInt32(a2 / fCostant_100 * (double)dword_B361CC[0x44] + ControlValue); /*0x52963e*/
    TESNPC_SetFaceGenAge(this, v5); /*0x529646*/
    FaceGenRenderState_Construct(&parameters); /*0x529652*/
    v6 = *((TESRace **)this + 0x3A); /*0x529657*/
    LOBYTE(v16) = 1; /*0x529666*/
    TESRace_BuildFaceGenRenderState(v6, (TESNPC *)this, &parameters); /*0x52966e*/
    BSFaceGen_ApplyHeadParametersToNode(*((BSFaceGenNiNode **)this + 0x75), &parameters); /*0x529682*/
    BSFaceGen_ApplyHeadParametersToNode(*((BSFaceGenNiNode **)this + 0x76), &parameters); /*0x529696*/
    if ( a2 <= 0.0 ) /*0x5296ac*/
    {
      vtbl = *((NiTexture **)this + 0x74); /*0x5296be*/
    }
    else
    {
      if ( MEMORY[0xB36308] == (TESForm *)0xFFFFFF58 ) /*0x5296b8*/
      {
LABEL_9:
        v8 = *((_DWORD *)this + 0x75); /*0x5296cc*/
        if ( v8 ) /*0x5296d4*/
        {
          v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x9C))(v8); /*0x5296e0*/
          if ( v9 ) /*0x5296e4*/
            *(float *)(v9 + 0x1DC) = a2; /*0x5296ed*/
        }
        LOBYTE(v16) = 0; /*0x5296fa*/
        FaceGenRenderState_Destruct(&parameters); /*0x529702*/
        v16 = 0xFFFFFFFF; /*0x529715*/
        _LN21((char *)&a1, 0x18u, 4, (void (__thiscall *)(void *))FaceGenMatrix_Destruct); /*0x529720*/
        return; /*0x529720*/
      }
      vtbl = (NiTexture *)MEMORY[0xB36308][7].vtbl; /*0x5296ba*/
    }
    sub_5263B0(this, vtbl); /*0x5296c7*/
    goto LABEL_9; /*0x5296c7*/
  }
}
