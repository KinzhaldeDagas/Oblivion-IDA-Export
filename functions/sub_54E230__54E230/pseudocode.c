void __thiscall sub_54E230(char **this, unsigned int a2, int *a3)
{
  int v3; // edx
  char *v5; // edi
  bool v6; // cc
  int v7; // ecx
  int v8; // edx
  char *v9; // ebx
  char *v10; // edi
  int v11; // [esp+8h] [ebp-18h] BYREF
  int v12[4]; // [esp+10h] [ebp-10h] BYREF

  v3 = a3[1]; /*0x54e237*/
  v5 = *(this + 2); /*0x54e240*/
  v6 = *(this + 1) <= v5; /*0x54e243*/
  v12[0] = *a3; /*0x54e246*/
  v7 = a3[2]; /*0x54e24a*/
  v12[1] = v3; /*0x54e24d*/
  v8 = a3[3]; /*0x54e251*/
  v12[2] = v7; /*0x54e254*/
  v12[3] = v8; /*0x54e258*/
  if ( !v6 ) /*0x54e25c*/
    _invalid_parameter_noinfo(); /*0x54e25e*/
  v9 = *(this + 1); /*0x54e264*/
  if ( v9 > *(this + 2) ) /*0x54e26a*/
    _invalid_parameter_noinfo(); /*0x54e26c*/
  sub_6F14D0(this, &v11, (int)this, v9, (int)this, v5); /*0x54e27c*/
  v10 = *(this + 1); /*0x54e281*/
  if ( v10 > *(this + 2) ) /*0x54e288*/
    _invalid_parameter_noinfo(); /*0x54e28a*/
  sub_54DFD0((unsigned int *)this, (int)this, v10, a2, v12); /*0x54e29d*/
}
