unsigned int __thiscall sub_95FF70(_DWORD *this, signed int a2)
{
  signed int v2; // ebx
  unsigned int result; // eax
  unsigned int v5; // edi
  int v6; // ecx

  v2 = a2;
  sub_95DB50(this, a2);
  a2 = *((unsigned __int16 *)this + 7);
  result = sub_6D3660(v2, (int)&a2);
  v5 = 0;
  if ( *((_WORD *)this + 7) )
  {
    do
    {
      v6 = *(_DWORD *)(*(this + 2) + 4 * v5);
      if ( v6 )
        (*(void (__thiscall **)(int, signed int))(*(_DWORD *)v6 + 4))(v6, v2);
      result = *((unsigned __int16 *)this + 7);
      ++v5;
    }
    while ( v5 < result );
  }
  return result;
}
