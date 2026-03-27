_DWORD *__thiscall sub_71F810(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  _DWORD *result; // eax
  int v4; // ecx

  v2 = this + 0x224;
  result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(this + 0x224) + 4))(this + 0x224);
  result[2] = a2;
  result[1] = 0;
  *result = v2[1];
  v4 = v2[1];
  if ( v4 )
  {
    *(_DWORD *)(v4 + 4) = result;
    ++v2[3];
  }
  else
  {
    ++v2[3];
    v2[2] = result;
  }
  v2[1] = result;
  return result;
}
