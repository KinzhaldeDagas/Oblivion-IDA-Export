// 2026-05-18 73000 consumer decode: bhkSimpleShapePhantom setup consumes cinfo +0x04 shape pointer and cinfo +0x20 4x4 phantom transform. Treetop collision leaves this phantom transform identity; sidecar rotations should normally use per-shape transform/endpoints before this final wrapper.
void __thiscall bhkSimpleShapePhantom_CreateHavokObjectFromCinfo(void *this, int a2)
{
  int v3; // ebx
  float *v4; // eax
  char *v5; // ebx
  void (__thiscall *v6)(void *, char *); // edx
  int v7; // [esp-4h] [ebp-78h]
  float v8[19]; // [esp+14h] [ebp-60h] BYREF
  unsigned int v9; // [esp+70h] [ebp-4h]

  if ( a2 ) /*0x8af1de*/
  {
    v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x130, 0x2E); /*0x8af1f4*/
    *(_WORD *)(v3 + 4) = 0x130; /*0x8af1f6*/
    v7 = *(_DWORD *)a2; /*0x8af202*/
    v9 = 0; /*0x8af20b*/
    v4 = sub_8A2050((float *)(a2 + 0x20), v8); /*0x8af213*/
    v5 = sub_8ECFC0((char *)v3, *(_DWORD *)(a2 + 4), v4, v7); /*0x8af224*/
    v6 = *(void (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x4C); /*0x8af228*/
    v9 = 0xFFFFFFFF; /*0x8af22e*/
    v6(this, v5); /*0x8af236*/
    sub_8BC730((int (__thiscall ***)(int (__stdcall ***)(signed int), int))v5); /*0x8af23a*/
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x7C))(this, a2); /*0x8af247*/
  }
}
