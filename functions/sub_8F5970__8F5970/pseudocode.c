BOOL __thiscall sub_8F5970(int *this)
{
  int v3; // edi
  int v4; // ebx
  int v5; // eax
  char v6; // [esp+7h] [ebp-1h] BYREF

  if ( !*(_BYTE *)(*(int (__thiscall **)(_DWORD, char *))(*(_DWORD *)*(this + 2) + 8))(*(this + 2), &v6) )
    return 1;
  sub_8F58D0(this);
  v3 = *(this + 6) - *(this + 5);
  v4 = 0;
  if ( v3 <= 0 )
    return 0;
  while ( 1 )
  {
    v5 = (*(int (__thiscall **)(_DWORD, int, int))(*(_DWORD *)*(this + 2) + 0xC))(
           *(this + 2),
           *(this + 4) + *(this + 3),
           v3);
    v4 += v5;
    *(this + 5) += v5;
    if ( v5 != v3 )
      break;
    if ( v4 >= v3 )
      return 0;
  }
  return v4 == 0;
}
