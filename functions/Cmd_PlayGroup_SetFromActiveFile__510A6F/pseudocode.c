int __usercall Cmd_PlayGroup_::SetFromActiveFile@<eax>(int a1@<edi>)
{
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x90))(a1, 1);
  return Cmd_PlayGroup_::Return_1();
}
