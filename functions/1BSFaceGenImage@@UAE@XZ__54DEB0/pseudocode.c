void __thiscall BSFaceGenImage::~BSFaceGenImage(BSFaceGenImage *this)
{
  char *v2; // edi
  bool v3; // cc
  unsigned int *v4; // esi
  char *v5; // ebx
  int v6; // edi
  int v7; // esi
  int v8; // [esp+18h] [ebp-14h] BYREF
  int v9; // [esp+28h] [ebp-4h]

  *(_DWORD *)this = &BSFaceGenImage::`vftable'; /*0x54dedd*/
  v2 = *((char **)this + 5); /*0x54dee4*/
  v3 = *((_DWORD *)this + 4) <= (unsigned int)v2; /*0x54dee7*/
  v4 = (unsigned int *)((char *)this + 0xC); /*0x54deea*/
  v9 = 2; /*0x54deed*/
  if ( !v3 ) /*0x54def5*/
    _invalid_parameter_noinfo(); /*0x54def7*/
  v5 = (char *)v4[1]; /*0x54defc*/
  if ( (unsigned int)v5 > v4[2] ) /*0x54df02*/
    _invalid_parameter_noinfo(); /*0x54df04*/
  sub_6F14D0(v4, &v8, (int)v4, v5, (int)v4, v2); /*0x54df14*/
  v6 = *((_DWORD *)this + 2); /*0x54df19*/
  if ( v6 ) /*0x54df20*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v6 + 4)) ) /*0x54df26*/
      (**(void (__thiscall ***)(int, int))v6)(v6, 1); /*0x54df3c*/
    *((_DWORD *)this + 2) = 0; /*0x54df3e*/
  }
  if ( v4[1] ) /*0x54df41*/
    FormHeapFree(v4[1]); /*0x54df49*/
  v4[1] = 0; /*0x54df51*/
  v4[2] = 0; /*0x54df54*/
  v4[3] = 0; /*0x54df57*/
  v7 = *((_DWORD *)this + 2); /*0x54df5a*/
  LOBYTE(v9) = 0; /*0x54df5f*/
  if ( v7 ) /*0x54df63*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) ) /*0x54df69*/
      (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x54df7f*/
  }
  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x54df86*/
  InterlockedDecrement(&MEMORY[0xB3FD64]); /*0x54df8d*/
}
