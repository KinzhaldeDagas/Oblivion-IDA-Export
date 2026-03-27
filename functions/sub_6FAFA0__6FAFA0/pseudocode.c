int __thiscall sub_6FAFA0(_WORD *this, unsigned int a2, int a3)
{
  bool v4; // al
  float *v5; // ecx
  _DWORD *v6; // esi
  int result; // eax

  if ( (dword_B3F4B0 & 1) == 0 )
  {
    dword_B3F4B0 |= 1u;
    word_B3F4AC = 0;
    byte_B3F4AE = 0;
  }
  if ( a2 < (unsigned __int16)*(this + 5) )
  {
    v4 = sub_6FAE60((float *)a3, (int)&unk_B3F4A0);
    v5 = (float *)(*((_DWORD *)this + 1) + 0x10 * a2);
    if ( v4 )
    {
      if ( sub_6FAE10(v5, (int)&unk_B3F4A0) )
        ++*(this + 6);
    }
    else if ( sub_6FAE60(v5, (int)&unk_B3F4A0) )
    {
      --*(this + 6);
    }
  }
  else
  {
    *(this + 5) = a2 + 1;
    if ( sub_6FAE60((float *)a3, (int)&unk_B3F4A0) )
      ++*(this + 6);
  }
  v6 = (_DWORD *)(*((_DWORD *)this + 1) + 0x10 * a2);
  *v6 = *(_DWORD *)a3;
  result = *(_DWORD *)(a3 + 4);
  v6[1] = result;
  v6[2] = *(_DWORD *)(a3 + 8);
  v6[3] = *(_DWORD *)(a3 + 0xC);
  return result;
}
