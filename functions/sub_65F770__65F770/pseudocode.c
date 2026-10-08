int __usercall sub_65F770@<eax>(MagicTarget *a1@<ecx>, int a2@<ebx>, int a3@<edi>, double a4@<st1>)
{
  MagicTargetVtbl *vtbl; // edi
  int result; // eax
  float deltaTime; // [esp+0h] [ebp-14h]
  float v8; // [esp+Ch] [ebp-8h]
  float v9; // [esp+10h] [ebp-4h]

  sub_6AC3D0((_DWORD *)MEMORY[0xB33398]->sound); /*0x65f77e*/
  MagicCaster_InitializeCasting___((char *)&a1[0xB].unk04); /*0x65f786*/
  v8 = dbl_A2F938 / TimeGlobals_GetTimeScale(&MEMORY[0xB332E0]); /*0x65f7a0*/
  v9 = sub_673B00() + v8; /*0x65f7b3*/
  sub_673B10(v9); /*0x65f7be*/
  if ( byte_B14E4C ) /*0x65f7c3*/
  {
    if ( a1[0xDC].pad05[0] ) /*0x65f7d0*/
    {
      MagicTarget_ProcessEffects(a1 + 0xD, flt_A71E4C); /*0x65f843*/
    }
    else if ( LOBYTE(qword_B3BB2C[0x9B]) ) /*0x65f7df*/
    {
      sub_677EC0((int)&qword_B3BB2C[0x75], *(float *)&a3, flt_A71E4C, a4, flt_A71E4C, COERCE_FLOAT(1)); /*0x65f7f3*/
      sub_674200((ActorList *)&qword_B3BB2C[0x75], *(float *)&a3, flt_A71E4C, COERCE_FLOAT(1)); /*0x65f809*/
      sub_673E90(COERCE_FLOAT(&qword_B3BB2C[0x75]), *(float *)&a3, flt_A71E4C, COERCE_FLOAT(1)); /*0x65f81f*/
      sub_673C10((ActorList *)&qword_B3BB2C[0x75], flt_A71E4C, 1); /*0x65f835*/
    }
    sub_5F2530(reference, a2, a3, SLODWORD(flt_A71E4C)); /*0x65f85c*/
    sub_5F25F0(reference, a2, a3, SLODWORD(flt_A71E4C), 1); /*0x65f873*/
    sub_5F2720((Actor *)reference, a2, a3, flt_A71E4C); /*0x65f888*/
  }
  TimeGlobals_AdvanceGameTime(&MEMORY[0xB332E0], v8); /*0x65f89b*/
  Sky__Update(MEMORY[0xB333A0]->sky, *(float *)&MEMORY[0xB33E90][0xC]); /*0x65f8b3*/
  vtbl = a1->vtbl; /*0x65f8b8*/
  deltaTime = sub_673B00(); /*0x65f8cd*/
  result = ((int (__thiscall *)(MagicTarget *, _DWORD))vtbl[0x13].AttemptAbsorb)(a1, LODWORD(deltaTime)); /*0x65f8d0*/
  --a1[0xB2].vtbl; /*0x65f8d2*/
  if ( a1[0xB2].unk04 ) /*0x65f8d9*/
    ++a1[0xD5].vtbl; /*0x65f8e3*/
  else
    ++*(_DWORD *)&a1[0xD5].unk04; /*0x65f8ec*/
  if ( (int)a1[0xB2].vtbl <= 0 ) /*0x65f8fa*/
  {
    byte_B14E4C = 1; /*0x65f8fc*/
    a1[0xB2].unk04 = 0; /*0x65f903*/
  }
  return result; /*0x65f90a*/
}
