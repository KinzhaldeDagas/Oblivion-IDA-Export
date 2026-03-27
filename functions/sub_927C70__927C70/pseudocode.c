int __thiscall sub_927C70(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // ebp
  int v4; // ebx
  int *v5; // ecx
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // edi
  int result; // eax
  int v10; // ecx

  v2 = *(this + 8);
  v3 = this + 6;
  v4 = 0;
  *this = &off_AA1908;
  *(this + 2) = &off_AA1904;
  *(this + 3) = &off_AA18FC;
  *(this + 4) = &off_AA18F4;
  *(this + 5) = &off_A96B64;
  *(this + 6) = off_AA18E0;
  if ( v2 > 0 )
  {
    do
    {
      v5 = *(int **)(*(this + 7) + 4 * v4);
      v6 = v5[0x2C];
      v7 = 0;
      if ( v6 > 0 )
      {
        v8 = (_DWORD *)v5[0x2B];
        while ( (_DWORD *)*v8 != v3 )
        {
          ++v7;
          ++v8;
          if ( v7 >= v6 )
            goto LABEL_9;
        }
        if ( v7 >= 0 )
          sub_8A6300(v5, (int)v3);
      }
LABEL_9:
      ++v4;
    }
    while ( v4 < *(this + 8) );
  }
  result = *(this + 9);
  if ( result >= 0 )
  {
    v10 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v10 )
      v10 = dword_BA7D9C;
    result = sub_8A75D0(v10, (_DWORD *)*(this + 7), 4 * result, 0x14);
  }
  *v3 = &hkEntityListener::`vftable';
  *(this + 4) = &hkRayShapeCollectionFilter::`vftable';
  *(this + 3) = &hkShapeCollectionFilter::`vftable';
  *this = &hkBaseObject::`vftable';
  return result;
}
