void __thiscall sub_53BBC0(_DWORD *this)
{
  signed int i; // edi
  int v3; // esi
  NiNode *v4; // ecx
  NiProperty *NiPropertyByID; // eax
  NiProperty *v6; // esi
  NiRTTI *v7; // eax
  char v8; // al
  BSImageSpaceShader *v9; // eax
  BSImageSpaceShader *v10; // esi

  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x53bbc7*/
  for ( i = 0; i < 2; i = (i + 1) % 3u )
  {
    v3 = *(this + i + 4); /*0x53bbd1*/
    if ( v3 ) /*0x53bbd7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x53bbdd*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x53bbf3*/
      *(this + i + 4) = 0; /*0x53bbf5*/
    }
    v4 = (NiNode *)*(this + i + 2); /*0x53bbfd*/
    if ( v4 )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(v4, 4); /*0x53bc07*/
      v6 = NiPropertyByID; /*0x53bc0c*/
      if ( NiPropertyByID )
      {
        v7 = (NiRTTI *)(*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 1))(NiPropertyByID); /*0x53bc19*/
        if ( v7 ) /*0x53bc1d*/
        {
          while ( v7 != &stru_B4335C ) /*0x53bc25*/
          {
            v7 = v7->parent; /*0x53bc27*/
            if ( !v7 ) /*0x53bc2c*/
              goto LABEL_11; /*0x53bc2c*/
          }
          v8 = 1; /*0x53bc70*/
        }
        else
        {
LABEL_11:
          v8 = 0; /*0x53bc2e*/
        }
        v9 = v8 != 0 ? (BSImageSpaceShader *)v6 : 0;
        v10 = v9; /*0x53bc36*/
        if ( v9 ) /*0x53bc38*/
        {
          sub_802890(v9, 0); /*0x53bc3e*/
          *(float *)&v10->member.Unk080 = 0.0; /*0x53bc45*/
        }
      }
    }
  }
  Cmd_AddAchievement_PC_ReturnTrueNoOp(); /*0x53bc64*/
}
