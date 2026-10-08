void __cdecl __noreturn sub_6F1780(int a1, int a2)
{
  OB_stString28_010201A0 v3; // [esp+4h] [ebp-50h] BYREF
  _DWORD v4[13]; // [esp+20h] [ebp-34h] BYREF

  v3.capacity = 0xF; /*0x6f17ae*/
  v3.size = 0; /*0x6f17b6*/
  v3.storage.inlineData[0] = 0; /*0x6f17be*/
  OB_stString28_AssignBytes_010201A0(&v3, "vector<T> too long", 0x12u); /*0x6f17c3*/
  v4[0xC] = 0; /*0x6f17d1*/
  sub_4146E0((std::exception *)v4, &v3); /*0x6f17d9*/
  v4[0] = &std::length_error::`vftable'; /*0x6f17e8*/
  ThrowException__((DWORD)v4, &_TI3_AVlength_error_std__); /*0x6f17f0*/
}
