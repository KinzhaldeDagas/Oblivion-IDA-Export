bool __thiscall sub_979030(float *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v10; // eax

  if ( a7 != *((_DWORD *)this + 0x22) )
  {
    sub_97AEC0(this + 1, (float *)(a3 + 0x64));
    *((_DWORD *)this + 0x22) = a7;
  }
  if ( a8 != *(_DWORD *)(a2 + 0x88) )
  {
    sub_97AEC0((float *)(a2 + 4), (float *)(a4 + 0x64));
    *(_DWORD *)(a2 + 0x88) = a8;
  }
  if ( !sub_97AFC0((int)(this + 1), a2 + 4) )
    return 0;
  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2) )
    return 1;
  if ( !a6 )
    return 1;
  v10 = *(_DWORD *)(a2 + 0x80);
  if ( !v10 && !*(_DWORD *)(a2 + 0x84) )
    return 1;
  return (*(unsigned __int8 (__thiscall **)(float *, int, int, int, int, int, int, int))(*(_DWORD *)this + 8))(
           this,
           v10,
           a3,
           a4,
           a5,
           a6 - 1,
           a7,
           a8)
      || (*(unsigned __int8 (__thiscall **)(float *, _DWORD, int, int, int, int, int, int))(*(_DWORD *)this + 8))(
           this,
           *(_DWORD *)(a2 + 0x84),
           a3,
           a4,
           a5,
           a6 - 1,
           a7,
           a8);
}
