int sub_8BBEE0(int a1, char *Format, ...)
{
  int *v2; // esi
  int v3; // edi
  unsigned int v4; // eax
  size_t v6; // [esp-Ch] [ebp-418h]
  va_list v7; // [esp+0h] [ebp-40Ch]
  char Dest[1024]; // [esp+8h] [ebp-404h] BYREF
  va_list Args; // [esp+418h] [ebp+Ch] BYREF

  va_start(Args, Format);
  HIDWORD(v6) = Format; /*0x8bbf03*/
  LODWORD(v6) = 0x400; /*0x8bbf08*/
  j___vsnprintf(Dest, v6, Args, v7); /*0x8bbf0e*/
  v2 = *(int **)(a1 + 8); /*0x8bbf1a*/
  v3 = *v2; /*0x8bbf1d*/
  v4 = sub_8B1860(Dest); /*0x8bbf24*/
  return (*(int (__thiscall **)(int *, char *, unsigned int))(v3 + 0xC))(v2, Dest, v4); /*0x8bbf37*/
}
