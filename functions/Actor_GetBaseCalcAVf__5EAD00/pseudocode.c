double __userpurge Actor_GetBaseCalcAVf@<st0>(int *a1@<ecx>, int a2@<ebx>, int a3@<edi>, int a4@<esi>, int a5)
{
  double result; // st7
  int v7; // ebx
  float v9; // [esp+4h] [ebp-8h] BYREF
  float v10; // [esp+8h] [ebp-4h] BYREF

  v9 = 1.0; /*0x5ead0a*/
  result = 0.0; /*0x5ead0e*/
  v10 = 0.0; /*0x5ead16*/
  if ( (unsigned int)(a5 - 8) <= 3 && a1 == (int *)reference ) /*0x5ead29*/
  {
    Actor_GetBaseAVCalcFactors(a1, a5, &v10, &v9); /*0x5ead38*/
    if ( 0.0 == v9 ) /*0x5ead48*/
      v9 = 1.0; /*0x5ead4c*/
    v7 = (*(int (__thiscall **)(int *, int, int, int))(*a1 + 0x170))(a1, a3, a2, a4); /*0x5ead60*/
    if ( v7 && (*(unsigned __int8 (__thiscall **)(int *))(*a1 + 0x190))(a1) ) /*0x5ead70*/
      return Actor_GetBaseCalcAVf_::GetBaseAV(v7, a5); /*0x5ead77*/
    else
      return Actor_GetBaseCalcAVf_::GetBaseAV(0, a5); /*0x5ead74*/
  }
  else
  {
    Actor_GetBaseCalcAVf_::SwitchAV(a5, a5); /*0x5ead1d*/
  }
  return result;
}
