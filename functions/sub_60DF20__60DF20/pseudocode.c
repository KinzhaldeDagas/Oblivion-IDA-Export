void __thiscall sub_60DF20(int this, int a2)
{
  int v3; // ecx
  int v4; // eax
  int v5; // edi
  int v6; // eax
  NiObject *v7; // eax
  NiControllerManager *v8; // esi
  NiControllerSequence *SequenceByName; // eax
  PlayerCharacter *v10; // esi
  int v11; // [esp+4h] [ebp-4h] BYREF

  if ( (*(_BYTE *)(this + 8) & 8) != 0 ) /*0x60df2c*/
  {
    if ( *(_BYTE *)(this + 0x3C) ) /*0x60df32*/
    {
      *(_BYTE *)(this + 0x3C) = 0; /*0x60df38*/
      return; /*0x60df3e*/
    }
    v3 = *(_DWORD *)(this + 0x30); /*0x60df41*/
    if ( v3 ) /*0x60df47*/
    {
      v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3); /*0x60df4e*/
      v5 = v4; /*0x60df50*/
      if ( v4 && *(_WORD *)(v4 + 0xB6) ) /*0x60df56*/
      {
        v6 = **(_DWORD **)(v4 + 0xB0); /*0x60df66*/
        goto LABEL_10; /*0x60df68*/
      }
    }
    else
    {
      v5 = 0; /*0x60df6a*/
    }
    v6 = 0; /*0x60df6c*/
LABEL_10:
    if ( v6 ) /*0x60df70*/
    {
      v7 = NiRTTI_Cast((BSStringT *)&stru_B3CAC0, *(NiObject **)(v6 + 0xC)); /*0x60df80*/
      v8 = (NiControllerManager *)v7; /*0x60df85*/
      if ( v7 ) /*0x60df8c*/
      {
        if ( NiTMap_GetAt(&v7[0xB].__vftable, (int)"Open", &v11) ) /*0x60df9b*/
        {
          if ( v11 ) /*0x60dfaa*/
          {
            if ( *(_DWORD *)(v11 + 0x44) != 1 ) /*0x60dfb0*/
            {
              SequenceByName = NiControllerManager_FindSequenceByName(v8, "Close"); /*0x60dfb9*/
              if ( SequenceByName ) /*0x60dfc0*/
              {
                if ( *((_DWORD *)SequenceByName + 0x11) != 1 ) /*0x60dfc6*/
                {
                  *(_WORD *)(this + 8) &= ~8u; /*0x60dfc8*/
                  v10 = sub_4DC270(v5); /*0x60dfd4*/
                  if ( v10 ) /*0x60dfdb*/
                  {
                    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&unk_B3B880, (int)&unk_A2F830); /*0x60dfe7*/
                    BSSimpleList_PushFront(&unk_B3B800, (int)v10); /*0x60dff2*/
                    NiLeaveCriticalSection_0(&unk_B3B880); /*0x60dffc*/
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
