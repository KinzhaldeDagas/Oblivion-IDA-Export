void __thiscall sub_43AC40(volatile LONG **this, volatile LONG *a2)
{
  volatile LONG *v3; // esi
  QueuedChildren *v4; // ecx

  v3 = *(this + 6); /*0x43ac49*/
  if ( v3 != a2 ) /*0x43ac4e*/
  {
    if ( v3 ) /*0x43ac52*/
    {
      if ( !InterlockedDecrement(v3 + 2) ) /*0x43ac58*/
        (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1); /*0x43ac6e*/
    }
    *(this + 6) = a2; /*0x43ac72*/
    if ( a2 ) /*0x43ac75*/
      InterlockedIncrement(a2 + 2); /*0x43ac7b*/
  }
  v4 = (QueuedChildren *)*(this + 6); /*0x43ac81*/
  if ( v4 ) /*0x43ac86*/
    QueuedChildren::QueuedChildren(v4, (LONG)this); /*0x43ac89*/
}
