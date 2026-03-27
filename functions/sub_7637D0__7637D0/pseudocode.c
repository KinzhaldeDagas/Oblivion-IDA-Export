void __userpurge sub_7637D0(NiDX9Renderer *a1@<ecx>, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  void *v9; // eax
  _DWORD *v10; // esi
  signed int v11; // eax
  int retaddr; // [esp+14h] [ebp+0h]

  a1->member.defaultRTGroup->vtbl->GetPixelFormat(a1->member.defaultRTGroup, 0);
  v9 = (void *)FormHeapAlloc(0x44u);
  if ( v9 )
  {
    v10 = sub_70F010(v9, &unk_B263A0);
    v11 = sub_76BEF0((int)v10);
    v10[4] = 0;
  }
  else
  {
    v10 = 0;
    v11 = sub_76BEF0(0);
    *(_DWORD *)0x10 = 0;
  }
  v10[3] = v11;
  def_763803(0, retaddr, (int)v10, a2, a3, a4, a5, a6, a7, a8, a9);
}
