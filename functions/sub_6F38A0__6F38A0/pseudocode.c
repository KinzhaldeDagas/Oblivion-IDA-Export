void __thiscall __noreturn sub_6F38A0(char **this, int a2, char *a3, unsigned int a4, int *a5)
{
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // ecx
  char *v10; // ebx
  int v11; // ecx
  int v12; // ebx
  unsigned int *v13; // eax
  _DWORD *v14; // ecx
  char *v15; // eax
  _DWORD v16[6]; // [esp+0h] [ebp-54h] BYREF
  unsigned int v17; // [esp+18h] [ebp-3Ch]
  char *v18; // [esp+1Ch] [ebp-38h]
  int v19; // [esp+20h] [ebp-34h]
  OB_stString28_010201A0 v20; // [esp+24h] [ebp-30h] BYREF
  _DWORD *v21; // [esp+44h] [ebp-10h]
  int v22; // [esp+50h] [ebp-4h]

  v21 = v16; /*0x6f38cb*/
  v6 = 0; /*0x6f38d5*/
  v19 = *a5; /*0x6f38dd*/
  v16[5] = this; /*0x6f38e4*/
  v20.capacity = 0xF; /*0x6f38e7*/
  v20.size = 0; /*0x6f38ee*/
  v20.storage.inlineData[0] = 0; /*0x6f38f1*/
  OB_stString28_AssignSubstring_010201A0(&v20, (const OB_stString28_010201A0 *)(a5 + 1), 0, 0xFFFFFFFF); /*0x6f38f4*/
  v7 = (int)*(this + 1); /*0x6f38f9*/
  v22 = 0; /*0x6f38fe*/
  if ( v7 ) /*0x6f3901*/
    v6 = (int)&(*(this + 3))[-v7] >> 5; /*0x6f3908*/
  if ( a4 ) /*0x6f3910*/
  {
    if ( v7 ) /*0x6f3918*/
      v8 = (int)&(*(this + 2))[-v7] >> 5; /*0x6f3923*/
    else
      v8 = 0; /*0x6f391a*/
    if ( 0x7FFFFFF - v8 < a4 ) /*0x6f392f*/
      OB_stVector_ThrowLengthError_010201A0(a4); /*0x6f3931*/
    if ( v7 ) /*0x6f3938*/
      v9 = (int)&(*(this + 2))[-v7] >> 5; /*0x6f3943*/
    else
      v9 = 0; /*0x6f393a*/
    if ( v6 < a4 + v9 ) /*0x6f394a*/
    {
      if ( 0x7FFFFFF - (v6 >> 1) >= v6 ) /*0x6f395d*/
        v10 = (char *)((v6 >> 1) + v6); /*0x6f3963*/
      else
        v10 = 0; /*0x6f395f*/
      if ( v7 ) /*0x6f3967*/
        v11 = (int)&(*(this + 2))[-v7] >> 5; /*0x6f3972*/
      else
        v11 = 0; /*0x6f3969*/
      if ( (unsigned int)v10 < a4 + v11 ) /*0x6f3979*/
      {
        if ( v7 ) /*0x6f397d*/
          v12 = (int)&(*(this + 2))[-v7] >> 5; /*0x6f3988*/
        else
          v12 = 0; /*0x6f397f*/
        v10 = (char *)(a4 + v12); /*0x6f398b*/
      }
      v13 = sub_5563E0(v10); /*0x6f3990*/
      v14 = *(this + 1); /*0x6f3995*/
      LOBYTE(v18) = 0; /*0x6f3998*/
      v16[4] = v13; /*0x6f39a6*/
      v17 = (unsigned int)v13; /*0x6f39a9*/
      LOBYTE(v22) = 1; /*0x6f39b1*/
      sub_6F1800(v14, a3, v13); /*0x6f39b5*/
    }
    v15 = *(this + 2); /*0x6f3a5f*/
    v18 = v15; /*0x6f3a6e*/
    if ( (v15 - a3) >> 5 < a4 ) /*0x6f3a71*/
    {
      v17 = 0x20 * a4; /*0x6f3a78*/
      sub_6F3590(this, a3, v15, (unsigned int *)&a3[0x20 * a4]); /*0x6f3a82*/
    }
    v17 = 0x20 * a4; /*0x6f3af4*/
    sub_6F3590(this, &v15[0xFFFFFFE0 * a4], v15, (unsigned int *)v15); /*0x6f3afa*/
  }
  if ( v20.capacity >= 0x10 ) /*0x6f3b24*/
    FormHeapFree((unsigned int)v20.storage.heapData); /*0x6f3b2a*/
}
