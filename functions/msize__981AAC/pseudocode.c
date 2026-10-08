size_t __cdecl _msize(void *Memory)
{
  int v1; // ebp
  int v2; // esi
  int v3; // esi
  size_t result; // rax
  int v5; // [esp+14h] [ebp-1Ch]

  if ( !Memory ) /*0x981ac6*/
  {
    *_errno() = 0x16; /*0x981acd*/
    _invalid_parameter(0, 0, v2); /*0x981ad8*/
    JUMPOUT(0x981B38); /*0x981b38*/
  }
  if ( unk_BAABC0 != 3 ) /*0x981aec*/
    JUMPOUT(0x981B26); /*0x981b26*/
  _lock(4); /*0x981af0*/
  if ( __sbh_find_block((int)Memory) ) /*0x981afa*/
    v3 = *((_DWORD *)Memory + 0xFFFFFFFF) - 9; /*0x981b0a*/
  else
    v3 = v5; /*0x981b12*/
  _unlock(4); /*0x981b48*/
  LODWORD(result) = _msize_::_LN13_0(Memory, v1, 0, v3); /*0x981b4e*/
  return result;
}
