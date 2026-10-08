HANDLE __thiscall TESSaveLoadGame_PrintChangeRecords_(unsigned int **this, LPCSTR lpString2)
{
  unsigned int **v2; // edi
  int v3; // ebx
  HANDLE result; // eax
  HANDLE v5; // ebp
  unsigned int v6; // ecx
  unsigned int v7; // eax
  _DWORD *v8; // esi
  unsigned int v9; // eax
  int v10; // ebx
  int v11; // kr00_4
  _DWORD *v12; // ebx
  TESForm *v13; // ebp
  unsigned __int16 v14; // ax
  unsigned int v15; // ecx
  int v16; // edx
  char v17; // al
  const char *v18; // esi
  void *v19; // edi
  TESObjectREFR *v20; // eax
  const char *v21; // edi
  unsigned int *v22; // edi
  unsigned int v23; // esi
  const char *v24; // [esp+10h] [ebp-56Ch]
  __int16 v25; // [esp+2Ah] [ebp-552h] BYREF
  char *Name; // [esp+2Ch] [ebp-550h]
  int v27; // [esp+30h] [ebp-54Ch]
  int v28; // [esp+34h] [ebp-548h]
  int v29; // [esp+38h] [ebp-544h]
  int v30; // [esp+3Ch] [ebp-540h]
  int v31; // [esp+40h] [ebp-53Ch]
  int v32; // [esp+44h] [ebp-538h]
  int v33; // [esp+48h] [ebp-534h]
  DWORD v34; // [esp+4Ch] [ebp-530h] BYREF
  unsigned int **v35; // [esp+50h] [ebp-52Ch]
  unsigned int v36; // [esp+54h] [ebp-528h] BYREF
  HANDLE hFile; // [esp+58h] [ebp-524h]
  DWORD NumberOfBytesWritten; // [esp+5Ch] [ebp-520h] BYREF
  int v39; // [esp+60h] [ebp-51Ch] BYREF
  DWORD v40; // [esp+64h] [ebp-518h] BYREF
  DWORD v41; // [esp+68h] [ebp-514h] BYREF
  char v42[12]; // [esp+6Ch] [ebp-510h] BYREF
  char Buffer[520]; // [esp+78h] [ebp-504h] BYREF
  CHAR String1[260]; // [esp+280h] [ebp-2FCh] BYREF
  char v45[500]; // [esp+384h] [ebp-1F8h] BYREF

  v2 = this; /*0x45ade6*/
  v35 = this; /*0x45ade9*/
  lstrcpyA(String1, lpString2); /*0x45aded*/
  lstrcatA(String1, ".txt"); /*0x45ae00*/
  v3 = 0; /*0x45ae0c*/
  if ( MEMORY[0xB33A04] ) /*0x45ae06*/
  {
    if ( MEMORY[0xB33A04]->vtbl->FindFile(MEMORY[0xB33A04], String1, 0, 0, 0xFFFFFFFF) ) /*0x45ae23*/
      DeleteFileA(String1); /*0x45ae31*/
  }
  result = CreateFileA(String1, 0xC0000000, 0, 0, 4, 0x80, 0); /*0x45ae4e*/
  v5 = result; /*0x45ae54*/
  hFile = result; /*0x45ae59*/
  if ( result != (HANDLE)0xFFFFFFFF )
  {
    v28 = 0; /*0x45ae90*/
    v27 = 0; /*0x45ae94*/
    v29 = 0xFFFF; /*0x45ae98*/
    _sprintf(Buffer, "  %-8s %-5s %-8s %02s %-40s  %s\r\n\r\n", "Form ID", "Size", "Flags", "V", "Name", "Changes"); /*0x45ae9f*/
    WriteFile(v5, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0); /*0x45aec9*/
    v6 = (*v2)[1]; /*0x45aed1*/
    v7 = 0; /*0x45aed4*/
    if ( v6 ) /*0x45aed8*/
    {
      v8 = (_DWORD *)(*v2)[2]; /*0x45aedd*/
      while ( !*v8 ) /*0x45aee2*/
      {
        ++v7; /*0x45aee4*/
        ++v8; /*0x45aee7*/
        if ( v7 >= v6 ) /*0x45aeec*/
          goto LABEL_9; /*0x45aeec*/
      }
      v9 = *(_DWORD *)((*v2)[2] + 4 * v7); /*0x45af3a*/
    }
    else
    {
LABEL_9:
      v9 = 0; /*0x45aeee*/
    }
    v36 = v9; /*0x45aef2*/
    if ( v9 )
    {
      while ( 1 )
      {
        sub_452800(*v2, &v36, (_BYTE *)&v25 + 1, &v39); /*0x45af11*/
        v10 = v39; /*0x45af1c*/
        v33 = v39; /*0x45af20*/
        if ( HIBYTE(v25) ) /*0x45af24*/
        {
          if ( HIBYTE(v25) == 0x45 ) /*0x45af45*/
            _sprintf(v42, "Buffer"); /*0x45af4d*/
          else
            _sprintf(v42, "%s", *(const char **)(0xC * HIBYTE(v25) + 0xB05E04)); /*0x45af6b*/
        }
        else
        {
          _sprintf(v42, "Form"); /*0x45af30*/
        }
        _sprintf(Buffer, "%ss:\r\n\r\n", v42); /*0x45af82*/
        WriteFile(v5, Buffer, strlen(Buffer), &v40, 0); /*0x45afab*/
        v31 = 0; /*0x45afbd*/
        v30 = 0; /*0x45afc1*/
        v32 = 0xFFFF; /*0x45afc5*/
        v11 = 0xFFFF; /*0x45afca*/
        if ( v10 ) /*0x45afca*/
          break; /*0x45afca*/
LABEL_41:
        _sprintf(
          Buffer,
          "\r\nTotal %s Num: %i  Total %s Size: %i  Min %s Size: %i  Max %s Size: %i  Average %s Size: %.2f\r\n\r\n",
          v42,
          v30,
          v42,
          v31,
          v42,
          (unsigned __int16)v11,
          v42,
          HIWORD(v11),
          v42,
          (double)v31 / (double)v30);
        WriteFile(v5, Buffer, strlen(Buffer), &v34, 0); /*0x45b1cd*/
        if ( HIWORD(v11) > HIWORD(v29) ) /*0x45b1d8*/
          HIWORD(v29) = HIWORD(v11); /*0x45b1da*/
        if ( (unsigned __int16)v11 < (unsigned __int16)v29 ) /*0x45b1e4*/
          LOWORD(v29) = v11; /*0x45b1e6*/
        v28 += v31; /*0x45b1f3*/
        v27 += v30; /*0x45b1f7*/
        v2 = v35; /*0x45b200*/
        if ( !v36 ) /*0x45b204*/
        {
          v3 = v28; /*0x45b20a*/
          goto LABEL_47; /*0x45b20a*/
        }
      }
      while ( 1 ) /*0x45afd4*/
      {
        v12 = *(_DWORD **)v33; /*0x45afd4*/
        if ( *(_DWORD *)v33 ) /*0x45afd4*/
          break; /*0x45afd4*/
LABEL_40:
        v33 = *(_DWORD *)(v33 + 4); /*0x45b151*/
        if ( !v33 ) /*0x45b15e*/
          goto LABEL_41; /*0x45b15e*/
      }
      v13 = TESForm_LookupByFormID(*v12); /*0x45afe6*/
      v14 = *((_WORD *)v12 + 5); /*0x45afe8*/
      if ( v14 > HIWORD(v11) ) /*0x45aff2*/
        HIWORD(v32) = *((_WORD *)v12 + 5); /*0x45aff4*/
      if ( v14 < (unsigned __int16)v11 ) /*0x45affc*/
        LOWORD(v32) = v14; /*0x45affe*/
      v15 = *(_DWORD *)((char *)v12 + 5); /*0x45b003*/
      ++v30; /*0x45b006*/
      v16 = v14; /*0x45b00b*/
      v17 = *((_BYTE *)v12 + 4); /*0x45b00e*/
      v31 += v16; /*0x45b012*/
      sub_453A90(v45, v13, v15, v17, 0); /*0x45b029*/
      v18 = 0; /*0x45b02e*/
      Name = 0; /*0x45b03d*/
      v19 = OblivionDynamicCast( /*0x45b051*/
              v13,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESFullName `RTTI Type Descriptor',
              0);
      NumberOfBytesWritten = (DWORD)v19; /*0x45b055*/
      v20 = (TESObjectREFR *)OblivionDynamicCast( /*0x45b059*/
                               v13,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                               0);
      if ( !v13 ) /*0x45b063*/
      {
        _sprintf( /*0x45b10d*/
          Buffer,
          "  %08X %5i %08X %2i %-40s- %s\r\n",
          *v12,
          *((unsigned __int16 *)v12 + 5),
          *(_DWORD *)((char *)v12 + 5),
          *((unsigned __int8 *)v12 + 9),
          "NOT LOADED",
          v45);
LABEL_39:
        WriteFile(hFile, Buffer, strlen(Buffer), &v41, 0); /*0x45b129*/
        v11 = v32; /*0x45b148*/
        v5 = hFile; /*0x45b14d*/
        goto LABEL_40; /*0x45b14d*/
      }
      if ( v20 ) /*0x45b06b*/
      {
        Name = TESObjectREFR_GetName(v20); /*0x45b074*/
        v18 = Name; /*0x45b078*/
      }
      if ( !v19 ) /*0x45b07c*/
      {
LABEL_34:
        if ( v18 && strcmp(v18, EmptyString) ) /*0x45b0ba*/
        {
          _sprintf( /*0x45b0e3*/
            Buffer,
            "  %08X %5i %08X %2i %-40s- %s\r\n",
            *v12,
            *((unsigned __int16 *)v12 + 5),
            *(_DWORD *)((char *)v12 + 5),
            *((unsigned __int8 *)v12 + 9),
            Name,
            v45);
        }
        else
        {
          v24 = v13->vtbl->GetEditorName(v13); /*0x45b0d3*/
          _sprintf( /*0x45b0d4*/
            Buffer,
            "  %08X %5i %08X %2i %-40s- %s\r\n",
            *v12,
            *((unsigned __int16 *)v12 + 5),
            *(_DWORD *)((char *)v12 + 5),
            *((unsigned __int8 *)v12 + 9),
            v24,
            v45);
        }
        goto LABEL_39; /*0x45b0d4*/
      }
      if ( v18 ) /*0x45b080*/
      {
        if ( strcmp(v18, EmptyString) ) /*0x45b08e*/
        {
LABEL_33:
          v18 = Name; /*0x45b0a6*/
          goto LABEL_34; /*0x45b0a6*/
        }
        v19 = (void *)NumberOfBytesWritten; /*0x45b092*/
      }
      v21 = *((const char **)v19 + 1); /*0x45b096*/
      if ( !v21 ) /*0x45b09b*/
        v21 = EmptyString; /*0x45b09d*/
      Name = (char *)v21; /*0x45b0a2*/
      goto LABEL_33; /*0x45b0a2*/
    }
LABEL_47:
    WriteFile(v5, "Extra Stats:\r\n\r\n", 0x10, &v34, 0); /*0x45b20e*/
    v22 = v2[1]; /*0x45b223*/
    if ( v22 ) /*0x45b228*/
    {
      do /*0x45b27c*/
      {
        v23 = *v22; /*0x45b230*/
        if ( *v22 ) /*0x45b230*/
        {
          _sprintf(Buffer, "  %8i      %s\r\n", *(_DWORD *)v23, *(const char **)(v23 + 4)); /*0x45b247*/
          WriteFile(v5, Buffer, strlen(Buffer), &v34, 0); /*0x45b26f*/
          v3 += *(_DWORD *)v23; /*0x45b275*/
        }
        v22 = (unsigned int *)v22[1]; /*0x45b277*/
      }
      while ( v22 ); /*0x45b27c*/
      v28 = v3; /*0x45b27e*/
    }
    _sprintf(
      Buffer,
      "\r\n\r\nTotal Num: %i  Total Size: %i  Min Size: %i  Max Size: %i  Average Size: %.2f\r\n",
      v27,
      v3,
      (unsigned __int16)v29,
      HIWORD(v29),
      (double)v28 / (double)v27);
    WriteFile(v5, Buffer, strlen(Buffer), &v34, 0); /*0x45b2d9*/
    return (HANDLE)CloseHandle(v5); /*0x45b2e0*/
  }
  return result; /*0x45b2e6*/
}
