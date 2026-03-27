int __stdcall sub_91E120(int a1, int *a2)
{
  _DWORD *ThreadLocalStoragePointer; // edi
  int v3; // eax
  int v4; // esi
  _DWORD *v5; // ecx
  unsigned __int64 v6; // rax
  int v7; // edi
  _WORD *v8; // esi
  int v9; // eax
  unsigned __int64 v10; // rax
  int v11; // esi
  _DWORD *v12; // ecx
  int (__thiscall ***v14[10])(int (__stdcall ***)(signed int), int); // [esp+18h] [ebp-4B8h] BYREF
  __m128 v15[13]; // [esp+40h] [ebp-490h] BYREF
  MobileObject v16; // [esp+110h] [ebp-3C0h] BYREF
  _DWORD v17[200]; // [esp+1B0h] [ebp-320h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v3 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v3 + 0x1A4) < *(_DWORD *)(v3 + 0x1A8) )
  {
    v4 = ThreadLocalStoragePointer[TlsIndex];
    v5 = *(_DWORD **)(v3 + 0x1A4);
    *v5 = "Ttdraw";
    v6 = __rdtsc();
    v5[1] = v6;
    *(_DWORD *)(v4 + 0x1A4) = v5 + 3;
  }
  switch ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0xC) + 0xC))(*(_DWORD *)(a1 + 0xC)) )
  {
    case 0:
      sub_94CEF0(v15);
      sub_94F610(v15, a1, (int)a2, dword_BA845C);
      break;
    case 1:
      sub_94CEF0(v15);
      sub_94F4E0(v15, a1, (int)a2, dword_BA845C);
      break;
    case 2:
    case 4:
      sub_94CEF0(v15);
      sub_94D270(&v16);
      sub_94F1C0(v15, a1, a2, dword_BA845C);
      MobileObject::~MobileObject(&v16);
      break;
    case 3:
      sub_94CEF0(v15);
      sub_94E860(v15, a1, a2, dword_BA845C);
      break;
    case 5:
    case 7:
      sub_91E0B0(v17);
      sub_94E0A0(v17, a1, (int)a2, dword_BA845C);
      sub_91E0F0((int)v17);
      break;
    case 6:
      sub_94CEF0(v15);
      sub_94EEE0(v15, a1, (int)a2, dword_BA845C);
      break;
    case 8:
      sub_94CEF0(v15);
      sub_94ED70(v15, a1, (int)a2, dword_BA845C);
      break;
    case 9:
      sub_94CEF0(v15);
      sub_94EA10(v15, a1, a2, dword_BA845C);
      break;
    case 0xC:
      sub_8D99A0(v14, *(_WORD **)(a1 + 0x10), *(_DWORD *)(a1 + 0x14), *(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0xC), 1, 1);
      sub_91E120((int)v14, a2);
      sub_8D98E0(v14);
      break;
    case 0xD:
      v7 = *(_DWORD *)(a1 + 0x14);
      v8 = *(_WORD **)(a1 + 0x10);
      v9 = sub_88D370(*(_DWORD **)(a1 + 0xC));
      sub_8D99A0(v14, v8, v7, v9, 1, 1);
      sub_91E120((int)v14, a2);
      sub_8D98E0(v14);
      ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
      break;
    case 0xE:
      sub_94CEF0(v15);
      sub_94E5C0(v15, a1, a2, dword_BA845C);
      break;
    default:
      break;
  }
  LODWORD(v10) = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v10 + 0x1A4) < *(_DWORD *)(v10 + 0x1A8) )
  {
    v11 = ThreadLocalStoragePointer[TlsIndex];
    v12 = *(_DWORD **)(v10 + 0x1A4);
    *v12 = "Et";
    v10 = __rdtsc();
    v12[1] = v10;
    *(_DWORD *)(v11 + 0x1A4) = v12 + 3;
  }
  return v10;
}
