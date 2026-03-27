double __thiscall sub_4AA0B0(_DWORD *this)
{
  int v2; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, int))(*this + 0x16C))(this, 1) && (v2 = *(this + 0x25)) != 0 )
    return *(float *)(v2 + 0x40);
  else
    return flt_B35718;
}
