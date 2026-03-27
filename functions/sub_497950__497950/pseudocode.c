BOOL __thiscall sub_497950(unsigned __int8 *this, int a2)
{
  unsigned int v2; // ebp
  char v4; // bl
  int v5; // eax
  int v7; // [esp+10h] [ebp-4h] BYREF

  v2 = 0;
  v7 = 0;
  v4 = 1;
  if ( a2 )
  {
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x154))(a2) )
    {
      v5 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x154))(a2);
      if ( v5 )
        v2 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( *this || (sub_4978A0(this, a2), *this) )
        v4 = sub_497500(this, v2, &v7, 0);
    }
  }
  return v7 == *this && v4;
}
