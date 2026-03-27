void __thiscall sub_43AC40(QueuedChildren **this, volatile LONG *a2)
{
  volatile LONG *v3; // esi
  QueuedChildren *v4; // ecx

  v3 = (volatile LONG *)*(this + 6);
  if ( v3 != a2 )
  {
    if ( v3 )
    {
      if ( !InterlockedDecrement(v3 + 2) )
        (**(void (__thiscall ***)(volatile LONG *, int))v3)(v3, 1);
    }
    *(this + 6) = (QueuedChildren *)a2;
    if ( a2 )
      InterlockedIncrement(a2 + 2);
  }
  v4 = *(this + 6);
  if ( v4 )
    QueuedChildren::QueuedChildren(v4, (LONG)this);
}
