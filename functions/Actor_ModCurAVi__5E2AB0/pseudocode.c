int __userpurge Actor_ModCurAVi@<eax>(_BYTE *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4, signed int a5, int a6)
{
  int v6; // ebx
  int result; // eax
  double v9; // st7
  double v10; // st6
  double v11; // st7
  int v12; // eax
  int v13; // edi
  int v14; // ebx
  int v15; // ebp
  float *ContainerChanges; // eax
  float v18; // [esp+Ch] [ebp-Ch]
  float v19; // [esp+20h] [ebp+8h]
  float v20; // [esp+20h] [ebp+8h]
  float v21; // [esp+20h] [ebp+8h]
  int v22; // [esp+20h] [ebp+8h]

  v6 = a4;
  if ( a4 != 0xA || a5 >= 0 || (result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x278))(a1), (_BYTE)result) )
  {
    v19 = (float)a5;
    v9 = v19;
    v20 = (float)Double_To_SInt32(v19);
    v10 = v9 - v20;
    v11 = v20;
    if ( v10 < dbl_A2FC68 )
      v11 = v11 - dbl_A2F928;
    v21 = v11;
    v12 = Double_To_SInt32(v21);
    v13 = *((_DWORD *)a1 + 0x16);
    v22 = v12;
    if ( v13 )
    {
      v14 = 0;
      v15 = (*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)a1 + 0x170))(a1, a2, a3);
      if ( v15 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x190))(a1) )
          v14 = v15;
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 0x28C))(v13, v14);
      v6 = a4;
    }
    if ( v6 == 8 && v22 < 0 )
    {
      v18 = (float)v22;
      (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)a1 + 0x3B8))(a1, a6, LODWORD(v18));
    }
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 0x40))(a1, 0x400000);
    result = v6 - 0xC;
    if ( (unsigned int)(v6 - 0xC) <= 0x14 && (v6 == 0x12 || v6 == 0x1B) )
    {
      ContainerChanges = (float *)ExtraDataList_GetContainerChanges((ExtraDataList *)(a1 + 0x44));
      if ( ContainerChanges )
        sub_484310(ContainerChanges);
      return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x2C0))(a1);
    }
  }
  return result;
}
