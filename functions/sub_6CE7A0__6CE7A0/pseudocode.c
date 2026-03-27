_DWORD *__thiscall sub_6CE7A0(float *this, _DWORD *a2, unsigned __int8 a3)
{
  unsigned __int8 v4; // bl
  float *v5; // edi
  NiPoint3 *v6; // esi
  float *v7; // ecx
  _BYTE v9[32]; // [esp+Ch] [ebp-20h] BYREF

  if ( *((_BYTE *)this + 0xE) == 1 )
  {
    v4 = *((_BYTE *)this + 0xF);
    if ( a3 == v4 )
    {
      v5 = this + 0xC;
      if ( !sub_6CBC10(this + 0xC) )
      {
        v6 = (NiPoint3 *)(0x68 * v4 + *((_DWORD *)this + 0x14) + 4);
        if ( !sub_6CBC10(&v6->x) )
          qmemcpy(v5, sub_6CB640(this + 0xC, (int)v9, v6), 0x20u);
      }
    }
  }
  sub_6CC6E0(this, a2, a3);
  if ( *((_BYTE *)this + 0xE) == 1 )
  {
    if ( *a2 )
    {
      v7 = (float *)(*((_DWORD *)this + 0x14) + 0x68 * *((unsigned __int8 *)this + 0xF));
      *((_BYTE *)this + 0x54) = 1;
      sub_6C3500(v7);
    }
  }
  return a2;
}
