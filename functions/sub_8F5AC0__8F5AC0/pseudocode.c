_BYTE *__thiscall sub_8F5AC0(int this, _BYTE *a2)
{
  char v3; // [esp+1h] [ebp-1h] BYREF

  v3 = HIBYTE(this);
  if ( *(_DWORD *)(this + 0x10) != *(_DWORD *)(this + 0x14)
    || *(_BYTE *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)(this + 8) + 8))(*(_DWORD *)(this + 8), &v3) )
  {
    *a2 = 1;
    return a2;
  }
  else
  {
    *a2 = 0;
    return a2;
  }
}
