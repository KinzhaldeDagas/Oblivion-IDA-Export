AnimSequenceBase *__thiscall AnimSequenceBase::`scalar deleting destructor'(AnimSequenceBase *this, char a2)
{
  *(_DWORD *)this = &AnimSequenceBase::`vftable'; /*0x470b88*/
  if ( (a2 & 1) != 0 ) /*0x470b8e*/
    FormHeapFree((unsigned int)this); /*0x470b91*/
  return this; /*0x470b9b*/
}
