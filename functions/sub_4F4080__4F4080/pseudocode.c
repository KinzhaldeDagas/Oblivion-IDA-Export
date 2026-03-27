char *__thiscall sub_4F4080(_DWORD *this, void *Src, _DWORD *a3)
{
  int v4; // ebp
  char *v5; // edi
  char *v6; // edi
  char *v7; // edi
  int v8; // eax
  int v9; // ebx
  int v10; // ecx
  int v11; // eax
  const char *v12; // ecx
  char *v13; // edi
  int v14; // ecx
  int v15; // eax
  const char *v16; // ecx
  char *v17; // edi
  int v18; // ecx
  char *v19; // edi
  const char *v20; // eax
  char *result; // eax
  size_t v22; // [esp-4h] [ebp-70h]
  size_t v23; // [esp-4h] [ebp-70h]
  char v24; // [esp+13h] [ebp-59h]
  int v25; // [esp+14h] [ebp-58h] BYREF
  int v26; // [esp+18h] [ebp-54h]
  _DWORD *v27; // [esp+1Ch] [ebp-50h]
  char *v28; // [esp+20h] [ebp-4Ch]
  int v29; // [esp+24h] [ebp-48h] BYREF
  char Dst[64]; // [esp+28h] [ebp-44h] BYREF

  v4 = (int)(this + 1);
  *this = 0;
  *(this + 0x141) = 0xFFFFFFFF;
  *(this + 0x1C2) = 0xFFFFFFFF;
  *((_BYTE *)this + 4) = 0x28;
  LODWORD(v22) = *a3;
  v5 = (char *)this + 5;
  v27 = a3;
  memcpy((char *)this + 5, Src, v22);
  v6 = &v5[*a3];
  v29 = v4;
  *v6 = 0x29;
  v6[1] = 0;
  v7 = (char *)(this + 0x81);
  v28 = (char *)(this + 0x81);
  *((_BYTE *)this + 0x204) = 0;
  v24 = 0;
  do
  {
    v25 = 0x10;
    v8 = sub_4F3320(this, v4, (char **)&v29, Dst, (unsigned int *)&v25, 0, 0);
    v9 = v25;
    v4 = v8;
    v26 = v8;
    if ( !v8 )
      goto LABEL_23;
    if ( v25 >= 0x10 )
    {
      LODWORD(v23) = v8;
      *v7 = 0x20;
      v19 = v7 + 1;
      memcpy(v19, Dst, v23);
      v7 = &v19[v4];
LABEL_23:
      if ( v9 == 0x10 )
      {
        v24 = 1;
      }
      else if ( v9 < 0x10 && v9 > 1 )
      {
        v24 = 0;
      }
      continue;
    }
    if ( v25 )
    {
      if ( v25 != 1 )
      {
        if ( v25 == 0xA && !v24 )
          v9 = 0xF;
        if ( *(this + 0x141) != 0xFFFFFFFF )
        {
          while ( 1 )
          {
            v10 = *(this + 0x141);
            v11 = *(this + v10 + 0x101);
            *(this + 0x141) = v10 - 1;
            if ( *(_BYTE *)(8 * v11 + 0xB0A12C) < *(_BYTE *)(8 * v9 + 0xB0A12C) )
              break;
            v12 = (const char *)(8 * v11 + 0xB0A12D);
            *v7 = 0x20;
            v13 = v7 + 1;
            v4 = strlen(v12);
            LODWORD(v23) = v4;
            memcpy(v13, v12, v23);
            v7 = &v13[v4];
            if ( *(this + 0x141) == 0xFFFFFFFF )
              goto LABEL_14;
          }
          *(this + ++*(this + 0x141) + 0x101) = v11;
        }
LABEL_14:
        if ( *(this + 0x141) == 0x3F )
        {
          *this = 2;
          v20 = *(const char **)off_B09DC8;
          goto LABEL_32;
        }
        *(this + ++*(this + 0x141) + 0x101) = v9;
        goto LABEL_23;
      }
      if ( *(this + 0x141) == 0xFFFFFFFF )
      {
        *this = 5;
        sub_40FEC0("%s", *(const char **)off_B09DD4);
        return 0;
      }
      v14 = *(this + 0x141);
      v15 = *(this + v14 + 0x101);
      for ( *(this + 0x141) = v14 - 1; v15; *(this + 0x141) = v18 - 1 )
      {
        v16 = (const char *)(8 * v15 + 0xB0A12D);
        *v7 = 0x20;
        v17 = v7 + 1;
        v4 = strlen(v16);
        LODWORD(v23) = v4;
        memcpy(v17, v16, v23);
        v18 = *(this + 0x141);
        v15 = *(this + v18 + 0x101);
        v7 = &v17[v4];
      }
    }
    else
    {
      if ( *(this + 0x141) == 0x3F )
      {
        *this = 2;
        sub_40FEC0("%s", *(const char **)off_B09DC8);
        return 0;
      }
      *(this + ++*(this + 0x141) + 0x101) = 0;
    }
  }
  while ( v26 );
  *v7 = 0;
  if ( *(this + 0x141) != 0xFFFFFFFF )
  {
    *this = 5;
    v20 = *(const char **)off_B09DD4;
LABEL_32:
    sub_40FEC0("%s", v20);
    return 0;
  }
  result = v28;
  *v27 = v7 - (char *)this - 0x204;
  return result;
}
