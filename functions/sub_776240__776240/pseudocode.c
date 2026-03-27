_DWORD *__thiscall sub_776240(_DWORD **this)
{
  int v2; // ecx
  _DWORD *result; // eax

  (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(this + 9) + 0x64))(*(this + 9), 0x8B, 0, 0);
  (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(this + 9) + 0x64))(*(this + 9), 0x89, 0, 0);
  v2 = (int)*(this + 9);
  *(this + 0xD) = 0;
  *((_BYTE *)this + 0x31) = 0;
  *(this + 0xE) = 0;
  (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v2 + 0x64))(v2, 0x94, 0, 0);
  (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(this + 9) + 0x64))(*(this + 9), 0x93, 0, 0);
  (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(this + 9) + 0x64))(*(this + 9), 0x91, 0, 0);
  result = *(this + 0xA);
  *((_BYTE *)this + 0x30) = 0;
  *(this + 0xB) = result;
  return result;
}
