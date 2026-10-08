int __thiscall sub_6C8920(_DWORD *this, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned __int16 v4; // ax
  void (__cdecl *v5)(int, unsigned int *, int, int *, int); // eax
  unsigned __int16 v6; // ax
  void (__cdecl *v7)(int, unsigned int *, int, int *, int); // edx
  unsigned __int16 v8; // ax
  void (__cdecl *v9)(int, unsigned int *, int, int *, int); // eax
  unsigned __int16 v10; // ax
  void (__cdecl *v11)(int, unsigned int *, int, int *, int); // edx
  unsigned __int16 v12; // ax
  int v13; // edi
  int (__cdecl *v14)(int, unsigned int *, int, int *, int); // eax
  int v16; // [esp-14h] [ebp-28h]
  int v17; // [esp-14h] [ebp-28h]
  int v18; // [esp-14h] [ebp-28h]
  int v19; // [esp-14h] [ebp-28h]
  int v20; // [esp+10h] [ebp-4h] BYREF

  v2 = a2; /*0x6c8925*/
  (*(void (__thiscall **)(unsigned int, _DWORD))(*(_DWORD *)a2 + 0x2C))(a2, *this); /*0x6c8935*/
  v4 = *((_WORD *)this + 2); /*0x6c8937*/
  if ( v4 == 0xFFFF ) /*0x6c8942*/
    a2 = 0xFFFFFFFF; /*0x6c8944*/
  else
    a2 = v4; /*0x6c894d*/
  v16 = *(_DWORD *)(v2 + 0x220); /*0x6c8969*/
  v5 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v16 + 8); /*0x6c896a*/
  v20 = 4; /*0x6c896d*/
  v5(v16, &a2, 4, &v20, 1); /*0x6c8971*/
  v6 = *((_WORD *)this + 3); /*0x6c8973*/
  if ( v6 == 0xFFFF ) /*0x6c897e*/
    a2 = 0xFFFFFFFF; /*0x6c8980*/
  else
    a2 = v6; /*0x6c8989*/
  v7 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x6c899a*/
  v17 = *(_DWORD *)(v2 + 0x220); /*0x6c89a3*/
  v20 = 4; /*0x6c89a4*/
  v7(v17, &a2, 4, &v20, 1); /*0x6c89a8*/
  v8 = *((_WORD *)this + 4); /*0x6c89aa*/
  if ( v8 == 0xFFFF ) /*0x6c89b5*/
    a2 = 0xFFFFFFFF; /*0x6c89b7*/
  else
    a2 = v8; /*0x6c89c0*/
  v18 = *(_DWORD *)(v2 + 0x220); /*0x6c89d7*/
  v9 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(v18 + 8); /*0x6c89d8*/
  v20 = 4; /*0x6c89db*/
  v9(v18, &a2, 4, &v20, 1); /*0x6c89df*/
  v10 = *((_WORD *)this + 5); /*0x6c89e1*/
  if ( v10 == 0xFFFF ) /*0x6c89ec*/
    a2 = 0xFFFFFFFF; /*0x6c89ee*/
  else
    a2 = v10; /*0x6c89f7*/
  v11 = *(void (__cdecl **)(int, unsigned int *, int, int *, int))(*(_DWORD *)(v2 + 0x220) + 8); /*0x6c8a08*/
  v19 = *(_DWORD *)(v2 + 0x220); /*0x6c8a11*/
  v20 = 4; /*0x6c8a12*/
  v11(v19, &a2, 4, &v20, 1); /*0x6c8a16*/
  v12 = *((_WORD *)this + 6); /*0x6c8a18*/
  if ( v12 == 0xFFFF ) /*0x6c8a23*/
    a2 = 0xFFFFFFFF; /*0x6c8a25*/
  else
    a2 = v12; /*0x6c8a2e*/
  v13 = *(_DWORD *)(v2 + 0x220); /*0x6c8a32*/
  v14 = *(int (__cdecl **)(int, unsigned int *, int, int *, int))(v13 + 8); /*0x6c8a38*/
  v20 = 4; /*0x6c8a49*/
  return v14(v13, &a2, 4, &v20, 1); /*0x6c8a52*/
}
