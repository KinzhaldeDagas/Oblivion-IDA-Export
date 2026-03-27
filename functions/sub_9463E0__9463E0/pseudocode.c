_WORD *__thiscall sub_9463E0(_WORD *this, _DWORD *a2)
{
  int v3; // eax

  *(this + 3) = 1;
  *((_BYTE *)this + 0xC) = 1;
  *((_DWORD *)this + 2) = &off_A9D1C0;
  *(_DWORD *)this = &off_AA2950;
  *((_DWORD *)this + 2) = &off_AA2938;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 0xA) = 0x80000000;
  if ( (int)a2[1] <= 0 )
    v3 = 0;
  else
    v3 = *(_DWORD *)(*(_DWORD *)*a2 + 4);
  *((_DWORD *)this + 0xB) = v3;
  if ( v3 )
  {
    if ( *(_WORD *)(v3 + 4) )
      ++*(_WORD *)(v3 + 6);
    sub_8CA4D0(*((const void ***)this + 0xB), (int)sub_9463B0, (int)this);
  }
  return this;
}
