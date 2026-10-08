int __thiscall sub_90A7B0(_DWORD **this)
{
  int v2; // ecx

  (*(void (__thiscall **)(_DWORD))(**(this + 3) + 0x18))(*(this + 3)); /*0x90a7b8*/
  v2 = (int)*(this + 4); /*0x90a7bb*/
  if ( v2 ) /*0x90a7c0*/
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 0x18))(v2); /*0x90a7c4*/
    *(this + 4) = 0; /*0x90a7c7*/
  }
  return ((int (__thiscall *)(_DWORD **, int))**this)(this, 1); /*0x90a7d6*/
}
