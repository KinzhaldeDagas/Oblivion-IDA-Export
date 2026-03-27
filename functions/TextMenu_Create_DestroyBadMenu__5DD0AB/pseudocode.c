int __usercall TextMenu_Create_::DestroyBadMenu@<eax>(int a1@<esi>)
{
  if ( *(_DWORD *)(a1 + 4) )
    (**(void (__thiscall ***)(int, int))a1)(a1, 1);
  return TextMenu_Create_::Return_0();
}
