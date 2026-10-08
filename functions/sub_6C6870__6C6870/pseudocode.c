_DWORD *__thiscall sub_6C6870(_DWORD *this, int *a2)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  int v4; // esi
  int v5; // eax
  bool v6; // zf
  int v7; // esi
  int v8; // eax

  v2 = InterlockedDecrement; /*0x6c6876*/
  v4 = *this; /*0x6c6880*/
  if ( *this != *a2 ) /*0x6c6884*/
  {
    if ( v4 ) /*0x6c6888*/
    {
      if ( !v2((volatile LONG *)(v4 + 4)) ) /*0x6c688e*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6c68a0*/
    }
    v5 = *a2; /*0x6c68a2*/
    v6 = *a2 == 0; /*0x6c68a4*/
    *this = *a2; /*0x6c68a6*/
    if ( !v6 ) /*0x6c68a8*/
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6c68ae*/
  }
  v7 = *(this + 1); /*0x6c68b4*/
  if ( v7 != a2[1] ) /*0x6c68ba*/
  {
    if ( v7 ) /*0x6c68be*/
    {
      if ( !v2((volatile LONG *)(v7 + 4)) ) /*0x6c68c4*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x6c68d6*/
    }
    v8 = a2[1]; /*0x6c68d8*/
    *(this + 1) = v8; /*0x6c68dd*/
    if ( v8 ) /*0x6c68e0*/
      InterlockedIncrement((volatile LONG *)(v8 + 4)); /*0x6c68e6*/
  }
  *(this + 2) = a2[2]; /*0x6c68ef*/
  *((_BYTE *)this + 0xC) = *((_BYTE *)a2 + 0xC); /*0x6c68f5*/
  *((_BYTE *)this + 0xD) = *((_BYTE *)a2 + 0xD); /*0x6c68fb*/
  return this; /*0x6c6900*/
}
