void __thiscall sub_4CA040(unsigned __int16 *this, unsigned int a2)
{
  unsigned __int16 v3; // ax
  unsigned __int16 v4; // dx
  int v5; // ecx
  bool v6; // c3
  float *v7; // ecx
  unsigned int v8; // ebp
  int v9; // eax
  int v10; // ecx
  bool v11; // zf
  int v12; // eax
  int i; // eax
  int v14; // ecx

  if ( a2 != *(this + 4) )
  {
    v3 = *(this + 5);
    if ( a2 < v3 )
    {
      v4 = a2;
      if ( (unsigned __int16)a2 < v3 )
      {
        do
        {
          v5 = *((_DWORD *)this + 1);
          v6 = 0.0 == *(float *)(v5 + 4 * v4);
          v7 = (float *)(v5 + 4 * v4);
          if ( !v6 )
          {
            *v7 = 0.0;
            --*(this + 6);
          }
          ++v4;
        }
        while ( v4 < *(this + 5) );
      }
      *(this + 5) = a2;
    }
    v8 = *((_DWORD *)this + 1);
    *(this + 4) = a2;
    if ( a2 )
    {
      v9 = FormHeapAlloc((unsigned __int64)(unsigned __int16)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)a2);
      v10 = 0;
      v11 = *(this + 5) == 0;
      *((_DWORD *)this + 1) = v9;
      if ( !v11 )
      {
        do
        {
          v12 = 4 * (unsigned __int16)v10++;
          *(float *)(v12 + *((_DWORD *)this + 1)) = *(float *)(v12 + v8);
        }
        while ( (unsigned __int16)v10 < *(this + 5) );
      }
      for ( i = *(this + 5); (unsigned __int16)i < *(this + 4); *(float *)(*((_DWORD *)this + 1) + 4 * v14) = 0.0 )
        v14 = (unsigned __int16)i++;
    }
    else
    {
      *((_DWORD *)this + 1) = 0;
    }
    FormHeapFree(v8);
  }
}
