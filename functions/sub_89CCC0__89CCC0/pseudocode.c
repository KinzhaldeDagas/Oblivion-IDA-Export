void __thiscall sub_89CCC0(char ***this, int a2)
{
  char **v2; // ecx
  char v3[4]; // [esp+0h] [ebp-8h] BYREF
  int v4; // [esp+4h] [ebp-4h]

  if ( *(this + 0x22) ) /*0x89ccc0*/
  {
    v2 = *(this + 0x20); /*0x89ccd1*/
    v3[0] = 0xB; /*0x89ccdb*/
    v4 = a2; /*0x89cce0*/
    sub_8D8830(v2, (int)v3); /*0x89cce4*/
  }
  else
  {
    sub_89BCC0(a2, (int)this, a2); /*0x89ccf0*/
  }
}
