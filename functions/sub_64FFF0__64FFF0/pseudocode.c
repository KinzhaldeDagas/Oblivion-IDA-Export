void __thiscall sub_64FFF0(int ***this, int **a2)
{
  int **v3; // esi

  v3 = *(this + 0x5F); /*0x64fff9*/
  if ( v3 ) /*0x650001*/
  {
    if ( v3 == a2 ) /*0x650005*/
      return; /*0x650005*/
    DisposeActorAnimData((ActorAnimData *)*(this + 0x5F)); /*0x650009*/
    FormHeapFree((unsigned int)v3); /*0x65000f*/
  }
  *(this + 0x5F) = a2; /*0x650017*/
}
