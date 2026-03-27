int __thiscall sub_52EA90(int *this)
{
  int v1; // eax

  v1 = *(this + 0xB);
  if ( (unsigned int)(v1 - 0xC) > 0x14 )
    return 0;
  else
    return ActorValue_GetName(v1);
}
