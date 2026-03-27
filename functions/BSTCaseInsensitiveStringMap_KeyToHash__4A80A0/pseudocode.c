int __thiscall BSTCaseInsensitiveStringMap_KeyToHash(_DWORD *this, const char *a2)
{
  int v2; // ebx
  char *v3; // esi
  int v4; // eax
  char *v5; // edi
  char v6; // cl
  unsigned int i; // eax
  int v8; // edx
  int v9; // eax
  char v11[12]; // [esp+0h] [ebp-1Ch] BYREF
  _DWORD *v12; // [esp+Ch] [ebp-10h]
  int v13; // [esp+10h] [ebp-Ch]
  int v14; // [esp+14h] [ebp-8h]

  v12 = this;
  v2 = strlen(a2);
  _alloca_();
  v3 = v11;
  if ( v2 > 0 )
  {
    v4 = a2 - v11;
    v5 = v11;
    v13 = a2 - v11;
    v14 = v2;
    while ( 1 )
    {
      *v5 = tolower(v5[v4]);
      ++v5;
      if ( !--v14 )
        break;
      v4 = v13;
    }
  }
  v11[v2] = 0;
  v6 = v11[0];
  for ( i = 0; v6; i = v8 + v9 )
  {
    v8 = 0x21 * i;
    v9 = v6;
    v6 = *++v3;
  }
  return i % v12[1];
}
