char __userpurge sub_7A4DF0@<al>(float *this@<ecx>, int a2@<edi>, unsigned int *a3)
{
  _BYTE *v4; // edx
  const char *v5; // eax
  int v6; // edi
  unsigned int *v7; // eax
  bool v8; // bl
  int v9; // eax
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  rsize_t v14; // [esp-4h] [ebp-CCh]
  rsize_t v15; // [esp-4h] [ebp-CCh]
  int v16; // [esp+14h] [ebp-B4h] BYREF
  unsigned int *v17; // [esp+18h] [ebp-B0h] BYREF
  unsigned int v18; // [esp+28h] [ebp-A0h]
  unsigned int v19; // [esp+2Ch] [ebp-9Ch]
  _BYTE v20[40]; // [esp+30h] [ebp-98h] BYREF
  _DWORD v21[7]; // [esp+58h] [ebp-70h] BYREF
  _BYTE v22[40]; // [esp+74h] [ebp-54h] BYREF
  _DWORD v23[7]; // [esp+9Ch] [ebp-2Ch] BYREF
  int v24; // [esp+C4h] [ebp-4h]

  if ( sub_78EB40(a3) != 0x3E8 )
  {
    LODWORD(v14) = 0x18;
    v19 = 0xF;
    v18 = 0;
    LOBYTE(v17) = 0;
    sub_414500(&v16, a2, "missing begin_file token", v14);
    v24 = 0;
    sub_789190((std::exception *)v20, &v16, 0);
    ThrowException__((int)v20, &_TI3_AVIdvFileError__);
  }
  sub_78EC20(a3, (int)v23, (int)v23);
  v4 = off_B2BA10;
  v5 = (const char *)off_B2BA10;
  v24 = 1;
  v19 = 0xF;
  v18 = 0;
  LOBYTE(v17) = 0;
  v6 = (int)(v5 + 1);
  LODWORD(v14) = strlen(v5);
  sub_414500(&v16, v6, v4, v14);
  v7 = v17;
  LOBYTE(v24) = 2;
  if ( v19 < 0x10 )
    v7 = (unsigned int *)&v17;
  v8 = sub_6F5DE0(v23, 0, v23[5], v7, v18) != 0;
  LOBYTE(v24) = 1;
  if ( v19 >= 0x10 )
    FormHeapFree((unsigned int)v17);
  if ( v8 )
  {
    LODWORD(v15) = 0x1E;
    v19 = 0xF;
    v18 = 0;
    LOBYTE(v17) = 0;
    sub_414500(&v16, 0x10, "not a valid SpeedTree SPT file", v15);
    LOBYTE(v24) = 3;
    sub_789190((std::exception *)v20, &v16, 0);
    ThrowException__((int)v20, &_TI3_AVIdvFileError__);
  }
  v9 = sub_78EB40(a3);
  do
  {
    v10 = v9 - 0x3EA;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        if ( v11 != 7 )
        {
          sub_414750((int)v21, "malformed SpeedTree SPT file");
          LOBYTE(v24) = 4;
          sub_789190((std::exception *)v22, v21, 0);
          ThrowException__((int)v22, &_TI3_AVIdvFileError__);
        }
        ((void (__thiscall *)(float *, unsigned int *))loc_7A84A0)(this + 0x3D, a3);
      }
      else
      {
        sub_7A6020((_DWORD *)this + 0x21, a3);
      }
    }
    else
    {
      sub_7A4950(this, (float *)0x10, a3);
    }
    v9 = sub_78EB40(a3);
  }
  while ( v9 != 0x3E9 );
  v12 = a3[2];
  if ( v12 )
  {
    if ( *a3 < a3[3] - v12 && sub_78EBF0(a3) == 0x1B58 )
    {
      sub_78EB40(a3);
      sub_7A42D0(this, a3);
    }
  }
  sub_7A34F0(this, (_DWORD *)this + 9);
  sub_7A4C60((int *)this + 0x25, (int *)this + 0x25);
  if ( flt_A30634 < (double)*(this + 6) )
  {
    *(this + 0x13) = *(this + 6);
    *(this + 0x14) = *(this + 7);
  }
  if ( v23[6] >= 0x10u )
    FormHeapFree(v23[1]);
  return 1;
}
