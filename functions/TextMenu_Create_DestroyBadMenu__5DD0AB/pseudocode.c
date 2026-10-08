char __usercall TextMenu_Create_::DestroyBadMenu@<al>(int a1@<esi>)
{
  if ( *(_DWORD *)(a1 + 4) ) /*0x5dd0ab*/
    (**(void (__thiscall ***)(int, int))a1)(a1, 1); /*0x5dd0b9*/
  return TextMenu_Create_::Return_0();
}
