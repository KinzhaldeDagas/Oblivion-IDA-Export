float *__thiscall sub_54EAA0(float *this, int a2)
{
  unsigned int v4; // edi
  int v5; // eax
  unsigned int v6; // eax
  int v7; // eax
  float v9; // [esp+24h] [ebp+4h]
  float v10; // [esp+24h] [ebp+4h]

  *(this + 1) = NAN;
  *(this + 2) = 0.0;
  *(_DWORD *)this = &BSFaceGenKeyframeMultiple::`vftable';
  v4 = 0;
  v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
  if ( v5 != *((_DWORD *)this + 1) )
    *((_DWORD *)this + 1) = v5;
  v9 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a2 + 0xC))(a2);
  if ( *(this + 2) != v9 )
    *(this + 2) = v9;
  *(this + 3) = 0.0;
  *(this + 4) = 0.0;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x50))(a2);
  sub_54E860((unsigned int *)this, v6, 1);
  if ( *((_DWORD *)this + 4) )
  {
    do
    {
      v10 = ((double (__thiscall *)(int, unsigned int))*(_DWORD *)(*(_DWORD *)a2 + 0x48))(a2, v4);
      if ( v4 < *((_DWORD *)this + 4) )
      {
        v7 = *((_DWORD *)this + 3);
        if ( v10 != *(float *)(v7 + 4 * v4) )
          *(float *)(v7 + 4 * v4) = v10;
      }
      ++v4;
    }
    while ( v4 < *((_DWORD *)this + 4) );
  }
  return this;
}
