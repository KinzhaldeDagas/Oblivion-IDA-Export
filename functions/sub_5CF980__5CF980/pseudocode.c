void __thiscall sub_5CF980(int this, int a2, int a3)
{
  bool v8; // zf

  *(_BYTE *)(this + 0x50) = 2;
  sub_57BD80();
  v8 = *(_DWORD *)(this + 0x48) == 0;
  *(_DWORD *)(this + 0x3C) = 0;
  if ( !v8 )
    sub_5CEF60((_DWORD **)this, 0);
}
