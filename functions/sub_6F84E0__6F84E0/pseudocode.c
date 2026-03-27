struct std::_Locinfo *__userpurge sub_6F84E0@<eax>(struct std::_Locinfo *this@<ecx>, int a2@<edi>, char *a3)
{
  rsize_t v5; // [esp-4h] [ebp-64h]
  int v6; // [esp+10h] [ebp-50h] BYREF
  char v7; // [esp+14h] [ebp-4Ch]
  int v8; // [esp+24h] [ebp-3Ch]
  int v9; // [esp+28h] [ebp-38h]
  _BYTE v10[40]; // [esp+2Ch] [ebp-34h] BYREF
  int v11; // [esp+5Ch] [ebp-4h]

  std::_Lockit::_Lockit(this, 0);
  *((_DWORD *)this + 7) = 0xF;
  *((_DWORD *)this + 6) = 0;
  v11 = 0;
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 0xE) = 0xF;
  *((_DWORD *)this + 0xD) = 0;
  *((_BYTE *)this + 0x24) = 0;
  *((_DWORD *)this + 0x15) = 0xF;
  *((_DWORD *)this + 0x14) = 0;
  *((_BYTE *)this + 0x40) = 0;
  *((_DWORD *)this + 0x1C) = 0xF;
  *((_DWORD *)this + 0x1B) = 0;
  *((_BYTE *)this + 0x5C) = 0;
  LOBYTE(v11) = 4;
  if ( !a3 )
  {
    LODWORD(v5) = 0xF;
    v9 = 0xF;
    v8 = 0;
    v7 = 0;
    sub_414500(&v6, a2, "bad locale name", v5);
    LOBYTE(v11) = 5;
    sub_6F7DD0((std::exception *)v10, &v6);
    ThrowException__((int)v10, &_TI2_AVruntime_error_std__);
  }
  std::_Locinfo::_Locinfo_ctor(this, a3);
  return this;
}
