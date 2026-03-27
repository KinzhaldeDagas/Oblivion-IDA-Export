int __thiscall sub_8D83E0(_DWORD **this, _DWORD *a2, int a3)
{
  int result; // eax
  int v6; // edi
  int v7; // ecx

  result = a3 - 1;
  if ( a3 - 1 >= 0 )
  {
    v6 = a3;
    do
    {
      v7 = (int)*(this + 8 * *(char *)(*a2 + 4) + *(char *)(a2[1] + 4));
      result = (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)v7 + 0xC))(v7, a2);
      a2 += 2;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
