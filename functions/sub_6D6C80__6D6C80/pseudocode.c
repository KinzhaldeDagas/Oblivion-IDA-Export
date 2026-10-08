bool __thiscall sub_6D6C80(int this)
{
  int v2; // eax
  unsigned int v3; // edx
  int v4; // eax
  int v5; // edx
  int v6; // edx

  if ( *(_DWORD *)(this + 0x44) ) /*0x6d6c80*/
    return 1; /*0x6d6c86*/
  v2 = *(_DWORD *)(this + 0x30); /*0x6d6c89*/
  if ( !v2 ) /*0x6d6c8e*/
    return 0; /*0x6d6c90*/
  v3 = *(_DWORD *)(this + 0x4C); /*0x6d6c97*/
  if ( *(_BYTE *)(this + 0x48) ) /*0x6d6c93*/
  {
    v4 = *(_DWORD *)(v2 + 0x2C); /*0x6d6c9c*/
    if ( v4 && v3 < *(unsigned __int16 *)(v4 + 0xA) ) /*0x6d6cab*/
    {
      v5 = *(_DWORD *)(*(_DWORD *)(v4 + 4) + 4 * v3); /*0x6d6cb0*/
      *(_DWORD *)(this + 0x44) = v5; /*0x6d6cb5*/
      return v5 != 0; /*0x6d6cb8*/
    }
    else
    {
      *(_DWORD *)(this + 0x44) = 0; /*0x6d6cc0*/
      return 0; /*0x6d6cc3*/
    }
  }
  else
  {
    v6 = *(_DWORD *)(*(_DWORD *)(v2 + 0x20) + 4 * v3); /*0x6d6cca*/
    *(_DWORD *)(this + 0x44) = v6; /*0x6d6ccf*/
    return v6 != 0; /*0x6d6cd2*/
  }
}
