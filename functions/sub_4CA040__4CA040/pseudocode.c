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
    v3 = *(this + 5); /*0x4ca054*/
    if ( a2 < v3 ) /*0x4ca05f*/
    {
      v4 = a2; /*0x4ca064*/
      if ( (unsigned __int16)a2 < v3 ) /*0x4ca067*/
      {
        do /*0x4ca08b*/
        {
          v5 = *((_DWORD *)this + 1); /*0x4ca069*/
          v6 = 0.0 == *(float *)(v5 + 4 * v4); /*0x4ca06f*/
          v7 = (float *)(v5 + 4 * v4); /*0x4ca072*/
          if ( !v6 ) /*0x4ca07a*/
          {
            *v7 = 0.0; /*0x4ca07c*/
            --*(this + 6); /*0x4ca07e*/
          }
          ++v4; /*0x4ca084*/
        }
        while ( v4 < *(this + 5) ); /*0x4ca08b*/
      }
      *(this + 5) = a2; /*0x4ca08d*/
    }
    v8 = *((_DWORD *)this + 1); /*0x4ca096*/
    *(this + 4) = a2; /*0x4ca099*/
    if ( a2 )
    {
      v9 = FormHeapAlloc((unsigned __int64)(unsigned __int16)a2 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * (unsigned __int16)a2);
      v10 = 0; /*0x4ca0b8*/
      v11 = *(this + 5) == 0; /*0x4ca0bd*/
      *((_DWORD *)this + 1) = v9; /*0x4ca0c1*/
      if ( !v11 ) /*0x4ca0c4*/
      {
        do /*0x4ca0dd*/
        {
          v12 = 4 * (unsigned __int16)v10++; /*0x4ca0ce*/
          *(float *)(v12 + *((_DWORD *)this + 1)) = *(float *)(v12 + v8); /*0x4ca0d6*/
        }
        while ( (unsigned __int16)v10 < *(this + 5) ); /*0x4ca0dd*/
      }
      for ( i = *(this + 5); (unsigned __int16)i < *(this + 4); *(float *)(*((_DWORD *)this + 1) + 4 * v14) = 0.0 ) /*0x4ca0e7*/
        v14 = (unsigned __int16)i++; /*0x4ca0ee*/
    }
    else
    {
      *((_DWORD *)this + 1) = 0; /*0x4ca10e*/
    }
    FormHeapFree(v8); /*0x4ca116*/
  }
}
