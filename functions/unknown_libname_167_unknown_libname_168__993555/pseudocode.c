void __usercall unknown_libname_167_::unknown_libname_168(char a1@<bl>, int a2@<ebp>)
{
  **(_BYTE **)(a2 + 8) = a1;
  _errno();
  JUMPOUT(0x993484);
}
