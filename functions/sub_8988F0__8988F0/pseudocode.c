_BYTE *__thiscall sub_8988F0(char ***this, _BYTE *a2, int a3)
{
  char **v3; // ecx
  char v5[4]; // [esp+0h] [ebp-8h] BYREF
  int v6; // [esp+4h] [ebp-4h]

  if ( *(this + 0x22) ) /*0x8988f0*/
  {
    v3 = *(this + 0x20); /*0x898901*/
    v5[0] = 9; /*0x89890b*/
    v6 = a3; /*0x898910*/
    sub_8D8830(v3, (int)v5); /*0x898914*/
    *a2 = 0; /*0x89891d*/
    return a2; /*0x898919*/
  }
  else
  {
    sub_8CB4E0((int)this, a3, 1); /*0x89892a*/
    *a2 = 1; /*0x898936*/
    return a2; /*0x89892f*/
  }
}
