void __thiscall sub_495120(HWND *this, LPARAM a2, int *a3)
{
  unsigned int v3; // edi
  int v4; // eax
  int v5; // esi
  int v6; // edx
  void (__thiscall *v7)(int *, int); // eax
  void (__stdcall *v8)(HWND, UINT, WPARAM, LPARAM); // ebx
  int i; // eax
  int v10; // ecx
  HWND v11; // [esp-10h] [ebp-68h]
  LPARAM lParam[13]; // [esp+18h] [ebp-40h] BYREF
  unsigned int v14; // [esp+54h] [ebp-4h]

  v3 = 0; /*0x49514f*/
  if ( a3 ) /*0x495153*/
  {
    v4 = FormHeapAlloc(0x10u); /*0x49515b*/
    v5 = v4; /*0x495160*/
    v14 = 0; /*0x49516b*/
    if ( v4 ) /*0x49516f*/
    {
      *(_WORD *)(v4 + 8) = 0x80; /*0x495178*/
      *(_WORD *)(v4 + 0xE) = 0x80; /*0x49517c*/
      *(_DWORD *)v4 = &NiTArray<char *>::`vftable'; /*0x49518a*/
      *(_WORD *)(v4 + 0xA) = 0; /*0x495190*/
      *(_WORD *)(v4 + 0xC) = 0; /*0x495194*/
      *(_DWORD *)(v4 + 4) = FormHeapAlloc(0x200u); /*0x4951a5*/
    }
    else
    {
      v5 = 0; /*0x4951aa*/
    }
    v6 = *a3; /*0x4951b0*/
    lParam[0] = a2; /*0x4951b3*/
    v7 = *(void (__thiscall **)(int *, int))(v6 + 0x30); /*0x4951b7*/
    v14 = 0xFFFFFFFF; /*0x4951bd*/
    lParam[1] = 0xFFFF0002; /*0x4951c5*/
    lParam[2] = 0x27; /*0x4951cd*/
    lParam[0xB] = (LPARAM)a3; /*0x4951d5*/
    v7(a3, v5); /*0x4951d9*/
    if ( *(_WORD *)(v5 + 0xA) ) /*0x4951db*/
    {
      v8 = (void (__stdcall *)(HWND, UINT, WPARAM, LPARAM))SendMessageA; /*0x4951e1*/
      do /*0x495221*/
      {
        lParam[6] = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v3); /*0x495201*/
        v11 = *(this + 3); /*0x49520d*/
        lParam[8] = 6; /*0x49520e*/
        lParam[9] = 6; /*0x495212*/
        v8(v11, 0x1100u, 0, (LPARAM)lParam); /*0x495216*/
        ++v3; /*0x49521c*/
      }
      while ( v3 < *(unsigned __int16 *)(v5 + 0xA) ); /*0x495221*/
    }
    for ( i = 0; (unsigned __int16)i < *(_WORD *)(v5 + 0xA); *(_DWORD *)(*(_DWORD *)(v5 + 4) + 4 * v10) = 0 ) /*0x495227*/
      v10 = (unsigned __int16)i++; /*0x495233*/
    *(_WORD *)(v5 + 0xA) = 0; /*0x495242*/
    *(_WORD *)(v5 + 0xC) = 0; /*0x495246*/
    (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x495252*/
  }
}
