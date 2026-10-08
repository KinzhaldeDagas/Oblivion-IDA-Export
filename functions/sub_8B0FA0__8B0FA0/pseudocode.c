unsigned int __thiscall sub_8B0FA0(int *this, unsigned int a2)
{
  unsigned int v2; // edi
  int v3; // esi
  int v4; // edx
  unsigned int v5; // eax
  unsigned int result; // eax
  unsigned int v7; // edx
  unsigned int v8; // [esp+14h] [ebp+4h]

  --*(this + 1); /*0x8b0fa6*/
  v2 = a2; /*0x8b0fad*/
  *(_DWORD *)(*this + 4 * a2) = 0; /*0x8b0fb1*/
  v3 = *(this + 2); /*0x8b0fb8*/
  v4 = *this; /*0x8b0fbb*/
  v5 = v3 & (v3 + a2); /*0x8b0fc0*/
  if ( *(_DWORD *)(*this + 4 * v5) ) /*0x8b0fc2*/
  {
    do /*0x8b0fd4*/
      v5 = v3 & (v3 + v5); /*0x8b0fd2*/
    while ( *(_DWORD *)(v4 + 4 * v5) ); /*0x8b0fd4*/
  }
  v8 = v3 & (v5 + 1); /*0x8b0fdd*/
  result = v3 & (v2 + 1); /*0x8b0fe4*/
  if ( *(_DWORD *)(v4 + 4 * result) ) /*0x8b0fe6*/
  {
    do /*0x8b104a*/
    {
      v7 = v3 & (0x9E3779B1 * (*(_DWORD *)(*this + 4 * result) >> 4)); /*0x8b1000*/
      if ( (result < v8 || v7 <= v2) && (result >= v2 || v7 <= v2 && v7 > result) && (v7 <= v2 || v7 >= v8) ) /*0x8b1020*/
      {
        *(_DWORD *)(*this + 4 * v2) = *(_DWORD *)(*this + 4 * result); /*0x8b1022*/
        *(_DWORD *)(*this + 4 * (v2 + *(this + 2)) + 4) = *(_DWORD *)(*this + 4 * (*(this + 2) + result) + 4); /*0x8b1033*/
        *(_DWORD *)(*this + 4 * result) = 0; /*0x8b1039*/
        v2 = result; /*0x8b1040*/
      }
      v3 = *(this + 2); /*0x8b1042*/
      result = v3 & (result + 1); /*0x8b1048*/
    }
    while ( *(_DWORD *)(*this + 4 * result) ); /*0x8b104a*/
  }
  return result; /*0x8b1050*/
}
