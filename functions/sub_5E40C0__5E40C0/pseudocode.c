double __thiscall sub_5E40C0(void *this)
{
  double v3; // [esp+8h] [ebp-20h]
  float firstPersonNiNodeTranslateZ; // [esp+8h] [ebp-20h]
  _BYTE v6[12]; // [esp+10h] [ebp-18h] BYREF
  _BYTE v7[12]; // [esp+1Ch] [ebp-Ch] BYREF

  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x27C))(this) )
  {
    firstPersonNiNodeTranslateZ = TESDataHandler_g_PlayerRef->firstPersonNiNodeTranslateZ;
    return (float)(((double (__thiscall *)(void *))*(_DWORD *)(*(_DWORD *)this + 0xEC))(this)
                 * firstPersonNiNodeTranslateZ);
  }
  else
  {
    v3 = *(float *)((*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 0x15C))(this, v6) + 8);
    return (float)((v3 - *(float *)((*(int (__thiscall **)(void *, _BYTE *))(*(_DWORD *)this + 0x158))(this, v7) + 8))
                 * dbl_A31C70);
  }
}
