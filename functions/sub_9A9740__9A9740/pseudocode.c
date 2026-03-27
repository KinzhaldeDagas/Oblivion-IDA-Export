int __thiscall sub_9A9740(_DWORD *this, int a2)
{
  int v2; // ebx
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax

  v2 = a2;
  v4 = (*(int (__thiscall **)(_DWORD *, int))(*this + 0x44))(this, a2);
  v5 = v4;
  if ( v4 == 0xFFFFFFFF )
  {
    *(this + 9) = 0x80000010;
    return *(this + 9);
  }
  else
  {
    v6 = *(_DWORD *)(*(this + 4) + 4 * v4);
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 0x14) & 0xF0000000) == 0x40000000 )
        sub_77CB50(v2);
    }
    a2 = 0;
    sub_9A9670(this + 3, v5, &a2);
    return *(this + 9);
  }
}
