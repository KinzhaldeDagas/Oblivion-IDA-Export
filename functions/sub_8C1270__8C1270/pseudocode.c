void __thiscall sub_8C1270(_DWORD *this, char a2)
{
  int v3; // eax
  _DWORD *v4; // esi

  if ( a2 )
  {
    v3 = *(this + 3);
    if ( v3 )
    {
      v4 = (_DWORD *)(v3 - 4);
      if ( v3 != 4 )
      {
        *v4 = &hkConstraintCinfo::`vftable';
        sub_8A0200((_DWORD *)(v3 - 4), 0);
        FormHeapFree((unsigned int)v4);
      }
    }
    *(this + 3) = 0;
  }
}
