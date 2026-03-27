char __userpurge sub_500280@<al>(
        void *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        _DWORD *a5,
        _BYTE *a6,
        int a7)
{
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // ecx
  _DWORD *v11; // esi
  const char *v12; // eax
  const char *v13; // eax
  char v14; // bl
  int v16; // [esp+0h] [ebp-78h]
  unsigned int v17[2]; // [esp+14h] [ebp-64h] BYREF
  int v18; // [esp+1Ch] [ebp-5Ch]
  BSStringT v19; // [esp+20h] [ebp-58h] BYREF
  char v20; // [esp+2Ch] [ebp-4Ch]
  int v21; // [esp+3Ch] [ebp-3Ch]
  int v22; // [esp+40h] [ebp-38h]
  int v23; // [esp+44h] [ebp-34h]
  int v24; // [esp+48h] [ebp-30h]
  int v25; // [esp+4Ch] [ebp-2Ch]
  int v26; // [esp+58h] [ebp-20h] BYREF
  _DWORD *v27; // [esp+60h] [ebp-18h]
  unsigned int v28; // [esp+74h] [ebp-4h]

  sub_4FCD60(v17, (char)this);
  v28 = 0;
  v18 = a7;
  v20 = 1;
  if ( a6 && (sub_4D7240(a6), v8) )
  {
    sub_4D7240(a6);
    v27 = v9;
    v21 = v9[6];
    v22 = v9[7];
    v23 = v9[8];
    v24 = v9[9];
    v25 = v9[0xA];
    sub_4FC040(v9 + 0x10, &v26);
    v10 = v27;
    v11 = a5;
  }
  else
  {
    v11 = a5;
    v10 = a5;
    v27 = a5;
  }
  if ( a7 == 1
    || byte_B333F4
    || (byte_B333F4 = 1, v12 = (const char *)(*(int (__thiscall **)(_DWORD *))(*v10 + 0xD4))(v10), byte_B333F4 = 0, !v12)
    || !strlen(v12) )
  {
    v13 = *(const char **)(4 * v18 + 0xB0A110);
  }
  else
  {
    v13 = (const char *)(*(int (__thiscall **)(_DWORD *))(*v27 + 0xD4))(v27);
  }
  BSStringT_Set(&v19, v13, 0);
  v17[0] = v11[0xB];
  v14 = sub_500170(this, st5_0, st6_0, st7_0, a7, __PAIR64__(v17, (unsigned int)v11), v16);
  v28 = 0xFFFFFFFF;
  sub_4FF440(v17);
  return v14;
}
