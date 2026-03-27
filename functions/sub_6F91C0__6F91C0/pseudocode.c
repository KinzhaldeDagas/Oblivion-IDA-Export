_DWORD *__thiscall sub_6F91C0(_DWORD *this, int *a2)
{
  struct std::locale::facet *v3; // esi
  _DWORD *result; // eax

  v3 = sub_6F9090(a2);
  result = (_DWORD *)(*(int (__thiscall **)(struct std::locale::facet *))(*(_DWORD *)v3 + 4))(v3);
  if ( (_BYTE)result )
  {
    *(this + 0xF) = 0;
  }
  else
  {
    *(this + 0xF) = v3;
    return sub_6F6F40(this);
  }
  return result;
}
