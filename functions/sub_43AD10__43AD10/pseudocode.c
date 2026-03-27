LONG __thiscall sub_43AD10(_DWORD *this)
{
  LONG result; // eax
  IOManager *v3; // edi
  int v4[4]; // [esp-4h] [ebp-10h] BYREF

  sub_439400(this);
  result = *(this + 0xA);
  if ( result )
  {
    sub_435060(this, result, *(this + 0xE));
    v3 = ioManager;
    v4[0] = (int)this;
    v4[3] = (int)v4;
    InterlockedIncrement(this + 2);
    return sub_43A5F0(&v3->members.taskQueue->vtbl, v4[0]);
  }
  return result;
}
