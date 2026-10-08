char __thiscall sub_8BF880(_DWORD *this, int a2, int *a3)
{
  int *v3; // esi
  int v5; // edi
  char result; // al
  _DWORD v7[3]; // [esp+4h] [ebp-20h] BYREF
  char v8; // [esp+10h] [ebp-14h]
  float v9; // [esp+14h] [ebp-10h]
  char v10; // [esp+18h] [ebp-Ch]
  int v11; // [esp+1Ch] [ebp-8h]
  int v12; // [esp+20h] [ebp-4h]
  float v13; // [esp+2Ch] [ebp+8h]

  v9 = flt_A2FE7C; /*0x8bf88c*/
  v3 = a3; /*0x8bf890*/
  memset(v7, 0, sizeof(v7)); /*0x8bf899*/
  v8 = 0; /*0x8bf8a5*/
  v10 = 0; /*0x8bf8a9*/
  v11 = 0; /*0x8bf8ad*/
  v12 = 0; /*0x8bf8b1*/
  if ( !a3 ) /*0x8bf8b5*/
  {
    v3 = v7; /*0x8bf8c6*/
    (*(void (__cdecl **)(_DWORD, _DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)(a2 + 0x21C) + 4))( /*0x8bf8d0*/
      *(_DWORD *)(a2 + 0x21C),
      v7,
      0x20,
      0,
      0);
  }
  (*(void (__thiscall **)(_DWORD *))(*this + 0x10))(this); /*0x8bf8dc*/
  v5 = *(this + 1); /*0x8bf8e1*/
  *(_BYTE *)(v5 + 0x18) = *((_BYTE *)v3 + 0xC); /*0x8bf8e4*/
  result = *((_BYTE *)v3 + 0x14); /*0x8bf8e7*/
  *(_BYTE *)(v5 + 0x19) = result; /*0x8bf8ea*/
  v13 = sqrt(*((float *)v3 + 4)); /*0x8bf8f5*/
  *(float *)(v5 + 0x14) = v13; /*0x8bf8fd*/
  return result; /*0x8bf901*/
}
