int __thiscall sub_7750F0(_DWORD *this, int a2, int a3, int a4)
{
  signed int v4; // ebp
  unsigned int i; // edi
  int v6; // esi
  signed int v7; // ecx
  _BYTE *v9; // [esp+8h] [ebp-10h] BYREF
  signed int v10; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  v9 = 0;
  if ( !NiTMap_GetAt(this + 2, a2, &v9) )
    return 0;
  v4 = 0;
  v12 = 0;
  v11 = 0;
  v9 += 0x24;
  for ( i = 0; i < 9; ++i )
  {
    if ( *v9 )
    {
      v6 = dword_B29944[i];
      v10 = 0;
      a2 = 0;
      sub_774AE0(v6, &v10, &a2);
      v7 = v10;
      v10 = abs32(v10 - a3);
      if ( (int)abs32(v4 - a3) >= v10 )
      {
        v10 = abs32(a2 - a4);
        if ( (int)abs32(v11 - a4) >= v10 )
        {
          v4 = v7;
          v11 = a2;
          v12 = v6;
        }
      }
    }
    v9 += 4;
  }
  return v12;
}
