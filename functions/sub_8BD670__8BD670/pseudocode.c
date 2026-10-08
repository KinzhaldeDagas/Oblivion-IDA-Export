int *__thiscall sub_8BD670(int **this, char a2)
{
  int *v3; // ecx
  int *result; // eax

  if ( a2 ) /*0x8bd678*/
  {
    v3 = *(this + 3); /*0x8bd67a*/
    if ( v3 ) /*0x8bd67f*/
      result = sub_8BD600(v3, 1); /*0x8bd683*/
    *(this + 3) = 0; /*0x8bd688*/
  }
  return result; /*0x8bd68f*/
}
