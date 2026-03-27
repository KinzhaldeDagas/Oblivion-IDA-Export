UInt32 *__stdcall sub_442890(UInt32 *a1, char *ArgList, char a3, char a4)
{
  UInt32 v4; // ecx
  int (__thiscall *v5)(UInt32, char *, _DWORD); // edx
  UInt32 v6; // ebp
  int v7; // eax
  UInt32 v8; // esi
  void (__stdcall *v9)(volatile LONG *); // ebp
  IOManager *v11; // esi
  char v12; // bl
  NiSourceTexture *TextureByFilename; // eax
  UInt32 v14; // esi
  UInt32 v15; // [esp+18h] [ebp-14h] BYREF
  int v16; // [esp+1Ch] [ebp-10h]
  int v17; // [esp+28h] [ebp-4h]

  v16 = 0;
  v15 = 0;
  v4 = dword_B35300;
  v5 = *(int (__thiscall **)(UInt32, char *, _DWORD))(*(_DWORD *)dword_B35300 + 4);
  v17 = 1;
  v6 = 0;
  v7 = v5(v4, ArgList, 0);
  v8 = v7;
  if ( v7 )
  {
    v9 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
    InterlockedIncrement((volatile LONG *)(v7 + 4));
    *a1 = v8;
    v9((volatile LONG *)(v8 + 4));
    v16 = 1;
    LOBYTE(v17) = 0;
    if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v8)(v8, 1);
    return a1;
  }
  else
  {
    if ( a4 )
      v6 = 6;
    if ( OBSE_g_FileFinder && OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, ArgList, 0, v6, 0xFFFFFFFF) || !a3 )
    {
      v11 = ioManager;
      if ( GetCurrentThreadId() == v11->members.currentThreadIDBoh )
      {
        v12 = 0;
      }
      else
      {
        sub_432860((volatile LONG *)v11);
        v12 = 1;
      }
      TextureByFilename = NiSourceTexture::LoadTextureByFilename(ArgList, (PixelLayout *)dword_B256D0, 1);
      NiSmartPointer_Set__((Ni2DBuffer **)&v15, (Ni2DBuffer *)TextureByFilename);
      if ( v12 )
        sub_432890((volatile LONG *)ioManager);
      v14 = v15;
      if ( v15 )
      {
        (*(void (__thiscall **)(UInt32, char *, UInt32))(*(_DWORD *)dword_B35300 + 8))(dword_B35300, ArgList, v15);
      }
      else if ( !a3 )
      {
        PrintError("TES::CreateTextureImage unable to create image for \"%s\".\r\n", ArgList);
      }
      *a1 = v14;
      if ( v14 )
        InterlockedIncrement((volatile LONG *)(v14 + 4));
      v16 = 1;
      LOBYTE(v17) = 0;
      if ( v14 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) )
          (**(void (__thiscall ***)(UInt32, int))v14)(v14, 1);
      }
      return a1;
    }
    else
    {
      *a1 = 0;
      return a1;
    }
  }
}
