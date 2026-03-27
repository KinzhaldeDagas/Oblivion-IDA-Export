int __userpurge xtoa_s@<eax>(
        unsigned int a1@<eax>,
        _BYTE *a2@<ecx>,
        char *a3@<edi>,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  _BYTE *v6; // esi
  int *v8; // eax
  char v9; // dl
  unsigned int v10; // et2
  char v11; // dl
  char *v12; // ecx
  char v13; // al
  int v14; // [esp-8h] [ebp-14h]
  unsigned int v15; // [esp+8h] [ebp-4h]

  v6 = a2;
  if ( !a2 )
  {
    *_errno() = 0x16;
    _invalid_parameter(0, (int)a3, 0x16);
    return 0x16;
  }
  if ( !a4 )
    goto LABEL_4;
  *a2 = 0;
  if ( a4 <= (unsigned int)(a6 != 0) + 1 )
  {
LABEL_7:
    v8 = _errno();
    v14 = 0x22;
    goto LABEL_5;
  }
  if ( a5 - 2 > 0x22 )
  {
LABEL_4:
    v8 = _errno();
    v14 = 0x16;
LABEL_5:
    *v8 = v14;
    _invalid_parameter(0, (int)a3, v14);
    return v14;
  }
  v15 = 0;
  if ( a6 )
  {
    *a2++ = 0x2D;
    v15 = 1;
    a1 = -a1;
  }
  a3 = a2;
  do
  {
    v10 = a1 % a5;
    a1 /= a5;
    v9 = v10;
    if ( v10 <= 9 )
      v11 = v9 + 0x30;
    else
      v11 = v9 + 0x57;
    *a2++ = v11;
    ++v15;
  }
  while ( a1 && v15 < a4 );
  if ( v15 >= a4 )
  {
    *v6 = 0;
    goto LABEL_7;
  }
  *a2 = 0;
  v12 = a2 + 0xFFFFFFFF;
  do
  {
    v13 = *v12;
    *v12-- = *a3;
    *a3++ = v13;
  }
  while ( a3 < v12 );
  return 0;
}
