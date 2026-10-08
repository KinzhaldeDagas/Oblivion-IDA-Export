int __thiscall sub_5889B0(_DWORD *this)
{
  int v2; // ecx
  _DWORD *v3; // eax
  int v4; // edi

  v2 = *(this + 2); /*0x5889b3*/
  v3 = *(_DWORD **)(v2 + 4); /*0x5889b6*/
  *(this + 2) = v3; /*0x5889bc*/
  if ( v3 ) /*0x5889bf*/
    *v3 = 0; /*0x5889c1*/
  else
    *(this + 1) = 0; /*0x5889c9*/
  v4 = *(_DWORD *)(v2 + 8); /*0x5889d2*/
  (*(void (__thiscall **)(_DWORD *, int))(*this + 8))(this, v2); /*0x5889db*/
  --*(this + 3); /*0x5889dd*/
  return v4; /*0x5889e3*/
}
