int __thiscall sub_915670(void *this)
{
  int v2; // edi
  int i; // eax

  v2 = 0; /*0x915676*/
  for ( i = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x20))(this); /*0x91567e*/
        i != 0xFFFFFFFF;
        i = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x24))(this, i) )
  {
    ++v2; /*0x915685*/
  }
  return v2; /*0x915690*/
}
