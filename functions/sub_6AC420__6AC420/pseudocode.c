// Sound manager animation event helper. Finds active sounds associated with a reference, marks/removes loop entries, and either fades/stops or schedules stop based on the passed fade time.
LONG __thiscall SoundManager_StopRefLoopingSoundsWithFade(unsigned int **this, LONG a2, float a3)
{
  int v4; // ebx
  LONG result; // eax
  int v6; // edi
  int v7; // edi
  _DWORD *v8; // esi
  int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // eax
  _DWORD *v12; // esi
  _DWORD *v13; // ecx
  LONG v14; // eax
  LONG (__stdcall *v15)(volatile LONG *); // esi
  LONG (__thiscall **v16)(int, int); // edx
  int v17; // ecx
  int v18; // [esp+14h] [ebp-24h] BYREF
  _DWORD *v19; // [esp+18h] [ebp-20h] BYREF
  int v20; // [esp+1Ch] [ebp-1Ch]
  int v21; // [esp+20h] [ebp-18h] BYREF
  __int64 v22; // [esp+24h] [ebp-14h]
  unsigned int v23; // [esp+34h] [ebp-4h]

  v4 = 0; /*0x6ac449*/
  v19 = 0; /*0x6ac44b*/
  v18 = 0; /*0x6ac44f*/
  result = a2; /*0x6ac453*/
  v6 = *(_DWORD *)(a2 + 0x3C); /*0x6ac457*/
  v23 = 0; /*0x6ac45c*/
  v20 = v6; /*0x6ac460*/
  if ( v6 ) /*0x6ac464*/
    result = InterlockedIncrement((volatile LONG *)(v6 + 4)); /*0x6ac46a*/
  LOBYTE(v23) = 1; /*0x6ac472*/
  if ( v6 && bSoundEnabled_Audio ) /*0x6ac47d*/
  {
    a2 = NiTMapBase_GetFirstNode(*(this + 0xC1)); /*0x6ac497*/
    while ( a2 ) /*0x6ac49b*/
    {
      sub_7B2600((unsigned int **)*(this + 0xC1), (unsigned int **)&a2, &v21, (unsigned int *)&v18); /*0x6ac4b6*/
      v4 = v18; /*0x6ac4bb*/
      if ( v18 == v6 ) /*0x6ac4c1*/
      {
        v7 = v21; /*0x6ac4c7*/
        NiTMap_GetAt(*(this + 0xC0), v21, &v19); /*0x6ac4d7*/
        v8 = v19; /*0x6ac4dc*/
        if ( v19 ) /*0x6ac4e2*/
        {
          *v19 |= 0x100u; /*0x6ac4ef*/
          NiTMap_RemoveAt(*(this + 0xC1), v7); /*0x6ac4f8*/
          if ( v4 ) /*0x6ac4ff*/
            sub_6F9710(v4); /*0x6ac502*/
          if ( a3 >= dbl_A77188 ) /*0x6ac519*/
          {
            v22 = (__int64)(a3 * dbl_A2FC70); /*0x6ac544*/
            sub_6AB8D0(this, v7, 1, v22); /*0x6ac554*/
          }
          else
          {
            sub_6B6AC0(v8); /*0x6ac51f*/
          }
          v9 = (int)*(this + 0xC1); /*0x6ac559*/
          v10 = *(_DWORD *)(v9 + 4); /*0x6ac55f*/
          v11 = 0; /*0x6ac562*/
          if ( v10 ) /*0x6ac566*/
          {
            v12 = *(_DWORD **)(v9 + 8); /*0x6ac568*/
            v13 = v12; /*0x6ac56b*/
            while ( !*v13 ) /*0x6ac573*/
            {
              ++v11; /*0x6ac575*/
              ++v13; /*0x6ac578*/
              if ( v11 >= v10 ) /*0x6ac57d*/
                goto LABEL_17; /*0x6ac57d*/
            }
            v14 = v12[v11]; /*0x6ac5cf*/
          }
          else
          {
LABEL_17:
            v14 = 0; /*0x6ac57f*/
          }
          a2 = v14; /*0x6ac581*/
        }
        v6 = v20; /*0x6ac585*/
      }
    }
    v15 = InterlockedDecrement; /*0x6ac594*/
    LOBYTE(v23) = 0; /*0x6ac59e*/
    result = v15((volatile LONG *)(v6 + 4)); /*0x6ac5a3*/
    if ( !result ) /*0x6ac5a7*/
      result = (**(int (__thiscall ***)(int, int))v6)(v6, 1); /*0x6ac5b1*/
    v23 = 0xFFFFFFFF; /*0x6ac5b5*/
    if ( v4 ) /*0x6ac5bd*/
    {
      result = v15((volatile LONG *)(v4 + 4)); /*0x6ac5c3*/
      if ( !result ) /*0x6ac5c7*/
      {
        v16 = *(LONG (__thiscall ***)(int, int))v4; /*0x6ac5c9*/
        v17 = v4; /*0x6ac5cb*/
        return (*v16)(v17, 1); /*0x6ac5ef*/
      }
    }
  }
  else
  {
    LOBYTE(v23) = 0; /*0x6ac5d6*/
    if ( v6 ) /*0x6ac5db*/
    {
      result = InterlockedDecrement((volatile LONG *)(v6 + 4)); /*0x6ac5e1*/
      if ( !result ) /*0x6ac5e9*/
      {
        v16 = *(LONG (__thiscall ***)(int, int))v6; /*0x6ac5eb*/
        v17 = v6; /*0x6ac5ed*/
        return (*v16)(v17, 1); /*0x6ac5ed*/
      }
    }
  }
  return result; /*0x6ac5f5*/
}
