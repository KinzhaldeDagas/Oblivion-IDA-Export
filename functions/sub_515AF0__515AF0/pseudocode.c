char __usercall sub_515AF0@<al>(double a1@<st0>)
{
  TESQuest *activeQuest; // ecx
  const char *v2; // eax
  int *v3; // eax
  int *v4; // esi
  int v5; // ecx
  int v6; // ebx
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  _DWORD *v9; // eax
  _DWORD *v10; // ebp
  const char *v11; // eax
  int v12; // eax
  const char *v13; // eax
  const char *v14; // eax
  char *m_data; // esi
  char *v16; // ebp
  int v18; // [esp-Ch] [ebp-50h]
  const char *v19; // [esp-8h] [ebp-4Ch]
  int v20; // [esp-4h] [ebp-48h]
  int v21; // [esp-4h] [ebp-48h]
  int v22; // [esp-4h] [ebp-48h]
  int v23; // [esp-4h] [ebp-48h]
  int v24; // [esp+18h] [ebp-2Ch]
  int *v25; // [esp+1Ch] [ebp-28h]
  int v26; // [esp+20h] [ebp-24h]
  BSStringT v27; // [esp+24h] [ebp-20h] BYREF
  BSStringT v28; // [esp+2Ch] [ebp-18h] BYREF
  int v29; // [esp+40h] [ebp-4h]

  activeQuest = reference->activeQuest; /*0x515b22*/
  if ( activeQuest )
  {
    v2 = activeQuest->vtbl->GetEditorName((TESForm *)activeQuest); /*0x515b3a*/
    Interface_ConsolePrint("Active quest: %s", v2);
    sub_65D830(reference, a1); /*0x515b50*/
    v4 = v3; /*0x515b55*/
    if ( v3 ) /*0x515b59*/
    {
      v5 = 0; /*0x515b6a*/
      do /*0x515b7c*/
      {
        if ( *v3 ) /*0x515b70*/
          ++v5; /*0x515b74*/
        v3 = (int *)v3[1]; /*0x515b77*/
      }
      while ( v3 ); /*0x515b7c*/
      Interface_ConsolePrint("%d current targets", v5); /*0x515b84*/
    }
    else
    {
      Interface_ConsolePrint("No current targets"); /*0x515b60*/
    }
    v24 = 1; /*0x515b8e*/
    if ( v4 )
    {
      while ( 1 )
      {
        v6 = *v4; /*0x515ba4*/
        if ( !*v4 ) /*0x515ba4*/
          break; /*0x515ba4*/
        v25 = (int *)v4[1]; /*0x515bb1*/
        v28.m_data = 0; /*0x515bb5*/
        v28.m_dataLen = 0; /*0x515bb9*/
        v28.m_bufLen = 0; /*0x515bbe*/
        v29 = 1; /*0x515bc3*/
        v27.m_data = 0; /*0x515bc7*/
        v27.m_dataLen = 0; /*0x515bcb*/
        v27.m_bufLen = 0; /*0x515bd0*/
        BSStringT_Set(&v27, "Same cell/exterior", 0); /*0x515be4*/
        sub_52B440((_DWORD *)v6, 0); /*0x515bec*/
        v8 = v7; /*0x515bf5*/
        sub_52B440((_DWORD *)v6, 1); /*0x515bf7*/
        v10 = v9; /*0x515bfc*/
        if ( v9 ) /*0x515c00*/
        {
          if ( v8 ) /*0x515c04*/
          {
            v20 = v8[3]; /*0x515c0d*/
            if ( v9 == v8 ) /*0x515c0e*/
            {
              v11 = (const char *)(*(int (__thiscall **)(_DWORD *, int))(*v8 + 0xD4))(v8, v20); /*0x515c18*/
              BSStringT_Static_Format(&v28, "%s (%08X)", v11, v21); /*0x515c25*/
            }
            else
            {
              v26 = v9[3]; /*0x515c34*/
              v12 = (*(int (__thiscall **)(_DWORD *, int))(*v8 + 0xD4))(v8, v20); /*0x515c3e*/
              v13 = (const char *)(*(int (__thiscall **)(_DWORD *, int, int))(*v10 + 0xD4))(v10, v26, v12); /*0x515c51*/
              BSStringT_Static_Format(&v28, "%s (%08X) (carrying %s (%08X))", v13, v18, v19, v22); /*0x515c5e*/
            }
          }
        }
        if ( *(_DWORD *)(v6 + 0x10) ) /*0x515c66*/
        {
          v14 = (const char *)(*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v6 + 0x10) + 0xD4))( /*0x515c7c*/
                                *(_DWORD *)(v6 + 0x10),
                                *(_DWORD *)(*(_DWORD *)(v6 + 0x10) + 0xC));
          BSStringT_Static_Format(&v27, "%s (%08X)", v14, v23); /*0x515c89*/
        }
        m_data = v27.m_data; /*0x515c91*/
        v16 = v28.m_data; /*0x515c95*/
        Interface_ConsolePrint("Target %d:  Reference: %s, load door: %s", v24++, v28.m_data, v27.m_data);
        FormHeapFree((unsigned int)m_data); /*0x515cb2*/
        v27.m_data = 0; /*0x515cb8*/
        v27.m_bufLen = 0; /*0x515cbc*/
        v27.m_dataLen = 0; /*0x515cc1*/
        v29 = 0xFFFFFFFF; /*0x515cc6*/
        FormHeapFree((unsigned int)v16); /*0x515cce*/
        v28.m_data = 0; /*0x515cda*/
        v28.m_bufLen = 0; /*0x515cde*/
        v28.m_dataLen = 0; /*0x515ce3*/
        if ( !v25 ) /*0x515ce8*/
          break; /*0x515ce8*/
        v4 = v25; /*0x515ba0*/
      }
    }
  }
  else
  {
    Interface_ConsolePrint("No active quest"); /*0x515cf5*/
  }
  return 1; /*0x515cff*/
}
