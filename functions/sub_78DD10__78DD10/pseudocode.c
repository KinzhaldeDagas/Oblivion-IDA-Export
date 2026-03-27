int __userpurge sub_78DD10@<eax>(_DWORD *this@<ecx>, int a2@<edi>, unsigned int *a3)
{
  _DWORD *v4; // eax
  int result; // eax
  int v6; // eax
  int v7; // eax
  int v8; // edx
  rsize_t v9; // [esp-4h] [ebp-D8h]
  int v10; // [esp+18h] [ebp-BCh] BYREF
  float v11; // [esp+1Ch] [ebp-B8h]
  float v12; // [esp+20h] [ebp-B4h]
  float v13; // [esp+24h] [ebp-B0h]
  float v14; // [esp+28h] [ebp-ACh]
  float v15; // [esp+2Ch] [ebp-A8h]
  float v16; // [esp+30h] [ebp-A4h]
  float v17; // [esp+34h] [ebp-A0h]
  float v18; // [esp+38h] [ebp-9Ch]
  float v19; // [esp+3Ch] [ebp-98h]
  int v20; // [esp+40h] [ebp-94h] BYREF
  char v21; // [esp+44h] [ebp-90h]
  int v22; // [esp+54h] [ebp-80h]
  int v23; // [esp+58h] [ebp-7Ch]
  int v24; // [esp+5Ch] [ebp-78h] BYREF
  char v25; // [esp+60h] [ebp-74h]
  int v26; // [esp+70h] [ebp-64h]
  int v27; // [esp+74h] [ebp-60h]
  _BYTE v28[40]; // [esp+78h] [ebp-5Ch] BYREF
  _BYTE v29[40]; // [esp+A0h] [ebp-34h] BYREF
  int v30; // [esp+D0h] [ebp-4h]

  v4 = (_DWORD *)FormHeapAlloc(0x10u);
  if ( v4 )
  {
    v4[1] = 0;
    v4[2] = 0;
    v4[3] = 0;
  }
  else
  {
    v4 = 0;
  }
  v30 = 0xFFFFFFFF;
  *(this + 0x16) = v4;
  result = sub_78EB40(a3);
  do
  {
    v6 = result - 0x2EE2;
    v13 = 0.0;
    v10 = 0;
    v12 = 0.0;
    v11 = 0.0;
    v16 = 0.0;
    v15 = 0.0;
    v14 = 0.0;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
        {
          LODWORD(v9) = 0x1F;
          v23 = 0xF;
          v22 = 0;
          v21 = 0;
          sub_414500(&v20, a2, "malformed collision object info", v9);
          v30 = 1;
          sub_789190((std::exception *)v28, &v20, 0);
          ThrowException__((int)v28, &_TI3_AVIdvFileError__);
        }
        a2 = 2;
      }
      else
      {
        a2 = 1;
      }
    }
    else
    {
      a2 = 0;
    }
    v10 = a2;
    v17 = sub_78EB10(a3);
    v18 = sub_78EB10(a3);
    v19 = sub_78EB10(a3);
    v11 = v17;
    v12 = v18;
    v13 = v19;
    if ( a2 )
    {
      v14 = sub_78EB10(a3);
      v15 = sub_78EB10(a3);
      if ( a2 != 1 )
        v16 = sub_78EB10(a3);
    }
    else
    {
      v14 = sub_78EB10(a3);
    }
    sub_78D550((unsigned int *)*(this + 0x16), v8, &v10);
    if ( sub_787810(a3) )
    {
      LODWORD(v9) = 0x3B;
      v27 = 0xF;
      v26 = 0;
      v25 = 0;
      sub_414500(&v24, a2, "premature end of file reached parsing collision object info", v9);
      v30 = 3;
      sub_789190((std::exception *)v29, &v24, 0);
      ThrowException__((int)v29, &_TI3_AVIdvFileError__);
    }
    result = sub_78EB40(a3);
  }
  while ( result != 0x2EE1 );
  return result;
}
