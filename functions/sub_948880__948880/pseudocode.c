int __thiscall sub_948880(void *this, _DWORD *a2)
{
  int v3; // ebx
  int v5; // esi
  int v6; // esi
  int result; // eax
  int v8; // ebx
  int v9; // esi
  int v10; // ecx
  int v11; // esi
  int v12; // [esp+14h] [ebp+4h]

  v3 = a2[1];
  sub_918440(this, v3);
  if ( v3 > 0 )
  {
    v5 = 0;
    do
    {
      sub_918480(this, (char *)(v5 + *a2), 3);
      v5 += 0x10;
      --v3;
    }
    while ( v3 );
  }
  v6 = a2[4];
  result = sub_918440(this, v6);
  if ( v6 > 0 )
  {
    v8 = 0;
    v12 = v6;
    do
    {
      v9 = a2[3];
      v10 = *(_DWORD *)(v9 + v8);
      v11 = v8 + v9;
      sub_918440(this, v10);
      sub_918440(this, *(_DWORD *)(v11 + 4));
      sub_918440(this, *(_DWORD *)(v11 + 8));
      v8 += 0xC;
      result = --v12;
    }
    while ( v12 );
  }
  return result;
}
