int __thiscall sub_6DC8E0(_DWORD *this, int a2, int a3, int a4, float a5)
{
  int v5; // eax
  int v6; // edx
  unsigned __int8 v7; // bl
  int v8; // ecx

  v5 = *(this + 0x12); /*0x6dc8e0*/
  if ( v5 ) /*0x6dc8e8*/
  {
    v6 = *(_DWORD *)(v5 + 0x10); /*0x6dc8ea*/
    v7 = *(_BYTE *)(v5 + 0x14); /*0x6dc8ed*/
    v8 = *(_DWORD *)(v5 + 0xC); /*0x6dc8f0*/
  }
  else
  {
    v6 = 0; /*0x6dc8f5*/
    v8 = 0; /*0x6dc8f7*/
    v7 = 0; /*0x6dc8f9*/
  }
  (*(void (__cdecl **)(_DWORD, int, int, int))(4 * v6 + 0xB3D010))(LODWORD(a5), v8 + a3 * v7, v8 + a4 * v7, a2); /*0x6dc924*/
  return a2; /*0x6dc929*/
}
