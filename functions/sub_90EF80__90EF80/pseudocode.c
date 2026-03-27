int __userpurge sub_90EF80@<eax>(int *a1@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4, int *a5)
{
  int v6; // eax
  int v7; // esi
  int v8; // ebx
  void **v10; // [esp+10h] [ebp-5Ch] BYREF
  __int16 v11; // [esp+16h] [ebp-56h]
  int v12; // [esp+18h] [ebp-54h]
  int v13; // [esp+1Ch] [ebp-50h]
  const void *v14[2]; // [esp+20h] [ebp-4Ch] BYREF
  int v15; // [esp+28h] [ebp-44h]
  void ***v16; // [esp+3Ch] [ebp-30h]
  _BYTE v17[44]; // [esp+40h] [ebp-2Ch] BYREF

  sub_90D960((int *)v14, (int)a5);
  v11 = 1;
  v10 = (void **)&off_A9C9B0;
  v12 = a4;
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 0x1C))(a4);
  v16 = &v10;
  v13 = v6;
  sub_90D9C0(a1, a3, v14);
  sub_90DA40(a2, (int)v17, (int)v16, a5 + 1, *a5, v15);
  v7 = ((int (__thiscall *)(void ***))v10[7])(&v10);
  ((void (__thiscall *)(void ***, int, int))v10[6])(&v10, 0x30 * v15, 1);
  sub_90DC60(a1, v14);
  v8 = ((int (__thiscall *)(void ***))v10[7])(&v10);
  sub_90E860(a1, v8, (int)v14, v7);
  ((void (__thiscall *)(void ***, int, _DWORD))v10[6])(&v10, v8, 0);
  v10 = &hkBaseObject::`vftable';
  sub_90DB10((int *)v14);
  return 0;
}
