_DWORD *__thiscall sub_776240(_DWORD **this)
{
  int v2; // ecx
  _DWORD *result; // eax

  (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(this + 9) + 0x64))(*(this + 9), 0x8B, 0, 0); /*0x776255*/
  (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(this + 9) + 0x64))(*(this + 9), 0x89, 0, 0); /*0x776266*/
  v2 = (int)*(this + 9); /*0x776268*/
  *(this + 0xD) = 0; /*0x77626c*/
  *((_BYTE *)this + 0x31) = 0; /*0x77626f*/
  *(this + 0xE) = 0; /*0x776272*/
  (*(void (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)v2 + 0x64))(v2, 0x94, 0, 0); /*0x776280*/
  (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(this + 9) + 0x64))(*(this + 9), 0x93, 0, 0); /*0x776291*/
  (*(void (__thiscall **)(_DWORD, int, _DWORD, _DWORD))(**(this + 9) + 0x64))(*(this + 9), 0x91, 0, 0); /*0x7762a2*/
  result = *(this + 0xA); /*0x7762a4*/
  *((_BYTE *)this + 0x30) = 0; /*0x7762a7*/
  *(this + 0xB) = result; /*0x7762aa*/
  return result; /*0x7762ad*/
}
