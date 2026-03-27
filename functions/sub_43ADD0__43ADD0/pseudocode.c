LONG __thiscall sub_43ADD0(volatile LONG *this)
{
  IOManager *v2; // edi
  int v4[4]; // [esp-4h] [ebp-10h] BYREF

  sub_4378F0(this);
  v2 = ioManager;
  v4[3] = (int)v4;
  v4[0] = (int)this;
  if ( this )
    InterlockedIncrement(this + 2);
  return sub_43A5F0(&v2->members.taskQueue->vtbl, v4[0]);
}
