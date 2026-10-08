int __thiscall sub_9589E0(_DWORD *this)
{
  int v1; // eax
  _DWORD *v2; // edx
  int result; // eax
  _DWORD *v4; // edx

  v1 = 0; /*0x9589e3*/
  if ( (int)*(this + 4) > 0 ) /*0x9589e8*/
  {
    v2 = this + 0x3ED; /*0x9589ea*/
    do /*0x9589ff*/
    {
      *v2 = 0; /*0x9589f0*/
      ++v1; /*0x9589f9*/
      v2 += 0x14; /*0x9589fa*/
    }
    while ( v1 < *(this + 4) ); /*0x9589ff*/
  }
  result = 0; /*0x958a04*/
  if ( (int)*(this + 2) > 0 ) /*0x958a08*/
  {
    v4 = this + 0x14; /*0x958a0a*/
    do /*0x958a1f*/
    {
      *v4 = 0; /*0x958a10*/
      ++result; /*0x958a19*/
      v4 += 0x10; /*0x958a1a*/
    }
    while ( result < *(this + 2) ); /*0x958a1f*/
  }
  return result; /*0x958a21*/
}
