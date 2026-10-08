void __usercall setSBCS(char *a1@<eax>)
{
  int v1; // ebp
  char *v3; // ebx
  int v4; // eax
  char *v5; // ecx
  int v6; // esi

  v1 = 0x101; /*0x98f64a*/
  v3 = a1 + 0x1C; /*0x98f654*/
  _memset((int)(a1 + 0x1C), 0, 0x101u); /*0x98f659*/
  *((_DWORD *)a1 + 1) = 0; /*0x98f65e*/
  *((_DWORD *)a1 + 2) = 0; /*0x98f661*/
  *((_DWORD *)a1 + 3) = 0; /*0x98f664*/
  *((_DWORD *)a1 + 4) = 0; /*0x98f66c*/
  *((_DWORD *)a1 + 5) = 0; /*0x98f66d*/
  *((_DWORD *)a1 + 6) = 0; /*0x98f66e*/
  v4 = (char *)&dword_B31390 - a1; /*0x98f677*/
  do /*0x98f680*/
  {
    *v3 = v3[v4]; /*0x98f67c*/
    ++v3; /*0x98f67e*/
    --v1; /*0x98f67f*/
  }
  while ( v1 ); /*0x98f680*/
  v5 = a1 + 0x11D; /*0x98f682*/
  v6 = 0x100; /*0x98f688*/
  do /*0x98f694*/
  {
    *v5 = v5[v4]; /*0x98f690*/
    ++v5; /*0x98f692*/
    --v6; /*0x98f693*/
  }
  while ( v6 ); /*0x98f694*/
}
