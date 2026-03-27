int __usercall Double_To_SInt32@<eax>(double result@<st0>)
{
  if ( dword_BAABE0 )
    return (int)result;
  else
    return _ftol2(result);
}
