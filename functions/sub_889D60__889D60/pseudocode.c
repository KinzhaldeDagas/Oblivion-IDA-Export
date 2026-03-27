bool __userpurge sub_889D60@<al>(int a1@<ecx>, int a2@<ebx>, int a3)
{
  int v4; // ecx
  int (__thiscall *v5)(int); // eax
  int v6; // edi
  _DWORD *v7; // eax
  bool v8; // bl
  int v10; // [esp-8h] [ebp-34h] BYREF
  signed int v11; // [esp-4h] [ebp-30h]
  int *v12; // [esp+10h] [ebp-1Ch]
  _DWORD v13[3]; // [esp+14h] [ebp-18h] BYREF
  unsigned int v14; // [esp+28h] [ebp-4h]

  sub_8BBF80(v13, a3);
  v11 = 0;
  v10 = v4;
  LOBYTE(v10) = 0;
  v5 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x58);
  v6 = v13[2];
  v14 = 0;
  v12 = &v10;
  v7 = (_DWORD *)v5(a1);
  sub_8BC6C0(a2, &a3, v7, v6, v10, v11);
  v8 = (_BYTE)a3 != 0;
  v14 = 0xFFFFFFFF;
  sub_8BC000(v13);
  return v8;
}
