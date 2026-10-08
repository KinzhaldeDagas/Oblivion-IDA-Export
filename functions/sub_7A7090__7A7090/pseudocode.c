// Oblivion Random::load virtual. This base implementation is unsupported and always throws std::logic_error("Newran: illegal combination").
void __thiscall OB_Random_Load_010201A0(
        OB_Random_010201A0 *this,
        int *ints,
        float *reals,
        OB_Random_010201A0 **randoms)
{
  int v4; // edi
  rsize_t v5; // [esp-4h] [ebp-58h]
  int v6; // [esp+4h] [ebp-50h] BYREF
  char v7; // [esp+8h] [ebp-4Ch]
  int v8; // [esp+18h] [ebp-3Ch]
  int v9; // [esp+1Ch] [ebp-38h]
  _BYTE v10[40]; // [esp+20h] [ebp-34h] BYREF
  int v11; // [esp+50h] [ebp-4h]

  LODWORD(v5) = 0x1B; /*0x7a70b3*/
  v9 = 0xF; /*0x7a70be*/
  v8 = 0; /*0x7a70c6*/
  v7 = 0; /*0x7a70ce*/
  OB_stString28_AssignBytes_010201A0(&v6, v4, "Newran: illegal combination", v5);
  v11 = 0; /*0x7a70e1*/
  sub_4146E0((std::exception *)v10, &v6); /*0x7a70e9*/
  ThrowException__((DWORD)v10, &_TI2_AVlogic_error_std__); /*0x7a70f8*/
}
