void __thiscall sub_495AF0(HWND *this, LPARAM a2, int a3)
{
  bool v4; // zf
  LRESULT v5; // eax
  unsigned int v6; // ebx
  LRESULT i; // ebp
  int v8; // edx
  int v9; // eax
  unsigned int v10; // ebx
  LRESULT j; // ebp
  int v12; // eax
  HWND v13; // [esp-18h] [ebp-54h]
  HWND v14; // [esp-18h] [ebp-54h]
  HWND v15; // [esp-18h] [ebp-54h]
  LPARAM lParam[6]; // [esp+8h] [ebp-34h] BYREF
  const char *v17; // [esp+20h] [ebp-1Ch]
  int v18; // [esp+28h] [ebp-14h]
  int v19; // [esp+2Ch] [ebp-10h]
  int v20; // [esp+34h] [ebp-8h]

  if ( a3 ) /*0x495afd*/
  {
    v4 = *(_DWORD *)(a3 + 0x7C) == 0; /*0x495b03*/
    lParam[1] = 0xFFFF0002; /*0x495b0d*/
    lParam[2] = 0x27; /*0x495b15*/
    v20 = a3; /*0x495b1d*/
    if ( !v4 ) /*0x495b26*/
    {
      v13 = *(this + 3); /*0x495b37*/
      v17 = "Object Palette"; /*0x495b38*/
      v18 = 5; /*0x495b40*/
      v19 = 5; /*0x495b44*/
      lParam[0] = a2; /*0x495b48*/
      v5 = SendMessageA(v13, 0x1100, 0, (LPARAM)lParam); /*0x495b4c*/
      sub_495120(this, v5, *(int **)(a3 + 0x7C)); /*0x495b59*/
    }
    v14 = *(this + 3); /*0x495b6d*/
    v17 = "Active Sequences"; /*0x495b6e*/
    v18 = 5; /*0x495b76*/
    v19 = 5; /*0x495b7a*/
    lParam[0] = a2; /*0x495b7e*/
    v6 = 0; /*0x495b88*/
    for ( i = SendMessageA(v14, 0x1100, 0, (LPARAM)lParam); v6 < *(unsigned __int16 *)(a3 + 0x46); ++v6 ) /*0x495b8a*/
    {
      v8 = *(_DWORD *)(a3 + 0x40); /*0x495b92*/
      v9 = *(_DWORD *)(v8 + 4 * v6); /*0x495b95*/
      if ( v9 ) /*0x495b9a*/
      {
        if ( *(_DWORD *)(v9 + 0x44) ) /*0x495b9c*/
          sub_495270(this, i, *(_DWORD *)(v8 + 4 * v6)); /*0x495ba6*/
      }
    }
    v15 = *(this + 3); /*0x495bc5*/
    v17 = "Inactive Sequences"; /*0x495bc6*/
    v10 = 0; /*0x495bd4*/
    for ( j = SendMessageA(v15, 0x1100, 0, (LPARAM)lParam); v10 < *(unsigned __int16 *)(a3 + 0x46); ++v10 ) /*0x495bd6*/
    {
      v12 = *(_DWORD *)(*(_DWORD *)(a3 + 0x40) + 4 * v10); /*0x495be3*/
      if ( v12 ) /*0x495be8*/
      {
        if ( !*(_DWORD *)(v12 + 0x44) ) /*0x495bea*/
          sub_495270(this, j, *(_DWORD *)(*(_DWORD *)(a3 + 0x40) + 4 * v10)); /*0x495bf4*/
      }
    }
  }
}
