void __thiscall sub_73DD70(unsigned int *this, int a2)
{
  int v3; // esi
  int v4; // edi
  char *v5; // eax
  char *v6; // ebx
  unsigned int v7; // edx
  int v8; // eax

  v3 = a2;
  if ( a2 != *(this + 1) )
  {
    v4 = 0;
    if ( a2 )
    {
      v5 = (char *)FormHeapAlloc((0x1C * (unsigned __int64)(unsigned int)a2) >> 0x20 != 0 ? 0xFFFFFFFF : 0x1C * a2);
      v6 = v5;
      if ( v5 )
        sub_401080(v5, 0x1C, a2, (void *(__thiscall *)(void *))sub_73DD40);
      else
        v6 = 0;
      v7 = 0;
      v4 = (int)v6;
      if ( *(this + 2) )
      {
        v8 = 0;
        do
        {
          ++v7;
          qmemcpy(&v6[v8], (const void *)(v8 + *this), 0x1Cu);
          v8 += 0x1C;
        }
        while ( v7 < *(this + 2) );
        v3 = a2;
        v4 = (int)v6;
      }
    }
    FormHeapFree(*this);
    *this = v4;
    *(this + 1) = v3;
  }
}
