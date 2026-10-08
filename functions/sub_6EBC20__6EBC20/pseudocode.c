void __thiscall sub_6EBC20(_DWORD *this, int a2, int a3)
{
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v5; // esi
  int v6; // esi

  v3 = InterlockedDecrement; /*0x6ebc26*/
  v5 = *(this + 3); /*0x6ebc30*/
  if ( v5 != a2 ) /*0x6ebc35*/
  {
    if ( v5 ) /*0x6ebc39*/
    {
      if ( !v3((volatile LONG *)(v5 + 4)) ) /*0x6ebc3f*/
        (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x6ebc51*/
    }
    *(this + 3) = a2; /*0x6ebc55*/
    if ( a2 ) /*0x6ebc58*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x6ebc5e*/
  }
  v6 = *(this + 4); /*0x6ebc64*/
  if ( v6 != a3 ) /*0x6ebc6d*/
  {
    if ( v6 ) /*0x6ebc71*/
    {
      if ( !v3((volatile LONG *)(v6 + 4)) ) /*0x6ebc77*/
        (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x6ebc89*/
    }
    *(this + 4) = a3; /*0x6ebc8d*/
    if ( a3 ) /*0x6ebc90*/
      InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x6ebc96*/
  }
}
