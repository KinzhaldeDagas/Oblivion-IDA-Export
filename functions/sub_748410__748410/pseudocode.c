int __thiscall sub_748410(_DWORD *this, size_t Format)
{
  char *v2; // edi
  int v3; // esi
  unsigned __int64 v4; // st7
  unsigned int v5; // eax
  int result; // eax
  size_t v7; // [esp-8h] [ebp-18h]
  size_t v8; // [esp-8h] [ebp-18h]
  const char *v9; // [esp+8h] [ebp-8h]
  va_list v10; // [esp+Ch] [ebp-4h]

  v2 = DstBuf;
  v3 = 0x200;
  if ( *(_BYTE *)(0xC * *this + 0xB40618) )
  {
    *(double *)&v4 = sub_7485F0();
    HIDWORD(v7) = "%f: ";
    LODWORD(v7) = 0x200;
    sub_6C5D40(DstBuf, DstBuf, v7, (char *)v4, (_DWORD)HIDWORD(v4));
    v5 = strlen(DstBuf);
    v3 = 0x200 - v5;
    v2 = &DstBuf[v5];
  }
  HIDWORD(v8) = v3;
  LODWORD(v8) = v3;
  result = _vsnprintf_s(v2, v8, Format, v9, v10);
  v2[v3 - 1] = 0;
  return result;
}
