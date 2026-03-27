char *__thiscall sub_761C50(char *this)
{
  bool v2; // zf
  char *v3; // esi
  rsize_t v5; // [esp-8h] [ebp-10h]
  rsize_t v6; // [esp-8h] [ebp-10h]
  rsize_t v7; // [esp-8h] [ebp-10h]
  rsize_t v8; // [esp-8h] [ebp-10h]
  rsize_t v9; // [esp-8h] [ebp-10h]
  const char *v10; // [esp+0h] [ebp-8h]

  v2 = (*(this + 0x5C4) & 0x10) == 0;
  v3 = this + 0x5E4;
  *(this + 0x5E4) = 0;
  if ( !v2 )
  {
    HIDWORD(v5) = "PURE";
    LODWORD(v5) = 0x20;
    strcat_s(this + 0x5E4, v5, v10);
  }
  if ( (*(this + 0x5C4) & 4) != 0 )
  {
    HIDWORD(v6) = off_A88598;
    LODWORD(v6) = 0x20;
    strcat_s(v3, v6, v10);
  }
  if ( (*(this + 0x5C4) & 0x40) != 0 )
  {
    HIDWORD(v7) = " HWVP";
    LODWORD(v7) = 0x20;
    strcat_s(v3, v7, v10);
  }
  if ( *(this + 0x5C4) < 0 )
  {
    HIDWORD(v8) = " MIXVP";
    LODWORD(v8) = 0x20;
    strcat_s(v3, v8, v10);
  }
  if ( (*(this + 0x5C4) & 0x20) != 0 )
  {
    HIDWORD(v9) = " SWVP";
    LODWORD(v9) = 0x20;
    strcat_s(v3, v9, v10);
  }
  return v3;
}
