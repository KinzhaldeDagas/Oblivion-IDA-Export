int __thiscall sub_431020(void *this, char *a2, char *a3, int a4, signed int a5)
{
  signed int v5; // ebx
  char *v6; // eax
  char v7; // dl
  char *v8; // eax
  char *v9; // edi
  char v10; // dl
  char *v11; // edi
  char v12; // dl
  int result; // eax
  char v14[260]; // [esp+Ch] [ebp-108h] BYREF

  v5 = a5;
  if ( a5 == 0xFFFFFFFF )
    v5 = 0xFFFF;
  v6 = a2;
  v7 = a2[1];
  if ( v7 == 0x3A )
  {
    a4 |= 5u;
  }
  else if ( *a2 == 0x2E && v7 == 0x5C )
  {
    a4 |= 4u;
    v6 = a2 + 2;
  }
  if ( *v6 == 0x5C )
  {
    v8 = v6 + 1;
    v9 = (char *)(v14 - v8);
    do
    {
      v10 = *v8;
      v8[(_DWORD)v9] = *v8;
      ++v8;
    }
    while ( v10 );
  }
  else
  {
    v11 = (char *)(v14 - v6);
    do
    {
      v12 = *v6;
      v6[(_DWORD)v11] = *v6;
      ++v6;
    }
    while ( v12 );
  }
  result = (*(int (__thiscall **)(void *, char *, int, signed int))(*(_DWORD *)this + 0xC))(this, v14, a4, v5);
  if ( result )
  {
    if ( a3 )
      strcpy(a3, v14);
  }
  else if ( a3 )
  {
    *a3 = 0;
  }
  return result;
}
