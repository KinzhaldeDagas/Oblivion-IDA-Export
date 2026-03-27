_DWORD *__stdcall sub_785360(int a1, int a2, int a3, _DWORD *a4, char a5)
{
  _DWORD *v5; // esi
  int v7; // [esp+0h] [ebp-28h] BYREF
  void *v8; // [esp+10h] [ebp-18h]
  _DWORD *v9; // [esp+14h] [ebp-14h]
  int *v10; // [esp+18h] [ebp-10h]
  int v11; // [esp+24h] [ebp-4h]

  v10 = &v7;
  v5 = (_DWORD *)FormHeapAlloc(0x30u);
  v9 = v5;
  v11 = 1;
  v8 = v5;
  if ( v5 )
    sub_784F20(v5, a1, a2, a3, a4, a5);
  return v5;
}
