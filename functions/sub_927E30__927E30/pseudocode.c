_BYTE *__thiscall sub_927E30(_DWORD *this, _BYTE *a2, int a3, int a4, int a5)
{
  int v5; // eax

  v5 = *(this + 2);
  if ( !v5 || *(_BYTE *)(**(int (__thiscall ***)(int, int *, int, int, int))(v5 + 0x10))(v5 + 0x10, &a5, a3, a4, a5) )
  {
    *a2 = 1;
    return a2;
  }
  else
  {
    *a2 = 0;
    return a2;
  }
}
