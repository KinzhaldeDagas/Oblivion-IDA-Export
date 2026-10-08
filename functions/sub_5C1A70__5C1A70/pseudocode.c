void __stdcall sub_5C1A70(int a1, _BYTE *data)
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

  if ( a1 ) /*0x5c1a76*/
  {
    if ( unk_B3B44C[4 * sub_5C1100()] ) /*0x5c1a84*/
    {
      v2 = unk_B3B44C[4 * sub_5C1100()]; /*0x5c1a9c*/
      v3 = (_DWORD *)unk_B3B444[4 * sub_5C1100()]; /*0x5c1ab0*/
      TESObjectREFR_GetContainer((TESObjectREFR *)reference); /*0x5c1ab6*/
      ContainerExtraDataForRef = (unsigned int ***)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)reference); /*0x5c1acc*/
      if ( v2 ) /*0x5c1ace*/
      {
        v5 = (char)data; /*0x5c1ad5*/
        v11 = v2; /*0x5c1ad9*/
        while ( 1 ) /*0x5c1ae0*/
        {
          v6 = (_BYTE *)v3[2]; /*0x5c1ae0*/
          v7 = v6[4] == 0x10; /*0x5c1ae3*/
          v3 = (_DWORD *)*v3; /*0x5c1aea*/
          data = v6; /*0x5c1aec*/
          if ( !v7 ) /*0x5c1af0*/
          {
            if ( ContainerExtraDataForRef ) /*0x5c1af4*/
            {
              v8 = sub_5C1100(); /*0x5c1af6*/
              sub_4895B0(ContainerExtraDataForRef, (int)v6, v8); /*0x5c1aff*/
            }
          }
          if ( (unsigned __int8)v6[4] != a1 ) /*0x5c1b0c*/
            goto LABEL_16; /*0x5c1b0c*/
          v9 = OblivionDynamicCast( /*0x5c1b1d*/
                 v6,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &TESObjectBOOK `RTTI Type Descriptor',
                 0);
          if ( !v9 ) /*0x5c1b27*/
            break; /*0x5c1b27*/
          if ( (v9[0x88] & 1) != 0 && *((_DWORD *)v9 + 0x19) ) /*0x5c1b32*/
          {
            if ( v5 ) /*0x5c1b3a*/
              break; /*0x5c1b3a*/
          }
          else if ( !v5 ) /*0x5c1b45*/
          {
            break; /*0x5c1b45*/
          }
LABEL_16:
          if ( !--v11 ) /*0x5c1b6d*/
            return; /*0x5c1b6d*/
        }
        v10 = sub_5C1100(); /*0x5c1b53*/
        NiTPointerList_RemoveByData(&MEMORY[0xB3B440][0x10 * v10], (void **)&data); /*0x5c1b63*/
        goto LABEL_16; /*0x5c1b63*/
      }
    }
  }
}
