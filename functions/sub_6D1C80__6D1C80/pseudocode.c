unsigned int __thiscall sub_6D1C80(void ***this, MEF_RefPointerArray16 *a2, _DWORD **a3)
{
  unsigned int result; // eax
  unsigned int i; // esi

  j_NiSingleInterpController_CopyMembers(this, (int)a2, a3); /*0x6d1c8f*/
  a2[5].data = *(this + 0x15); /*0x6d1c97*/
  result = *((unsigned __int16 *)this + 0x25); /*0x6d1c9a*/
  for ( i = 0; i < result; ++i ) /*0x6d1c9a*/
  {
    sub_6D1BC0(a2, (unsigned int)(*(this + 0x11))[i], i); /*0x6d1cb6*/
    result = *((unsigned __int16 *)this + 0x25); /*0x6d1cbb*/
  }
  return result; /*0x6d1cc6*/
}
