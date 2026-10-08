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

  v5 = a5; /*0x431035*/
  if ( a5 == 0xFFFFFFFF ) /*0x431048*/
    v5 = 0xFFFF; /*0x43104a*/
  v6 = a2; /*0x43104f*/
  v7 = a2[1]; /*0x431056*/
  if ( v7 == 0x3A ) /*0x43105c*/
  {
    a4 |= 5u; /*0x43105e*/
  }
  else if ( *a2 == 0x2E && v7 == 0x5C ) /*0x431070*/
  {
    a4 |= 4u; /*0x431072*/
    v6 = a2 + 2; /*0x43107a*/
  }
  if ( *v6 == 0x5C ) /*0x431084*/
  {
    v8 = v6 + 1; /*0x431086*/
    v9 = (char *)(v14 - v8); /*0x431089*/
    do /*0x43109a*/
    {
      v10 = *v8; /*0x431090*/
      v8[(_DWORD)v9] = *v8; /*0x431092*/
      ++v8; /*0x431095*/
    }
    while ( v10 ); /*0x43109a*/
  }
  else
  {
    v11 = (char *)(v14 - v6); /*0x43109e*/
    do /*0x4310aa*/
    {
      v12 = *v6; /*0x4310a0*/
      v6[(_DWORD)v11] = *v6; /*0x4310a2*/
      ++v6; /*0x4310a5*/
    }
    while ( v12 ); /*0x4310aa*/
  }
  result = (*(int (__thiscall **)(void *, char *, int, signed int))(*(_DWORD *)this + 0xC))(this, v14, a4, v5); /*0x4310bf*/
  if ( result ) /*0x4310c3*/
  {
    if ( a3 ) /*0x4310cf*/
      strcpy(a3, v14); /*0x4310d1*/
  }
  else if ( a3 ) /*0x4310c7*/
  {
    *a3 = 0; /*0x4310c9*/
  }
  return result; /*0x4310ec*/
}
