int __thiscall sub_90A7B0(_DWORD **this)
{
  int v2; // ecx

  (*(void (__thiscall **)(_DWORD))(**(this + 3) + 0x18))(*(this + 3));
  v2 = (int)*(this + 4);
  if ( v2 )
  {
    (*(void (__thiscall **)(int))(*(_DWORD *)v2 + 0x18))(v2);
    *(this + 4) = 0;
  }
  return ((int (__thiscall *)(_DWORD **, int))**this)(this, 1);
}
