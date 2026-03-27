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

  result = 0;
  v6 = 0;
  if ( a2 < *((_DWORD *)this + 0x29) )
  {
    v10 = *(_DWORD **)(*((_DWORD *)this + 0x24) + 4 * a2);
    if ( v10 )
    {
      v8 = 1;
      v7 = 0;
      while ( 1 )
      {
        for ( i = 0; i < 3; ++i )
        {
          v4 = 0;
          for ( j = 0; j < 3; ++j )
          {
            if ( (!v4 || i == 2 && j == 1) && sub_88DFD0(this, v10, (int)v11, v7, i, j) )
            {
              v4 = 1;
            }
            else if ( !v4 )
            {
              goto LABEL_13;
            }
            v6 |= v8;
LABEL_13:
            v8 *= 2;
          }
        }
        if ( (unsigned int)++v7 >= 3 )
        {
          *(_DWORD *)(*((_DWORD *)this + 0x28) + 4 * a2) = v6;
          return v6;
        }
      }
    }
  }
  return result;
}
