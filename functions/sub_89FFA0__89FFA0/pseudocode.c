int __thiscall sub_89FFA0(void *this, int a2, int a3)
{
  int (__stdcall *v3)(char *); // eax
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v8; // edi
  _DWORD **v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  char v14; // [esp+Fh] [ebp-5h] BYREF
  void *v15; // [esp+10h] [ebp-4h]

  v3 = *(int (__stdcall **)(char *))(*(_DWORD *)this + 0x74); /*0x89ffa5*/
  v15 = this; /*0x89ffb0*/
  v4 = v3(&v14); /*0x89ffb6*/
  v5 = *(_DWORD *)(v4 + 4); /*0x89ffb8*/
  if ( v5 ) /*0x89ffbd*/
    v6 = *(_DWORD *)(v5 + 0xC); /*0x89ffbf*/
  else
    v6 = 0; /*0x89ffc4*/
  v7 = *(_DWORD *)(v4 + 8); /*0x89ffc6*/
  if ( v7 ) /*0x89ffcb*/
    v8 = *(_DWORD *)(v7 + 0xC); /*0x89ffcd*/
  else
    v8 = 0; /*0x89ffd2*/
  v9 = (_DWORD **)a3; /*0x89ffd6*/
  *(_DWORD *)(v4 + 4) = 0; /*0x89ffda*/
  *(_DWORD *)(v4 + 8) = 0; /*0x89ffe1*/
  if ( v6 ) /*0x89ffe8*/
  {
    if ( NiTMap_GetAt(*v9, v6, &a3) ) /*0x89fff2*/
    {
      if ( a3 ) /*0x8a0001*/
        v10 = *(_DWORD *)(a3 + 8); /*0x8a0003*/
      else
        v10 = 0; /*0x8a0008*/
      *(_DWORD *)(v4 + 4) = v10; /*0x8a000a*/
    }
    if ( v8 ) /*0x8a000f*/
    {
      if ( NiTMap_GetAt(*v9, v8, &a3) ) /*0x8a0019*/
        v11 = a3; /*0x8a0022*/
      else
        v11 = (*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v8 + 0x18))(v8, v9); /*0x8a0030*/
      if ( v11 ) /*0x8a0034*/
        v12 = *(_DWORD *)(v11 + 8); /*0x8a0036*/
      else
        v12 = 0; /*0x8a003b*/
      *(_DWORD *)(v4 + 8) = v12; /*0x8a003d*/
    }
  }
  return sub_89D610(v15, a2, v9); /*0x8a004f*/
}
