int __thiscall sub_5304C0(_DWORD *this, unsigned int a2)
{
  int result; // eax
  int *v3; // edx
  bool v4; // zf
  int v5; // edx

  if ( a2 >= *(this + 3) )
    return 0;
  v3 = (int *)(*(this + 1) + 4 * a2);
  result = *v3;
  v4 = *v3 == 0;
  *v3 = 0;
  if ( !v4 )
    --*(this + 4);
  v5 = *(this + 3) - 1;
  if ( a2 == v5 )
    *(this + 3) = v5;
  return result;
}
