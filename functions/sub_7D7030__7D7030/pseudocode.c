LONG sub_7D7030()
{
  LONG result; // eax
  int v1; // esi
  _DWORD *v2; // edi

  result = dword_B45D74;
  if ( dword_B45D74 )
  {
    --result;
    v1 = *(_DWORD *)(4 * result + 0xB45D78);
    v2 = (_DWORD *)(4 * result + 0xB45D78);
    dword_B45D74 = result;
    if ( v1 )
    {
      result = InterlockedDecrement((volatile LONG *)(v1 + 4));
      if ( !result )
        result = (**(int (__thiscall ***)(int, int))v1)(v1, 1);
      *v2 = 0;
    }
  }
  return result;
}
