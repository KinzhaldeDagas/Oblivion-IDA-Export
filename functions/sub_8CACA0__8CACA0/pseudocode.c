int __thiscall sub_8CACA0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ecx

  result = *(this + 0xFFFFFFEE);
  if ( result )
  {
    v4 = *(_DWORD *)(a2 + 0xC);
    if ( v4 )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0xC))(v4);
      if ( result != 0xB )
        return sub_8CA450((const void **)*(this + 0xFFFFFFEE), a2, (int)&unk_BA84AC, (int)"Constraints");
    }
  }
  return result;
}
