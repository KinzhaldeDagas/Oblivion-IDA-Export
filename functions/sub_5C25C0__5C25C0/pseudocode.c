void __userpurge sub_5C25C0(char a1@<bpl>, double a2@<st2>, double a3@<st1>, double a4@<st0>, unsigned __int8 *a5)
{
  unsigned __int8 *v5; // edi
  int v6; // ebp
  unsigned int ***ContainerExtraDataForRef; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // esi
  char v12; // [esp-Ch] [ebp-14h]

  v5 = a5;
  if ( sub_5C1100() >= 0 && sub_5C1100() <= 7 )
  {
    if ( v5 )
    {
      if ( dword_B3B44C[4 * sub_5C1100()] )
      {
        v12 = a1;
        v6 = *(_DWORD *)(dword_B3B444[4 * sub_5C1100()] + 8);
        if ( v6 )
        {
          if ( *(_BYTE *)(v6 + 4) != 0x10 )
          {
            TESObjectREFR_GetContainer((TESObjectREFR *)TESDataHandler_g_PlayerRef);
            ContainerExtraDataForRef = (unsigned int ***)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)TESDataHandler_g_PlayerRef);
            if ( ContainerExtraDataForRef )
            {
              v8 = sub_5C1100();
              sub_4895B0(ContainerExtraDataForRef, v6, v8);
            }
          }
        }
        a1 = v12;
      }
      if ( dword_B3B44C[4 * sub_5C1100()] >= 1 )
      {
        v9 = sub_5C1100();
        NiTPointerList::FreeAllNodes((NiTPointerList__BSImageSpaceShader *)((char *)&quickKeyList_ptr + 0x10 * v9));
      }
      else
      {
        sub_5C1DD0(v5);
      }
      v10 = sub_5C1100();
      sub_5B1E20((BSTextureManager *)((char *)&quickKeyList_ptr + 0x10 * v10), (void **)&a5);
      byte_B3B43C = 1;
    }
    v11 = sub_5C1100();
    sub_5E99C0((TESObjectREFR *)TESDataHandler_g_PlayerRef, a1, a2, a3, a4, v5, 1, 0);
    byte_B3B418[v11] = 1;
  }
}
