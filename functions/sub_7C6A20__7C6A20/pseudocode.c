_DWORD *__thiscall sub_7C6A20(_DWORD *this, int a2, int *a3)
{
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // eax
  bool v7; // zf
  _DWORD *v8; // ecx

  v4 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*this + 4))(this); /*0x7c6a31*/
  v5 = v4[2]; /*0x7c6a33*/
  if ( v5 != *a3 ) /*0x7c6a39*/
  {
    if ( v5 ) /*0x7c6a3d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x7c6a43*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x7c6a59*/
    }
    v6 = *a3; /*0x7c6a5b*/
    v7 = *a3 == 0; /*0x7c6a5e*/
    v4[2] = *a3; /*0x7c6a60*/
    if ( !v7 ) /*0x7c6a63*/
      InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x7c6a69*/
  }
  *v4 = a2; /*0x7c6a73*/
  v4[1] = *(_DWORD *)(a2 + 4); /*0x7c6a78*/
  v8 = *(_DWORD **)(a2 + 4); /*0x7c6a7b*/
  if ( v8 ) /*0x7c6a80*/
    *v8 = v4; /*0x7c6a82*/
  else
    *(this + 1) = v4; /*0x7c6a94*/
  *(_DWORD *)(a2 + 4) = v4; /*0x7c6a84*/
  ++*(this + 3); /*0x7c6a87*/
  return v4; /*0x7c6a8b*/
}
