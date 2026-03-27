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
  int v17; // eax
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

  v2 = this;
  v35 = this;
  lstrcpyA(String1, lpString2);
  lstrcatA(String1, ".txt");
  v3 = 0;
  if ( OBSE_g_FileFinder )
  {
    if ( OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, String1, 0, 0, 0xFFFFFFFF) )
      DeleteFileA(String1);
  }
  result = CreateFileA(String1, 0xC0000000, 0, 0, 4, 0x80, 0);
  v5 = result;
  hFile = result;
  if ( result != (HANDLE)0xFFFFFFFF )
  {
    v28 = 0;
    v27 = 0;
    v29 = 0xFFFF;
    _sprintf(Buffer, "  %-8s %-5s %-8s %02s %-40s  %s\r\n\r\n", "Form ID", "Size", "Flags", "V", "Name", "Changes");
    WriteFile(v5, Buffer, strlen(Buffer), &NumberOfBytesWritten, 0);
    v6 = (*v2)[1];
    v7 = 0;
    if ( v6 )
    {
      v8 = (_DWORD *)(*v2)[2];
      while ( !*v8 )
      {
        ++v7;
        ++v8;
        if ( v7 >= v6 )
          goto LABEL_9;
      }
      v9 = *(_DWORD *)((*v2)[2] + 4 * v7);
    }
    else
    {
LABEL_9:
      v9 = 0;
    }
    v36 = v9;
    if ( v9 )
    {
      while ( 1 )
      {
        sub_452800(*v2, &v36, (_BYTE *)&v25 + 1, &v39);
        v10 = v39;
        v33 = v39;
        if ( HIBYTE(v25) )
        {
          if ( HIBYTE(v25) == 0x45 )
            _sprintf(v42, "Buffer");
          else
            _sprintf(v42, "%s", *(const char **)(0xC * HIBYTE(v25) + 0xB05E04));
        }
        else
        {
          _sprintf(v42, "Form");
        }
        _sprintf(Buffer, "%ss:\r\n\r\n", v42);
        WriteFile(v5, Buffer, strlen(Buffer), &v40, 0);
        v31 = 0;
        v30 = 0;
        v32 = 0xFFFF;
        v11 = 0xFFFF;
        if ( v10 )
          break;
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
        WriteFile(v5, Buffer, strlen(Buffer), &v34, 0);
        if ( HIWORD(v11) > HIWORD(v29) )
          HIWORD(v29) = HIWORD(v11);
        if ( (unsigned __int16)v11 < (unsigned __int16)v29 )
          LOWORD(v29) = v11;
        v28 += v31;
        v27 += v30;
        v2 = v35;
        if ( !v36 )
        {
          v3 = v28;
          goto LABEL_47;
        }
      }
      while ( 1 )
      {
        v12 = *(_DWORD **)v33;
        if ( *(_DWORD *)v33 )
          break;
LABEL_40:
        v33 = *(_DWORD *)(v33 + 4);
        if ( !v33 )
          goto LABEL_41;
      }
      v13 = TESForm_LookupByFormID(*v12);
      v14 = *((_WORD *)v12 + 5);
      if ( v14 > HIWORD(v11) )
        HIWORD(v32) = *((_WORD *)v12 + 5);
      if ( v14 < (unsigned __int16)v11 )
        LOWORD(v32) = v14;
      v15 = *(_DWORD *)((char *)v12 + 5);
      ++v30;
      v16 = v14;
      v17 = *((unsigned __int8 *)v12 + 4);
      v31 += v16;
      sub_453A90(v45, v13, v15, v17, 0);
      v18 = 0;
      Name = 0;
      v19 = OblivionDynamicCast(
              v13,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESFullName `RTTI Type Descriptor',
              0);
      NumberOfBytesWritten = (DWORD)v19;
      v20 = (TESObjectREFR *)OblivionDynamicCast(
                               v13,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                               0);
      if ( !v13 )
      {
        _sprintf(
          Buffer,
          "  %08X %5i %08X %2i %-40s- %s\r\n",
          *v12,
          *((unsigned __int16 *)v12 + 5),
          *(_DWORD *)((char *)v12 + 5),
          *((unsigned __int8 *)v12 + 9),
          "NOT LOADED",
          v45);
LABEL_39:
        WriteFile(hFile, Buffer, strlen(Buffer), &v41, 0);
        v11 = v32;
        v5 = hFile;
        goto LABEL_40;
      }
      if ( v20 )
      {
        Name = TESObjectREFR_GetName(v20);
        v18 = Name;
      }
      if ( !v19 )
      {
LABEL_34:
        if ( v18 && strcmp(v18, EmptyString) )
        {
          _sprintf(
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
          v24 = v13->vtbl->GetEditorName(v13);
          _sprintf(
            Buffer,
            "  %08X %5i %08X %2i %-40s- %s\r\n",
            *v12,
            *((unsigned __int16 *)v12 + 5),
            *(_DWORD *)((char *)v12 + 5),
            *((unsigned __int8 *)v12 + 9),
            v24,
            v45);
        }
        goto LABEL_39;
      }
      if ( v18 )
      {
        if ( strcmp(v18, EmptyString) )
        {
LABEL_33:
          v18 = Name;
          goto LABEL_34;
        }
        v19 = (void *)NumberOfBytesWritten;
      }
      v21 = *((const char **)v19 + 1);
      if ( !v21 )
        v21 = EmptyString;
      Name = (char *)v21;
      goto LABEL_33;
    }
LABEL_47:
    WriteFile(v5, "Extra Stats:\r\n\r\n", 0x10, &v34, 0);
    v22 = v2[1];
    if ( v22 )
    {
      do
      {
        v23 = *v22;
        if ( *v22 )
        {
          _sprintf(Buffer, "  %8i      %s\r\n", *(_DWORD *)v23, *(const char **)(v23 + 4));
          WriteFile(v5, Buffer, strlen(Buffer), &v34, 0);
          v3 += *(_DWORD *)v23;
        }
        v22 = (unsigned int *)v22[1];
      }
      while ( v22 );
      v28 = v3;
    }
    _sprintf(
      Buffer,
      "\r\n\r\nTotal Num: %i  Total Size: %i  Min Size: %i  Max Size: %i  Average Size: %.2f\r\n",
      v27,
      v3,
      (unsigned __int16)v29,
      HIWORD(v29),
      (double)v28 / (double)v27);
    WriteFile(v5, Buffer, strlen(Buffer), &v34, 0);
    return (HANDLE)CloseHandle(v5);
  }
  return result;
}
