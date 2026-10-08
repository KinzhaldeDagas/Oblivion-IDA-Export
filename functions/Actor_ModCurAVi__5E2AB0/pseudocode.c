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

  v6 = a4; /*0x5e2ab1*/
  if ( a4 != 0xA || a5 >= 0 || (result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x278))(a1), (_BYTE)result) ) /*0x5e2ad0*/
  {
    v19 = (float)a5; /*0x5e2ada*/
    v9 = v19; /*0x5e2ade*/
    v20 = (float)Double_To_SInt32(v19); /*0x5e2af1*/
    v10 = v9 - v20; /*0x5e2afd*/
    v11 = v20; /*0x5e2afd*/
    if ( v10 < dbl_A2FC68 ) /*0x5e2b0a*/
      v11 = v11 - dbl_A2F928; /*0x5e2b0c*/
    v21 = v11; /*0x5e2b12*/
    v12 = Double_To_SInt32(v21); /*0x5e2b1b*/
    v13 = *((_DWORD *)a1 + 0x16); /*0x5e2b20*/
    v22 = v12; /*0x5e2b25*/
    if ( v13 ) /*0x5e2b29*/
    {
      v14 = 0; /*0x5e2b36*/
      v15 = (*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)a1 + 0x170))(a1, a2, a3); /*0x5e2b3a*/
      if ( v15 ) /*0x5e2b3e*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x5e2b4a*/
          v14 = v15; /*0x5e2b50*/
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 0x28C))(v13, v14); /*0x5e2b67*/
      v6 = a4; /*0x5e2b69*/
    }
    if ( v6 == 8 && v22 < 0 ) /*0x5e2b79*/
    {
      v18 = (float)v22; /*0x5e2b8c*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)a1 + 0x3B8))(a1, a6, LODWORD(v18)); /*0x5e2b92*/
    }
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 0x40))(a1, 0x400000); /*0x5e2ba0*/
    result = v6 - 0xC; /*0x5e2ba2*/
    if ( (unsigned int)(v6 - 0xC) <= 0x14 && (v6 == 0x12 || v6 == 0x1B) ) /*0x5e2bb2*/
    {
      ContainerChanges = (float *)ExtraDataList_GetContainerChanges((ExtraDataList *)(a1 + 0x44)); /*0x5e2bb7*/
      if ( ContainerChanges ) /*0x5e2bbe*/
        sub_484310(ContainerChanges); /*0x5e2bc2*/
      return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x2C0))(a1); /*0x5e2bd1*/
    }
  }
  return result; /*0x5e2bd3*/
}
