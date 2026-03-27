char **__thiscall sub_7909D0(unsigned int *this)
{
  char v2; // bl
  int v3; // edx
  char **v4; // esi
  _DWORD *v5; // eax
  char **v6; // esi
  _BYTE v8[4]; // [esp+18h] [ebp-28h] BYREF
  unsigned int v9; // [esp+1Ch] [ebp-24h]
  unsigned int v10; // [esp+30h] [ebp-10h]
  int v11; // [esp+3Ch] [ebp-4h]

  v2 = 0;
  v4 = (char **)FormHeapAlloc(0x5Cu);
  v11 = 0;
  if ( v4 )
  {
    v5 = (_DWORD *)sub_78EC20(this, v3, (int)v8);
    v2 = 1;
    LOBYTE(v11) = 1;
    v6 = sub_786D60(v4, v5);
  }
  else
  {
    v6 = 0;
  }
  if ( (v2 & 1) != 0 && v10 >= 0x10 )
    FormHeapFree(v9);
  return v6;
}
