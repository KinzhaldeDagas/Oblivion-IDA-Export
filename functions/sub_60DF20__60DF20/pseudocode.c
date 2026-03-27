void __thiscall sub_60DF20(int this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // edi
  int v6; // eax
  NiObject *v7; // eax
  NiObject *v8; // esi
  int v9; // eax
  PlayerCharacter *v10; // esi
  int v11; // [esp+4h] [ebp-4h] BYREF

  if ( (*(_BYTE *)(this + 8) & 8) != 0 )
  {
    if ( *(_BYTE *)(this + 0x3C) )
    {
      *(_BYTE *)(this + 0x3C) = 0;
      return;
    }
    v3 = *(_DWORD *)(this + 0x30);
    if ( v3 )
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
      v5 = v4;
      if ( v4 && *(_WORD *)(v4 + 0xB6) )
      {
        v6 = **(_DWORD **)(v4 + 0xB0);
        goto LABEL_10;
      }
    }
    else
    {
      v5 = 0;
    }
    v6 = 0;
LABEL_10:
    if ( v6 )
    {
      v7 = NiRTTI_Cast(&stru_B3CAC0, *(NiObject **)(v6 + 0xC));
      v8 = v7;
      if ( v7 )
      {
        if ( NiTMap_GetAt(&v7[0xB].__vftable, (int)"Open", &v11) )
        {
          if ( v11 )
          {
            if ( *(_DWORD *)(v11 + 0x44) != 1 )
            {
              v9 = sub_4715A0(v8, (int)"Close");
              if ( v9 )
              {
                if ( *(_DWORD *)(v9 + 0x44) != 1 )
                {
                  *(_WORD *)(this + 8) &= ~8u;
                  v10 = sub_4DC270(v5);
                  if ( v10 )
                  {
                    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B3B880, (int)&unk_A2F830);
                    BSSimpleList_PushFront(&dword_B3B800, (int)v10);
                    NiLeaveCriticalSection_0(&stru_B3B880);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
