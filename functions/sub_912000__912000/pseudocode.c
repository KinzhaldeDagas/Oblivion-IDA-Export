int __thiscall sub_912000(int *this, int a2, int *a3)
{
  int v3; // eax
  int result; // eax

  v3 = *(this + 6); /*0x912000*/
  a3[1] = v3; /*0x912007*/
  result = 8 * v3; /*0x91200a*/
  *a3 = result; /*0x91200d*/
  return result; /*0x91200f*/
}
