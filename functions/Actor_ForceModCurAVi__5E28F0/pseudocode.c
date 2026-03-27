int __userpurge Actor_ForceModCurAVi@<eax>(_DWORD *a1@<ecx>, int a2@<ebx>, int a3, int a4, int a5)
{
  double v6; // st7
  double v7; // st6
  double v8; // st7
  int v9; // ebx
  float *ContainerChanges; // eax
  float v13; // [esp+24h] [ebp+8h]
  float v14; // [esp+24h] [ebp+8h]
  float v15; // [esp+24h] [ebp+8h]

  if ( a3 != 0xA || a4 >= 0 || (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a1 + 0x278))(a1) )
  {
    v13 = (float)a4;
    v6 = v13;
    v14 = (float)Double_To_SInt32(v13);
    v7 = v6 - v14;
    v8 = v14;
    if ( v7 < dbl_A2FC68 )
      v8 = v8 - dbl_A2F928;
    v15 = v8;
    v9 = Double_To_SInt32(v15);
    *(float *)&a4 = (float)v9;
    AVCollection_ModAVLimited(a1 + 0x22, a3, a4, 1);
    if ( a3 == 8 && v9 < 0 )
      (*(void (__thiscall **)(_DWORD *, int, int, int))(*a1 + 0x3B8))(a1, a5, a4, a2);
    (*(void (__thiscall **)(_DWORD *, int))(*a1 + 0x40))(a1, 0x200000);
    if ( (unsigned int)(a3 - 0xC) <= 0x14 && (a3 == 0x12 || a3 == 0x1B) )
    {
      ContainerChanges = (float *)ExtraDataList_GetContainerChanges((ExtraDataList *)(a1 + 0x11));
      if ( ContainerChanges )
        sub_484310(ContainerChanges);
      (*(void (__thiscall **)(_DWORD *))(*a1 + 0x2C0))(a1);
    }
  }
  return Actor_ForceModCurAVi_::Done(a3, a4, a5);
}
