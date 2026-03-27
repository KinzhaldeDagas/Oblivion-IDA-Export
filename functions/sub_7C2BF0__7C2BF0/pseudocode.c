_DWORD *__thiscall sub_7C2BF0(int this, _DWORD *a2)
{
  int v2; // eax

  if ( *(_DWORD *)(this + 0x238) )
    v2 = **(_DWORD **)(this + 0x230);
  else
    v2 = 0;
  *a2 = v2;
  if ( v2 )
    InterlockedIncrement((volatile LONG *)(v2 + 4));
  return a2;
}
