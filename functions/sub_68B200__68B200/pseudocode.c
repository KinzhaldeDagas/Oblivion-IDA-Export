void __thiscall sub_68B200(int *this, _DWORD *a2)
{
  _DWORD *v3; // eax

  if ( *((_BYTE *)this + 4) == 1 )
  {
    if ( !*this )
      *this = FormHeapAlloc(0xCu);
    v3 = (_DWORD *)*this;
    *v3 = *a2;
    v3[1] = a2[1];
    v3[2] = a2[2];
  }
}
