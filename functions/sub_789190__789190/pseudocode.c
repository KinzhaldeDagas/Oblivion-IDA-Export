std::exception *__thiscall sub_789190(std::exception *this, _DWORD *a2, char a3)
{
  int *v4; // eax
  char *v5; // esi
  int *v6; // esi
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  rsize_t v11; // [esp-4h] [ebp-B4h]
  char v12; // [esp+14h] [ebp-9Ch]
  int v13; // [esp+18h] [ebp-98h] BYREF
  unsigned int v14; // [esp+1Ch] [ebp-94h]
  int v15; // [esp+2Ch] [ebp-84h]
  unsigned int v16; // [esp+30h] [ebp-80h]
  int v17; // [esp+34h] [ebp-7Ch] BYREF
  unsigned int v18; // [esp+38h] [ebp-78h]
  int v19; // [esp+48h] [ebp-68h]
  unsigned int v20; // [esp+4Ch] [ebp-64h]
  _BYTE v21[4]; // [esp+50h] [ebp-60h] BYREF
  unsigned int v22; // [esp+54h] [ebp-5Ch]
  int v23; // [esp+64h] [ebp-4Ch]
  unsigned int v24; // [esp+68h] [ebp-48h]
  int v25; // [esp+6Ch] [ebp-44h] BYREF
  unsigned int v26; // [esp+70h] [ebp-40h]
  int v27; // [esp+80h] [ebp-30h]
  unsigned int v28; // [esp+84h] [ebp-2Ch]
  int v29; // [esp+88h] [ebp-28h] BYREF
  unsigned int v30; // [esp+8Ch] [ebp-24h]
  int v31; // [esp+9Ch] [ebp-14h]
  unsigned int v32; // [esp+A0h] [ebp-10h]
  int v33; // [esp+ACh] [ebp-4h]

  if ( a3 )
  {
    v4 = _errno();
    v5 = strerror(*v4);
    v20 = 0xF;
    v19 = 0;
    LOBYTE(v18) = 0;
    LODWORD(v11) = strlen(v5);
    sub_414500(&v17, 0xF, v5, v11);
    v6 = &v17;
    v33 = 0;
    v12 = 1;
  }
  else
  {
    LODWORD(v11) = 0;
    v16 = 0xF;
    v15 = 0;
    LOBYTE(v14) = 0;
    sub_414500(&v13, 0xF, EmptyString, v11);
    v6 = &v13;
    v33 = 1;
    v12 = 2;
  }
  v7 = (_DWORD *)sub_6F8D30((int)this, (int)&v29, a2, " [");
  v33 = 2;
  v8 = (_DWORD *)sub_6F8430((int)v21, v7, v6);
  LOBYTE(v33) = 3;
  v9 = (_DWORD *)sub_6F8D30((int)this, (int)&v25, v8, (char *)&word_A61E98);
  LOBYTE(v33) = 4;
  sub_6F7DD0(this, v9);
  if ( v28 >= 0x10 )
    FormHeapFree(v26);
  v28 = 0xF;
  v27 = 0;
  LOBYTE(v26) = 0;
  if ( v24 >= 0x10 )
    FormHeapFree(v22);
  v24 = 0xF;
  v23 = 0;
  LOBYTE(v22) = 0;
  if ( v32 >= 0x10 )
    FormHeapFree(v30);
  v32 = 0xF;
  v31 = 0;
  LOBYTE(v30) = 0;
  if ( (v12 & 2) != 0 )
  {
    v12 &= ~2u;
    if ( v16 >= 0x10 )
      FormHeapFree(v14);
    v16 = 0xF;
    v15 = 0;
    LOBYTE(v14) = 0;
  }
  if ( (v12 & 1) != 0 && v20 >= 0x10 )
    FormHeapFree(v18);
  *(_DWORD *)this = &IdvFileError::`vftable';
  return this;
}
