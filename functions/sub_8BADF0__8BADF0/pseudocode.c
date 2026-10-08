DWORD __stdcall sub_8BADF0(bhkWorldSubUnk024 *lpThreadParameter)
{
  bhkWorldSubUnk *parentStruct; // edi
  _DWORD *v2; // ebx
  UInt32 v3; // eax
  _DWORD *Unk24; // ecx
  void *v6; // [esp+0h] [ebp-360h]
  DWORD v7; // [esp+4h] [ebp-35Ch]
  int v8; // [esp+14h] [ebp-34Ch] BYREF
  _DWORD *v9; // [esp+18h] [ebp-348h] BYREF
  _DWORD *v10; // [esp+1Ch] [ebp-344h]
  _DWORD v11[204]; // [esp+20h] [ebp-340h] BYREF

  parentStruct = lpThreadParameter->parentStruct; /*0x8bae07*/
  sub_8A72A0(v11, unk_BA7D98, 0x10); /*0x8bae1c*/
  sub_8BB000((int)v11); /*0x8bae26*/
  v8 = (**(int (__thiscall ***)(int))unk_BA7D98)(unk_BA7D98); /*0x8bae49*/
  sub_8A7220(&v9, v8, 0x1E8480); /*0x8bae4d*/
  lpThreadParameter->Unk14 = 0; /*0x8bae57*/
  lpThreadParameter->Unk18 = 0; /*0x8bae5a*/
  lpThreadParameter->Unk24 = 0; /*0x8bae5d*/
  WaitForSingleObject_0((HANDLE)0x1E8480, 1u); /*0x8bae60*/
  if ( !lpThreadParameter->Unk0C ) /*0x8bae65*/
  {
    v9 = *((_DWORD **)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8bae7b*/
    v2 = v9; /*0x8bae7f*/
    do /*0x8baed6*/
    {
      sub_8BA9F0(); /*0x8bae81*/
      v9[0x6D] = 1; /*0x8bae8a*/
      sub_898C90(parentStruct->Unk00, parentStruct->Unk08, parentStruct->Unk04); /*0x8bae9e*/
      v3 = v2[0x68]; /*0x8baea3*/
      v2[0x6D] = 0; /*0x8baea9*/
      lpThreadParameter->Unk1C = v3; /*0x8baeb3*/
      lpThreadParameter->Unk20 = v2[0x69]; /*0x8baebc*/
      ReleaseSemaphore_0(&parentStruct->semaphore, 1); /*0x8baec4*/
      WaitForSingleObject_0(v6, v7); /*0x8baecc*/
    }
    while ( !lpThreadParameter->Unk0C ); /*0x8baed6*/
  }
  (*(void (__thiscall **)(int, UInt32))(*(_DWORD *)unk_BA7D98 + 4))(unk_BA7D98, lpThreadParameter->Unk14); /*0x8baee6*/
  Unk24 = (_DWORD *)lpThreadParameter->Unk24; /*0x8baee9*/
  lpThreadParameter->Unk14 = 0; /*0x8baeee*/
  lpThreadParameter->Unk18 = 0; /*0x8baef1*/
  lpThreadParameter->Unk1C = 0; /*0x8baef4*/
  lpThreadParameter->Unk20 = 0; /*0x8baef7*/
  v10 = Unk24; /*0x8baefa*/
  if ( Unk24 ) /*0x8baefe*/
  {
    sub_8BAD50(Unk24); /*0x8baf00*/
    (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))(unk_BA7D98, v10, 0x28, 0x18); /*0x8baf16*/
  }
  lpThreadParameter->Unk24 = 0; /*0x8baf1f*/
  sub_8A7220(&v9, 0, 0); /*0x8baf22*/
  (*(void (__thiscall **)(int, int))(*(_DWORD *)unk_BA7D98 + 4))(unk_BA7D98, v8); /*0x8baf34*/
  sub_8BB020(); /*0x8baf37*/
  ReleaseSemaphore_0(&parentStruct->semaphore, 1); /*0x8baf41*/
  sub_8A7200((char *)&v8); /*0x8baf4a*/
  return 0; /*0x8baf4f*/
}
