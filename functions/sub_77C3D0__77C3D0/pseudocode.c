void __thiscall sub_77C3D0(_DWORD **this, Atmosphere *a2, int a3)
{
  char *PointerAtOffset08; // eax
  size_t v5; // [esp-10h] [ebp-120h]
  char DstBuf[260]; // [esp+8h] [ebp-108h] BYREF

  if ( a2 ) /*0x77c3f1*/
  {
    PointerAtOffset08 = (char *)Shared_GetPointerAtOffset08(a2); /*0x77c3fd*/
    HIDWORD(v5) = "%s%d"; /*0x77c403*/
    LODWORD(v5) = 0x104; /*0x77c40c*/
    sub_6C5D40((va_list)this, DstBuf, v5, PointerAtOffset08, a3); /*0x77c412*/
    sub_412D30(*(this + 6), (int)DstBuf, (TESForm *)a2); /*0x77c423*/
  }
}
