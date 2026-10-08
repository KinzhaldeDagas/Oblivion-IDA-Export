_DWORD *__thiscall sub_4A0510(_DWORD *this, _DWORD *a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  int v5; // eax

  v3 = *(this + 2); /*0x4a053e*/
  v4 = *(_DWORD **)(v3 + 4); /*0x4a0541*/
  *(this + 2) = v4; /*0x4a0546*/
  if ( v4 ) /*0x4a0549*/
    *v4 = 0; /*0x4a054b*/
  else
    *(this + 1) = 0; /*0x4a0553*/
  v5 = *(_DWORD *)(v3 + 8); /*0x4a055a*/
  *a2 = v5; /*0x4a0563*/
  if ( v5 ) /*0x4a0565*/
    InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x4a056b*/
  (*(void (__thiscall **)(_DWORD *, int))(*this + 8))(this, v3); /*0x4a0589*/
  --*(this + 3); /*0x4a058b*/
  return a2; /*0x4a0591*/
}
