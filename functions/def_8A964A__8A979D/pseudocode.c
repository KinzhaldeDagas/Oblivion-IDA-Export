// positive sp value has been detected, the output may be wrong!
float *__usercall def_8A964A@<eax>(
        int a1@<ebx>,
        int a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        _OWORD *a7,
        float *a8,
        int a9,
        int a10)
{
  int v10; // eax
  float *v11; // eax
  float *v12; // esi

  v10 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x100, 0x2B); /*0x8a97ac*/
  *(_WORD *)(v10 + 4) = 0x100; /*0x8a97bb*/
  v11 = sub_8EA030((float *)v10, a7, a8); /*0x8a97c1*/
  v12 = v11; /*0x8a97c9*/
  if ( a1 != 6 ) /*0x8a97cb*/
  {
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)v11 + 0x30))(v11, a2); /*0x8a97d2*/
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)v12 + 0x40))(v12, a10); /*0x8a97de*/
    (*(void (__thiscall **)(float *, _OWORD *))(*(_DWORD *)v12 + 0x20))(v12, a7); /*0x8a97ea*/
  }
  *((_WORD *)v12 + 0x5F) = 0x14; /*0x8a97f6*/
  *((_DWORD *)v12 + 0x2D) = a9; /*0x8a97ff*/
  *((_DWORD *)v12 + 0x2E) = a10; /*0x8a9805*/
  return v12; /*0x8a9812*/
}
