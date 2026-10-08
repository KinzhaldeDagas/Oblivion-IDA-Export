// positive sp value has been detected, the output may be wrong!
int __userpurge def_495342@<eax>(
        const char *a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5@<esi>,
        int a6,
        int a7)
{
  HWND v7; // edx
  LRESULT (__stdcall *v8)(HWND, UINT, WPARAM, LPARAM); // ebx
  unsigned int i; // edi
  int v10; // ecx
  int j; // eax
  int v12; // edx
  HWND v14; // [esp-15Ch] [ebp-168h]
  float v15; // [esp-134h] [ebp-140h] BYREF
  _DWORD v16[8]; // [esp-130h] [ebp-13Ch] BYREF
  int v17; // [esp-110h] [ebp-11Ch]
  int v18; // [esp-10Ch] [ebp-118h]
  char v19[252]; // [esp-FCh] [ebp-108h] BYREF

  v15 = *(float *)(a4 + 0x48); /*0x49537b*/
  if ( v15 < 0.0 ) /*0x49538a*/
    v15 = 0.0; /*0x49538c*/
  _sprintf(v19, "%s: %s, Offset: %.2f, Count: %d", *(const char **)(a4 + 8), a1, v15, *(_DWORD *)(a4 + 0xC));
  v7 = *(HWND *)(a3 + 0xC); /*0x4953b6*/
  v16[6] = v19; /*0x4953c7*/
  v16[0] = a2; /*0x4953d5*/
  v8 = SendMessageA; /*0x4953d9*/
  v17 = 5; /*0x4953e0*/
  v18 = 5; /*0x4953e4*/
  v16[0] = v8(v7, 0x1100u, 0, (LPARAM)v16); /*0x4953ea*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a4 + 0x30))(a4, a5); /*0x4953f6*/
  for ( i = 0; i < *(unsigned __int16 *)(a5 + 0xA); ++i ) /*0x4953fa*/
  {
    v10 = *(_DWORD *)(*(_DWORD *)(a5 + 4) + 4 * i); /*0x495403*/
    v16[7] = 6; /*0x495412*/
    v17 = 6; /*0x495416*/
    v14 = *(HWND *)(a3 + 0xC); /*0x495422*/
    v16[5] = v10; /*0x495423*/
    v8(v14, 0x1100u, 0, (LPARAM)&v15); /*0x495427*/
  }
  for ( j = 0; (unsigned __int16)j < *(_WORD *)(a5 + 0xA); *(_DWORD *)(*(_DWORD *)(a5 + 4) + 4 * v12) = 0 ) /*0x495438*/
    v12 = (unsigned __int16)j++; /*0x495443*/
  *(_WORD *)(a5 + 0xA) = 0; /*0x495452*/
  *(_WORD *)(a5 + 0xC) = 0; /*0x495456*/
  return (**(int (__cdecl ***)(int))a5)(1); /*0x49548b*/
}
