void __thiscall sub_4D1130(TESForm *this, BSRenderedTexture *a2)
{
  BSRenderedTexture *v3; // ebp
  NiDX9Renderer *v4; // eax
  void (__stdcall *v5)(LPCSTR, LPSECURITY_ATTRIBUTES); // ebx
  char *m_data; // esi
  NiRenderedTexture *InnerTexture; // eax
  int *v8; // [esp+4h] [ebp-30h]
  char *v9; // [esp+8h] [ebp-2Ch]
  BSStringT lpPathName; // [esp+20h] [ebp-14h] BYREF
  int v11; // [esp+30h] [ebp-4h]

  v3 = a2;
  if ( a2 )
  {
    v4 = dword_B43104;
    a2 = 0;
    if ( D3DXCreateTexture_0(v4->member.device, 0x100, 0x100, 1, 0, 0x14, 2, &a2) >= 0 )
    {
      if ( a2 )
      {
        lpPathName.m_data = 0;
        lpPathName.m_dataLen = 0;
        lpPathName.m_bufLen = 0;
        v11 = 0;
        sub_4CFF80(this, &lpPathName);
        v5 = (void (__stdcall *)(LPCSTR, LPSECURITY_ATTRIBUTES))CreateDirectoryA;
        CreateDirectoryA(".\\Data\\Textures\\Maps\\", 0);
        v5(lpPathName.m_data, 0);
        sub_4D0040((int)this, &lpPathName);
        m_data = lpPathName.m_data;
        v9 = lpPathName.m_data;
        v8 = (int *)a2;
        InnerTexture = BSRenderedTexture::GetInnerTexture(v3);
        sub_4816E0((int)InnerTexture, 0x100, (int)v8, (int)v9);
        (*((void (__stdcall **)(BSRenderedTexture *))a2->vtbl + 2))(a2);
        FormHeapFree((unsigned int)m_data);
      }
    }
  }
}
