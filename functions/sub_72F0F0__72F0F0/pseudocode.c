void __thiscall sub_72F0F0(unsigned int *this, int a2)
{
  int v3; // eax
  unsigned int v4; // edx
  int v5; // edi
  int v6; // ecx
  _DWORD *v7; // eax

  if ( a2 != *(this + 1) )
  {
    if ( a2 )
    {
      v3 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)a2) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * a2);
      v4 = 0;
      v5 = v3;
      if ( *(this + 2) )
      {
        v6 = 0;
        do
        {
          v7 = (_DWORD *)(v6 + *this);
          *(_DWORD *)(v6 + v5) = *v7;
          *(_DWORD *)(v6 + v5 + 4) = v7[1];
          *(_DWORD *)(v6 + v5 + 8) = v7[2];
          ++v4;
          v6 += 0xC;
        }
        while ( v4 < *(this + 2) );
      }
    }
    else
    {
      v5 = 0;
    }
    FormHeapFree(*this);
    *this = v5;
    *(this + 1) = a2;
  }
}
