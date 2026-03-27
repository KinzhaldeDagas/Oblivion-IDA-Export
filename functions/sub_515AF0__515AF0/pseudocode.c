char __usercall sub_515AF0@<al>(double a1@<st0>)
{
  TESQuest *activeQuest; // ecx
  const char *v4; // eax
  int v5; // edx
  int *v6; // eax
  int *v7; // esi
  int v8; // ecx
  int v9; // ebx
  _DWORD *v10; // eax
  _DWORD *v11; // esi
  _DWORD *v12; // eax
  _DWORD *v13; // ebp
  const char *v14; // eax
  int v15; // eax
  const char *v16; // eax
  const char *v17; // eax
  char *m_data; // esi
  char *v19; // ebp
  int v21; // [esp-Ch] [ebp-50h]
  const char *v22; // [esp-8h] [ebp-4Ch]
  int v23; // [esp-4h] [ebp-48h]
  int v24; // [esp-4h] [ebp-48h]
  int v25; // [esp-4h] [ebp-48h]
  int v26; // [esp-4h] [ebp-48h]
  int v27; // [esp+18h] [ebp-2Ch]
  int *v28; // [esp+1Ch] [ebp-28h]
  int v29; // [esp+20h] [ebp-24h]
  BSStringT v30; // [esp+24h] [ebp-20h] BYREF
  BSStringT v31; // [esp+2Ch] [ebp-18h] BYREF
  int v32; // [esp+40h] [ebp-4h]

  activeQuest = TESDataHandler_g_PlayerRef->activeQuest;
  if ( activeQuest )
  {
    v4 = activeQuest->vtbl->GetEditorName((TESForm *)activeQuest);
    Interface_ConsolePrint("Active quest: %s", v4);
    v6 = sub_65D830(TESDataHandler_g_PlayerRef, a1, v5);
    v7 = v6;
    if ( v6 )
    {
      v8 = 0;
      do
      {
        if ( *v6 )
          ++v8;
        v6 = (int *)v6[1];
      }
      while ( v6 );
      Interface_ConsolePrint("%d current targets", v8);
    }
    else
    {
      Interface_ConsolePrint("No current targets");
    }
    v27 = 1;
    if ( v7 )
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( !*v7 )
          break;
        v28 = (int *)v7[1];
        v31.m_data = 0;
        v31.m_dataLen = 0;
        v31.m_bufLen = 0;
        v32 = 1;
        v30.m_data = 0;
        v30.m_dataLen = 0;
        v30.m_bufLen = 0;
        BSStringT_Set(&v30, "Same cell/exterior", 0);
        sub_52B440((_DWORD *)v9, 0);
        v11 = v10;
        sub_52B440((_DWORD *)v9, 1);
        v13 = v12;
        if ( v12 )
        {
          if ( v11 )
          {
            v23 = v11[3];
            if ( v12 == v11 )
            {
              v14 = (const char *)(*(int (__thiscall **)(_DWORD *, int))(*v11 + 0xD4))(v11, v23);
              BSStringT_Static_Format(&v31, "%s (%08X)", v14, v24);
            }
            else
            {
              v29 = v12[3];
              v15 = (*(int (__thiscall **)(_DWORD *, int))(*v11 + 0xD4))(v11, v23);
              v16 = (const char *)(*(int (__thiscall **)(_DWORD *, int, int))(*v13 + 0xD4))(v13, v29, v15);
              BSStringT_Static_Format(&v31, "%s (%08X) (carrying %s (%08X))", v16, v21, v22, v25);
            }
          }
        }
        if ( *(_DWORD *)(v9 + 0x10) )
        {
          v17 = (const char *)(*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v9 + 0x10) + 0xD4))(
                                *(_DWORD *)(v9 + 0x10),
                                *(_DWORD *)(*(_DWORD *)(v9 + 0x10) + 0xC));
          BSStringT_Static_Format(&v30, "%s (%08X)", v17, v26);
        }
        m_data = v30.m_data;
        v19 = v31.m_data;
        Interface_ConsolePrint("Target %d:  Reference: %s, load door: %s", v27++, v31.m_data, v30.m_data);
        FormHeapFree((unsigned int)m_data);
        v30.m_data = 0;
        v30.m_bufLen = 0;
        v30.m_dataLen = 0;
        v32 = 0xFFFFFFFF;
        FormHeapFree((unsigned int)v19);
        v31.m_data = 0;
        v31.m_bufLen = 0;
        v31.m_dataLen = 0;
        if ( !v28 )
          break;
        v7 = v28;
      }
    }
  }
  else
  {
    Interface_ConsolePrint("No active quest");
  }
  return 1;
}
