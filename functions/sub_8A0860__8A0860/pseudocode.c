int __thiscall sub_8A0860(void *this, int a2, int a3)
{
  int (__stdcall *v3)(char *); // eax
  int v4; // eax
  int v5; // esi
  _DWORD **v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  char v15; // [esp+Fh] [ebp-5h] BYREF
  void *v16; // [esp+10h] [ebp-4h]

  v3 = *(int (__stdcall **)(char *))(*(_DWORD *)this + 0x74); /*0x8a0865*/
  v16 = this; /*0x8a0870*/
  v4 = v3(&v15); /*0x8a0874*/
  if ( v4 ) /*0x8a0878*/
    v5 = v4 - 4; /*0x8a087a*/
  else
    v5 = 0; /*0x8a087f*/
  v6 = (_DWORD **)a3; /*0x8a0883*/
  if ( 1.0 != *(float *)(a3 + 0x10) ) /*0x8a088f*/
    (**(void (__thiscall ***)(int, _DWORD, int))v5)(v5, 0, a3); /*0x8a089a*/
  v7 = *(_DWORD *)(v5 + 0xC); /*0x8a089c*/
  if ( v7 ) /*0x8a08a1*/
    v8 = *(_DWORD *)(v7 + 0xC); /*0x8a08a3*/
  else
    v8 = 0; /*0x8a08a8*/
  v9 = *(_DWORD *)(v5 + 0x10); /*0x8a08aa*/
  if ( v9 ) /*0x8a08af*/
    v10 = *(_DWORD *)(v9 + 0xC); /*0x8a08b1*/
  else
    v10 = 0; /*0x8a08b6*/
  *(_DWORD *)(v5 + 0xC) = 0; /*0x8a08ba*/
  *(_DWORD *)(v5 + 0x10) = 0; /*0x8a08c1*/
  if ( v8 ) /*0x8a08c8*/
  {
    if ( NiTMap_GetAt(*v6, v8, &a3) ) /*0x8a08d2*/
    {
      if ( a3 ) /*0x8a08e1*/
        v11 = *(_DWORD *)(a3 + 8); /*0x8a08e3*/
      else
        v11 = 0; /*0x8a08e8*/
      *(_DWORD *)(v5 + 0xC) = v11; /*0x8a08ea*/
    }
    if ( v10 ) /*0x8a08ef*/
    {
      if ( NiTMap_GetAt(*v6, v10, &a3) ) /*0x8a08f9*/
        v12 = a3; /*0x8a0902*/
      else
        v12 = (*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v10 + 0x18))(v10, v6); /*0x8a0910*/
      if ( v12 ) /*0x8a0914*/
        v13 = *(_DWORD *)(v12 + 8); /*0x8a0916*/
      else
        v13 = 0; /*0x8a091b*/
      *(_DWORD *)(v5 + 0x10) = v13; /*0x8a091d*/
    }
  }
  return sub_89D610(v16, a2, v6); /*0x8a092f*/
}
