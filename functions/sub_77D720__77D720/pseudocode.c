unsigned int *__thiscall sub_77D720(_DWORD *this, unsigned int *a2, char a3)
{
  _DWORD *v4; // esi
  unsigned int *v5; // ebx

  if ( a3 || (v4 = sub_77D220(this, (unsigned int)a2)) == 0 )
  {
    v4 = sub_77D650(this, (unsigned int)a2);
    if ( !v4 )
      return 0;
  }
  v5 = sub_782840(v4, a2);
  if ( v4[9] > *(this + 0xC) )
    sub_77D270(this, v4);
  return v5;
}
