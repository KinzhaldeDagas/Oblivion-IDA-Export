_DWORD *__thiscall sub_797570(_DWORD *this, char *a2)
{
  int v4; // [esp+Ch] [ebp-1Ch] BYREF
  unsigned int v5; // [esp+10h] [ebp-18h]
  int v6; // [esp+14h] [ebp-14h]
  int v7; // [esp+18h] [ebp-10h]
  int v8; // [esp+24h] [ebp-4h]

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  sub_796F20(this, 0, a2, (int)&v4);
  if ( v5 )
    FormHeapFree(v5);
  return this;
}
