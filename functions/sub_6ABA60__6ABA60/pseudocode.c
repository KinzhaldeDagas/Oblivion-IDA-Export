int __thiscall sub_6ABA60(_DWORD *this, int a2, int a3)
{
  __int16 v3; // si
  _DWORD *v4; // ecx
  float *v5; // ecx
  float v7; // [esp+0h] [ebp-8h]

  if ( bSoundEnabled_Audio )
  {
    v3 = 0x2710;
    if ( (unsigned __int16)a3 <= 0x2710u )
      v3 = a3;
    v4 = (_DWORD *)*(this + 0xC0);
    a3 = 0;
    NiTMap_GetAt(v4, a2, &a3);
    v5 = (float *)a3;
    if ( a3 )
    {
      v7 = *(float *)(a3 + 0x3C);
      *(_WORD *)(a3 + 0x44) = v3;
      sub_6B6F20(v5, v7);
    }
  }
  return 0;
}
