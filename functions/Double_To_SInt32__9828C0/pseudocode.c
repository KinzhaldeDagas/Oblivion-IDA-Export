// Double_To_SInt32 consumes ST0 double and returns EAX. SSE path uses cvttsd2si, matching C/C++ truncation toward zero.
int __usercall Double_To_SInt32@<eax>(double result@<st0>)
{
  if ( unk_BAABE0 ) /*0x9828c0*/
    return (int)result; /*0x9828d5*/
  else
    return _ftol2(result); /*0x9828c7*/
}
