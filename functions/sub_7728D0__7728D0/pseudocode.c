_DWORD *__thiscall sub_7728D0(_DWORD *this, int a2)
{
  void *v3; // eax
  void *v4; // esi

  *(this + 1) = a2;
  *(this + 2) = 0;
  if ( a2 )
  {
    v3 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)a2 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * a2);
    v4 = v3;
    if ( v3 )
    {
      sub_401080(v3, 0x10, a2, (void *(__thiscall *)(void *))sub_772690);
      *this = v4;
    }
    else
    {
      *this = 0;
    }
    return this;
  }
  else
  {
    *this = 0;
    return this;
  }
}
