_DWORD *__thiscall sub_75EC40(int this, float a2, _DWORD *a3, int a4)
{
  _DWORD *result; // eax

  result = (_DWORD *)(a3[7] + 0xC * (unsigned __int16)a4);
  *result = *(_DWORD *)(this + 0x14);
  result[1] = *(_DWORD *)(this + 0x18);
  result[2] = *(_DWORD *)(this + 0x1C);
  if ( *(_BYTE *)(this + 0xC) )
  {
    if ( *(_DWORD *)(this + 0x10) )
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(this + 0x10) + 0x5C))(
                           *(_DWORD *)(this + 0x10),
                           LODWORD(a2),
                           *(float *)(this + 0x20),
                           a4,
                           *(_DWORD *)(*(_DWORD *)(this + 0x24) + 0x10));
  }
  if ( *(_BYTE *)(this + 0xD) )
    return (*(_DWORD *(__thiscall **)(_DWORD *, int))(*a3 + 0x58))(a3, a4);
  return result;
}
