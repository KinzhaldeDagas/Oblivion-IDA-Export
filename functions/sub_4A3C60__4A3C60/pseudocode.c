LONG sub_4A3C60()
{
  LONG result; // eax
  LONG (__stdcall *v1)(volatile LONG *); // edi
  int (__thiscall ***v2)(_DWORD, int); // esi
  int v3; // esi

  result = dword_B35414;
  v1 = InterlockedDecrement;
  if ( dword_B35414 )
  {
    v2 = (int (__thiscall ***)(_DWORD, int))dword_B35414;
    result = v1((volatile LONG *)(result + 4));
    if ( !result )
    {
      if ( v2 )
        result = (**v2)(v2, 1);
    }
    dword_B35414 = 0;
  }
  v3 = dword_B35418;
  if ( dword_B35418 )
  {
    result = v1((volatile LONG *)(v3 + 4));
    if ( !result )
    {
      if ( v3 )
        result = (**(int (__thiscall ***)(int, int))v3)(v3, 1);
    }
    dword_B35418 = 0;
  }
  return result;
}
