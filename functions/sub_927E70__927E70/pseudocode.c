_BYTE *__thiscall sub_927E70(_DWORD *this, _BYTE *a2, int a3, int a4)
{
  int v4; // eax

  v4 = *(this + 1);
  if ( !v4 || *(_BYTE *)(**(int (__thiscall ***)(int, int *, int, int))(v4 + 0x14))(v4 + 0x14, &a4, a3, a4) )
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
