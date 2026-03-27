void __thiscall sub_754EC0(int this, float a2)
{
  *(_WORD *)(this + 8) &= 0xFFF9u;
  if ( *(_DWORD *)(this + 0x30) )
  {
    if ( !sub_6C36B0((float *)this, a2) )
    {
      if ( -flt_A7DEB4 == *(float *)(this + 0x3C) )
        *(float *)(this + 0x3C) = *(float *)(this + 0x28);
      if ( *(float *)(this + 0x28) < (double)*(float *)(this + 0x3C) )
        *(_BYTE *)(*(_DWORD *)(this + 0x30) + 0xEC) = 1;
      *(float *)(this + 0x3C) = *(float *)(this + 0x28);
    }
  }
}
