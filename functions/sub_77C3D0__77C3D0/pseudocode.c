void __thiscall sub_77C3D0(_DWORD **this, Atmosphere *a2, int a3)
{
  char *v4; // eax
  size_t v5; // [esp-10h] [ebp-120h]
  char DstBuf[260]; // [esp+8h] [ebp-108h] BYREF

  if ( a2 )
  {
    v4 = (char *)sub_452A60(a2);
    HIDWORD(v5) = "%s%d";
    LODWORD(v5) = 0x104;
    sub_6C5D40((va_list)this, DstBuf, v5, v4, a3);
    sub_412D30(*(this + 6), (int)DstBuf, (TESForm *)a2);
  }
}
