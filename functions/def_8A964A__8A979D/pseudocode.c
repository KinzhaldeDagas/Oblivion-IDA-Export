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

  v10 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x100, 0x2B);
  *(_WORD *)(v10 + 4) = 0x100;
  v11 = sub_8EA030((float *)v10, a7, a8);
  v12 = v11;
  if ( a1 != 6 )
  {
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)v11 + 0x30))(v11, a2);
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)v12 + 0x40))(v12, a10);
    (*(void (__thiscall **)(float *, _OWORD *))(*(_DWORD *)v12 + 0x20))(v12, a7);
  }
  *((_WORD *)v12 + 0x5F) = 0x14;
  *((_DWORD *)v12 + 0x2D) = a9;
  *((_DWORD *)v12 + 0x2E) = a10;
  return v12;
}
