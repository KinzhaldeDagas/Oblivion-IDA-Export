int __thiscall Actor_MagicTarget_PostRemoveEffect(MagicTarget *this, int a2)
{
  int result; // eax

  result = a2; /*0x5e6570*/
  if ( a2 ) /*0x5e6579*/
  {
    if ( *((_DWORD *)this + 0xFFFFFFFC) ) /*0x5e657b*/
    {
      result = Magic_GetShieldType(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0xC) + 0x1C) + 0x98)); /*0x5e658e*/
      if ( result ) /*0x5e6598*/
        return (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xFFFFFFFC) + 0x450))(*((_DWORD *)this + 0xFFFFFFFC)); /*0x5e65a5*/
    }
  }
  return result; /*0x5e65a7*/
}
