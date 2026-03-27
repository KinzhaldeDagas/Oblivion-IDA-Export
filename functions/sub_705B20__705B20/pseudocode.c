void __userpurge sub_705B20(int *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
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

  v13[1] = this;
  sub_700B10(this, a2, a3);
  v4 = TESOutput_PrintString(*(_DWORD *)dword_B3F96C);
  v5 = a3[5];
  v6 = a3[4];
  v13[0] = v4;
  if ( v5 >= v6 )
    NiTArray_SetSize(a3, v5 + a3[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a3, v5, v13);
  HIDWORD(v10) = "ApplyMode ";
  LODWORD(v10) = 0x40;
  v13[0] = *((unsigned __int16 *)this + 0x13);
  sub_6C5D40((va_list)v5, DstBuf, v10, v11);
  v7 = TESOutput_PrintLabeledSignedInt((int)DstBuf, (*((unsigned __int8 *)this + 0x18) >> 1) & 7);
  v8 = a3[5];
  v9 = a3[4];
  v12 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize(a3, v8 + a3[7]);
  NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a3, v8, &v12);
  if ( v13[0] )
  {
    if ( *(_DWORD *)*(this + 8) )
      JUMPOUT(0x705DF4);
    JUMPOUT(0x705F71);
  }
  JUMPOUT(0x705F7E);
}
