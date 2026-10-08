void __thiscall sub_7AF510(_DWORD *this)
{
  int v2; // ebp
  int *v3; // esi
  int v4; // edi
  int v5; // edi
  int v6; // ebx
  int v7; // esi
  _DWORD *v8; // ebx

  v2 = *(this + 0x26); /*0x7af51b*/
  v3 = (int *)(*(this + 0x25) + 0x58); /*0x7af521*/
  v4 = *v3; /*0x7af525*/
  if ( *v3 != v2 ) /*0x7af529*/
  {
    if ( v4 ) /*0x7af52d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x7af533*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x7af549*/
    }
    *v3 = v2; /*0x7af54d*/
    if ( v2 ) /*0x7af54f*/
      InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x7af555*/
  }
  v5 = *(this + 0x27); /*0x7af55b*/
  v6 = *(this + 0x25); /*0x7af561*/
  v7 = *(_DWORD *)(v6 + 0x44); /*0x7af567*/
  v8 = (_DWORD *)(v6 + 0x44); /*0x7af56a*/
  if ( v7 != v5 ) /*0x7af56f*/
  {
    if ( v7 ) /*0x7af573*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x7af579*/
        (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7af58f*/
    }
    *v8 = v5; /*0x7af593*/
    if ( v5 ) /*0x7af595*/
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x7af59b*/
  }
}
