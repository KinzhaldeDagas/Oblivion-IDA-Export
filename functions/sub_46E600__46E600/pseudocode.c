unsigned int __thiscall sub_46E600(unsigned int **this)
{
  unsigned int result; // eax
  unsigned int *v3; // eax

  for ( result = (unsigned int)*(this + 1); result; result = (unsigned int)*(this + 1) ) /*0x46e608*/
  {
    FormHeapFree(result); /*0x46e611*/
    v3 = *(this + 2); /*0x46e616*/
    if ( v3 ) /*0x46e61e*/
    {
      *(this + 2) = (unsigned int *)v3[1]; /*0x46e623*/
      *(this + 1) = (unsigned int *)*v3; /*0x46e629*/
      FormHeapFree((unsigned int)v3); /*0x46e62c*/
    }
    else
    {
      *(this + 1) = 0; /*0x46e636*/
    }
  }
  return result; /*0x46e644*/
}
