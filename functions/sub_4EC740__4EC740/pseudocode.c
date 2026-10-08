void __thiscall sub_4EC740(unsigned int **this)
{
  unsigned int **v2; // esi
  int v3; // ebx
  unsigned int *v4; // edi
  int v5; // esi
  LONG (__stdcall *v6)(volatile LONG *); // edi
  int v7; // esi

  v2 = this + 0xC; /*0x4ec773*/
  v3 = 4; /*0x4ec776*/
  do /*0x4ec79c*/
  {
    v4 = *v2; /*0x4ec780*/
    if ( *v2 ) /*0x4ec780*/
    {
      sub_4EC740(*v2); /*0x4ec788*/
      FormHeapFree((unsigned int)v4); /*0x4ec78e*/
    }
    ++v2; /*0x4ec796*/
    --v3; /*0x4ec799*/
  }
  while ( v3 ); /*0x4ec79c*/
  v5 = (int)*(this + 0xB); /*0x4ec79e*/
  v6 = InterlockedDecrement; /*0x4ec7a3*/
  if ( v5 ) /*0x4ec7ae*/
  {
    if ( !v6((volatile LONG *)(v5 + 4)) ) /*0x4ec7b4*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x4ec7c6*/
  }
  v7 = (int)*(this + 1); /*0x4ec7c8*/
  if ( v7 ) /*0x4ec7d5*/
  {
    if ( !v6((volatile LONG *)(v7 + 8)) ) /*0x4ec7db*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x4ec7ed*/
  }
}
