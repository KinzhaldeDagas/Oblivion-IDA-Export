int __thiscall sub_9436D0(int *this, int *a2, unsigned int *a3, int a4)
{
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  unsigned int *v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // esi
  unsigned int *v15; // [esp+14h] [ebp-ECh] BYREF
  unsigned int *v16; // [esp+18h] [ebp-E8h]
  unsigned int *v17; // [esp+1Ch] [ebp-E4h]
  int v18[5]; // [esp+20h] [ebp-E0h] BYREF
  char v19[32]; // [esp+34h] [ebp-CCh] BYREF
  unsigned int v20[15]; // [esp+54h] [ebp-ACh] BYREF
  _DWORD v21[28]; // [esp+90h] [ebp-70h] BYREF

  v5 = *(this + 2) + (*(int (__thiscall **)(int *))(*a2 + 8))(a2); /*0x9436f4*/
  sub_956490(v18, 0xC * v5); /*0x943701*/
  sub_957FD0(v19, this + 6); /*0x94370e*/
  sub_9554E0(v21, (int)(this + 0xC), (int)v18, (int)a2); /*0x943724*/
  v6 = (*(int (__thiscall **)(int *))(*a2 + 8))(a2); /*0x94372d*/
  v7 = *(this + 2); /*0x943730*/
  v8 = a3; /*0x943733*/
  v9 = 0x10 * (v6 + v7 + 0x1B400); /*0x94373d*/
  if ( !a3 || a4 < v9 ) /*0x943747*/
    v8 = (unsigned int *)(**(int (__thiscall ***)(int, int, int))unk_BA7D98)(unk_BA7D98, v9, 0x25); /*0x943756*/
  v10 = *a2; /*0x943758*/
  v16 = &v8[4 * v5]; /*0x94375f*/
  v15 = v8; /*0x94376c*/
  v17 = v16 + 0x3E000; /*0x943770*/
  (*(void (__thiscall **)(int *, unsigned int *))(v10 + 0xC))(a2, v8); /*0x943774*/
  sub_957590(v20); /*0x94377b*/
  v11 = sub_957C90(v20, (unsigned int)a2, (unsigned int)v19, (unsigned int)v21, (unsigned int)(this + 1), &v15); /*0x9437a8*/
  sub_4BFC40(v20); /*0x9437aa*/
  if ( v8 != a3 ) /*0x9437b2*/
    (*(void (__thiscall **)(int, unsigned int *))(*(_DWORD *)unk_BA7D98 + 4))(unk_BA7D98, v8); /*0x9437bd*/
  *this = v11; /*0x9437c4*/
  v12 = sub_9568A0(v18); /*0x9437d2*/
  (*(void (__thiscall **)(_DWORD *, int, int))(v21[0] + 0x14))(v21, v11, v12 + 0x10); /*0x9437e0*/
  sub_4BFC40(v21); /*0x9437ea*/
  return v12; /*0x9437ef*/
}
