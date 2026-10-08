int __thiscall BSFile_ReadLine(_DWORD *this, _BYTE *a2, unsigned int a3, unsigned __int16 a4)
{
  unsigned int v4; // esi
  int v5; // ebx
  int v6; // edi
  _BYTE *v7; // ebp
  int (__cdecl *v8)(_DWORD *, _BYTE **, int, int *, int); // eax
  int v9; // eax
  _DWORD *v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h] BYREF

  v4 = 1; /*0x4308e6*/
  v5 = 0; /*0x4308eb*/
  v6 = 0; /*0x4308ed*/
  v11 = this; /*0x4308f3*/
  if ( a3 <= 1 ) /*0x4308f7*/
  {
    *a2 = 0; /*0x43095e*/
    return 0; /*0x430963*/
  }
  else
  {
    v7 = a2; /*0x4308fa*/
    while ( 1 ) /*0x43090b*/
    {
      v8 = (int (__cdecl *)(_DWORD *, _BYTE **, int, int *, int))*(this + 1); /*0x43090b*/
      v12 = 1; /*0x430916*/
      v9 = v8(this, &a2, 1, &v12, 1); /*0x43091e*/
      v5 += v9; /*0x430923*/
      if ( v9 != 1 ) /*0x430928*/
        break; /*0x430928*/
      if ( (char)a2 == a4 ) /*0x430938*/
        break; /*0x430938*/
      v7[v4++ - 1] = (_BYTE)a2; /*0x43093a*/
      ++v6; /*0x430941*/
      if ( v4 >= a3 ) /*0x430948*/
        break; /*0x430948*/
      this = v11; /*0x430900*/
    }
    v7[v6] = 0; /*0x43094a*/
    return v5; /*0x430951*/
  }
}
