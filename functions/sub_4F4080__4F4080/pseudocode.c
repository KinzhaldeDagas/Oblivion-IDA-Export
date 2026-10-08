char *__thiscall sub_4F4080(_DWORD *this, void *Src, unsigned int *a3)
{
  _DWORD *v4; // ebp
  char *v5; // edi
  char *v6; // edi
  char *v7; // edi
  unsigned int v8; // eax
  int v9; // ebx
  unsigned int v10; // ebp
  int v11; // ecx
  int v12; // eax
  const char *v13; // ecx
  char *v14; // edi
  unsigned int v15; // ebp
  int v16; // ecx
  int v17; // eax
  const char *v18; // ecx
  char *v19; // edi
  unsigned int v20; // ebp
  int v21; // ecx
  char *v22; // edi
  const char *v23; // eax
  char *result; // eax
  unsigned int v25; // [esp-4h] [ebp-70h]
  char v26; // [esp+13h] [ebp-59h]
  int v27; // [esp+14h] [ebp-58h] BYREF
  unsigned int v28; // [esp+18h] [ebp-54h]
  unsigned int *v29; // [esp+1Ch] [ebp-50h]
  char *v30; // [esp+20h] [ebp-4Ch]
  int v31; // [esp+24h] [ebp-48h] BYREF
  char Dst[64]; // [esp+28h] [ebp-44h] BYREF

  v4 = this + 1; /*0x4f409f*/
  *this = 0; /*0x4f40a2*/
  *(this + 0x141) = 0xFFFFFFFF; /*0x4f40a8*/
  *(this + 0x1C2) = 0xFFFFFFFF; /*0x4f40ae*/
  *((_BYTE *)this + 4) = 0x28; /*0x4f40b6*/
  v25 = *a3; /*0x4f40bb*/
  v5 = (char *)this + 5; /*0x4f40bd*/
  v29 = a3; /*0x4f40c1*/
  memcpy((char *)this + 5, Src, v25); /*0x4f40c5*/
  v6 = &v5[*a3]; /*0x4f40cd*/
  v31 = (int)v4; /*0x4f40cf*/
  *v6 = 0x29; /*0x4f40d3*/
  v6[1] = 0; /*0x4f40d6*/
  v7 = (char *)(this + 0x81); /*0x4f40da*/
  v30 = (char *)(this + 0x81); /*0x4f40e0*/
  *((_BYTE *)this + 0x204) = 0; /*0x4f40e4*/
  v26 = 0; /*0x4f40e7*/
  do /*0x4f42d8*/
  {
    v27 = 0x10; /*0x4f4105*/
    v8 = sub_4F3320(this, (char **)&v31, Dst, (unsigned int *)&v27, 0, 0); /*0x4f410d*/
    v9 = v27; /*0x4f4112*/
    v10 = v8; /*0x4f4116*/
    v28 = v8; /*0x4f411a*/
    if ( !v8 ) /*0x4f411e*/
      goto LABEL_23; /*0x4f411e*/
    if ( v27 >= 0x10 ) /*0x4f4127*/
    {
      *v7 = 0x20; /*0x4f42a9*/
      v22 = v7 + 1; /*0x4f42ad*/
      memcpy(v22, Dst, v8); /*0x4f42b1*/
      v7 = &v22[v10]; /*0x4f42b9*/
LABEL_23:
      if ( v9 == 0x10 ) /*0x4f42be*/
      {
        v26 = 1; /*0x4f42c0*/
      }
      else if ( v9 < 0x10 && v9 > 1 ) /*0x4f42cc*/
      {
        v26 = 0; /*0x4f42ce*/
      }
      continue; /*0x4f42c5*/
    }
    if ( v27 ) /*0x4f4132*/
    {
      if ( v27 != 1 ) /*0x4f413b*/
      {
        if ( v27 == 0xA && !v26 ) /*0x4f414b*/
          v9 = 0xF; /*0x4f414d*/
        if ( *(this + 0x141) != 0xFFFFFFFF ) /*0x4f4159*/
        {
          while ( 1 ) /*0x4f4160*/
          {
            v11 = *(this + 0x141); /*0x4f4160*/
            v12 = *(this + v11 + 0x101); /*0x4f4166*/
            *(this + 0x141) = v11 - 1; /*0x4f4170*/
            if ( *(_BYTE *)(8 * v12 + 0xB0A12C) < *(_BYTE *)(8 * v9 + 0xB0A12C) ) /*0x4f4184*/
              break; /*0x4f4184*/
            v13 = (const char *)(8 * v12 + 0xB0A12D); /*0x4f4186*/
            *v7 = 0x20; /*0x4f418f*/
            v14 = v7 + 1; /*0x4f4192*/
            v15 = strlen(v13); /*0x4f4195*/
            memcpy(v14, v13, v15); /*0x4f41a8*/
            v7 = &v14[v15]; /*0x4f41b0*/
            if ( *(this + 0x141) == 0xFFFFFFFF ) /*0x4f41b9*/
              goto LABEL_14; /*0x4f41b9*/
          }
          *(this + ++*(this + 0x141) + 0x101) = v12; /*0x4f41ca*/
        }
LABEL_14:
        if ( *(this + 0x141) == 0x3F ) /*0x4f41dd*/
        {
          *this = 2; /*0x4f42fb*/
          v23 = *(const char **)off_B09DC8; /*0x4f4301*/
          goto LABEL_32; /*0x4f4301*/
        }
        *(this + ++*(this + 0x141) + 0x101) = v9; /*0x4f41f0*/
        goto LABEL_23; /*0x4f41f7*/
      }
      if ( *(this + 0x141) == 0xFFFFFFFF ) /*0x4f4203*/
      {
        *this = 5; /*0x4f432b*/
        sub_40FEC0("%s", *(const char **)off_B09DD4); /*0x4f433d*/
        return 0; /*0x4f4359*/
      }
      v16 = *(this + 0x141); /*0x4f4209*/
      v17 = *(this + v16 + 0x101); /*0x4f420f*/
      for ( *(this + 0x141) = v16 - 1; v17; *(this + 0x141) = v21 - 1 ) /*0x4f4221*/
      {
        v18 = (const char *)(8 * v17 + 0xB0A12D); /*0x4f4230*/
        *v7 = 0x20; /*0x4f4239*/
        v19 = v7 + 1; /*0x4f423c*/
        v20 = strlen(v18); /*0x4f423f*/
        memcpy(v19, v18, v20); /*0x4f4252*/
        v21 = *(this + 0x141); /*0x4f4257*/
        v17 = *(this + v21 + 0x101); /*0x4f425d*/
        v7 = &v19[v20]; /*0x4f426a*/
      }
    }
    else
    {
      if ( *(this + 0x141) == 0x3F ) /*0x4f4284*/
      {
        *this = 2; /*0x4f435c*/
        sub_40FEC0("%s", *(const char **)off_B09DC8); /*0x4f436e*/
        return 0; /*0x4f438a*/
      }
      *(this + ++*(this + 0x141) + 0x101) = 0; /*0x4f4297*/
    }
  }
  while ( v28 ); /*0x4f42d8*/
  *v7 = 0; /*0x4f42de*/
  if ( *(this + 0x141) != 0xFFFFFFFF ) /*0x4f42e8*/
  {
    *this = 5; /*0x4f42ee*/
    v23 = *(const char **)off_B09DD4; /*0x4f42f4*/
LABEL_32:
    sub_40FEC0("%s", v23); /*0x4f4306*/
    return 0; /*0x4f4328*/
  }
  result = v30; /*0x4f4391*/
  *v29 = v7 - (char *)this - 0x204; /*0x4f439d*/
  return result; /*0x4f4314*/
}
