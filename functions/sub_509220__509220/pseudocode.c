char __cdecl sub_509220(int a1, int a2, int *a3)
{
  int v3; // ebp
  void (__thiscall *v4)(int *, _DWORD, _DWORD, _DWORD); // edx
  float *v5; // eax
  NiMatrix33 *v6; // eax
  int (__thiscall *v7)(int *, _BYTE *); // edx
  int v8; // eax
  NiMatrix33 *v9; // eax
  int (__thiscall *v10)(int *, _BYTE *); // edx
  int v11; // eax
  NiMatrix33 *v12; // eax
  int v13; // edx
  _DWORD *v14; // eax
  _BYTE v16[12]; // [esp+34h] [ebp-78h] BYREF
  NiMatrix33 right; // [esp+40h] [ebp-6Ch] BYREF
  NiMatrix33 v18; // [esp+64h] [ebp-48h] BYREF
  NiMatrix33 out; // [esp+88h] [ebp-24h] BYREF

  if ( a3 ) /*0x509230*/
  {
    v3 = (*(int (__thiscall **)(int *))(*a3 + 0x154))(a3); /*0x509242*/
    if ( v3 ) /*0x509246*/
    {
      v4 = *(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD))(*a3 + 0xF8); /*0x50924e*/
      qmemcpy(&right, &stru_B26AF0[0xA].unk2C, sizeof(right)); /*0x509262*/
      v4(a3, LODWORD(g_zeroNiPoint3.x), LODWORD(g_zeroNiPoint3.y), LODWORD(g_zeroNiPoint3.z)); /*0x509285*/
      v5 = (float *)(*(int (__thiscall **)(int *, _BYTE *))(*a3 + 0xF0))(a3, v16); /*0x509296*/
      NiMatrix33_InitRotationXTransposed(&v18, *v5); /*0x5092a2*/
      v6 = NiMAtrix33_Multiply(&v18, &out, &right); /*0x5092b5*/
      v7 = *(int (__thiscall **)(int *, _BYTE *))(*a3 + 0xF0); /*0x5092bc*/
      qmemcpy(&right, v6, sizeof(right)); /*0x5092d1*/
      v8 = v7(a3, v16); /*0x5092d6*/
      NiMatrix33_InitRotationY(&v18, *(float *)(v8 + 4)); /*0x5092e3*/
      v9 = NiMAtrix33_Multiply(&v18, &out, &right); /*0x5092f6*/
      v10 = *(int (__thiscall **)(int *, _BYTE *))(*a3 + 0xF0); /*0x5092fd*/
      qmemcpy(&right, v9, sizeof(right)); /*0x509312*/
      v11 = v10(a3, v16); /*0x509317*/
      NiMatrix33_InitRotationZ(&v18, *(float *)(v11 + 8)); /*0x509324*/
      v12 = NiMAtrix33_Multiply(&v18, &out, &right); /*0x509337*/
      v13 = *a3; /*0x50933c*/
      qmemcpy(&right, v12, sizeof(right)); /*0x509349*/
      v14 = (_DWORD *)(*(int (__thiscall **)(int *, _BYTE *))(v13 + 0xF4))(a3, v16); /*0x509358*/
      *(_DWORD *)(v3 + 0x54) = *v14; /*0x50935c*/
      *(_DWORD *)(v3 + 0x58) = v14[1]; /*0x509362*/
      *(_DWORD *)(v3 + 0x5C) = v14[2]; /*0x509368*/
      qmemcpy((void *)(v3 + 0x30), &right, 0x24u); /*0x509377*/
      if ( !(*(int (__thiscall **)(int *))(*a3 + 0x164))(a3) ) /*0x509383*/
        NiAVObject_UpdateNiAVObject((NiAVObject *)v3, 0.0, 0); /*0x509392*/
    }
  }
  return 1; /*0x509397*/
}
