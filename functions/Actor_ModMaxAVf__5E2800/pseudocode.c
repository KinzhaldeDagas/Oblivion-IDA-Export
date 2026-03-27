int __userpurge Actor_ModMaxAVf@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4, float a5, int a6)
{
  int v6; // edi
  int v8; // ebp
  float *ContainerChanges; // eax
  int v12; // [esp+10h] [ebp-8h]
  float v13; // [esp+14h] [ebp-4h]
  void *retaddr; // [esp+18h] [ebp+0h]

  v6 = a4;
  if ( a4 != 0xA || a5 >= 0.0 || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x278))(a1) )
  {
    v8 = a1[0x16];
    if ( v8 )
    {
      if ( (*(int (__thiscall **)(_DWORD *, int, int))(*a1 + 0x170))(a1, a2, a3) )
        (*(int (__thiscall **)(_DWORD *))(*a1 + 0x190))(a1);
      (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 0x278))(v8);
      v6 = v12;
    }
    if ( v6 == 8 && v13 < 0.0 )
      (*(void (__thiscall **)(_DWORD *, void *))(*a1 + 0x3B8))(a1, retaddr);
    (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0x40))(a1, 0x100000);
    if ( (unsigned int)(v6 - 0xC) <= 0x14 && (v6 == 0x12 || v6 == 0x1B) )
    {
      ContainerChanges = (float *)ExtraDataList_GetContainerChanges((ExtraDataList *)(a1 + 0x11));
      if ( ContainerChanges )
        sub_484310(ContainerChanges);
      (*(void (__thiscall **)(_DWORD *))(*a1 + 0x2C0))(a1);
    }
  }
  return Actor_ModMaxAVf_::Done(a4, LODWORD(a5), a6);
}
