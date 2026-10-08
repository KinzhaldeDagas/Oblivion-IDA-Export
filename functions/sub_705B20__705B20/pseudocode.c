void __fastcall sub_705B20(int *this, _DWORD a2, unsigned __int16 *a3)
{
  char *v4; // eax
  unsigned int v5; // edi
  unsigned int v6; // ecx
  char *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx
  size_t v10; // [esp-4h] [ebp-A8h]
  char *v11; // [esp+4h] [ebp-A0h]
  char *v12; // [esp+14h] [ebp-90h] BYREF
  _DWORD v13[18]; // [esp+18h] [ebp-8Ch] BYREF
  char DstBuf[64]; // [esp+60h] [ebp-44h] BYREF

  v13[1] = this; /*0x705b42*/
  sub_700B10(this, a3); /*0x705b46*/
  v4 = TESOutput_PrintString((char *)stru_B3F96C.name); /*0x705b51*/
  v5 = a3[5]; /*0x705b56*/
  v6 = a3[4]; /*0x705b5a*/
  v13[0] = v4; /*0x705b63*/
  if ( v5 >= v6 ) /*0x705b67*/
    NiTArray_SetSize(a3, v5 + a3[7]); /*0x705b72*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a3, v5, v13); /*0x705b7f*/
  HIDWORD(v10) = "ApplyMode "; /*0x705b88*/
  LODWORD(v10) = 0x40; /*0x705b91*/
  v13[0] = *((unsigned __int16 *)this + 0x13); /*0x705b94*/
  sub_6C5D40((va_list)v5, DstBuf, v10, v11); /*0x705b98*/
  v7 = TESOutput_PrintLabeledSignedInt(DstBuf, (*((unsigned __int8 *)this + 0x18) >> 1) & 7); /*0x705bac*/
  v8 = a3[5]; /*0x705bb1*/
  v9 = a3[4]; /*0x705bb5*/
  v12 = v7; /*0x705bbe*/
  if ( v8 >= v9 ) /*0x705bc2*/
    NiTArray_SetSize(a3, v8 + a3[7]); /*0x705bcd*/
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a3, v8, &v12); /*0x705bda*/
  if ( v13[0] ) /*0x705be5*/
  {
    if ( *(_DWORD *)*(this + 8) ) /*0x705bf3*/
      JUMPOUT(0x705DF4); /*0x705df4*/
    JUMPOUT(0x705F71); /*0x705f71*/
  }
  JUMPOUT(0x705F7E); /*0x705f7e*/
}
