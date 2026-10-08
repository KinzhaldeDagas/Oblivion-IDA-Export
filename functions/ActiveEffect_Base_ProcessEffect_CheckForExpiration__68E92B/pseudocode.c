// Verified expiration path: if duration reaches timeElapsed and spell/effect flags do not suppress expiration, sets bTerminated=1 and proceeds to target-death/termination handling.
void __userpurge ActiveEffect_Base_ProcessEffect_::CheckForExpiration(_BYTE *a1@<esi>, int a2)
{
  int v2; // eax

  v2 = *((_DWORD *)a1 + 0xA); /*0x68e92b*/
  if ( v2 == 4 /*0x68e960*/
    || v2 == 1
    || (unsigned __int8)ActiveEffect_Base_IsBoundObjWearable(a1)
    || (*(_DWORD *)(*(_DWORD *)(*((_DWORD *)a1 + 3) + 0x1C) + 0x58) & 0x80) == 0
    && *((float *)a1 + 7) > (double)*((float *)a1 + 1) )
  {
    ActiveEffect_Base_ProcessEffect_::CheckForTargetDeath(a1, a2); /*0x68e960*/
  }
  else
  {
    a1[0x11] = 1; /*0x68e962*/
    ActiveEffect_Base_ProcessEffect_::CheckForTargetDeath(a1, a2); /*0x68e963*/
  }
}
