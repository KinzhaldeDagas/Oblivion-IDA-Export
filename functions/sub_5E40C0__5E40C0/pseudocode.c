double __thiscall sub_5E40C0(void *this)
{
  double v3; // [esp+8h] [ebp-20h]
  float firstPersonNiNodeTranslateZ; // [esp+8h] [ebp-20h]
  _BYTE v6[12]; // [esp+10h] [ebp-18h] BYREF
  _BYTE v7[12]; // [esp+1Ch] [ebp-Ch] BYREF

  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x27C))(this) ) /*0x5e40ce*/
  {
    firstPersonNiNodeTranslateZ = reference->firstPersonNiNodeTranslateZ; /*0x5e4128*/
    return (float)(((double (__thiscall *)(void *))*(_DWORD *)(*(_DWORD *)this + 0xEC))(this) /*0x5e4135*/
                 * firstPersonNiNodeTranslateZ);
  }
  else
  {
    v3 = *(float *)((*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 0x15C))(this, v6) + 8); /*0x5e40ea*/
    return (float)((v3 - *(float *)((*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 0x158))(this, v7) + 8)) /*0x5e410b*/
                 * dbl_A31C70);
  }
}
