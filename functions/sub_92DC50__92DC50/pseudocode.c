__int16 __thiscall sub_92DC50(_DWORD *this)
{
  _WORD *v1; // edx
  int v2; // eax
  int v3; // eax
  _WORD *v4; // edx
  int v5; // eax

  v1 = (_WORD *)*(this + 5);
  if ( *(_WORD *)*(this + 4) > *v1 )
  {
    v2 = *(this + 4);
    *(this + 4) = v1;
    *(this + 5) = v2;
  }
  if ( *(_WORD *)*(this + 5) > *(_WORD *)*(this + 6) )
  {
    v3 = *(this + 5);
    *(this + 5) = *(this + 6);
    *(this + 6) = v3;
  }
  v4 = (_WORD *)*(this + 5);
  LOWORD(v5) = *(_WORD *)*(this + 4);
  if ( (unsigned __int16)v5 > *v4 )
  {
    v5 = *(this + 4);
    *(this + 4) = v4;
    *(this + 5) = v5;
  }
  return v5;
}
