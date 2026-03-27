int __thiscall sub_7A28E0(float *this, unsigned int *a2)
{
  int result; // eax
  rsize_t v5; // [esp-4h] [ebp-60h]
  int v6; // [esp+Ch] [ebp-50h] BYREF
  char v7; // [esp+10h] [ebp-4Ch]
  int v8; // [esp+20h] [ebp-3Ch]
  int v9; // [esp+24h] [ebp-38h]
  _BYTE v10[40]; // [esp+28h] [ebp-34h] BYREF
  int v11; // [esp+58h] [ebp-4h]
  float v12; // [esp+60h] [ebp+4h]

  result = sub_78EB40(a2);
  do
  {
    switch ( result )
    {
      case 0x232F:
        *((_DWORD *)this + 0x1C) = sub_78EB40(a2);
        break;
      case 0x2330:
        *(this + 0x37) = sub_78EB10(a2);
        break;
      case 0x2332:
        v12 = sub_78EB10(a2);
        *(this + 0x39) = v12;
        if ( 0.0 == v12 )
          *(this + 0x39) = flt_A2FAAC;
        break;
      case 0x2333:
        *((_DWORD *)this + 0x30) = sub_78EB40(a2);
        break;
      case 0x2334:
        *(this + 0x38) = sub_78EB10(a2);
        break;
      case 0x2335:
        *(this + 0x3A) = sub_78EB10(a2);
        break;
      case 0x2336:
        *(this + 0x3B) = sub_78EB10(a2);
        break;
      default:
        LODWORD(v5) = 0x19;
        v9 = 0xF;
        v8 = 0;
        v7 = 0;
        sub_414500(&v6, (int)this, "malformed engine lod data", v5);
        v11 = 0;
        sub_789190((std::exception *)v10, &v6, 0);
        ThrowException__((int)v10, &_TI3_AVIdvFileError__);
    }
    result = sub_78EB40(a2);
  }
  while ( result != 0x232E );
  return result;
}
