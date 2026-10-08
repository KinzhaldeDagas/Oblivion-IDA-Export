int __thiscall sub_5304C0(_DWORD *this, unsigned int a2)
{
  int result; // eax
  int *v3; // edx
  bool v4; // zf
  int v5; // edx

  if ( a2 >= *(this + 3) ) /*0x5304c8*/
    return 0; /*0x5304ca*/
  v3 = (int *)(*(this + 1) + 4 * a2); /*0x5304d3*/
  result = *v3; /*0x5304d6*/
  v4 = *v3 == 0; /*0x5304d8*/
  *v3 = 0; /*0x5304da*/
  if ( !v4 ) /*0x5304e0*/
    --*(this + 4); /*0x5304e2*/
  v5 = *(this + 3) - 1; /*0x5304e9*/
  if ( a2 == v5 ) /*0x5304ee*/
    *(this + 3) = v5; /*0x5304f0*/
  return result; /*0x5304cc*/
}
