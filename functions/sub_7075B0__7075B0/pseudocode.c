_DWORD *__thiscall sub_7075B0(_BYTE *this, float a2)
{
  _DWORD *result; // eax

  result = sub_47C930(this, a2, (*(this + 0x18) & 8) != 0);
  if ( (*(this + 0x18) & 4) != 0 )
  {
    (*(void (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x74))(this);
    return (_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x78))(this);
  }
  return result;
}
