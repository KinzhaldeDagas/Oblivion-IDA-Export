_DWORD *__thiscall sub_88D7D0(_DWORD *this, _DWORD *a2, char a3)
{
  _DWORD *result; // eax
  int v5; // esi
  _DWORD v6[2]; // [esp+8h] [ebp-Ch] BYREF
  char i; // [esp+10h] [ebp-4h]

  result = a2;
  v5 = *(this + 0x15) - 1;
  v6[1] = a2;
  v6[0] = this;
  for ( i = a3; v5 >= 0; --v5 )
  {
    result = (_DWORD *)(*(this + 0x14) + 4 * v5);
    if ( *result )
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)*result + 4))(*result, v6);
  }
  return result;
}
