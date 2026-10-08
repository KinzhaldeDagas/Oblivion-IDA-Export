// OBLIVION AUTHORITY (2026-08-30): Constructs and throws std::length_error("vector<bool> too long") for packed-pairing-bitset overflow.
void __cdecl __noreturn OB_stVectorBool_ThrowLengthError_010201A0()
{
  int v0; // edi
  rsize_t v1; // [esp-4h] [ebp-58h]
  int v2; // [esp+4h] [ebp-50h] BYREF
  char v3; // [esp+8h] [ebp-4Ch]
  int v4; // [esp+18h] [ebp-3Ch]
  int v5; // [esp+1Ch] [ebp-38h]
  _DWORD v6[13]; // [esp+20h] [ebp-34h] BYREF

  LODWORD(v1) = 0x15; /*0x7a8923*/
  v5 = 0xF; /*0x7a892e*/
  v4 = 0; /*0x7a8936*/
  v3 = 0; /*0x7a893e*/
  OB_stString28_AssignBytes_010201A0(&v2, v0, "vector<bool> too long", v1); /*0x7a8943*/
  v6[0xC] = 0; /*0x7a8951*/
  sub_4146E0((std::exception *)v6, &v2); /*0x7a8959*/
  v6[0] = &std::length_error::`vftable'; /*0x7a8968*/
  ThrowException__((DWORD)v6, &_TI3_AVlength_error_std__); /*0x7a8970*/
}
