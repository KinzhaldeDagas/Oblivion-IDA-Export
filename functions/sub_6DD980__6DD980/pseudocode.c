void __thiscall sub_6DD980(_DWORD *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // ebp
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  _DWORD *v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax

  NiTimeController_LinkObject(this, a2); /*0x6dd98b*/
  v3 = sub_7124A0(a2); /*0x6dd992*/
  v4 = *(this + 0x12); /*0x6dd997*/
  v5 = v3; /*0x6dd99a*/
  if ( v4 != v3 ) /*0x6dd99e*/
  {
    if ( v4 ) /*0x6dd9a2*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x6dd9a8*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6dd9be*/
    }
    *(this + 0x12) = v5; /*0x6dd9c2*/
    if ( v5 ) /*0x6dd9c5*/
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6dd9cb*/
  }
  v6 = sub_7124A0(a2); /*0x6dd9d3*/
  v7 = *(this + 0x13); /*0x6dd9d8*/
  v8 = v6; /*0x6dd9db*/
  if ( v7 != v6 ) /*0x6dd9df*/
  {
    if ( v7 ) /*0x6dd9e3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x6dd9e9*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x6dd9ff*/
    }
    *(this + 0x13) = v8; /*0x6dda03*/
    if ( v8 ) /*0x6dda06*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x6dda0c*/
  }
  *((_WORD *)this + 0x1E) |= 1u; /*0x6dda12*/
  if ( (*(_WORD *)(this + 0xF) & 0x10) != 0 && (*(_BYTE *)(this + 0xF) & 1) != 0 ) /*0x6dda26*/
  {
    *((float *)this + 0x15) = sub_6DD490((int)this); /*0x6dda2f*/
    *((_WORD *)this + 0x1E) &= ~1u; /*0x6dda32*/
  }
  v9 = (_DWORD *)*(this + 0x12); /*0x6dda38*/
  if ( v9 ) /*0x6dda3d*/
  {
    v10 = v9[2]; /*0x6dda3f*/
    v11 = v9[4]; /*0x6dda44*/
    v12 = v9[3]; /*0x6dda47*/
    if ( v10 ) /*0x6dda4a*/
      *((float *)this + 0x19) = ((double (__cdecl *)(int, int))*(_DWORD *)(4 * v11 + 0xB3D130))(v12, v10); /*0x6dda5d*/
  }
}
