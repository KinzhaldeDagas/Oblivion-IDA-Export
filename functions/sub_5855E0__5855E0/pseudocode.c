int __thiscall sub_5855E0(int *this, int a2)
{
  int result; // eax
  int v3; // edx

  result = a2 + *(this + 0xB); /*0x5855e3*/
  v3 = *(this + 4); /*0x5855e7*/
  if ( result > v3 ) /*0x5855ec*/
    result = *(this + 4); /*0x5855ee*/
  if ( result - dword_B1398C <= 0 ) /*0x5855fe*/
    result = dword_B1398C; /*0x585600*/
  if ( result <= v3 ) /*0x585606*/
    *(this + 0xB) = result; /*0x58560e*/
  else
    *(this + 0xB) = v3; /*0x585608*/
  return result; /*0x58560b*/
}
