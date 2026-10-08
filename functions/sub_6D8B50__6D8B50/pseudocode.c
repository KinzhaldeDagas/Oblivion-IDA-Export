UInt32 *__cdecl sub_6D8B50(UInt32 *a1, char *a2, unsigned int a3, char *Src)
{
  char v5[1160]; // [esp+18h] [ebp-498h] BYREF
  int v6; // [esp+4ACh] [ebp-4h]

  NiStream::NiStream((NiStream *)v5); /*0x6d8baf*/
  v6 = 1; /*0x6d8bb9*/
  if ( sub_711FC0(v5, a2) ) /*0x6d8bc4*/
    sub_6D89F0(a1, v5, a3, Src); /*0x6d8be4*/
  else
    *a1 = 0; /*0x6d8bcd*/
  LOBYTE(v6) = 0; /*0x6d8bf8*/
  NiStream::~NiStream((NiStream *)v5); /*0x6d8c00*/
  return a1; /*0x6d8c07*/
}
