_DWORD *__thiscall sub_77D650(_DWORD *this, unsigned int a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  _DWORD *v6; // esi
  int v7; // ecx
  int v8; // edx
  int v9; // [esp+0h] [ebp-20h]
  int v10; // [esp+4h] [ebp-1Ch]
  int v11; // [esp+8h] [ebp-18h]
  _DWORD *v12; // [esp+1Ch] [ebp-4h] BYREF

  v2 = a2; /*0x77d652*/
  if ( (*(this + 2) & 0x10000000) == 0 && a2 <= *(this + 3) ) /*0x77d667*/
    v2 = *(this + 3); /*0x77d669*/
  v4 = *(this + 4); /*0x77d66b*/
  v11 = *(this + 6); /*0x77d678*/
  v10 = *(this + 1); /*0x77d67c*/
  v9 = *(this + 5); /*0x77d680*/
  a2 = 0; /*0x77d681*/
  if ( (*(int (__stdcall **)(int, unsigned int, int, int, int, unsigned int *, _DWORD))(*(_DWORD *)v4 + 0x68))( /*0x77d694*/
         v4,
         v2,
         v9,
         v10,
         v11,
         &a2,
         0) < 0 )
    return 0; /*0x77d697*/
  v6 = (_DWORD *)unk_B4289C; /*0x77d69f*/
  if ( !unk_B4289C ) /*0x77d69f*/
  {
    sub_77D5C0(); /*0x77d6a9*/
    v6 = (_DWORD *)unk_B4289C; /*0x77d6ae*/
  }
  v7 = v6[0xF]; /*0x77d6b4*/
  unk_B4289C = v7; /*0x77d6bc*/
  if ( v7 ) /*0x77d6c2*/
    *(_DWORD *)(v7 + 0x40) = 0; /*0x77d6c4*/
  v6[0xF] = 0; /*0x77d6cb*/
  v6[0x10] = 0; /*0x77d6d1*/
  *v6 = this; /*0x77d6d8*/
  v6[2] = a2; /*0x77d6de*/
  v6[3] = v2; /*0x77d6e1*/
  v6[9] = v2; /*0x77d6e4*/
  v6[0xA] = v2; /*0x77d6e7*/
  v6[4] = *(this + 1); /*0x77d6ed*/
  v6[5] = *(this + 2); /*0x77d6f3*/
  v6[7] = *(this + 6); /*0x77d6f9*/
  v8 = *(this + 5); /*0x77d6fc*/
  v12 = v6; /*0x77d707*/
  v6[6] = v8; /*0x77d70b*/
  v6[1] = sub_4BACA0((NiTArray_NiTexturingPropertyMap *)(this + 7), &v12); /*0x77d713*/
  return v6; /*0x77d696*/
}
