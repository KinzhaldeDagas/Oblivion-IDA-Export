char __thiscall sub_6C36B0(float *this, float a2)
{
  float v4; // [esp+Ch] [ebp+4h]

  if ( (*(_BYTE *)(this + 2) & 8) != 0 && (a2 != *(this + 8) || *((_BYTE *)this + 0x38)) )
  {
    if ( !*((_BYTE *)this + 0x2C) )
    {
      *((_BYTE *)this + 0x38) = 0;
      return 0;
    }
    v4 = ((double (__stdcall *)(_DWORD))*(_DWORD *)(*(_DWORD *)this + 0x64))(LODWORD(a2));
    if ( v4 != *(this + 0xA) || *((_BYTE *)this + 0x38) )
    {
      *(this + 0xA) = v4;
      *((_BYTE *)this + 0x38) = 0;
      return 0;
    }
  }
  return 1;
}
