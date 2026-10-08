void __thiscall sub_4D1230(TESForm *this, BSRenderedTexture *a2, int a3, int a4)
{
  BSRenderedTexture *v5; // ebp
  NiDX9Renderer *v6; // eax
  void (__stdcall *v7)(LPCSTR, LPSECURITY_ATTRIBUTES); // ebx
  char *m_data; // esi
  NiRenderedTexture *InnerTexture; // eax
  BSRenderedTexture *v10; // [esp+4h] [ebp-30h]
  char *v11; // [esp+8h] [ebp-2Ch]
  BSStringT lpPathName; // [esp+20h] [ebp-14h] BYREF
  int v13; // [esp+30h] [ebp-4h]

  v5 = a2; /*0x4d1259*/
  if ( a2 ) /*0x4d1261*/
  {
    v6 = unk_B43104; /*0x4d1267*/
    a2 = 0; /*0x4d127d*/
    if ( D3DXCreateTexture_0((int)v6->member.device, 0x100, 0x100, 1, 0, 0x14, 2, (int)&a2) >= 0 ) /*0x4d1294*/
    {
      if ( a2 ) /*0x4d129e*/
      {
        lpPathName.m_data = 0; /*0x4d12a0*/
        lpPathName.m_dataLen = 0; /*0x4d12a4*/
        lpPathName.m_bufLen = 0; /*0x4d12a9*/
        v13 = 0; /*0x4d12b5*/
        sub_4CFF80(this, &lpPathName); /*0x4d12b9*/
        v7 = (void (__stdcall *)(LPCSTR, LPSECURITY_ATTRIBUTES))CreateDirectoryA; /*0x4d12be*/
        CreateDirectoryA(".\\Data\\Textures\\Maps\\", 0); /*0x4d12ca*/
        v7(lpPathName.m_data, 0); /*0x4d12d2*/
        sub_4D0100((int)this, &lpPathName, a3, a4); /*0x4d12e5*/
        m_data = lpPathName.m_data; /*0x4d12ea*/
        v11 = lpPathName.m_data; /*0x4d12f2*/
        v10 = a2; /*0x4d12f3*/
        InnerTexture = BSRenderedTexture::GetInnerTexture(v5); /*0x4d12fb*/
        sub_4816E0((int)InnerTexture, 0x100, (int)v10, (int)v11); /*0x4d1301*/
        (*((void (__stdcall **)(BSRenderedTexture *))a2->vtbl + 2))(a2); /*0x4d1313*/
        FormHeapFree((unsigned int)m_data); /*0x4d1316*/
      }
    }
  }
}
