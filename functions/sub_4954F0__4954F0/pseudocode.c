LPARAM __cdecl sub_4954F0(HWND hWnd, LPARAM lParam, WPARAM wParam)
{
  LRESULT (__stdcall *v3)(HWND, UINT, WPARAM, LPARAM); // edi
  LPARAM result; // eax
  int v5; // eax
  LPARAM v6[11]; // [esp+8h] [ebp-2Ch] BYREF

  _memset((int)v6, 0, sizeof(v6)); /*0x4954fe*/
  v3 = SendMessageA; /*0x49550b*/
  v6[0] = 0xD; /*0x49551d*/
  v6[4] = (LPARAM)&MEMORY[0xB33E90][0x1008]; /*0x495525*/
  v6[5] = 0x104; /*0x49552d*/
  result = v3(hWnd, 0x110Au, 4u, lParam); /*0x495535*/
  for ( v6[1] = result; result; v6[1] = result ) /*0x49553d*/
  {
    if ( v3(hWnd, 0x110Cu, 0, (LPARAM)v6) ) /*0x495551*/
    {
      if ( v6[9] ) /*0x49555d*/
      {
        v5 = (*(int (__thiscall **)(LPARAM))(*(_DWORD *)v6[9] + 8))(v6[9]); /*0x495564*/
        if ( v5 ) /*0x495568*/
        {
          if ( *(_WORD *)(v5 + 0xB8) ) /*0x49556a*/
          {
            v3(hWnd, 0x1102u, wParam, v6[1]); /*0x495580*/
            sub_4954F0(hWnd, v6[1], wParam); /*0x495589*/
          }
        }
      }
    }
    result = v3(hWnd, 0x110Au, 1u, v6[1]); /*0x49559e*/
  }
  return result; /*0x4955a9*/
}
