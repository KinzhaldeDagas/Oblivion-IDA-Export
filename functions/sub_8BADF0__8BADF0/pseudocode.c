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

  parentStruct = lpThreadParameter->parentStruct;
  sub_8A72A0(v11, dword_BA7D98, 0x10);
  sub_8BB000((int)v11);
  v8 = (**(int (__thiscall ***)(int))dword_BA7D98)(dword_BA7D98);
  sub_8A7220(&v9, v8, 0x1E8480);
  lpThreadParameter->Unk14 = 0;
  lpThreadParameter->Unk18 = 0;
  lpThreadParameter->Unk24 = 0;
  WaitForSingleObject_0((HANDLE)0x1E8480, 1u);
  if ( !lpThreadParameter->Unk0C )
  {
    v9 = *((_DWORD **)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
    v2 = v9;
    do
    {
      sub_8BA9F0();
      v9[0x6D] = 1;
      sub_898C90(parentStruct->Unk00, parentStruct->Unk08, parentStruct->Unk04);
      v3 = v2[0x68];
      v2[0x6D] = 0;
      lpThreadParameter->Unk1C = v3;
      lpThreadParameter->Unk20 = v2[0x69];
      ReleaseSemaphore_0(&parentStruct->semaphore, 1);
      WaitForSingleObject_0(v6, v7);
    }
    while ( !lpThreadParameter->Unk0C );
  }
  (*(void (__thiscall **)(int, UInt32))(*(_DWORD *)dword_BA7D98 + 4))(dword_BA7D98, lpThreadParameter->Unk14);
  Unk24 = (_DWORD *)lpThreadParameter->Unk24;
  lpThreadParameter->Unk14 = 0;
  lpThreadParameter->Unk18 = 0;
  lpThreadParameter->Unk1C = 0;
  lpThreadParameter->Unk20 = 0;
  v10 = Unk24;
  if ( Unk24 )
  {
    sub_8BAD50(Unk24);
    (*(void (__thiscall **)(int, _DWORD *, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(dword_BA7D98, v10, 0x28, 0x18);
  }
  lpThreadParameter->Unk24 = 0;
  sub_8A7220(&v9, 0, 0);
  (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_BA7D98 + 4))(dword_BA7D98, v8);
  sub_8BB020();
  ReleaseSemaphore_0(&parentStruct->semaphore, 1);
  sub_8A7200((char *)&v8);
  return 0;
}
