LONG __thiscall sub_544260(volatile LONG *this)
{
  IOManager *v2; // edi
  int v4[4]; // [esp-4h] [ebp-10h] BYREF

  (*(void (__thiscall **)(volatile LONG *))(*this + 0x28))(this);
  v2 = ioManager;
  v4[0] = (int)this;
  v4[3] = (int)v4;
  InterlockedIncrement(this + 2);
  return sub_43A5F0(&v2->members.taskQueue->vtbl, v4[0]);
}
