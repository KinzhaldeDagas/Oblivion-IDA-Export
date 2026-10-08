void __thiscall sub_4D1130(TESForm *this, BSRenderedTexture *a2)
{
  BSRenderedTexture *v3; // ebp
  NiDX9Renderer *v4; // eax
  void (__stdcall *v5)(LPCSTR, LPSECURITY_ATTRIBUTES); // ebx
  char *m_data; // esi
  NiRenderedTexture *InnerTexture; // eax
  BSRenderedTexture *v8; // [esp+4h] [ebp-30h]
  char *v9; // [esp+8h] [ebp-2Ch]
  BSStringT lpPathName; // [esp+20h] [ebp-14h] BYREF
  int v11; // [esp+30h] [ebp-4h]

  v3 = a2; /*0x4d1159*/
  if ( a2 ) /*0x4d1161*/
  {
    v4 = unk_B43104; /*0x4d1167*/
    a2 = 0; /*0x4d117d*/
    if ( D3DXCreateTexture_0((int)v4->member.device, 0x100, 0x100, 1, 0, 0x14, 2, (int)&a2) >= 0 ) /*0x4d1194*/
    {
      if ( a2 ) /*0x4d119a*/
      {
        lpPathName.m_data = 0; /*0x4d119c*/
        lpPathName.m_dataLen = 0; /*0x4d11a0*/
        lpPathName.m_bufLen = 0; /*0x4d11a5*/
        v11 = 0; /*0x4d11b1*/
        sub_4CFF80(this, &lpPathName); /*0x4d11b5*/
        v5 = (void (__stdcall *)(LPCSTR, LPSECURITY_ATTRIBUTES))CreateDirectoryA; /*0x4d11ba*/
        CreateDirectoryA(".\\Data\\Textures\\Maps\\", 0); /*0x4d11c6*/
        v5(lpPathName.m_data, 0); /*0x4d11ce*/
        sub_4D0040((int)this, &lpPathName); /*0x4d11d7*/
        m_data = lpPathName.m_data; /*0x4d11dc*/
        v9 = lpPathName.m_data; /*0x4d11e4*/
        v8 = a2; /*0x4d11e5*/
        InnerTexture = BSRenderedTexture::GetInnerTexture(v3); /*0x4d11ed*/
        sub_4816E0((int)InnerTexture, 0x100, (int)v8, (int)v9); /*0x4d11f3*/
        (*((void (__stdcall **)(BSRenderedTexture *))a2->vtbl + 2))(a2); /*0x4d1205*/
        FormHeapFree((unsigned int)m_data); /*0x4d1208*/
      }
    }
  }
}
