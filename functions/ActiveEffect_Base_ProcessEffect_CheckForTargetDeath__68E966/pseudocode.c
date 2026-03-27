int __usercall ActiveEffect_Base_ProcessEffect_::CheckForTargetDeath@<eax>(_BYTE *a1@<esi>, int a2)
{
  int v2; // eax

  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)a1 + 8) + 0xC))(*((_DWORD *)a1 + 8)) )
  {
    v2 = *((_DWORD *)a1 + 8);
    if ( v2 )
    {
      if ( v2 != 0x68 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)(v2 - 0x68) + 0x198))(v2 - 0x68, 1) )
        {
          if ( (*(_DWORD *)(*(_DWORD *)(*((_DWORD *)a1 + 3) + 0x1C) + 0x58) & 0x10000000) == 0 )
            a1[0x11] = 1;
        }
      }
    }
  }
  return ActiveEffect_Base_ProcessEffect_::TestTerminate(a1, a2);
}
