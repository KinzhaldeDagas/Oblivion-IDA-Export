_WORD *__thiscall sub_9491F0(_WORD *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // ebp
  const char *v5; // eax
  int v6; // eax
  int v7; // eax
  _DWORD *v8; // ecx
  int v9; // eax

  *(this + 3) = 1;
  *((_DWORD *)this + 2) = &off_A9D1C0;
  *((_BYTE *)this + 0xC) = 1;
  *((_DWORD *)this + 8) = off_AA2B9C;
  v3 = 0;
  *(_DWORD *)this = &off_AA2BBC;
  *((_DWORD *)this + 2) = &off_AA2BA4;
  *((_DWORD *)this + 8) = off_A9D250;
  *((_DWORD *)this + 9) = 0;
  v4 = a2[1];
  if ( v4 > 0 )
  {
    while ( 1 )
    {
      v5 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*a2 + 4 * v3) + 4))(*(_DWORD *)(*a2 + 4 * v3));
      if ( !sub_8B1770("Physics", v5) )
        break;
      if ( ++v3 >= v4 )
        goto LABEL_9;
    }
    v6 = *(_DWORD *)(*a2 + 4 * v3);
    if ( v6 )
      v7 = v6 - 8;
    else
      v7 = 0;
    *((_DWORD *)this + 9) = v7;
  }
LABEL_9:
  v8 = *((_DWORD **)this + 9);
  if ( v8 )
  {
    sub_8CB120(v8, (int)(this + 0x10));
    v9 = *((_DWORD *)this + 9);
    if ( *(_WORD *)(v9 + 4) )
      ++*(_WORD *)(v9 + 6);
  }
  return this;
}
