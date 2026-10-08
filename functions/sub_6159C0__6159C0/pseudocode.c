float *__cdecl Combat_PredictAimPoint_Setup(
        int a1,
        int a2,
        float a3,
        float a4,
        _DWORD *a5,
        double a6,
        float a7,
        int a8,
        double a9,
        float a10,
        float a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        float a19,
        float a20,
        float a21,
        float a22,
        float a23,
        float a24,
        float a25,
        float a26,
        float a27,
        float a28,
        float a29)
{
  int v30; // edx
  float v31; // ecx
  float v32; // eax
  float v33; // ecx
  MobileObject *v34; // eax
  MobileObject *v35; // edi
  MobileObject *v36; // eax
  MobileObject *v37; // eax
  char **CharProxy; // eax
  bhkCharacterProxy *v39; // eax
  char *v40; // eax
  __m128 *LinearVelocityPtr; // eax
  int v42; // ebx
  float v43[8]; // [esp+54h] [ebp-3Ch] BYREF
  _BYTE v44[16]; // [esp+74h] [ebp-1Ch] BYREF
  _BYTE v45[12]; // [esp+84h] [ebp-Ch] BYREF
  int savedregs; // [esp+90h] [ebp+0h] BYREF

  if ( a5 ) /*0x6159d4*/
  {
    v32 = *(&g_zeroNiPoint3 + 1); /*0x615a00*/
    v33 = MEMORY[0xB3F9B0][0]; /*0x615a05*/
    v43[0] = g_zeroNiPoint3; /*0x615a1a*/
    v43[1] = v32; /*0x615a1e*/
    v43[2] = v33; /*0x615a22*/
    v34 = (MobileObject *)OblivionDynamicCast( /*0x615a26*/
                            a5,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
    v35 = v34; /*0x615a2b*/
    if ( v34 ) /*0x615a32*/
    {
      if ( ((int (__thiscall *)(MobileObject *))v34->vtbl[1].super.SetProcedureCompleted)(v34) ) /*0x615a3e*/
      {
        v36 = (MobileObject *)((int (__thiscall *)(MobileObject *))v35->vtbl[1].super.SetProcedureCompleted)(v35); /*0x615a4e*/
        if ( MobileObject_GetCharProxy(v36) ) /*0x615a52*/
        {
          v37 = (MobileObject *)((int (__thiscall *)(MobileObject *))v35->vtbl[1].super.SetProcedureCompleted)(v35); /*0x615a6a*/
          CharProxy = (char **)MobileObject_GetCharProxy(v37); /*0x615a6e*/
          sub_5639D0(CharProxy, v43); /*0x615a75*/
        }
      }
      if ( MobileObject_GetCharProxy(v35) ) /*0x615a7c*/
      {
        v39 = MobileObject_GetCharProxy(v35); /*0x615a87*/
        if ( v39 ) /*0x615a8e*/
        {
          v40 = *((char **)v39 + 2); /*0x615a90*/
          if ( v40 ) /*0x615a95*/
          {
            LinearVelocityPtr = (__m128 *)bhkWorldObject_GetLinearVelocityPtr(v40);// Predictive combat aim reads the target character proxy's Havok linear velocity; the following conversion maps it to TES world units. /*0x615a99*/
            HavokVector_ToWorldVector(v43, LinearVelocityPtr); /*0x615aa4*/
          }
        }
      }
    }
    v42 = LODWORD(g_GameSettingStringPointers_B36CD8[0xFA]);// Loads live iAimingNumIterations (default 10) for repeated target-position/flight-time convergence. /*0x615abd*/
    if ( v35 ) /*0x615acf*/
    {
      switch ( LODWORD(a7) ) /*0x615add*/
      {
        case 0: /*0x615add*/
        case 2: /*0x615add*/
          Actor_GetScaledCollisionHeight(v35); /*0x615ae6*/
          break; /*0x615af1*/
        case 1: /*0x615add*/
        case 3: /*0x615add*/
          Actor_GetScaledCollisionHeight(v35); /*0x615af5*/
          break; /*0x615afa*/
        default:
          JUMPOUT(0x615B60); /*0x615b60*/
      }
    }
    else
    {
      (*(int (__thiscall **)(_DWORD *, _BYTE *))(*a5 + 0x15C))(a5, v45); /*0x615b1d*/
      (*(int (__thiscall **)(_DWORD *, _BYTE *))(*a5 + 0x158))(a5, v44); /*0x615b35*/
      ((double (__thiscall *)(_DWORD *))*(_DWORD *)(*a5 + 0xEC))(a5); /*0x615b4c*/
    }
    return Combat_PredictAimPoint_IterateAndSolve( /*0x615b5d*/
             v42,
             (int)&savedregs,
             a1,
             a2,
             a3,
             a4,
             (int)a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12,
             a13,
             a14,
             a15,
             a16,
             a17,
             a18,
             a19,
             a20,
             a21,
             a22,
             a23,
             a24,
             a25,
             a26,
             a27,
             a28,
             a29);
  }
  else
  {
    v30 = *((_DWORD *)&g_zeroNiPoint3 + 1); /*0x6159df*/
    *(float *)a1 = g_zeroNiPoint3; /*0x6159e5*/
    v31 = MEMORY[0xB3F9B0][0]; /*0x6159e7*/
    *(_DWORD *)(a1 + 4) = v30; /*0x6159ed*/
    *(float *)(a1 + 8) = v31; /*0x6159f0*/
    return (float *)a1; /*0x6159d6*/
  }
}
