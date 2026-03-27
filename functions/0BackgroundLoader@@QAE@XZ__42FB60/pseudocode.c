BackgroundLoader *__thiscall BackgroundLoader::BackgroundLoader(
        BackgroundLoader *this,
        char a2,
        int a3,
        LONG lMaximumCount,
        int a5,
        LONG a6)
{
  LONG *v7; // eax
  LONG *v8; // eax

  *(_DWORD *)this = &BackgroundLoader::`vftable';
  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  if ( a2 )
  {
    v7 = (LONG *)FormHeapAlloc(0x44u);
    if ( v7 )
      v8 = sub_42FA50(v7, (int)this, a3, lMaximumCount, a5, a6);
    else
      v8 = 0;
    *((_DWORD *)this + 3) = v8;
  }
  return this;
}
