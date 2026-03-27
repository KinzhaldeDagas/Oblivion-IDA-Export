void __thiscall sub_4C8DD0(_DWORD *this)
{
  int v2; // edi
  int v3; // edi

  v2 = *(this + 9);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *(this + 9) = 0;
  }
  if ( *(this + 0xC) )
  {
    do
    {
      v3 = *(_DWORD *)(*(this + 0xC) + 4);
      FormHeapFree(*(this + 0xC));
      *(this + 0xC) = v3;
    }
    while ( v3 );
  }
  *(this + 0xB) = 0;
  j_TESForm_ClearComponentReferences((TESForm *)this);
}
