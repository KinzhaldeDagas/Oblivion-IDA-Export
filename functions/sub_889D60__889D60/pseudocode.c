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

  sub_8BBF80(v13, a3); /*0x889d91*/
  v11 = 0; /*0x889d96*/
  v10 = v4; /*0x889d98*/
  LOBYTE(v10) = 0; /*0x889d9b*/
  v5 = *(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x58); /*0x889da0*/
  v6 = v13[2]; /*0x889da3*/
  v14 = 0; /*0x889da9*/
  v12 = &v10; /*0x889db1*/
  v7 = (_DWORD *)v5(a1); /*0x889db5*/
  sub_8BC6C0(a2, &a3, v7, v6, v10, v11); /*0x889dbe*/
  v8 = (_BYTE)a3 != 0; /*0x889dcf*/
  v14 = 0xFFFFFFFF; /*0x889dd2*/
  sub_8BC000(v13); /*0x889dda*/
  return v8; /*0x889de1*/
}
