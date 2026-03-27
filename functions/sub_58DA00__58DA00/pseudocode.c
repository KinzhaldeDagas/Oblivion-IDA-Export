void __thiscall sub_58DA00(int this, float arg0, char *a2, int a4)
{
  BSStringT *v5; // edi

  v5 = (BSStringT *)(this + 8);
  *(_BYTE *)(this + 4) = 0;
  *(_BYTE *)(this + 5) = 0;
  *(_DWORD *)(this + 0x10) = 0;
  *(_DWORD *)(this + 0x2C) = 2;
  *(_DWORD *)(this + 0x24) = 0;
  BSStringT_Set((BSStringT *)(this + 8), EmptyString, 0);
  *(_DWORD *)(this + 0x28) = 0;
  if ( arg0 != 0.0 )
    sub_58D1C0((float *)this, arg0, a4);
  if ( a2 )
    BSStringT_Set(v5, a2, 0);
  if ( !dword_B3B0CC )
    sub_58A1C0();
}
