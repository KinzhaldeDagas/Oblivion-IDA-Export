// positive sp value has been detected, the output may be wrong!
char __userpurge Actor_SetupCastingFX__::AllocNewMagicCasterFX@<al>(int a1@<ebx>, int a2@<edi>, int a3@<esi>, float a4)
{
  float *v4; // eax
  float *v5; // eax
  NiObject *v6; // eax
  NiObject *v7; // esi
  char v8; // al
  NiObject *v9; // edi
  int v10; // ecx
  int v11; // ecx
  int v13; // [esp+0h] [ebp-10h]

  *(_DWORD *)(a1 + 0x60) = 0;
  v4 = (float *)FormHeapAlloc(0x1Cu);
  a4 = *(float *)&v4;
  if ( v4 )
    v5 = MagicCaster_CastingVFX_constr(v4, *(_DWORD *)(*(_DWORD *)(a2 + 0x70) + 0xC), a3);
  else
    v5 = 0;
  *(_DWORD *)(a1 + 0x60) = v5;
  v6 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v13 + 0xC));
  v7 = v6;
  if ( v6 )
  {
    v8 = NiTMap_GetAt(&v6[0xB].__vftable, (int)"SpecialIdle_Cast", &a4);
    v6 = v8 != 0 ? (NiObject *)LODWORD(a4) : 0;
    v9 = v6;
  }
  else
  {
    v9 = 0;
  }
  if ( v9 )
  {
    sub_4715C0(v7, 0.0);
    LOBYTE(v6) = sub_6C9BA0(v9, 0, 0, 1.0, 0.0, 0, 0);
    LOWORD(v7[1].__vftable) |= 8u;
    *(float *)&v9[9].__vftable = -flt_A7DEB4;
    v10 = *(_DWORD *)(a1 + 0x60);
    if ( v10 )
    {
      a4 = *(float *)&v9[6].__vftable * dbl_A31C70;
      LOBYTE(v6) = MagicCaster_CastingVFX_ClearSomething___(v10, 1, a4);
    }
  }
  v11 = *(_DWORD *)(a1 + 0x60);
  if ( v11 )
    LOBYTE(v6) = MagicCaster_CastingVFX_UpdateTimes_(v11, 0.0);
  return (char)v6;
}
