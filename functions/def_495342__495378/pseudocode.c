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

  v15 = *(float *)(a4 + 0x48);
  if ( v15 < 0.0 )
    v15 = 0.0;
  _sprintf(v19, "%s: %s, Offset: %.2f, Count: %d", *(const char **)(a4 + 8), a1, v15, *(_DWORD *)(a4 + 0xC));
  v7 = *(HWND *)(a3 + 0xC);
  v16[6] = v19;
  v16[0] = a2;
  v8 = SendMessageA;
  v17 = 5;
  v18 = 5;
  v16[0] = v8(v7, 0x1100u, 0, (LPARAM)v16);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)a4 + 0x30))(a4, a5);
  for ( i = 0; i < *(unsigned __int16 *)(a5 + 0xA); ++i )
  {
    v10 = *(_DWORD *)(*(_DWORD *)(a5 + 4) + 4 * i);
    v16[7] = 6;
    v17 = 6;
    v14 = *(HWND *)(a3 + 0xC);
    v16[5] = v10;
    v8(v14, 0x1100u, 0, (LPARAM)&v15);
  }
  for ( j = 0; (unsigned __int16)j < *(_WORD *)(a5 + 0xA); *(_DWORD *)(*(_DWORD *)(a5 + 4) + 4 * v12) = 0 )
    v12 = (unsigned __int16)j++;
  *(_WORD *)(a5 + 0xA) = 0;
  *(_WORD *)(a5 + 0xC) = 0;
  return (**(int (__cdecl ***)(int))a5)(1);
}
