void __stdcall sub_5C1A70(int a1, _BYTE *a2)
{
  int v2; // esi
  _DWORD *v3; // edi
  unsigned int ***ContainerExtraDataForRef; // ebp
  char v5; // bl
  _BYTE *v6; // esi
  bool v7; // zf
  int v8; // eax
  _BYTE *v9; // eax
  int v10; // eax
  int v11; // [esp+0h] [ebp-4h]

  if ( a1 )
  {
    if ( dword_B3B44C[4 * sub_5C1100()] )
    {
      v2 = dword_B3B44C[4 * sub_5C1100()];
      v3 = (_DWORD *)dword_B3B444[4 * sub_5C1100()];
      TESObjectREFR_GetContainer((TESObjectREFR *)TESDataHandler_g_PlayerRef);
      ContainerExtraDataForRef = (unsigned int ***)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)TESDataHandler_g_PlayerRef);
      if ( v2 )
      {
        v5 = (char)a2;
        v11 = v2;
        while ( 1 )
        {
          v6 = (_BYTE *)v3[2];
          v7 = v6[4] == 0x10;
          v3 = (_DWORD *)*v3;
          a2 = v6;
          if ( !v7 )
          {
            if ( ContainerExtraDataForRef )
            {
              v8 = sub_5C1100();
              sub_4895B0(ContainerExtraDataForRef, (int)v6, v8);
            }
          }
          if ( (unsigned __int8)v6[4] != a1 )
            goto LABEL_16;
          v9 = OblivionDynamicCast(
                 v6,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &TESObjectBOOK `RTTI Type Descriptor',
                 0);
          if ( !v9 )
            break;
          if ( (v9[0x88] & 1) != 0 && *((_DWORD *)v9 + 0x19) )
          {
            if ( v5 )
              break;
          }
          else if ( !v5 )
          {
            break;
          }
LABEL_16:
          if ( !--v11 )
            return;
        }
        v10 = sub_5C1100();
        sub_776690((_DWORD *)&quickKeyList_ptr + 4 * v10, (int *)&a2);
        goto LABEL_16;
      }
    }
  }
}
