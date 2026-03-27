void __usercall setSBCS(char *a1@<eax>)
{
  int v1; // ebp
  _BYTE *v3; // ebx
  int v4; // eax
  _BYTE *v5; // ecx
  int v6; // esi

  v1 = 0x101;
  v3 = a1 + 0x1C;
  _memset((int)(a1 + 0x1C), 0, 0x101u);
  *((_DWORD *)a1 + 1) = 0;
  *((_DWORD *)a1 + 2) = 0;
  *((_DWORD *)a1 + 3) = 0;
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 5) = 0;
  *((_DWORD *)a1 + 6) = 0;
  v4 = (char *)&dword_B31390 - a1;
  do
  {
    *v3 = v3[v4];
    ++v3;
    --v1;
  }
  while ( v1 );
  v5 = a1 + 0x11D;
  v6 = 0x100;
  do
  {
    *v5 = v5[v4];
    ++v5;
    --v6;
  }
  while ( v6 );
}
