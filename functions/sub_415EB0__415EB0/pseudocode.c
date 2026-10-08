int __thiscall sub_415EB0(int *this)
{
  int v2; // eax
  int result; // eax

  v2 = *(this + 0x28); /*0x415eb3*/
  if ( v2 <= 0 ) /*0x415ebb*/
  {
    result = v2 - 1; /*0x415ed2*/
    *(this + 0x28) = result; /*0x415ed5*/
  }
  else
  {
    PrintError("Trying to Queue up a Magic Effect Associated Item which is already loaded"); /*0x415ec2*/
    return *(this + 0x28); /*0x415ec7*/
  }
  return result; /*0x415ed0*/
}
