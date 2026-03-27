void *__thiscall sub_4FCCE0(void *this)
{
  if ( Script_CommandList_[0x171].opcode != 0x1171 )
    sub_404EC0("The script function list doesn't have all the names filled in.\r\n");
  if ( dword_B0C8A0 != 0x183 )
    sub_404EC0("The script console-command list doesn't have all the names filled in.\r\n");
  return this;
}
