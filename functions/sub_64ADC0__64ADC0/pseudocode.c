int __thiscall sub_64ADC0(_DWORD *this, int a2)
{
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // eax
  int v7; // [esp-Ch] [ebp-14h]

  if ( *(this + 0xB) )
  {
    v3 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x120))(a2);
    if ( *(this + 0xB) )
      v4 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 0xB) + 0x124))(*(this + 0xB));
    else
      v4 = 0;
    v7 = v4;
    v5 = (*(int (__thiscall **)(_DWORD *))(*this + 0x2A8))(this);
    MagicCaster_CastMagicItem(v3, v5, v7, 0);
  }
  return (*(int (__thiscall **)(_DWORD *, int, int))(*this + 0x188))(this, a2, 1);
}
