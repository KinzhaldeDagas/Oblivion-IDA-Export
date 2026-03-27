void __thiscall sub_64FFF0(int ***this, int **a2)
{
  int **v3; // esi

  v3 = *(this + 0x5F);
  if ( v3 )
  {
    if ( v3 == a2 )
      return;
    DisposeActorAnimData((ActorAnimData *)*(this + 0x5F));
    FormHeapFree((unsigned int)v3);
  }
  *(this + 0x5F) = a2;
}
