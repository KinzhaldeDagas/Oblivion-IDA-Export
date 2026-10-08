void __thiscall sub_89D7B0(void *this, signed int a2)
{
  int v3; // eax
  signed int v4; // ebx
  int v5; // edi
  void (__cdecl *v6)(int, int, int, signed int *, int); // eax
  int v7; // [esp-14h] [ebp-24h]
  int v8; // [esp-Ch] [ebp-1Ch]
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v3 = (*(int (__thiscall **)(void *, int *))(*(_DWORD *)this + 0x74))(this, &v9); /*0x89d7c2*/
  v4 = a2; /*0x89d7c4*/
  v5 = v3; /*0x89d7cb*/
  nullsub_returnvVoid_1arg(a2); /*0x89d7cd*/
  if ( v5 ) /*0x89d7d4*/
  {
    v8 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x68))(this); /*0x89d7ec*/
    v6 = *(void (__cdecl **)(int, int, int, signed int *, int))(*(_DWORD *)(v4 + 0x220) + 8); /*0x89d7ed*/
    v7 = *(_DWORD *)(v4 + 0x220); /*0x89d7f1*/
    a2 = 1; /*0x89d7f2*/
    v6(v7, v5, v8, &a2, 1); /*0x89d7fa*/
    (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x64))(this, v9); /*0x89d80b*/
  }
}
