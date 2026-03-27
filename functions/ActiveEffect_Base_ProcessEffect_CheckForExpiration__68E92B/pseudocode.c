int __usercall ActiveEffect_Base_ProcessEffect_::CheckForExpiration@<eax>(_BYTE *a1@<esi>, int a2)
{
  int v2; // eax

  v2 = *((_DWORD *)a1 + 0xA);
  if ( v2 == 4
    || v2 == 1
    || (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable(a1)
    || (*(_DWORD *)(*(_DWORD *)(*((_DWORD *)a1 + 3) + 0x1C) + 0x58) & 0x80) == 0
    && *((float *)a1 + 7) > (double)*((float *)a1 + 1) )
  {
    return ActiveEffect_Base_ProcessEffect_::CheckForTargetDeath(a1, a2);
  }
  a1[0x11] = 1;
  return ActiveEffect_Base_ProcessEffect_::CheckForTargetDeath(a1, a2);
}
