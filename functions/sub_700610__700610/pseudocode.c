int __thiscall sub_700610(void *this, int a2)
{
  int v3; // ebx

  v3 = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x18))(this, a2);
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x38))(this, a2);
  return v3;
}
