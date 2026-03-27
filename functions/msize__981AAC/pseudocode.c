size_t __cdecl _msize(void *Memory)
{
  int v1; // ebp
  int v2; // esi
  size_t result; // rax
  int v4; // [esp+14h] [ebp-1Ch]

  if ( !Memory )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, 0, 0, 0, 0);
    JUMPOUT(0x981B38);
  }
  if ( dword_BAABC0 != 3 )
    JUMPOUT(0x981B26);
  _lock(4);
  if ( __sbh_find_block(Memory) )
    v2 = *((_DWORD *)Memory + 0xFFFFFFFF) - 9;
  else
    v2 = v4;
  _unlock(4);
  LODWORD(result) = _msize_::_LN13_0(Memory, v1, 0, v2);
  return result;
}
