int __usercall sub_65F770@<eax>(MagicTarget *a1@<ecx>, int a2@<ebx>, int a3@<edi>, double a4@<st2>)
{
  MagicTargetVtbl *vtbl; // edi
  int result; // eax
  float v8; // [esp+0h] [ebp-14h]
  float v9; // [esp+Ch] [ebp-8h]
  float v10; // [esp+10h] [ebp-4h]

  sub_6AC3D0((_DWORD *)OSGlobals->sound);
  MagicCaster_InitializeCasting___(&a1[0xB].unk04);
  v9 = dbl_A2F938 / sub_4029D0(&TimeGlobals);
  v10 = sub_673B00() + v9;
  sub_673B10(v10);
  if ( byte_B14E4C )
  {
    if ( a1[0xDC].pad05[0] )
    {
      MagicTarget_ProcessEffects(a1 + 0xD, SLODWORD(flt_A71E4C));
    }
    else if ( byte_B3BD98 )
    {
      sub_677EC0((int)&ActorProcessManager_ptr, *(float *)&a3, a4, flt_A71E4C, flt_A71E4C, COERCE_FLOAT(1));
      sub_674200(&ActorProcessManager_ptr.middleHighActors, *(float *)&a3, flt_A71E4C, COERCE_FLOAT(1));
      sub_673E90(COERCE_FLOAT(&ActorProcessManager_ptr), *(float *)&a3, flt_A71E4C, COERCE_FLOAT(1));
      sub_673C10(&ActorProcessManager_ptr.middleHighActors, flt_A71E4C, 1);
    }
    sub_5F2530(TESDataHandler_g_PlayerRef, a2, a3, SLODWORD(flt_A71E4C));
    sub_5F25F0(TESDataHandler_g_PlayerRef, a2, a3, flt_A71E4C, COERCE_FLOAT(1));
    sub_5F2720(TESDataHandler_g_PlayerRef, a2, a3, flt_A71E4C);
  }
  sub_4029E0(&TimeGlobals, v9);
  sub_542F20(TES->sky, flt_B33E9C, flt_B33E9C);
  vtbl = a1->vtbl;
  v8 = sub_673B00();
  result = ((int (__thiscall *)(MagicTarget *, _DWORD))vtbl[0x13].ResistanceFactor)(a1, LODWORD(v8));
  --a1[0xB2].vtbl;
  if ( a1[0xB2].unk04 )
    ++a1[0xD5].vtbl;
  else
    ++*(_DWORD *)&a1[0xD5].unk04;
  if ( (int)a1[0xB2].vtbl <= 0 )
  {
    byte_B14E4C = 1;
    a1[0xB2].unk04 = 0;
  }
  return result;
}
