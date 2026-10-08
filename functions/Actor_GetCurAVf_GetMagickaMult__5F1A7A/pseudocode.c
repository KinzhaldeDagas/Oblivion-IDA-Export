double __userpurge Actor_GetCurAVf_::GetMagickaMult@<st0>(int a1@<eax>, _DWORD *a2@<esi>, float a3)
{
  int v3; // edi
  int v4; // ebp
  int v5; // ebx

  ((double (__cdecl *)(int))*(_DWORD *)(a1 + 0x288))(0x28); /*0x5f1a82*/
  v3 = a2[0x16]; /*0x5f1aa9*/
  v4 = 0; /*0x5f1aae*/
  v5 = (*(int (__thiscall **)(_DWORD *))(*a2 + 0x170))(a2); /*0x5f1ab2*/
  if ( v5 ) /*0x5f1ab6*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 0x190))(a2) ) /*0x5f1ac2*/
      v4 = v5; /*0x5f1ac8*/
  }
  return (float)(((double (__thiscall *)(int, int, int, _DWORD *))*(_DWORD *)(*(_DWORD *)v3 + 0x26C))(v3, v4, 9, a2) * a3); /*0x5f1aea*/
}
