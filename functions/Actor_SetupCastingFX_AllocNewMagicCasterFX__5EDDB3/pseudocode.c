// positive sp value has been detected, the output may be wrong!
char __userpurge Actor_SetupCastingFX__::AllocNewMagicCasterFX@<al>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3@<esi>,
        __int128 a4)
{
  float *v4; // eax
  float *v5; // eax
  NiObject *v6; // eax
  NiControllerManager *v7; // esi
  char v8; // al
  float *v9; // edi
  int v10; // ecx
  int v11; // ecx
  int weight; // [esp+0h] [ebp-10h]

  *(_DWORD *)(a1 + 0x60) = 0; /*0x5eddb5*/
  v4 = (float *)FormHeapAlloc(0x1Cu); /*0x5eddbc*/
  LODWORD(a4) = v4; /*0x5eddc4*/
  if ( v4 ) /*0x5eddd2*/
    v5 = MagicCaster_CastingVFX_constr(v4, *(_DWORD *)(*(_DWORD *)(a2 + 0x70) + 0xC), a3); /*0x5eddde*/
  else
    v5 = 0; /*0x5edde5*/
  *(_DWORD *)(a1 + 0x60) = v5; /*0x5eddf3*/
  v6 = NiRTTI_Cast((BSStringT *)&stru_B3CAC0, *(NiObject **)(weight + 0xC)); /*0x5eddff*/
  v7 = (NiControllerManager *)v6; /*0x5ede04*/
  if ( v6 )
  {
    v8 = NiTMap_GetAt(&v6[0xB].__vftable, (int)"SpecialIdle_Cast", &a4); /*0x5ede1a*/
    v6 = v8 != 0 ? (NiObject *)a4 : 0;
    v9 = (float *)v6; /*0x5ede27*/
  }
  else
  {
    v9 = 0; /*0x5ede2b*/
  }
  if ( v9 ) /*0x5ede2f*/
  {
    NiControllerManager_DeactivateAllSequences(v7, 0.0); /*0x5ede39*/
    LOBYTE(v6) = NiControllerSequence_Activate((NiControllerSequence *)v9, 0, 0, 1.0, 0.0, 0, 0); /*0x5ede56*/
    *((_WORD *)v7 + 4) |= 8u; /*0x5ede5b*/
    v9[0x12] = -flt_A7DEB4; /*0x5ede68*/
    v10 = *(_DWORD *)(a1 + 0x60); /*0x5ede6b*/
    if ( v10 ) /*0x5ede70*/
    {
      *(float *)&a4 = v9[0xC] * dbl_A31C70; /*0x5ede7c*/
      LOBYTE(v6) = MagicCaster_CastingVFX_ClearSomething___(v10, 1, *(float *)&a4); /*0x5ede89*/
    }
  }
  v11 = *(_DWORD *)(a1 + 0x60); /*0x5ede8e*/
  if ( v11 ) /*0x5ede93*/
    LOBYTE(v6) = MagicCaster_CastingVFX_UpdateTimes_(v11, 0.0); /*0x5ede9b*/
  return (char)v6; /*0x5edeb3*/
}
