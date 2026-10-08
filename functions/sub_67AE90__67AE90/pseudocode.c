void __thiscall sub_67AE90(int *this)
{
  int v2; // ebx
  int *v3; // edi
  char v4; // [esp+13h] [ebp-5h]
  char v5; // [esp+13h] [ebp-5h]

  v2 = 0; /*0x67ae99*/
  v3 = this + 0x10; /*0x67ae9b*/
  if ( this != (int *)0xFFFFFFC0 ) /*0x67aea4*/
  {
    while ( 1 ) /*0x67aeb0*/
    {
      if ( v3[1] || (v2 |= 1u, v4 = 1, *v3) ) /*0x67aebb*/
        v4 = 0; /*0x67aec4*/
      if ( (v2 & 1) != 0 ) /*0x67aecc*/
        v2 &= ~1u; /*0x67aece*/
      if ( v4 ) /*0x67aef2*/
        break; /*0x67aef2*/
      sub_67A850(v3); /*0x67aef6*/
    }
  }
  if ( this != (int *)0xFFFFFFB8 ) /*0x67af02*/
  {
    while ( 1 ) /*0x67af08*/
    {
      if ( *(this + 0x13) || (v2 |= 2u, v5 = 1, *(this + 0x12)) ) /*0x67af13*/
        v5 = 0; /*0x67af1c*/
      if ( (v2 & 2) != 0 ) /*0x67af24*/
        v2 &= ~2u; /*0x67af26*/
      if ( v5 ) /*0x67af4a*/
        break; /*0x67af4a*/
      sub_67A850(this + 0x12); /*0x67af4e*/
    }
  }
}
