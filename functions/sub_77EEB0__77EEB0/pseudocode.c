int sub_77EEB0()
{
  int result; // eax

  result = NiTMap_Clear((_DWORD *)dword_B428AC);
  if ( dword_B428AC )
    result = (**(int (__thiscall ***)(int, int))dword_B428AC)(dword_B428AC, 1);
  dword_B428AC = 0;
  return result;
}
