int __fastcall strpbrk_::listnext(int a1, char *a2)
{
  char v2; // al
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  while ( 1 )
  {
    v2 = *a2;
    if ( !*a2 )
      break;
    ++a2;
    _bittestandset((signed __int32 *)&retaddr, v2);
  }
  return strpbrk_::listdone();
}
