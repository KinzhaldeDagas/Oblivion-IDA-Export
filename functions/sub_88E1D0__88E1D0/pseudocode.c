int __thiscall sub_88E1D0(__m128 *this, __int32 a2)
{
  int result; // eax
  unsigned int i; // edi
  char v4; // bl
  unsigned int j; // esi
  int v6; // [esp+Ch] [ebp-44h]
  int v7; // [esp+10h] [ebp-40h]
  int v8; // [esp+14h] [ebp-3Ch]
  _DWORD *v10; // [esp+1Ch] [ebp-34h]
  _BYTE v11[44]; // [esp+20h] [ebp-30h] BYREF

  result = 0; /*0x88e1ea*/
  v6 = 0; /*0x88e1f8*/
  if ( a2 < *((_DWORD *)this + 0x29) ) /*0x88e1fc*/
  {
    v10 = *(_DWORD **)(*((_DWORD *)this + 0x24) + 4 * a2); /*0x88e20d*/
    if ( v10 ) /*0x88e211*/
    {
      v8 = 1; /*0x88e217*/
      v7 = 0; /*0x88e21f*/
      while ( 1 ) /*0x88e223*/
      {
        for ( i = 0; i < 3; ++i ) /*0x88e223*/
        {
          v4 = 0; /*0x88e225*/
          for ( j = 0; j < 3; ++j ) /*0x88e227*/
          {
            if ( (!v4 || i == 2 && j == 1) && sub_88DFD0(this, v10, (int)v11, v7, i, j) ) /*0x88e24c*/
            {
              v4 = 1; /*0x88e255*/
            }
            else if ( !v4 ) /*0x88e25b*/
            {
              goto LABEL_13; /*0x88e25b*/
            }
            v6 |= v8; /*0x88e261*/
LABEL_13:
            v8 *= 2; /*0x88e265*/
          }
        }
        if ( (unsigned int)++v7 >= 3 ) /*0x88e287*/
        {
          *(_DWORD *)(*((_DWORD *)this + 0x28) + 4 * a2) = v6; /*0x88e29a*/
          return v6; /*0x88e296*/
        }
      }
    }
  }
  return result; /*0x88e29d*/
}
