int __thiscall sub_8F5C80(int *this)
{
  int v2; // ebx
  int v3; // esi
  int v4; // eax

  if ( !*(this + 2) )
    return 0;
  v2 = *(this + 4);
  v3 = 0;
  if ( v2 <= 0 )
  {
LABEL_5:
    *(this + 4) = 0;
  }
  else
  {
    while ( 1 )
    {
      v4 = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 2) + 0xC))(
             *(this + 2),
             v3 + *(this + 3),
             v2 - v3);
      v3 += v4;
      if ( !v4 )
        break;
      if ( v3 >= v2 )
        goto LABEL_5;
    }
  }
  return v3;
}
