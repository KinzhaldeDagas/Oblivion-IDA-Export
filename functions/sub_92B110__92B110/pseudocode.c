int __thiscall sub_92B110(int *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  int result; // eax
  int v6; // ecx

  v2 = *(this + 7);
  v3 = 0;
  *this = (int)&off_AA1BDC;
  *(this + 2) = (int)&off_AA1BD8;
  *(this + 3) = (int)&off_AA1BD0;
  *(this + 4) = (int)&off_AA1BC8;
  *(this + 5) = (int)&off_AA1BC4;
  if ( v2 > 0 )
  {
    do
    {
      v4 = *(_DWORD *)(*(this + 6) + 4 * v3);
      if ( *(_WORD *)(v4 + 4) )
      {
        if ( !--*(_WORD *)(v4 + 6) )
          (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      }
      ++v3;
    }
    while ( v3 < *(this + 7) );
  }
  result = *(this + 8);
  if ( result >= 0 )
  {
    v6 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v6 )
      v6 = dword_BA7D9C;
    result = sub_8A75D0(v6, (_DWORD *)*(this + 6), 4 * result, 0x14);
  }
  *(this + 4) = (int)&hkRayShapeCollectionFilter::`vftable';
  *(this + 3) = (int)&hkShapeCollectionFilter::`vftable';
  *this = (int)&hkBaseObject::`vftable';
  return result;
}
