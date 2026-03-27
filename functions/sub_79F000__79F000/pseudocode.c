void __thiscall sub_79F000(int this)
{
  _DWORD *v2; // eax

  v2 = *(_DWORD **)(this + 4);
  if ( v2 )
  {
    sub_79E150(v2, *(_DWORD **)(this + 8));
    FormHeapFree(*(_DWORD *)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 0xC) = 0;
}
