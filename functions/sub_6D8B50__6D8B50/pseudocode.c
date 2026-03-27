UInt32 *__cdecl sub_6D8B50(UInt32 *a1, char *a2, unsigned int a3, char *Src)
{
  char v5[1160]; // [esp+18h] [ebp-498h] BYREF
  int v6; // [esp+4ACh] [ebp-4h]

  NiStream::NiStream((NiStream *)v5);
  v6 = 1;
  if ( sub_711FC0(v5, a2) )
    sub_6D89F0(a1, v5, a3, Src);
  else
    *a1 = 0;
  LOBYTE(v6) = 0;
  NiStream::~NiStream((NiStream *)v5);
  return a1;
}
