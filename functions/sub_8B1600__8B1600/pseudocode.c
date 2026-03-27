int __thiscall sub_8B1600(void *this, signed int a2)
{
  int i; // esi
  int v4; // eax
  int v5; // eax
  _BYTE v7[512]; // [esp+Ch] [ebp-204h] BYREF

  for ( i = a2; i; i -= v5 )
  {
    v4 = 0x200;
    if ( i <= 0x200 )
      v4 = i;
    v5 = (*(int (__thiscall **)(void *, _BYTE *, int))(*(_DWORD *)this + 0xC))(this, v7, v4);
    if ( !v5 )
      break;
  }
  return a2 - i;
}
