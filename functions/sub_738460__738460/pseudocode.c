int sub_738460(int a1, int a2, char *Format, ...)
{
  size_t v4; // [esp-Ch] [ebp-810h]
  char DstBuf[2048]; // [esp+0h] [ebp-804h] BYREF
  va_list ArgList; // [esp+814h] [ebp+10h] BYREF

  va_start(ArgList, Format);
  if ( unk_B40120 /*0x7384a4*/
    && (HIDWORD(v4) = Format,
        LODWORD(v4) = 0x800,
        vsprintf_s(DstBuf, v4, ArgList, *(va_list *)DstBuf),
        *((_DWORD *)unk_B40120 + 4)) )
  {
    return (*((int (__cdecl **)(char *, int, int))unk_B40120 + 4))(DstBuf, a1, a2); /*0x7384c2*/
  }
  else
  {
    return 0; /*0x7384e5*/
  }
}
