LONG __thiscall sub_4BD750(volatile LONG *this)
{
  IOManager *v1; // esi
  int v3[3]; // [esp-4h] [ebp-Ch] BYREF

  v1 = ioManager;
  v3[2] = (int)v3;
  v3[0] = (int)this;
  if ( this )
    InterlockedIncrement(this + 2);
  return sub_43A5F0(&v1->members.taskQueue->vtbl, v3[0]);
}
