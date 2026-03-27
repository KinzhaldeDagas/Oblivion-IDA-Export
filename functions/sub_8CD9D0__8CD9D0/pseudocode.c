void __thiscall sub_8CD9D0(_DWORD *this, _OWORD *a2)
{
  *((_OWORD *)this + 7) = *a2;
  *((_OWORD *)this + 8) = a2[1];
  sub_8DE950(this, (int)(this + 0x1C));
}
