void __thiscall sub_559F10(unsigned int *this)
{
  unsigned int v2; // esi
  int v3; // eax

  v2 = *(this + 2);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 0x20);
    if ( v3 )
    {
      if ( *(_DWORD *)(v3 + 4) == 1 )
      {
        sub_559CE0((unsigned int *)*(this + 2));
        FormHeapFree(v2);
        *(this + 2) = 0;
      }
    }
  }
}
