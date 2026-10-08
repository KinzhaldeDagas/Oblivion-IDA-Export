// Verified target-death path: for actor targets, marks bTerminated unless the EffectSetting flag 0x10000000 suppresses death termination; then runs the common termination check.
void __userpurge ActiveEffect_Base_ProcessEffect_::CheckForTargetDeath(_BYTE *a1@<esi>, int a2)
{
  int v2; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)a1 + 8) + 0xC))(*((_DWORD *)a1 + 8)) ) /*0x68e96e*/
  {
    v2 = *((_DWORD *)a1 + 8); /*0x68e974*/
    if ( v2 ) /*0x68e979*/
    {
      if ( v2 != 0x68 ) /*0x68e980*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(v2 - 0x68) + 0x198))(v2 - 0x68, 1) ) /*0x68e98c*/
        {
          if ( (*(_DWORD *)(*(_DWORD *)(*((_DWORD *)a1 + 3) + 0x1C) + 0x58) & 0x10000000) == 0 ) /*0x68e9a0*/
            a1[0x11] = 1; /*0x68e9a2*/
        }
      }
    }
  }
  ActiveEffect_Base_ProcessEffect_::TestTerminate(a1, a2); /*0x68e9a6*/
}
