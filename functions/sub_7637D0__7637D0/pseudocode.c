void __userpurge sub_7637D0(NiDX9Renderer *a1@<ecx>, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  void *v9; // eax
  _DWORD *v10; // esi
  D3DFORMAT v11; // eax
  int retaddr; // [esp+14h] [ebp+0h]

  a1->member.defaultRTGroup->vtbl->GetPixelFormat(a1->member.defaultRTGroup, 0); /*0x7637e7*/
  v9 = (void *)FormHeapAlloc(0x44u); /*0x76380c*/
  if ( v9 ) /*0x763816*/
  {
    v10 = sub_70F010(v9, &unk_B263A0); /*0x763824*/
    v11 = NiDX9Renderer_ConvertPixelFormatToD3DFormat(v10); /*0x763827*/
    v10[4] = 0; /*0x76382c*/
  }
  else
  {
    v10 = 0; /*0x763838*/
    v11 = NiDX9Renderer_ConvertPixelFormatToD3DFormat(0); /*0x76383b*/
    *(_DWORD *)0x10 = 0; /*0x763840*/
  }
  v10[3] = v11; /*0x763d0c*/
  def_763803(0, retaddr, (unsigned int)v10, a2, a3, a4, a5, a6, a7, a8, a9); /*0x763d10*/
}
