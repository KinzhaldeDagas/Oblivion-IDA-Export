// Returns zero for null; otherwise returns BSAnimGroupSequence end time (+0x30) minus start time (+0x2C).
double __cdecl BSAnimGroupSequence_GetDuration(BSAnimGroupSequence *sequence)
{
  if ( !sequence ) /*0x470ce6*/
    return 0.0; /*0x470ce8*/
  return (float)(*((float *)sequence + 0xC) - *((float *)sequence + 0xB)); /*0x470cea*/
}
