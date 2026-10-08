int __userpurge Actor_ModMaxAVi@<eax>(_BYTE *a1@<ecx>, int a2@<ebp>, int a3@<edi>, int a4, signed int a5, int a6)
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

  v6 = a4; /*0x5e26d1*/
  if ( a4 != 0xA || a5 >= 0 || (result = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x278))(a1), (_BYTE)result) ) /*0x5e26f0*/
  {
    v19 = (float)a5; /*0x5e26fa*/
    v9 = v19; /*0x5e26fe*/
    v20 = (float)Double_To_SInt32(v19); /*0x5e2711*/
    v10 = v9 - v20; /*0x5e271d*/
    v11 = v20; /*0x5e271d*/
    if ( v10 < dbl_A2FC68 ) /*0x5e272a*/
      v11 = v11 - dbl_A2F928; /*0x5e272c*/
    v21 = v11; /*0x5e2732*/
    v12 = Double_To_SInt32(v21); /*0x5e273b*/
    v13 = *((_DWORD *)a1 + 0x16); /*0x5e2740*/
    v22 = v12; /*0x5e2745*/
    if ( v13 ) /*0x5e2749*/
    {
      v14 = 0; /*0x5e2756*/
      v15 = (*(int (__thiscall **)(_BYTE *, int, int))(*(_DWORD *)a1 + 0x170))(a1, a2, a3); /*0x5e275a*/
      if ( v15 ) /*0x5e275e*/
      {
        if ( (*(unsigned __int8 (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x190))(a1) ) /*0x5e276a*/
          v14 = v15; /*0x5e2770*/
      }
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 0x27C))(v13, v14); /*0x5e2787*/
      v6 = a4; /*0x5e2789*/
    }
    if ( v6 == 8 && v22 < 0 ) /*0x5e2799*/
    {
      v18 = (float)v22; /*0x5e27ac*/
      (*(void (__thiscall **)(_BYTE *, int, _DWORD))(*(_DWORD *)a1 + 0x3B8))(a1, a6, LODWORD(v18)); /*0x5e27b2*/
    }
    (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)a1 + 0x40))(a1, 0x100000); /*0x5e27c0*/
    result = v6 - 0xC; /*0x5e27c2*/
    if ( (unsigned int)(v6 - 0xC) <= 0x14 && (v6 == 0x12 || v6 == 0x1B) ) /*0x5e27d2*/
    {
      ContainerChanges = (float *)ExtraDataList_GetContainerChanges((ExtraDataList *)(a1 + 0x44)); /*0x5e27d7*/
      if ( ContainerChanges ) /*0x5e27de*/
        sub_484310(ContainerChanges); /*0x5e27e2*/
      return (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 0x2C0))(a1); /*0x5e27f1*/
    }
  }
  return result; /*0x5e27f3*/
}
