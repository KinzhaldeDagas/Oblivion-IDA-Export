char __thiscall sub_520220(_DWORD *this)
{
  const char *v1; // eax
  char *v2; // eax
  bool v3; // zf
  char result; // al

  v1 = (const char *)(*(int (__thiscall **)(_DWORD *))(*(this + 6) + 0x14))(this + 6);
  v2 = strrchr(v1, 0x2E);
  if ( !v2 )
    return 0;
  v3 = _strcmp(v2, a_kf) == 0;
  result = 1;
  if ( !v3 )
    return 0;
  return result;
}
