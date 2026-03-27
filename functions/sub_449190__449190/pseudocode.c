unsigned int __thiscall sub_449190(int this)
{
  unsigned int result; // eax

  LOWORD(result) = *(_WORD *)(this + 8);
  if ( (_WORD)result == 0xFFFF )
    return strlen(*(const char **)(this + 4));
  else
    return (unsigned __int16)result;
}
