void __thiscall sub_53BBC0(_DWORD *this)
{
  signed int i; // edi
  int v3; // esi
  NiNode *v4; // ecx
  NiProperty *NiPropertyByID; // eax
  NiProperty *v6; // esi
  int v7; // eax
  char v8; // al
  BSImageSpaceShader *v9; // eax
  BSImageSpaceShader *v10; // esi

  nullsub_returnTrue_0arg();
  for ( i = 0; i < 2; i = (i + 1) % 3u )
  {
    v3 = *(this + i + 4);
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
      *(this + i + 4) = 0;
    }
    v4 = (NiNode *)*(this + i + 2);
    if ( v4 )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(v4, 4);
      v6 = NiPropertyByID;
      if ( NiPropertyByID )
      {
        v7 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 1))(NiPropertyByID);
        if ( v7 )
        {
          while ( (char *)v7 != dword_B4335C )
          {
            v7 = *(_DWORD *)(v7 + 4);
            if ( !v7 )
              goto LABEL_11;
          }
          v8 = 1;
        }
        else
        {
LABEL_11:
          v8 = 0;
        }
        v9 = v8 != 0 ? (BSImageSpaceShader *)v6 : 0;
        v10 = v9;
        if ( v9 )
        {
          sub_802890(v9, 0);
          *(float *)&v10->member.Unk080 = 0.0;
        }
      }
    }
  }
  nullsub_returnTrue_0arg();
}
