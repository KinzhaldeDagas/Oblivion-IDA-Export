void __thiscall sub_597170(_DWORD *this, signed int a2, _DWORD *a3)
{
  TESChildCELL *v8; // eax

  if ( a2 < 0x63 )
  {
    if ( a2 == 4 || a2 == 5 )
      sub_57DE50(4);
  }
  else
  {
    v8 = (TESChildCELL *)sub_596BC0(a3);
    sub_596CF0(this, v8);
    sub_57DE50(4);
  }
}
