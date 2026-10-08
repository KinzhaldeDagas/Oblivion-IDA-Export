void __thiscall sub_696C00(int *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  int v4; // esi
  int v5; // esi
  int v6; // esi

  v2 = *(this + 6); /*0x696c2a*/
  v3 = InterlockedDecrement; /*0x696c2f*/
  if ( v2 ) /*0x696c3d*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x696c43*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x696c55*/
  }
  v4 = *(this + 5); /*0x696c57*/
  if ( v4 ) /*0x696c61*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x696c67*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x696c79*/
  }
  v5 = *(this + 1); /*0x696c7b*/
  if ( v5 ) /*0x696c85*/
  {
    if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x696c8b*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x696c9d*/
  }
  v6 = *this; /*0x696c9f*/
  if ( *this ) /*0x696c9f*/
  {
    if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x696cb1*/
    {
      if ( v6 ) /*0x696cb9*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x696cc3*/
    }
  }
}
