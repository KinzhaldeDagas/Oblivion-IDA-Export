void __thiscall sub_7957E0(int this)
{
  _DWORD *v2; // eax

  v2 = *(_DWORD **)(this + 4);
  if ( v2 )
  {
    sub_794FC0(v2, *(_DWORD **)(this + 8));
    FormHeapFree(*(_DWORD *)(this + 4));
  }
  *(_DWORD *)(this + 4) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 0xC) = 0;
}
