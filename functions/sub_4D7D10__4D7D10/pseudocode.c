void __thiscall sub_4D7D10(MobileObject *this, volatile LONG *a2)
{
  volatile LONG *niNode; // esi

  this->vtbl->super.Unk_51((TESObjectREFR *)this);
  nullsub_returnTrue_0arg();
  niNode = (volatile LONG *)this->super.niNode;
  if ( niNode != a2 )
  {
    if ( niNode )
    {
      if ( !InterlockedDecrement(niNode + 1) )
        (**(void (__thiscall ***)(volatile LONG *, int))niNode)(niNode, 1);
    }
    this->super.niNode = (void *)a2;
    if ( a2 )
      InterlockedIncrement(a2 + 1);
  }
  nullsub_returnTrue_0arg();
}
