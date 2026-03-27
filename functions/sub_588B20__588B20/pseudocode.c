int __thiscall sub_588B20(int this)
{
  _DWORD *v1; // esi
  int v2; // ecx
  int result; // eax

  if ( !*(_BYTE *)(this + 4) && !*(_BYTE *)(this + 5) )
  {
    v1 = *(_DWORD **)(this + 0x34);
    for ( *(_BYTE *)(this + 5) = 1; v1; result = sub_588B20(v2) )
    {
      v2 = v1[2];
      v1 = (_DWORD *)*v1;
    }
  }
  return result;
}
