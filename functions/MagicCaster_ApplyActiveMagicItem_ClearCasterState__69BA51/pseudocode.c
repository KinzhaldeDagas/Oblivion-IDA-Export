void __userpurge MagicCaster_ApplyActiveMagicItem_::ClearCasterState(_DWORD *a1@<esi>, int a2, int a3, int a4)
{
  (*(void (__thiscall **)(_DWORD *, _DWORD))(*a1 + 0x34))(a1, 0); /*0x69ba5a*/
  (*(void (__cdecl **)(_DWORD))(*a1 + 0x3C))(0); /*0x69ba65*/
  a1[2] = 0; /*0x69ba67*/
  MagicCaster_ApplyActiveMagicItem_::Done(a2, a3, a4); /*0x69ba68*/
}
