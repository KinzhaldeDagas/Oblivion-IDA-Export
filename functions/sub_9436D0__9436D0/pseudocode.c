int __thiscall sub_9436D0(int *this, int *a2, int a3, int a4)
{
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // esi
  int v15; // [esp+14h] [ebp-ECh] BYREF
  int v16; // [esp+18h] [ebp-E8h]
  int v17; // [esp+1Ch] [ebp-E4h]
  _DWORD v18[5]; // [esp+20h] [ebp-E0h] BYREF
  char v19[32]; // [esp+34h] [ebp-CCh] BYREF
  _DWORD v20[15]; // [esp+54h] [ebp-ACh] BYREF
  _DWORD v21[28]; // [esp+90h] [ebp-70h] BYREF

  v5 = *(this + 2) + (*(int (__thiscall **)(int *))(*a2 + 8))(a2);
  sub_956490(v18, 0xC * v5);
  sub_957FD0(v19, this + 6);
  sub_9554E0(v21, (int)(this + 0xC), (int)v18, (int)a2);
  v6 = (*(int (__thiscall **)(int *))(*a2 + 8))(a2);
  v7 = *(this + 2);
  v8 = a3;
  v9 = 0x10 * (v6 + v7 + 0x1B400);
  if ( !a3 || a4 < v9 )
    v8 = (**(int (__thiscall ***)(int, int, int))dword_BA7D98)(dword_BA7D98, v9, 0x25);
  v10 = *a2;
  v16 = v8 + 0x10 * v5;
  v15 = v8;
  v17 = v16 + 0xF8000;
  (*(void (__thiscall **)(int *, int))(v10 + 0xC))(a2, v8);
  sub_957590(v20);
  v11 = sub_957C90(v20, (int)a2, (int)v19, (int)v21, (int)(this + 1), &v15);
  sub_4BFC40(v20);
  if ( v8 != a3 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_BA7D98 + 4))(dword_BA7D98, v8);
  *this = v11;
  v12 = sub_9568A0(v18);
  (*(void (__thiscall **)(_DWORD *, int, int))(v21[0] + 0x14))(v21, v11, v12 + 0x10);
  sub_4BFC40(v21);
  return v12;
}
