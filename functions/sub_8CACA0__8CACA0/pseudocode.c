int __thiscall sub_8CACA0(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // ecx

  result = *(this + 0xFFFFFFEE); /*0x8caca3*/
  if ( result ) /*0x8caca8*/
  {
    v4 = *(_DWORD *)(a2 + 0xC); /*0x8cacaf*/
    if ( v4 ) /*0x8cacb4*/
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0xC))(v4); /*0x8cacb8*/
      if ( result != 0xB ) /*0x8cacbe*/
        return sub_8CA450((const void **)*(this + 0xFFFFFFEE), a2, (int)unk_BA84AC, (int)"Constraints"); /*0x8cacce*/
    }
  }
  return result; /*0x8cacd4*/
}
