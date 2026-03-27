unsigned int __thiscall sub_54E860(unsigned int *this, unsigned int a2, char a3)
{
  void *v4; // eax
  unsigned int result; // eax
  unsigned int v6; // [esp-Ch] [ebp-18h]

  if ( a2 != *(this + 4) )
  {
    if ( *(this + 3) )
    {
      FormHeapFree(*(this + 3));
      *(this + 3) = 0;
    }
    *(this + 4) = a2;
    if ( a2 )
    {
      v4 = (void *)FormHeapAlloc((unsigned __int64)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * a2);
      v6 = *(this + 4);
      *(this + 3) = (unsigned int)v4;
      sub_54F630(v4, v6, a3);
    }
  }
  result = *(this + 4);
  if ( result )
    return sub_54F630((void *)*(this + 3), result, a3);
  return result;
}
