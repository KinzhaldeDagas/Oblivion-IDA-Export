LONG __thiscall sub_43ADD0(volatile LONG *this)
{
  IOManager *v2; // edi
  int v4[4]; // [esp-4h] [ebp-10h] BYREF

  sub_4378F0(this); /*0x43add5*/
  v2 = MEMORY[0xB33A10]; /*0x43addc*/
  v4[3] = (int)v4; /*0x43ade5*/
  v4[0] = (int)this; /*0x43ade9*/
  if ( this ) /*0x43adeb*/
    InterlockedIncrement(this + 2); /*0x43adf1*/
  return sub_43A5F0(&v2->members.taskQueue->vtbl, v4[0]); /*0x43adff*/
}
