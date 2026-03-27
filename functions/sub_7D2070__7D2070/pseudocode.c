char __thiscall sub_7D2070(int ***this, NiCullingProcess *a2)
{
  int **v2; // ecx
  NiNode *v3; // ebp
  void **vtlb; // esi
  NiProperty *NiPropertyByID; // edi
  int v6; // eax
  bool v7; // bl
  bool v8; // zf
  int *v10; // [esp+0h] [ebp-4h]

  if ( ((_BYTE)(*(this + 0x40))[6] & 1) == 0 )
  {
    v2 = *(this + 0x3A);
    if ( v2 )
    {
      while ( 1 )
      {
        v3 = (NiNode *)v2[2];
        v10 = *v2;
        if ( v3 )
        {
          vtlb = v3->members.effects.vtlb;
          if ( vtlb )
          {
            NiPropertyByID = NiNode_GetNiPropertyByID(v3, 4);
            if ( !NiPropertyByID[4].members.m_pcName )
            {
              if ( dword_B42EB4 )
                v6 = dword_B42EB4(v3);
              else
                v6 = 0;
              NiPropertyByID[4].members.m_pcName = (const char *)v6;
            }
            if ( ((1 << (int)NiPropertyByID[4].members.m_pcName) & dword_B2C678) != 0 )
              break;
          }
        }
LABEL_26:
        if ( !v10 )
          return 1;
        v2 = (int **)v10;
      }
      v7 = sub_733840((_DWORD *)g_Renderer->member.super.accumulator);
      if ( (*((int (__thiscall **)(void **))*vtlb + 7))(vtlb) < 1
        || (*((int (__thiscall **)(void **))*vtlb + 7))(vtlb) > 5 )
      {
        if ( (*((int (__thiscall **)(void **))*vtlb + 7))(vtlb) != 0x1B )
          goto LABEL_26;
        if ( v7 )
          goto LABEL_25;
        v8 = *(_DWORD *)&v3->members.children.numObjs == 0;
        dword_B42EB8 = 0;
        if ( v8 )
        {
          dword_B42E90 = 0x154;
          sub_7FD260(0x154u);
        }
        else
        {
          dword_B42E90 = 0x155;
          sub_7FD260(0x155u);
        }
      }
      else
      {
        if ( v7 )
        {
LABEL_25:
          NiAVObject_Render((NiAVObject *)v3, a2);
          goto LABEL_26;
        }
        v8 = *(_DWORD *)&v3->members.children.numObjs == 0;
        dword_B42EB8 = 0;
        if ( v8 )
        {
          dword_B42E90 = 0x10;
          sub_7D1320((int *)0x10);
        }
        else
        {
          dword_B42E90 = 0x14;
          sub_7D1320((int *)0x14);
        }
      }
      (*(void (__thiscall **)(void *))(*(_DWORD *)vtlb[0xC] + 0x48))(vtlb[0xC]);
      (*(void (__thiscall **)(void *))(*(_DWORD *)vtlb[0xB] + 0x48))(vtlb[0xB]);
      goto LABEL_25;
    }
  }
  return 1;
}
