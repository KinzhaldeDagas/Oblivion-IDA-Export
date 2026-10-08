LONG __thiscall sub_544260(volatile LONG *this)
{
  IOManager *v2; // edi
  int v4[4]; // [esp-4h] [ebp-10h] BYREF

  (*(void (__thiscall **)(volatile LONG *))(*this + 0x28))(this); /*0x54426a*/
  v2 = MEMORY[0xB33A10]; /*0x54426c*/
  v4[0] = (int)this; /*0x544275*/
  v4[3] = (int)v4; /*0x544277*/
  InterlockedIncrement(this + 2); /*0x54427f*/
  return sub_43A5F0(&v2->members.taskQueue->vtbl, v4[0]); /*0x54428d*/
}
