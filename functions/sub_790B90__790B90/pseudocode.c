// Shared Oblivion STL vector length guard failure. Constructs std::length_error("vector<T> too long") and throws; used by multiple element specializations after max_size checks.
void __usercall __noreturn OB_stVector_ThrowLengthError_010201A0(int a1@<edi>)
{
  rsize_t v1; // [esp-4h] [ebp-58h]
  int v2; // [esp+4h] [ebp-50h] BYREF
  char v3; // [esp+8h] [ebp-4Ch]
  int v4; // [esp+18h] [ebp-3Ch]
  int v5; // [esp+1Ch] [ebp-38h]
  _DWORD v6[13]; // [esp+20h] [ebp-34h] BYREF

  LODWORD(v1) = 0x12; /*0x790bb3*/
  v5 = 0xF; /*0x790bbe*/
  v4 = 0; /*0x790bc6*/
  v3 = 0; /*0x790bce*/
  OB_stString28_AssignBytes_010201A0(&v2, a1, "vector<T> too long", v1); /*0x790bd3*/
  v6[0xC] = 0; /*0x790be1*/
  sub_4146E0((std::exception *)v6, &v2); /*0x790be9*/
  v6[0] = &std::length_error::`vftable'; /*0x790bf8*/
  ThrowException__((DWORD)v6, &_TI3_AVlength_error_std__); /*0x790c00*/
}
