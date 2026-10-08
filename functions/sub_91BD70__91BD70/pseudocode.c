_WORD *__thiscall sub_91BD70(_WORD *this, _DWORD *a2)
{
  int v3; // edi
  int v4; // ebp
  const char *v5; // eax

  sub_9491F0(this, a2); /*0x91bd7b*/
  *((_DWORD *)this + 0xA) = &hkEntityListener::`vftable'; /*0x91bd80*/
  *((_DWORD *)this + 0xB) = &off_A9D2B4; /*0x91bd87*/
  *(_DWORD *)this = &off_A9D5E0; /*0x91bd8e*/
  *((_DWORD *)this + 2) = &off_A9D5C8; /*0x91bd94*/
  *((_DWORD *)this + 8) = off_A9D5C0; /*0x91bd9b*/
  *((_DWORD *)this + 0xA) = off_A9D5AC; /*0x91bda2*/
  *((_DWORD *)this + 0xB) = &off_A9D5A0; /*0x91bda9*/
  v3 = 0; /*0x91bdb0*/
  *((_DWORD *)this + 0xC) = 0; /*0x91bdb2*/
  *((_DWORD *)this + 0xD) = 0; /*0x91bdb5*/
  *((_DWORD *)this + 0xE) = 0x80000000; /*0x91bdb8*/
  *((_BYTE *)this + 0x3C) = 1; /*0x91bdbf*/
  v4 = a2[1]; /*0x91bdc3*/
  if ( v4 > 0 ) /*0x91bdc8*/
  {
    while ( 1 ) /*0x91bdd7*/
    {
      v5 = (const char *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*a2 + 4 * v3) + 4))(*(_DWORD *)(*a2 + 4 * v3)); /*0x91bdd7*/
      if ( !sub_8B1770("ShapeDisplayViewerOptions", v5) ) /*0x91bde0*/
        break; /*0x91bde0*/
      if ( ++v3 >= v4 ) /*0x91bdef*/
        return this; /*0x91bdf7*/
    }
    *((_BYTE *)this + 0x3C) = *(_BYTE *)(*(_DWORD *)(*a2 + 4 * v3) + 0x40); /*0x91be02*/
  }
  return this; /*0x91bdf1*/
}
