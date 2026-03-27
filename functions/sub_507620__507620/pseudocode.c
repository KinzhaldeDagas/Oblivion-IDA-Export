char __cdecl sub_507620(int a1, int a2, _DWORD *a3)
{
  if ( a3 )
  {
    ExtraDataList_RemoveOwner(a3 + 0x11);
    (*(void (__thiscall **)(_DWORD *, int))(*a3 + 0x40))(a3, 0x80);
  }
  return 1;
}
