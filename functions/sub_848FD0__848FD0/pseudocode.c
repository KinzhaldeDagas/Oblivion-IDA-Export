int __stdcall sub_848FD0(_DWORD *a1, int a2)
{
  int result; // eax

  if ( (*(int (__thiscall **)(_DWORD *, int))(*a1 + 0x8C))(a1, a2) ) /*0x848fe5*/
    return (*(int (__thiscall **)(_DWORD *, int))(*a1 + 0x8C))(a1, a2); /*0x848ff6*/
  result = unk_B430F0; /*0x849004*/
  if ( (a1[7] & 0x80) == 0 ) /*0x849009*/
    return flt_B430DC; /*0x84900b*/
  return result; /*0x848ff8*/
}
