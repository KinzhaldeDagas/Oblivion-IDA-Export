void __thiscall sub_523220(_DWORD *this, int *a2, int *a3)
{
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  int v5; // edi
  int v6; // edi
  int *v7; // ecx

  v3 = InterlockedDecrement;
  v5 = *(this + 0x75);
  if ( v5 )
  {
    if ( !v3((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
    *(this + 0x75) = 0;
  }
  v6 = *(this + 0x76);
  if ( v6 )
  {
    if ( !v3((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
    *(this + 0x76) = 0;
  }
  if ( !*(this + 0x75) && !*(this + 0x76) )
  {
    v7 = (int *)*(this + 0x3A);
    if ( v7 )
    {
      sub_52DED0(v7, a2, a3, (int)this, 1, 0);
      *((_WORD *)this + 0xF0) = *(_WORD *)(*(this + 0x3A) + 0x2FC);
    }
  }
}
