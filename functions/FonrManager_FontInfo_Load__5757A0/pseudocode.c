_DWORD *__thiscall FonrManager_FontInfo_Load(_DWORD *this, int a2, const char *a3, char a4)
{
  unsigned int v5; // eax
  int v6; // eax
  const char *v7; // ecx
  _BYTE *v8; // edx
  char v9; // al

  ArrayConstructor(
    this + 3,
    4u,
    8,
    (int)Concurrency::details::_NonReentrantLock::_Release,
    (void (__thiscall *)(void *))sub_7016A0);
  *(this + 1) = 0;
  *(_WORD *)this = 0;
  *(this + 0xE) = 0;
  if ( a3 )
  {
    v5 = strlen(a3);
    if ( v5 )
    {
      v6 = FormHeapAlloc(v5 + 1);
      *(this + 1) = v6;
      v7 = a3;
      v8 = (_BYTE *)v6;
      do
      {
        v9 = *v7;
        *v8++ = *v7++;
      }
      while ( v9 );
    }
    *(this + 2) = a2;
    if ( a4 )
      sub_5744E0(this);
  }
  return this;
}
