BOOL __cdecl sub_4816E0(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  NiSourceTexture *v5; // eax
  NiPixelData *pixelData; // esi
  int v7; // ebp
  int v8; // ebx
  int v9; // esi
  int v10; // edi
  int v11; // ecx
  int v12; // eax
  char *v13; // esi
  int i; // ebp
  char v15; // bl
  int v16; // edx
  int v18; // [esp+14h] [ebp-14h]
  int v19; // [esp+18h] [ebp-10h]
  _DWORD v20[2]; // [esp+20h] [ebp-8h] BYREF

  v4 = 0xFFFFFFFF;
  v5 = sub_47F340(a1, dword_B350D8, 0);
  if ( v5 )
  {
    pixelData = v5->members.pixelData;
    if ( pixelData )
    {
      v7 = *((_DWORD *)pixelData + 0x14) + **((_DWORD **)pixelData + 0x17);
      if ( v7 )
      {
        v8 = a3;
        if ( a3 )
        {
          if ( (*(int (__stdcall **)(int, _DWORD, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)a3 + 0x4C))(a3, 0, v20, 0, 0) >= 0 )
          {
            v9 = *((_DWORD *)pixelData + 0x19);
            v10 = v20[1];
            v11 = 0;
            v19 = v9;
            if ( a2 > 0 )
            {
              v12 = a2 * v9;
              v13 = (char *)(v7 + 2);
              v18 = v7 + 2;
              do
              {
                for ( i = 0; i < a2; ++i )
                {
                  *(_BYTE *)(4 * i + v11 * v20[0] + v10) = v13[0xFFFFFFFE];
                  *(_BYTE *)(4 * i + v11 * v20[0] + v10 + 1) = v13[0xFFFFFFFF];
                  v15 = *v13;
                  v13 += v19;
                  *(_BYTE *)(4 * i + v11 * v20[0] + v10 + 2) = v15;
                  v16 = 4 * i + v11 * v20[0];
                  *(_BYTE *)(v16 + v10 + 3) = 0;
                }
                v13 = (char *)(v12 + v18);
                ++v11;
                v18 += v12;
              }
              while ( v11 < a2 );
              v8 = a3;
            }
            (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v8 + 0x50))(v8, 0);
            v4 = D3DXSaveTextureToFileA_0(a4, 4, v8, 0);
          }
        }
      }
    }
  }
  return v4 >= 0;
}
