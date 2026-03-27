int __thiscall sub_7897B0(void *this, unsigned int *a2)
{
  int result; // eax
  rsize_t v4; // [esp-4h] [ebp-A8h]
  int v5; // [esp+10h] [ebp-94h] BYREF
  char v6; // [esp+14h] [ebp-90h]
  int v7; // [esp+24h] [ebp-80h]
  int v8; // [esp+28h] [ebp-7Ch]
  int v9; // [esp+2Ch] [ebp-78h] BYREF
  char v10; // [esp+30h] [ebp-74h]
  int v11; // [esp+40h] [ebp-64h]
  int v12; // [esp+44h] [ebp-60h]
  _BYTE v13[40]; // [esp+48h] [ebp-5Ch] BYREF
  _BYTE v14[40]; // [esp+70h] [ebp-34h] BYREF
  int v15; // [esp+A0h] [ebp-4h]

  result = sub_78EB40(a2);
  do
  {
    if ( result != 0x2AFA )
    {
      LODWORD(v4) = 0x17;
      v12 = 0xF;
      v11 = 0;
      v10 = 0;
      sub_414500(&v9, (int)this, "malformed new wind info", v4);
      v15 = 0;
      sub_789190((std::exception *)v13, &v9, 0);
      ThrowException__((int)v13, &_TI3_AVIdvFileError__);
    }
    *(_DWORD *)(*(_DWORD *)this + 0xF0) = sub_78EB40(a2);
    if ( sub_787810(a2) )
    {
      LODWORD(v4) = 0x33;
      v8 = 0xF;
      v7 = 0;
      v6 = 0;
      sub_414500(&v5, (int)this, "premature end of file reached parsing new wind info", v4);
      v15 = 1;
      sub_789190((std::exception *)v14, &v5, 0);
      ThrowException__((int)v14, &_TI3_AVIdvFileError__);
    }
    result = sub_78EB40(a2);
  }
  while ( result != 0x2AF9 );
  return result;
}
