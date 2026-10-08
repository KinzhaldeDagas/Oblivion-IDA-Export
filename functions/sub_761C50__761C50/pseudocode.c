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

  v2 = (*(this + 0x5C4) & 0x10) == 0; /*0x761c54*/
  v3 = this + 0x5E4; /*0x761c5b*/
  *(this + 0x5E4) = 0; /*0x761c61*/
  if ( !v2 ) /*0x761c64*/
  {
    HIDWORD(v5) = "PURE"; /*0x761c66*/
    LODWORD(v5) = 0x20; /*0x761c6b*/
    strcat_s(this + 0x5E4, v5, v10); /*0x761c6e*/
  }
  if ( (*(this + 0x5C4) & 4) != 0 ) /*0x761c7d*/
  {
    HIDWORD(v6) = off_A88598; /*0x761c7f*/
    LODWORD(v6) = 0x20; /*0x761c84*/
    strcat_s(v3, v6, v10); /*0x761c87*/
  }
  if ( (*(this + 0x5C4) & 0x40) != 0 ) /*0x761c96*/
  {
    HIDWORD(v7) = " HWVP"; /*0x761c98*/
    LODWORD(v7) = 0x20; /*0x761c9d*/
    strcat_s(v3, v7, v10); /*0x761ca0*/
  }
  if ( *(this + 0x5C4) < 0 ) /*0x761caf*/
  {
    HIDWORD(v8) = " MIXVP"; /*0x761cb1*/
    LODWORD(v8) = 0x20; /*0x761cb6*/
    strcat_s(v3, v8, v10); /*0x761cb9*/
  }
  if ( (*(this + 0x5C4) & 0x20) != 0 ) /*0x761cc8*/
  {
    HIDWORD(v9) = " SWVP"; /*0x761cca*/
    LODWORD(v9) = 0x20; /*0x761ccf*/
    strcat_s(v3, v9, v10); /*0x761cd2*/
  }
  return v3; /*0x761cda*/
}
