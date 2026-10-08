Sky *__cdecl sub_542E00(Ni2DBuffer *a2)
{
  Sky *result; // eax

  result = MEMORY[0xB365C4]; /*0x542e00*/
  if ( MEMORY[0xB365C4] ) /*0x542e00*/
  {
    if ( result->clouds ) /*0x542e09*/
      return (Sky *)NiSmartPointer_Set__((Ni2DBuffer **)&result->clouds->unk14, a2); /*0x542e1a*/
  }
  return result; /*0x542e1f*/
}
