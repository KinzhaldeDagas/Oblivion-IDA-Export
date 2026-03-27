void __thiscall sub_571DF0(_DWORD *this)
{
  int v2; // esi

  FormHeapFree(*(this + 4));
  *(this + 4) = 0;
  *((_WORD *)this + 0xB) = 0;
  *((_WORD *)this + 0xA) = 0;
  FormHeapFree(0);
  *(this + 4) = 0;
  *((_WORD *)this + 0xB) = 0;
  *((_WORD *)this + 0xA) = 0;
  v2 = *(this + 3);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
}
