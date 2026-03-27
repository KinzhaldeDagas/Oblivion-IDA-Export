void __thiscall sub_8E7C20(int *this, _WORD *a2)
{
  _DWORD *v3; // eax
  int *v4; // ecx

  v3 = (_DWORD *)*(this + 7);
  if ( v3 )
  {
    if ( *(this + 2) )
      sub_89BE60(this, v3);
    sub_8BC730((int (__thiscall ***)(int (__stdcall ***)(signed int), int))*(this + 7));
    *(this + 7) = 0;
  }
  *(this + 7) = (int)a2;
  sub_8BC720(a2);
  v4 = (int *)*(this + 2);
  if ( v4 )
    sub_899990(v4, (int)this, *(this + 7));
}
