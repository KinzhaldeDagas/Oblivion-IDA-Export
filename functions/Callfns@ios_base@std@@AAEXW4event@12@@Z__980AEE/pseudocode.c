int __thiscall std::ios_base::_Callfns(int ***this, int a2)
{
  int **i; // esi
  int result; // eax

  for ( i = *(this + 8); i; i = (int **)*i )
    result = ((int (__cdecl *)(int, int ***, int *))i[2])(a2, this, i[1]);
  return result;
}
