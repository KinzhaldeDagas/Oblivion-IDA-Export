NiD3DPass *__thiscall NiD3DPass_Destructor_(NiD3DPass *this, char a2)
{
  NiD3DPass *v3; // esi
  int i; // edi

  if ( (a2 & 2) != 0 )
  {
    v3 = this + *((_DWORD *)this + 0xFFFFFFFF);
    for ( i = *((_DWORD *)this + 0xFFFFFFFF) - 1; i >= 0; --i )
    {
      v3 += 0xFFFFFFFF;
      sub_760240(v3);
    }
    if ( (a2 & 1) != 0 )
      FormHeapFree((unsigned int)this + 0xFFFFFFFC);
    return (NiD3DPass *)((char *)this + 0xFFFFFFFC);
  }
  else
  {
    sub_760240(this);
    if ( (a2 & 1) != 0 )
      FormHeapFree((unsigned int)this);
    return this;
  }
}
