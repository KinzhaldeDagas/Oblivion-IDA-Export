int *__cdecl sub_7B8200(int *a1, char *Src, char a3, char a4)
{
  NiObject *v4; // esi
  int v5; // ecx
  bool v6; // zf
  UInt32 v7; // eax
  NiSourceTexture *TextureByFilename; // eax
  NiObject *v9; // eax
  UInt32 m_uiRefCount; // ecx
  NiObject *v11; // edi
  UInt32 v13; // [esp+10h] [ebp-210h] BYREF
  int v14; // [esp+14h] [ebp-20Ch]
  int *v15; // [esp+18h] [ebp-208h]
  char v16[500]; // [esp+1Ch] [ebp-204h] BYREF
  int v17; // [esp+21Ch] [ebp-4h]

  v4 = 0;
  v14 = 0;
  v15 = a1;
  v13 = 0;
  v5 = dword_B42EBC;
  v6 = dword_B42EBC == 0;
  v17 = 1;
  if ( !v6 )
  {
    v7 = (*(int (__thiscall **)(int, char *, _DWORD))(*(_DWORD *)v5 + 4))(v5, Src, 0);
    if ( v7 )
    {
      v4 = (NiObject *)v7;
      v13 = v7;
      InterlockedIncrement((volatile LONG *)(v7 + 4));
    }
    v5 = dword_B42EBC;
  }
  if ( !a3 && v5 )
    goto LABEL_22;
  if ( !v4 )
  {
    if ( NiFile_CanOpenFileWithMode_Indirect((int)Src, 0) )
    {
      TextureByFilename = NiSourceTexture::LoadTextureByFilename(Src, (PixelLayout *)dword_B256D0, 1u);
      NiSmartPointer_Set__((Ni2DBuffer **)&v13, (Ni2DBuffer *)TextureByFilename);
      v4 = (NiObject *)v13;
      if ( dword_B42EBC )
        (*(void (__thiscall **)(int, char *, UInt32))(*(_DWORD *)dword_B42EBC + 8))(dword_B42EBC, Src, v13);
    }
  }
  if ( a3
    && a4
    && v4
    && (v9 = NiRTTI_Cast((BSStringT *)dword_B3F95C, v4),
        m_uiRefCount = v4[4].members.m_uiRefCount,
        v11 = v9,
        m_uiRefCount)
    && (unsigned int)(*(int (__thiscall **)(UInt32))(*(_DWORD *)m_uiRefCount + 0x10))(m_uiRefCount) <= 1 )
  {
    if ( v11 )
      _sprintf(
        v16,
        "TEXTURE ERROR : texture does not contain mipmaps & will not be used : %s",
        (const char *)v11[7].__vftable);
    else
      _sprintf(v16, "TEXTURE ERROR : texture does not contain mipmaps & will not be used : NOTASOURCETEXTURE");
    if ( dword_B42E8C )
      dword_B42E8C(v16, 0);
    *a1 = 0;
    v14 = 1;
    LOBYTE(v17) = 0;
    sub_7016A0((NiD3DVertexShader *)&v13);
  }
  else
  {
LABEL_22:
    *a1 = (int)v4;
    if ( v4 )
      InterlockedIncrement((volatile LONG *)&v4->members);
    v14 = 1;
    LOBYTE(v17) = 0;
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)&v4->members) )
        v4->__vftable->super.Destructor((NiRefObject *)v4, 1);
    }
  }
  return a1;
}
