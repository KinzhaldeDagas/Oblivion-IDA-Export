int *__thiscall sub_782970(int *this, char a2)
{
  int v3; // eax

  v3 = *(this + 2);
  *this = (int)&NiGeometryGroup::`vftable';
  if ( v3 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
