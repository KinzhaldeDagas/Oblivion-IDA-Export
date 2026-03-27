int __thiscall sub_915670(void *this)
{
  int v2; // edi
  int i; // eax

  v2 = 0;
  for ( i = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x20))(this);
        i != 0xFFFFFFFF;
        i = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x24))(this, i) )
  {
    ++v2;
  }
  return v2;
}
