// positive sp value has been detected, the output may be wrong!
char __cdecl def_9A7252(float *a1)
{
  __asm /*0x9a72e1*/
  {
    fstp    st(1)
    fld     [esp+arg_10]
  }
  __asm { fstp    dword ptr [eax] }
  *a1 = _ET1; /*0x9a72e8*/
  __asm { fst     dword ptr [eax+4] } /*0x9a72eb*/
  a1[1] = _ET1; /*0x9a72eb*/
  __asm { fst     dword ptr [eax+8] } /*0x9a72ee*/
  a1[2] = _ET1; /*0x9a72ee*/
  __asm { fstp    dword ptr [eax+0Ch] } /*0x9a72f1*/
  a1[3] = _ET1; /*0x9a72f1*/
  return 1; /*0x9a72fc*/
}
