void __thiscall sub_4D1230(TESForm *this, BSRenderedTexture *a2, int a3, int a4)
{
  BSRenderedTexture *v5; // ebp
  NiDX9Renderer *v6; // eax
  void (__stdcall *v7)(LPCSTR, LPSECURITY_ATTRIBUTES); // ebx
  char *m_data; // esi
  NiRenderedTexture *InnerTexture; // eax
  int *v10; // [esp+4h] [ebp-30h]
  char *v11; // [esp+8h] [ebp-2Ch]
  BSStringT lpPathName; // [esp+20h] [ebp-14h] BYREF
  int v13; // [esp+30h] [ebp-4h]

  v5 = a2;
  if ( a2 )
  {
    v6 = dword_B43104;
    a2 = 0;
    if ( D3DXCreateTexture_0(v6->member.device, 0x100, 0x100, 1, 0, 0x14, 2, &a2) >= 0 )
    {
      if ( a2 )
      {
        lpPathName.m_data = 0;
        lpPathName.m_dataLen = 0;
        lpPathName.m_bufLen = 0;
        v13 = 0;
        sub_4CFF80(this, &lpPathName);
        v7 = (void (__stdcall *)(LPCSTR, LPSECURITY_ATTRIBUTES))CreateDirectoryA;
        CreateDirectoryA(".\\Data\\Textures\\Maps\\", 0);
        v7(lpPathName.m_data, 0);
        sub_4D0100((int)this, &lpPathName, a3, a4);
        m_data = lpPathName.m_data;
        v11 = lpPathName.m_data;
        v10 = (int *)a2;
        InnerTexture = BSRenderedTexture::GetInnerTexture(v5);
        sub_4816E0((int)InnerTexture, 0x100, (int)v10, (int)v11);
        (*((void (__stdcall **)(BSRenderedTexture *))a2->vtbl + 2))(a2);
        FormHeapFree((unsigned int)m_data);
      }
    }
  }
}
