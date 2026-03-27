char __cdecl sub_6ED850(_DWORD *a1, _DWORD *a2, int *a3, int *a4, int a5, _BYTE *a6)
{
  _DWORD *v7; // eax
  int v8; // edx
  int v9; // ecx
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // edx
  int v14; // eax
  char *v15; // ecx
  char v16; // al
  rsize_t v17; // [esp-20h] [ebp-B4h] BYREF
  int v18; // [esp-18h] [ebp-ACh]
  int v19; // [esp-14h] [ebp-A8h]
  int v20; // [esp-10h] [ebp-A4h]
  int v21; // [esp-Ch] [ebp-A0h]
  int v22; // [esp-8h] [ebp-9Ch]
  int v23; // [esp-4h] [ebp-98h]
  _BYTE *v24; // [esp+14h] [ebp-80h]
  _DWORD *v25; // [esp+18h] [ebp-7Ch]
  rsize_t *v26; // [esp+1Ch] [ebp-78h]
  int v27; // [esp+20h] [ebp-74h]
  int *v28; // [esp+24h] [ebp-70h]
  _DWORD v29[2]; // [esp+28h] [ebp-6Ch] BYREF
  _DWORD v30[4]; // [esp+30h] [ebp-64h] BYREF
  _DWORD v31[17]; // [esp+40h] [ebp-54h] BYREF
  unsigned int v32; // [esp+90h] [ebp-4h]

  v28 = a3;
  v26 = (rsize_t *)((char *)&v17 + 4);
  v25 = a2;
  LODWORD(v17) = 8;
  v23 = 0xF;
  v22 = 0;
  v27 = a5;
  v24 = a6;
  LOBYTE(v18) = 0;
  sub_414500((_DWORD *)&v17 + 1, (int)a4, "FRCTL001", v17);
  sub_6F6110((FutBinaryFileC *)v31, SBYTE4(v17), v18, v19, v20, v21, v22, v23);
  v23 = 1;
  v22 = 0xF;
  v26 = &v17;
  v21 = 0;
  v32 = 0;
  BYTE4(v17) = 0;
  sub_414420((int)&v17, a1, 0, 0xFFFFFFFF);
  if ( !sub_6F66E0(v31, v17, SHIDWORD(v17), v18, v19, v20, v21, v22, v23) )
    goto LABEL_2;
  if ( !sub_6F5E50(v31, (int)v29, 1, 0x18) )
    goto LABEL_2;
  v7 = v30;
  v8 = 2;
  do
  {
    v9 = 2;
    do
    {
      ++v7;
      --v9;
    }
    while ( v9 );
    --v8;
  }
  while ( v8 );
  v10 = v29[1];
  *v25 = v29[0];
  v11 = v30[0];
  *v28 = v10;
  v12 = v30[1];
  v13 = v30[2];
  *a4 = v11;
  v14 = v30[3];
  a4[1] = v12;
  v23 = (int)a4;
  v22 = (int)v31;
  v15 = (char *)v27;
  a4[2] = v13;
  a4[3] = v14;
  if ( !sub_6EF020(v15, v22, v23) )
  {
LABEL_2:
    v32 = 0xFFFFFFFF;
LABEL_3:
    BSFaceGenBinaryFile::~BSFaceGenBinaryFile((BSFaceGenBinaryFile *)v31);
    return 0;
  }
  v16 = sub_6EE270(v24, (int)v31, a4);
  v32 = 0xFFFFFFFF;
  if ( !v16 )
    goto LABEL_3;
  BSFaceGenBinaryFile::~BSFaceGenBinaryFile((BSFaceGenBinaryFile *)v31);
  return 1;
}
