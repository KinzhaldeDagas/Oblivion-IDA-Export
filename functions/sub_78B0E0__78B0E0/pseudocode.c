void __userpurge sub_78B0E0(int *this@<ecx>, int a2@<edi>, float a3, float a4)
{
  int v4; // ecx
  bool v5; // zf
  rsize_t v6; // [esp+4h] [ebp-60h] BYREF
  char *v7; // [esp+54h] [ebp-10h]
  int v8; // [esp+60h] [ebp-4h]

  v7 = (char *)&v6 + 4;
  v4 = *this;
  v5 = *(_BYTE *)(v4 + 0x21) == 0;
  v8 = 0;
  if ( v5 )
  {
    LODWORD(v6) = 0x47;
    sub_414500(&dword_B2B614, a2, "SetTreeSize() has no effect after DeleteTransientData() has been called", v6);
  }
  else if ( a3 <= 0.0 )
  {
    LODWORD(v6) = 0x3C;
    sub_414500(&dword_B2B614, a2, "SetTreeSize() is only valid for size values greater than 0.0", v6);
  }
  else
  {
    sub_7A2420((float *)v4, a3, a4);
  }
}
