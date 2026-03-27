int __thiscall sub_5889B0(_DWORD *this)
{
  int v2; // ecx
  _DWORD *v3; // eax
  int v4; // edi

  v2 = *(this + 2);
  v3 = *(_DWORD **)(v2 + 4);
  *(this + 2) = v3;
  if ( v3 )
    *v3 = 0;
  else
    *(this + 1) = 0;
  v4 = *(_DWORD *)(v2 + 8);
  (*(void (__thiscall **)(_DWORD *, int))(*this + 8))(this, v2);
  --*(this + 3);
  return v4;
}
