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

  v4 = 0xFFFFFFFF; /*0x4816f1*/
  v5 = sub_47F340(a1, *(_DWORD *)&MEMORY[0xB33E90][0x1248], 0); /*0x4816f4*/
  if ( v5 ) /*0x4816fe*/
  {
    pixelData = v5->members.pixelData; /*0x481705*/
    if ( pixelData ) /*0x48170a*/
    {
      v7 = *((_DWORD *)pixelData + 0x14) + **((_DWORD **)pixelData + 0x17); /*0x481716*/
      if ( v7 ) /*0x481719*/
      {
        v8 = a3; /*0x481720*/
        if ( a3 ) /*0x481726*/
        {
          if ( (*(int (__stdcall **)(int, _DWORD, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)a3 + 0x4C))(a3, 0, v20, 0, 0) >= 0 ) /*0x481741*/
          {
            v9 = *((_DWORD *)pixelData + 0x19); /*0x48174b*/
            v10 = v20[1]; /*0x48174e*/
            v11 = 0; /*0x481752*/
            v19 = v9; /*0x481756*/
            if ( a2 > 0 ) /*0x48175a*/
            {
              v12 = a2 * v9; /*0x481762*/
              v13 = (char *)(v7 + 2); /*0x481765*/
              v18 = v7 + 2; /*0x48176c*/
              do /*0x4817d8*/
              {
                for ( i = 0; i < a2; ++i ) /*0x481770*/
                {
                  *(_BYTE *)(4 * i + v11 * v20[0] + v10) = v13[0xFFFFFFFE]; /*0x481786*/
                  *(_BYTE *)(4 * i + v11 * v20[0] + v10 + 1) = v13[0xFFFFFFFF]; /*0x481796*/
                  v15 = *v13; /*0x48179e*/
                  v13 += v19; /*0x4817a4*/
                  *(_BYTE *)(4 * i + v11 * v20[0] + v10 + 2) = v15; /*0x4817aa*/
                  v16 = 4 * i + v11 * v20[0]; /*0x4817b5*/
                  *(_BYTE *)(v16 + v10 + 3) = 0; /*0x4817c0*/
                }
                v13 = (char *)(v12 + v18); /*0x4817cb*/
                ++v11; /*0x4817cf*/
                v18 += v12; /*0x4817d4*/
              }
              while ( v11 < a2 ); /*0x4817d8*/
              v8 = a3; /*0x4817da*/
            }
            (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)v8 + 0x50))(v8, 0); /*0x4817e6*/
            v4 = D3DXSaveTextureToFileA_0(a4, 4, v8, 0); /*0x4817f7*/
          }
        }
      }
    }
  }
  return v4 >= 0; /*0x481803*/
}
