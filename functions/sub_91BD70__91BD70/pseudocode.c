_WORD *__thiscall sub_91BD70(_WORD *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // ebp
  const char *v5; // eax

  sub_9491F0(this, a2);
  *((_DWORD *)this + 0xA) = &hkEntityListener::`vftable';
  *((_DWORD *)this + 0xB) = &off_A9D2B4;
  *(_DWORD *)this = &off_A9D5E0;
  *((_DWORD *)this + 2) = &off_A9D5C8;
  *((_DWORD *)this + 8) = off_A9D5C0;
  *((_DWORD *)this + 0xA) = off_A9D5AC;
  *((_DWORD *)this + 0xB) = &off_A9D5A0;
  v3 = 0;
  *((_DWORD *)this + 0xC) = 0;
  *((_DWORD *)this + 0xD) = 0;
  *((_DWORD *)this + 0xE) = 0x80000000;
  *((_BYTE *)this + 0x3C) = 1;
  v4 = a2[1];
  if ( v4 > 0 )
  {
    while ( 1 )
    {
      v5 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*a2 + 4 * v3) + 4))(*(_DWORD *)(*a2 + 4 * v3));
      if ( !sub_8B1770("ShapeDisplayViewerOptions", v5) )
        break;
      if ( ++v3 >= v4 )
        return this;
    }
    *((_BYTE *)this + 0x3C) = *(_BYTE *)(*(_DWORD *)(*a2 + 4 * v3) + 0x40);
  }
  return this;
}
