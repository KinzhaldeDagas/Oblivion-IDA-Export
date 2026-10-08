int __thiscall sub_6C4390(_WORD *this, int a2, char a3)
{
  int v4; // ebp
  int v5; // esi
  unsigned int v6; // edi
  unsigned int v7; // eax
  _DWORD *v8; // ecx

  v4 = 0; /*0x6c43b7*/
  if ( !*(this + 0x23) ) /*0x6c43b9*/
    return 0; /*0x6c4439*/
  while ( 1 ) /*0x6c43c3*/
  {
    v5 = *(_DWORD *)(*((_DWORD *)this + 0x10) + 4 * v4); /*0x6c43c3*/
    if ( v5 ) /*0x6c43cb*/
    {
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6c43d1*/
      if ( !a3 || *(_DWORD *)(v5 + 0x44) ) /*0x6c43e2*/
      {
        v6 = *(_DWORD *)(v5 + 0xC); /*0x6c43e8*/
        v7 = 0; /*0x6c43eb*/
        if ( v6 ) /*0x6c43ef*/
          break; /*0x6c43ef*/
      }
    }
LABEL_10:
    if ( v5 ) /*0x6c4414*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x6c441a*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x6c442c*/
    }
    if ( ++v4 >= (unsigned int)(unsigned __int16)*(this + 0x23) ) /*0x6c4437*/
      return 0; /*0x6c4437*/
  }
  v8 = *(_DWORD **)(v5 + 0x14); /*0x6c43f1*/
  while ( !*v8 || *v8 != a2 ) /*0x6c43fe*/
  {
    ++v7; /*0x6c4400*/
    v8 += 4; /*0x6c4403*/
    if ( v7 >= v6 ) /*0x6c4408*/
      goto LABEL_10; /*0x6c4408*/
  }
  if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x6c445d*/
    (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x6c446f*/
  return v5; /*0x6c443b*/
}
