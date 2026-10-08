char __cdecl sub_507620(int a1, int a2, _DWORD *a3)
{
  if ( a3 ) /*0x507627*/
  {
    ExtraDataList_RemoveOwner(a3 + 0x11); /*0x50762c*/
    (*(void (__thiscall **)(_DWORD *, int))(*a3 + 0x40))(a3, 0x80); /*0x50763d*/
  }
  return 1; /*0x507641*/
}
