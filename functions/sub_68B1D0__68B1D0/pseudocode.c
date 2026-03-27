void __thiscall sub_68B1D0(int this, int a2)
{
  char v3; // al

  v3 = *(_BYTE *)(this + 4);
  if ( v3 != a2 )
  {
    if ( v3 == 1 )
      FormHeapFree(*(_DWORD *)this);
    *(_DWORD *)this = 0;
    *(_BYTE *)(this + 4) = a2;
  }
}
