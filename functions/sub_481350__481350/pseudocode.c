void __cdecl sub_481350(NiNode *a1)
{
  NiProperty *NiPropertyByID; // esi
  BOOL v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // esi
  _DWORD *i; // eax

  if ( a1 )
  {
    if ( a1->vtbl->super.super.Unk_04((NiObject *)a1) )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4);
      if ( NiPropertyByID )
      {
        v2 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 1
          && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA;
        v3 = v2 ? (unsigned int)NiPropertyByID : 0;
        if ( v3 )
        {
          (*((void (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID);
          sub_67AB40((int *)&ActorProcessManager_ptr, v3);
        }
      }
    }
    else
    {
      v4 = (int)a1->vtbl->super.super.Unk_02((NiObject *)a1);
      v5 = v4;
      if ( v4 )
      {
        v6 = *(unsigned __int16 *)(v4 + 0xB6);
        v7 = 0;
        if ( *(_WORD *)(v5 + 0xB6) )
        {
          if ( v6 )
            goto LABEL_14;
          for ( i = 0; ; i = *(_DWORD **)(*(_DWORD *)(v5 + 0xB0) + 4 * v7) )
          {
            sub_481350(i);
            if ( *(unsigned __int16 *)(v5 + 0xB6) <= (unsigned int)++v7 )
              break;
LABEL_14:
            ;
          }
        }
      }
    }
  }
}
