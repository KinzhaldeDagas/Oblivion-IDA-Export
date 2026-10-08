int sub_551320()
{
  int v0; // eax
  int v1; // edi
  int v2; // esi

  v0 = FormHeapAlloc(0xCu); /*0x551324*/
  if ( v0 ) /*0x55132e*/
  {
    *(_DWORD *)(v0 + 8) = 0; /*0x551330*/
    v1 = v0; /*0x551337*/
  }
  else
  {
    v1 = 0; /*0x55133b*/
  }
  v2 = *(_DWORD *)(v1 + 8); /*0x55133d*/
  if ( v2 ) /*0x551342*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x551348*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x55135e*/
    *(_DWORD *)(v1 + 8) = 0; /*0x551360*/
  }
  return v1; /*0x551369*/
}
