unsigned int __thiscall BSTCaseInsensitiveStringMap_KeyToHash(_DWORD *this, const char *a2)
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

  v12 = this; /*0x4a80b6*/
  v2 = strlen(a2); /*0x4a80b9*/
  _alloca_(*(int *)v11); /*0x4a80d0*/
  v3 = v11; /*0x4a80d7*/
  if ( v2 > 0 ) /*0x4a80d9*/
  {
    v4 = a2 - v11; /*0x4a80de*/
    v5 = v11; /*0x4a80e0*/
    v13 = a2 - v11; /*0x4a80e2*/
    v14 = v2; /*0x4a80e5*/
    while ( 1 ) /*0x4a80fd*/
    {
      *v5 = tolower(v5[v4]); /*0x4a80fd*/
      ++v5; /*0x4a8102*/
      if ( !--v14 ) /*0x4a8109*/
        break; /*0x4a8109*/
      v4 = v13; /*0x4a80f0*/
    }
  }
  v11[v2] = 0; /*0x4a810b*/
  v6 = v11[0]; /*0x4a810f*/
  for ( i = 0; v6; i = v8 + v9 ) /*0x4a8115*/
  {
    v8 = 0x21 * i; /*0x4a811c*/
    v9 = v6; /*0x4a811e*/
    v6 = *++v3; /*0x4a8121*/
  }
  return i % v12[1]; /*0x4a813a*/
}
