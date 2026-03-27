int *__cdecl _fltin2(int *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // ebx
  signed int v7; // eax
  int v9; // [esp+Ch] [ebp-24h] BYREF
  int v10; // [esp+10h] [ebp-20h]
  int v11; // [esp+14h] [ebp-1Ch] BYREF
  int v12; // [esp+18h] [ebp-18h]
  int v13; // [esp+1Ch] [ebp-14h]
  unsigned __int16 v14[6]; // [esp+20h] [ebp-10h] BYREF

  v10 = a2;
  v6 = 0;
  v13 = __strgtold12_l(v14, &v9, a2, 0, 0, 0, 0, a6);
  if ( (v13 & 4) != 0 )
  {
    v6 = 0x200;
    v11 = 0;
    v12 = 0;
  }
  else
  {
    v7 = sub_99F12B(v14, &v11);
    if ( (v13 & 2) != 0 || v7 == 1 )
      v6 = 0x80;
    if ( (v13 & 1) != 0 || v7 == 2 )
      v6 |= 0x100u;
  }
  a1[1] = v9 - v10;
  a1[4] = v11;
  a1[5] = v12;
  *a1 = v6;
  return a1;
}
