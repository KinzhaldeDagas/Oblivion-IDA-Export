_WORD *__fastcall sub_745DB0(int a1, int a2)
{
  _WORD *v2; // eax
  int v3; // ecx
  _WORD *v4; // eax
  int v5; // ecx
  _WORD *result; // eax
  int v7; // ecx

  v2 = (_WORD *)(a2 + 0x8C);
  v3 = 0x11E;
  do
  {
    *v2 = 0;
    v2 += 2;
    --v3;
  }
  while ( v3 );
  v4 = (_WORD *)(a2 + 0x980);
  v5 = 0x1E;
  do
  {
    *v4 = 0;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  result = (_WORD *)(a2 + 0xA74);
  v7 = 0x13;
  do
  {
    *result = 0;
    result += 2;
    --v7;
  }
  while ( v7 );
  *(_DWORD *)(a2 + 0x16A4) = 0;
  *(_DWORD *)(a2 + 0x16A0) = 0;
  *(_DWORD *)(a2 + 0x16A8) = 0;
  *(_DWORD *)(a2 + 0x1698) = 0;
  *(_WORD *)(a2 + 0x48C) = 1;
  return result;
}
