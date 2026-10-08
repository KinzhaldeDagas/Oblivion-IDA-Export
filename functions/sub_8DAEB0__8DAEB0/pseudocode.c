int __thiscall sub_8DAEB0(int this, _BYTE *a2, int a3, int a4)
{
  int v4; // eax
  void *v6; // edi
  int result; // eax
  _DWORD v8[13]; // [esp+10h] [ebp-34h] BYREF

  v4 = a4; /*0x8daeb7*/
  *(_BYTE *)(this + 0x1BF5) = 1; /*0x8daec7*/
  *(_DWORD *)(this + 0x1BFC) = 0x80; /*0x8daed9*/
  *(_DWORD *)(this + 0x1BF8) = 0x200; /*0x8daee3*/
  qmemcpy(v8, a2, 0x30u); /*0x8daeed*/
  v8[0xC] = 0; /*0x8daeef*/
  if ( a3 != a4 && !a2[0x2D] ) /*0x8daefd*/
  {
    v6 = (void *)(0x34 * *(_DWORD *)(this + 0xE90) + this + 0x1694); /*0x8daf11*/
    v8[0xC] = 2; /*0x8daf23*/
    qmemcpy(v6, v8, 0x34u); /*0x8daf2b*/
    sub_8DA580(this, this + 0xE94, *(_DWORD *)(this + 0xE90), a4, a3, a4, a3, *(_DWORD *)(this + 0x1C18), 0); /*0x8daf48*/
    if ( LOBYTE(v8[0xB]) ) /*0x8daf53*/
      sub_8DA580(this, this + 0x1294, *(_DWORD *)(this + 0xE90), a3, a4, a3, a4, *(_DWORD *)(this + 0x1C1C), 0); /*0x8daf76*/
    ++*(_DWORD *)(this + 0xE90); /*0x8daf7b*/
    v4 = a4; /*0x8daf81*/
    v8[0xC] = 1; /*0x8daf85*/
  }
  qmemcpy((void *)(0x34 * *(_DWORD *)(this + 0xE90) + this + 0x1694), v8, 0x34u); /*0x8dafa8*/
  sub_8DA580(this, this + 0xE94, *(_DWORD *)(this + 0xE90), a3, v4, a3, v4, *(_DWORD *)(this + 0x1C18), 0); /*0x8dafc5*/
  if ( LOBYTE(v8[0xB]) ) /*0x8dafd0*/
    sub_8DA580(this, this + 0x1294, *(_DWORD *)(this + 0xE90), a3, a4, a3, a4, *(_DWORD *)(this + 0x1C1C), 0); /*0x8daff3*/
  result = *(_DWORD *)(this + 0xE90); /*0x8daff8*/
  *(_DWORD *)(this + 0xE90) = result + 1; /*0x8db003*/
  return result; /*0x8daffe*/
}
