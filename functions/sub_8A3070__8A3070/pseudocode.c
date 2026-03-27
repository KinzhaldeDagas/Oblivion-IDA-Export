int __thiscall sub_8A3070(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // ecx
  _OWORD *v4; // ecx
  __int128 v5; // xmm0

  result = a2;
  if ( this && (v3 = *(this + 2)) != 0 )
  {
    v4 = *(_OWORD **)(v3 + 0x50);
    v5 = v4[1];
    ++v4;
    *(_OWORD *)a2 = v5;
    *(_OWORD *)(a2 + 0x10) = v4[1];
    *(_OWORD *)(a2 + 0x20) = v4[2];
    *(_OWORD *)(a2 + 0x30) = v4[3];
  }
  else
  {
    *(_OWORD *)a2 = 0;
    *(_OWORD *)(a2 + 0x10) = 0;
    *(_OWORD *)(a2 + 0x20) = 0;
    *(float *)a2 = 1.0;
    *(float *)(a2 + 0x14) = 1.0;
    *(float *)(a2 + 0x28) = 1.0;
    *(_OWORD *)(a2 + 0x30) = 0;
  }
  return result;
}
