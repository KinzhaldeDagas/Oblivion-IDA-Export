Sky *__cdecl sub_542E20(Ni2DBuffer *a2)
{
  Sky *result; // eax

  result = MEMORY[0xB365C4]; /*0x542e20*/
  if ( MEMORY[0xB365C4] ) /*0x542e20*/
  {
    if ( result->clouds ) /*0x542e29*/
      return (Sky *)NiSmartPointer_Set__((Ni2DBuffer **)&result->clouds->unk10, a2); /*0x542e3a*/
  }
  return result; /*0x542e3f*/
}
