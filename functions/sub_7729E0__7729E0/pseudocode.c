//
// DX11 pool audit 2026-10-01: grows group pool with20-byte objects from772870 block constructor, expands free-pointer capacity via6E8CA0 as needed, and links the12-byte block header through pool+14.
int *__thiscall sub_7729E0(unsigned int *this, unsigned int a2)
{
  int *result; // eax
  int v4; // ebp
  int *v5; // ecx
  unsigned int i; // ebx
  int v7; // edi
  int v8; // eax
  unsigned int v9; // eax
  int *v10; // [esp+Ch] [ebp-4h]

  result = (int *)FormHeapAlloc(0xCu); /*0x7729e8*/
  v4 = 0; /*0x7729ed*/
  if ( result ) /*0x7729f4*/
  {
    result = sub_772870(result, a2); /*0x7729fd*/
    v5 = result; /*0x772a02*/
    v10 = result; /*0x772a04*/
  }
  else
  {
    v10 = 0; /*0x772a0a*/
    v5 = 0; /*0x772a0e*/
  }
  for ( i = 0; i < a2; v4 += 0x14 ) /*0x772a16*/
  {
    if ( i < v5[1] ) /*0x772a23*/
      v7 = v4 + *v5; /*0x772a2b*/
    else
      v7 = 0; /*0x772a25*/
    v8 = *(this + 1); /*0x772a2d*/
    if ( *(this + 2) == v8 ) /*0x772a33*/
    {
      if ( v8 ) /*0x772a37*/
        v9 = 2 * v8; /*0x772a39*/
      else
        v9 = 1; /*0x772a3d*/
      sub_6E8CA0(this, v9); /*0x772a45*/
      v5 = v10; /*0x772a4a*/
    }
    result = (int *)*this; /*0x772a51*/
    *(_DWORD *)(*this + 4 * (*(this + 2))++) = v7; /*0x772a53*/
    ++i; /*0x772a5a*/
  }
  v5[2] = *(this + 5); /*0x772a6a*/
  *(this + 5) = (unsigned int)v5; /*0x772a6d*/
  return result; /*0x772a70*/
}
