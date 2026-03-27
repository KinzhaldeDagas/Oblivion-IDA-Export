void __usercall RecreateImageSpaceShader(int a1@<ebp>)
{
  int v1; // esi
  NiTPointerList__BSImageSpaceShader *v2; // esi
  BSTextureManager *v3; // esi
  _DWORD *v4; // eax
  BSTextureManager *v5; // eax
  NiTPointerList__BSImageSpaceShader *v6; // eax
  NiTPointerList__BSImageSpaceShader *v7; // eax
  NiDX9Renderer *v8; // [esp-4h] [ebp-20h]

  if ( byte_B42F31 )
  {
    sub_7B84E0();
    v1 = dword_B42EBC;
    NiTMap_Clear(*(_DWORD **)(dword_B42EBC + 0xC));
    NiTMap_Clear(*(_DWORD **)(v1 + 8));
    sub_7E30F0();
    sub_7F3BA0();
    if ( imageSpaceShaderList )
    {
      v2 = imageSpaceShaderList;
      ImageSpaceShaderList::Destroy(imageSpaceShaderList);
      FormHeapFree((unsigned int)v2);
      imageSpaceShaderList = 0;
    }
    if ( g_textureManager )
    {
      v3 = g_textureManager;
      BSTextureManager_Delete(g_textureManager);
      FormHeapFree((unsigned int)v3);
      g_textureManager = 0;
    }
    sub_7AB1D0(0);
    dword_B42EB8 = 0;
    v4 = (_DWORD *)FormHeapAlloc(0x48u);
    if ( v4 )
      v5 = (BSTextureManager *)BSTextureManager_Create(v4);
    else
      v5 = 0;
    v8 = dword_B43104;
    g_textureManager = v5;
    sub_7C2450(v5, a1, (int)v8);
    sub_7AB1D0(1);
    if ( dword_B43104 )
    {
      if ( ImageSpaceEffectEnabled )
      {
        v6 = (NiTPointerList__BSImageSpaceShader *)FormHeapAlloc(0x1Cu);
        if ( v6 )
          v7 = ImageSpaceshaderList::Create(v6);
        else
          v7 = 0;
        imageSpaceShaderList = v7;
      }
    }
  }
  else
  {
    sub_7BA0F0();
  }
}
