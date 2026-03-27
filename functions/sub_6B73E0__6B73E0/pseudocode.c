void __thiscall sub_6B73E0(_DWORD *this)
{
  if ( TESDataHandler )
  {
    if ( !*(_BYTE *)(TESDataHandler + 0xCD4) && sub_57B050(this) )
    {
      sub_57AF10();
      sub_57B0F0(0);
    }
  }
}
