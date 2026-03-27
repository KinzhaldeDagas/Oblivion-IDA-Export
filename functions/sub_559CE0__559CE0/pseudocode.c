void __thiscall sub_559CE0(unsigned int *this)
{
  int v2; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // edi
  int v5; // edi
  int v6; // edi
  unsigned int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi
  int v11; // edi

  v2 = *(this + 4);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(this + 4) = 0;
  }
  v4 = *(this + 3);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    *(this + 3) = 0;
  }
  v5 = *(this + 7);
  if ( v5 )
  {
    if ( !v3((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *(this + 7) = 0;
  }
  v6 = *(this + 8);
  if ( v6 )
  {
    if ( !v3((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *(this + 8) = 0;
  }
  if ( *(this + 5) )
    FormHeapFree(*(this + 5));
  v7 = *(this + 2);
  if ( v7 )
  {
    sub_5599B0((_DWORD *)*(this + 2));
    FormHeapFree(v7);
  }
  v8 = *(this + 8);
  if ( v8 )
  {
    if ( !v3((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  }
  v9 = *(this + 7);
  if ( v9 )
  {
    if ( !v3((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(int, int))v9)(v9, 1);
  }
  v10 = *(this + 4);
  if ( v10 )
  {
    if ( !v3((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
  }
  v11 = *(this + 3);
  if ( v11 )
  {
    if ( !v3((volatile LONG *)(v11 + 4)) )
      (**(void (__thiscall ***)(int, int))v11)(v11, 1);
  }
  FormHeapFree(*this);
  *this = 0;
  *((_WORD *)this + 3) = 0;
  *((_WORD *)this + 2) = 0;
}
