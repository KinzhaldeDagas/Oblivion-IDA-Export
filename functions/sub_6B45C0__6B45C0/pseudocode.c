_DWORD *__thiscall sub_6B45C0(_DWORD *this, const char *a2)
{
  int v4; // eax
  int v5; // edi

  *(this + 2) = 0;
  if ( sub_6B4500(this, (int)a2) )
  {
    *(this + 5) = 0;
    *(this + 4) = 0;
    v4 = FormHeapAlloc(0xD0u);
    v5 = v4;
    if ( v4 )
      _memset(v4, 0, 0xD0);
    else
      v5 = 0;
    *(this + 1) = v5;
    *((_BYTE *)this + 0x18) = sub_6B3790(this) != 0;
    return this;
  }
  else
  {
    *((_BYTE *)this + 0x18) = 0;
    *(this + 1) = 0;
    return this;
  }
}
