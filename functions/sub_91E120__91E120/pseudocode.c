int __stdcall sub_91E120(int a1, int *a2)
{
  _DWORD *ThreadLocalStoragePointer; // edi
  int v3; // eax
  int v4; // esi
  _DWORD *v5; // ecx
  unsigned __int64 v6; // rax
  int v7; // edi
  _WORD *v8; // esi
  int StateId; // eax
  unsigned __int64 v10; // rax
  int v11; // esi
  _DWORD *v12; // ecx
  int (__stdcall ***v14[10])(signed int); // [esp+18h] [ebp-4B8h] BYREF
  __m128 v15[13]; // [esp+40h] [ebp-490h] BYREF
  MobileObject v16; // [esp+110h] [ebp-3C0h] BYREF
  _DWORD v17[200]; // [esp+1B0h] [ebp-320h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91e12f*/
  v3 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91e13e*/
  if ( *(_DWORD *)(v3 + 0x1A4) < *(_DWORD *)(v3 + 0x1A8) ) /*0x91e14d*/
  {
    v4 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91e14f*/
    v5 = *(_DWORD **)(v3 + 0x1A4); /*0x91e151*/
    *v5 = "Ttdraw"; /*0x91e157*/
    v6 = __rdtsc(); /*0x91e15d*/
    v5[1] = v6; /*0x91e167*/
    *(_DWORD *)(v4 + 0x1A4) = v5 + 3; /*0x91e16d*/
  }
  switch ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0xC) + 0xC))(*(_DWORD *)(a1 + 0xC)) ) /*0x91e187*/
  {
    case 0: /*0x91e187*/
      sub_94CEF0(v15); /*0x91e192*/
      sub_94F610(v15, a1, (int)a2, unk_BA845C); /*0x91e1a6*/
      break; /*0x91e1ab*/
    case 1: /*0x91e187*/
      sub_94CEF0(v15); /*0x91e1b4*/
      sub_94F4E0(v15, a1, a2, unk_BA845C); /*0x91e1c9*/
      break; /*0x91e1ce*/
    case 2: /*0x91e187*/
    case 4: /*0x91e187*/
      sub_94CEF0(v15); /*0x91e1d7*/
      sub_94D270(&v16); /*0x91e1e3*/
      sub_94F1C0(v15, a1, a2, unk_BA845C); /*0x91e1f8*/
      MobileObject::~MobileObject(&v16); /*0x91e204*/
      break; /*0x91e209*/
    case 3: /*0x91e187*/
      sub_94CEF0(v15); /*0x91e27a*/
      sub_94E860(v15, a1, a2, unk_BA845C); /*0x91e28e*/
      break; /*0x91e293*/
    case 5: /*0x91e187*/
    case 7: /*0x91e187*/
      sub_91E0B0(v17); /*0x91e2c2*/
      sub_94E0A0(v17, a1, a2, unk_BA845C); /*0x91e2da*/
      sub_91E0F0((int)v17); /*0x91e2e6*/
      break; /*0x91e2eb*/
    case 6: /*0x91e187*/
      sub_94CEF0(v15); /*0x91e212*/
      sub_94EEE0(v15, a1, a2, unk_BA845C); /*0x91e226*/
      break; /*0x91e22b*/
    case 8: /*0x91e187*/
      sub_94CEF0(v15); /*0x91e234*/
      sub_94ED70(v15, a1, a2, unk_BA845C); /*0x91e249*/
      break; /*0x91e24e*/
    case 9: /*0x91e187*/
      sub_94CEF0(v15); /*0x91e257*/
      sub_94EA10(v15, a1, a2, unk_BA845C); /*0x91e26c*/
      break; /*0x91e271*/
    case 0xC: /*0x91e187*/
      sub_8D99A0(v14, *(_WORD **)(a1 + 0x10), *(_DWORD *)(a1 + 0x14), *(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0xC), 1, 1); /*0x91e304*/
      sub_91E120((int)v14, a2); /*0x91e314*/
      sub_8D98E0(v14); /*0x91e31d*/
      break; /*0x91e322*/
    case 0xD: /*0x91e187*/
      v7 = *(_DWORD *)(a1 + 0x14); /*0x91e327*/
      v8 = *(_WORD **)(a1 + 0x10); /*0x91e32a*/
      StateId = hkCharacterContext_GetStateId(*(_DWORD **)(a1 + 0xC)); /*0x91e331*/
      sub_8D99A0(v14, v8, v7, StateId, 1, 1); /*0x91e33d*/
      sub_91E120((int)v14, a2); /*0x91e34d*/
      sub_8D98E0(v14); /*0x91e356*/
      ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91e35b*/
      break; /*0x91e35b*/
    case 0xE: /*0x91e187*/
      sub_94CEF0(v15); /*0x91e29c*/
      sub_94E5C0(v15, a1, a2, unk_BA845C); /*0x91e2b1*/
      break; /*0x91e2b6*/
    default:
      break;
  }
  LODWORD(v10) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91e362*/
  if ( *(_DWORD *)(v10 + 0x1A4) < *(_DWORD *)(v10 + 0x1A8) ) /*0x91e377*/
  {
    v11 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91e379*/
    v12 = *(_DWORD **)(v10 + 0x1A4); /*0x91e37b*/
    *v12 = "Et"; /*0x91e381*/
    v10 = __rdtsc(); /*0x91e387*/
    v12[1] = v10; /*0x91e391*/
    *(_DWORD *)(v11 + 0x1A4) = v12 + 3; /*0x91e397*/
  }
  return v10; /*0x91e39d*/
}
