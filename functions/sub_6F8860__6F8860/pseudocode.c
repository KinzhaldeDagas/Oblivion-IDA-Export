int __thiscall sub_6F8860(void *this, int a2, int a3, int a4, int a5)
{
  return (*(int (__thiscall **)(void *, int, int, int, int, int))(*(_DWORD *)this + 0x28))(
           this,
           a2,
           a3,
           a4,
           a5,
           a3 - a2);
}
