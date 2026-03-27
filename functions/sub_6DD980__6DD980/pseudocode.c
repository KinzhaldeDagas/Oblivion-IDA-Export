void __thiscall sub_6DD980(_DWORD *this, _DWORD *a2)
{
  int v4; // eax
  int v5; // edi
  int v6; // ebp
  int v7; // eax
  int v8; // edi
  int v9; // ebx
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // eax

  sub_715E70(this, a2);
  v4 = sub_7124A0(a2);
  v5 = this[0x12];
  v6 = v4;
  if ( v5 != v4 )
  {
    if ( v5 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
        (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    }
    this[0x12] = v6;
    if ( v6 )
      InterlockedIncrement((volatile LONG *)(v6 + 4));
  }
  v7 = sub_7124A0(a2);
  v8 = this[0x13];
  v9 = v7;
  if ( v8 != v7 )
  {
    if ( v8 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
        (**(void (__thiscall ***)(int, int))v8)(v8, 1);
    }
    this[0x13] = v9;
    if ( v9 )
      InterlockedIncrement((volatile LONG *)(v9 + 4));
  }
  *((_WORD *)this + 0x1E) |= 1u;
  if ( (this[0xF] & 0x10) != 0 && (this[0xF] & 1) != 0 )
  {
    *((float *)this + 0x15) = sub_6DD490((int)this);
    *((_WORD *)this + 0x1E) &= ~1u;
  }
  v10 = (_DWORD *)this[0x12];
  if ( v10 )
  {
    v11 = v10[2];
    v12 = v10[4];
    v13 = v10[3];
    if ( v11 )
      *((float *)this + 0x19) = ((double (__cdecl *)(int, int))*(_DWORD *)(4 * v12 + 0xB3D130))(v13, v11);
  }
}
