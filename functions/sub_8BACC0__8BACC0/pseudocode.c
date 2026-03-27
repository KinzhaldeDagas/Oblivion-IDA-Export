BOOL __thiscall sub_8BACC0(_DWORD *this)
{
  int v2; // ecx
  HANDLE *v3; // esi
  int v4; // edi

  v2 = *this;
  if ( *(_WORD *)(v2 + 4) )
  {
    if ( !--*(_WORD *)(v2 + 6) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  sub_8BABF0((char *)this);
  v3 = (HANDLE *)(this + 0x45);
  v4 = 6;
  do
  {
    v3 += 0xFFFFFFF6;
    sub_8F5890(v3);
    --v4;
  }
  while ( v4 );
  return sub_8F5890((HANDLE *)this + 3);
}
