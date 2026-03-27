int *__cdecl sub_591360(int *a1, char *Source, unsigned int a3, int a4, float *a5, float a6, UInt32 a7)
{
  UInt32 v7; // esi
  UInt32 v8; // edi
  Ni2DBuffer *v9; // eax
  NiSourceTexture *TextureByFilename; // eax
  UInt32 v11; // esi
  int *v12; // esi
  int *v14; // ebx
  LONG (__stdcall *v15)(volatile LONG *); // edi
  void (__thiscall ***v16)(_DWORD, int); // esi
  UInt32 v17; // [esp+20h] [ebp-120h] BYREF
  int *v18; // [esp+24h] [ebp-11Ch]
  int v19; // [esp+28h] [ebp-118h]
  char ArgList[260]; // [esp+2Ch] [ebp-114h] BYREF
  int v21; // [esp+13Ch] [ebp-4h]

  v7 = 0;
  v18 = a1;
  v19 = 0;
  v21 = 1;
  v8 = dword_B35300;
  v17 = 0;
  LOBYTE(v21) = 3;
  if ( a7 )
  {
    v7 = a7;
    InterlockedIncrement((volatile LONG *)(a7 + 4));
  }
  else
  {
    memset(ArgList, 0, sizeof(ArgList));
    sub_591030(Source, a5, a6, ArgList);
    if ( ArgList[0] )
    {
      if ( !v8
        || (v9 = (Ni2DBuffer *)(*(int (__thiscall **)(UInt32, char *, _DWORD))(*(_DWORD *)v8 + 4))(v8, ArgList, 0),
            NiSmartPointer_Set__((Ni2DBuffer **)&v17, v9),
            (v7 = v17) == 0) )
      {
        if ( OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, ArgList, 0, 0, 0xFFFFFFFF) )
        {
          TextureByFilename = NiSourceTexture::LoadTextureByFilename(ArgList, (PixelLayout *)dword_B256D0, 1);
          NiSmartPointer_Set__((Ni2DBuffer **)&v17, (Ni2DBuffer *)TextureByFilename);
          v11 = v17;
          if ( v17 )
          {
            if ( v8 )
            {
              if ( !_mbsstr((const unsigned __int8 *)ArgList, "oading\\load_") )
                (*(void (__thiscall **)(UInt32, char *, UInt32))(*(_DWORD *)v8 + 8))(v8, ArgList, v11);
            }
            v12 = v18;
            sub_4A19F0(v18, (int *)&v17);
            v19 = 1;
            LOBYTE(v21) = 2;
            sub_7016A0((NiD3DVertexShader *)&v17);
            LOBYTE(v21) = 1;
          }
          else
          {
            sub_404EC0("*** ERROR: Could not create ptexture '%s'!", ArgList);
            v12 = v18;
            *v18 = 0;
            v19 = 1;
            LOBYTE(v21) = 2;
            sub_7016A0((NiD3DVertexShader *)&v17);
            LOBYTE(v21) = 1;
          }
          BSStringT_Clear(&a3);
          LOBYTE(v21) = 0;
          sub_7016A0((NiD3DVertexShader *)&a7);
          return v12;
        }
      }
    }
  }
  v14 = v18;
  *v18 = v7;
  if ( v7 )
    InterlockedIncrement((volatile LONG *)(v7 + 4));
  v15 = InterlockedDecrement;
  v19 = 1;
  LOBYTE(v21) = 2;
  if ( v7 )
  {
    if ( !v15((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v7)(v7, 1);
  }
  FormHeapFree(a3);
  v16 = (void (__thiscall ***)(_DWORD, int))a7;
  LOBYTE(v21) = 0;
  if ( a7 )
  {
    if ( !v15((volatile LONG *)(a7 + 4)) )
      (**v16)(v16, 1);
  }
  return v14;
}
