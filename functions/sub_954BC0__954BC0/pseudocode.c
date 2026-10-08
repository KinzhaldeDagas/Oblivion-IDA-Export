int __thiscall sub_954BC0(unsigned int **this, int a2)
{
  unsigned int *v2; // ecx
  int result; // eax
  int v4; // [esp-4h] [ebp-4h]

  v2 = *(this + 4); /*0x954bc0*/
  result = v2[3] - a2; /*0x954bc6*/
  if ( result > 0 ) /*0x954bcc*/
  {
    v4 = v2[3] - a2; /*0x954bd3*/
    if ( result >= 0xFF ) /*0x954bd4*/
    {
      if ( result >= 0xFFFF ) /*0x954be5*/
      {
        if ( result >= 0xFFFFFF ) /*0x954bf6*/
          return sub_9567C0(v2, 8, v4); /*0x954c04*/
        else
          return sub_956670(v2, 7, v4); /*0x954bfa*/
      }
      else
      {
        return sub_9565E0(v2, 6, v4); /*0x954be9*/
      }
    }
    else
    {
      return sub_956580(v2, 5, v4); /*0x954bd8*/
    }
  }
  return result; /*0x954bdd*/
}
