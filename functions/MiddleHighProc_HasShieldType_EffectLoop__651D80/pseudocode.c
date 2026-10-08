BOOL __userpurge MiddleHighProc_HasShieldType_::EffectLoop@<eax>(int a1@<edi>, _DWORD *a2@<esi>, int a3, int a4)
{
  do /*0x651dad*/
  {
    if ( !a2[1] && !*a2 ) /*0x651d86*/
      break; /*0x651d89*/
    *(_DWORD *)(a1 + 0x164) |= Magic_GetShieldType(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*a2 + 0xC) + 0x1C) + 0x98)); /*0x651d9f*/
    a2 = (_DWORD *)a2[1]; /*0x651da5*/
  }
  while ( a2 ); /*0x651dad*/
  *(_BYTE *)(a1 + 0x161) = 0; /*0x651daf*/
  return MiddleHighProc_HasShieldType_::Done(a1, a3, a4);
}
