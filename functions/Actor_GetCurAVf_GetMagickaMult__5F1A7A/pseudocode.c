double __userpurge Actor_GetCurAVf_::GetMagickaMult@<st0>(int a1@<eax>, _DWORD *a2@<esi>, float a3)
{
  int v4; // edi
  int v5; // ebp
  int v6; // ebx

  (*(void (__cdecl **)(int))(a1 + 0x288))(0x28);
  v4 = a2[0x16];
  v5 = 0;
  v6 = (*(int (__thiscall **)(_DWORD *))(*a2 + 0x170))(a2);
  if ( v6 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *))(*a2 + 0x190))(a2) )
      v5 = v6;
  }
  return (float)(((double (__thiscall *)(int, int, int, _DWORD *))*(_DWORD *)(*(_DWORD *)v4 + 0x26C))(v4, v5, 9, a2) * a3);
}
