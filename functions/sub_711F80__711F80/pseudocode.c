int sub_711F80()
{
  int result; // eax

  if ( dword_B3FB80 )
    result = (**(int (__thiscall ***)(int, int))dword_B3FB80)(dword_B3FB80, 1);
  if ( dword_B3FB84 )
    return (**(int (__thiscall ***)(int, int))dword_B3FB84)(dword_B3FB84, 1);
  return result;
}
