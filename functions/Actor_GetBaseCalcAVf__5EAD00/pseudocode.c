double __userpurge Actor_GetBaseCalcAVf@<st0>(int *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4@<esi>, int a5)
{
  double result; // st7
  float v8; // [esp+4h] [ebp-8h] BYREF
  float v9; // [esp+8h] [ebp-4h] BYREF

  v8 = 1.0;
  result = 0.0;
  v9 = 0.0;
  if ( (unsigned int)(a5 - 8) <= 3 && a1 == (int *)TESDataHandler_g_PlayerRef )
  {
    Actor_GetBaseAVCalcFactors(a1, a5, &v9, &v8);
    if ( 0.0 == v8 )
      v8 = 1.0;
    if ( (*(int (__thiscall **)(int *, int, int, int))(*a1 + 0x170))(a1, a3, a2, a4) )
      (*(int (__thiscall **)(int *))(*a1 + 0x190))(a1);
    return Actor_GetBaseCalcAVf_::GetBaseAV(a5);
  }
  else
  {
    Actor_GetBaseCalcAVf_::SwitchAV(a5, a5);
  }
  return result;
}
