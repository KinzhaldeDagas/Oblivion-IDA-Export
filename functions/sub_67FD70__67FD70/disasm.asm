0x67FD70: push    0FFFFFFFFh
0x67FD72: push    offset SEH_67FD70
0x67FD77: mov     eax, large fs:0
0x67FD7D: push    eax
0x67FD7E: sub     esp, 8
0x67FD81: push    ebx
0x67FD82: push    ebp
0x67FD83: push    esi
0x67FD84: push    edi
0x67FD85: mov     eax, ds:0B30AACh
0x67FD8A: xor     eax, esp
0x67FD8C: push    eax
0x67FD8D: lea     eax, [esp+28h+var_C]
0x67FD91: mov     large fs:0, eax
0x67FD97: push    offset unk_A2F830; lpCriticalSection
0x67FD9C: mov     ecx, offset g_pathingMutex
0x67FDA1: call    NiEnterCriticalSection
0x67FDA6: mov     edi, [esp+28h+arg_0]
0x67FDAA: xor     esi, esi
0x67FDAC: cmp     edi, esi
0x67FDAE: jz      loc_67FFF5
0x67FDB4: mov     ecx, edi
0x67FDB6: mov     [esp+28h+var_14], esi
0x67FDBA: call    sub_452A60
0x67FDBF: mov     ebp, eax
0x67FDC1: mov     ecx, edi
0x67FDC3: mov     [esp+28h+a2], ebp
0x67FDC7: call    NiDX92DBufferData__GetSurfaceData
0x67FDCC: mov     ecx, ds:0B3BE00h
0x67FDD2: mov     ebx, eax
0x67FDD4: lea     eax, [esp+28h+var_14]
0x67FDD8: push    eax
0x67FDD9: push    ebp
0x67FDDA: call    NiTMap_GetAt
0x67FDDF: test    al, al
0x67FDE1: jz      short loc_67FE42
0x67FDE3: mov     ebp, [esp+28h+var_14]
0x67FDE7: cmp     ebp, esi
0x67FDE9: jz      short loc_67FE3E
0x67FDEB: lea     ecx, [esp+28h+var_14]
0x67FDEF: push    ecx
0x67FDF0: push    ebx
0x67FDF1: mov     ecx, ebp
0x67FDF3: mov     [esp+30h+var_14], esi
0x67FDF7: call    NiTMap_GetAt
0x67FDFC: test    al, al
0x67FDFE: jz      short loc_67FE13
0x67FE00: mov     ecx, [esp+28h+var_14]
0x67FE04: cmp     ecx, esi
0x67FE06: jz      short loc_67FE13
0x67FE08: push    edi
0x67FE09: call    BSSimpleList_PushFront
0x67FE0E: jmp     loc_67FEDA
0x67FE13: push    8; Size
0x67FE15: call    FormHeapAlloc
0x67FE1A: add     esp, 4
0x67FE1D: cmp     eax, esi
0x67FE1F: jz      short loc_67FE32
0x67FE21: mov     edx, [esp+28h+arg_0]
0x67FE25: mov     [eax], esi
0x67FE27: mov     [eax+4], esi
0x67FE2A: mov     edi, eax
0x67FE2C: push    edx
0x67FE2D: jmp     loc_67FECA
0x67FE32: mov     edx, [esp+28h+arg_0]
0x67FE36: xor     edi, edi
0x67FE38: push    edx
0x67FE39: jmp     loc_67FECA
0x67FE3E: mov     ebp, [esp+28h+a2]
0x67FE42: cmp     byte ptr [ebp+4], 35h ; '5'
0x67FE46: push    10h; Size
0x67FE48: jnz     short loc_67FE6C
0x67FE4A: call    FormHeapAlloc
0x67FE4F: add     esp, 4
0x67FE52: mov     [esp+28h+var_14], eax
0x67FE56: cmp     eax, esi
0x67FE58: mov     [esp+28h+var_4], esi
0x67FE5C: jz      short loc_67FE8F
0x67FE5E: push    0BFh ; '¿'
0x67FE63: mov     ecx, eax
0x67FE65: call    ??0?$NiTPointerMap@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@QAE@XZ; NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>(void)
0x67FE6A: jmp     short loc_67FE91
0x67FE6C: call    FormHeapAlloc
0x67FE71: add     esp, 4
0x67FE74: mov     [esp+28h+var_14], eax
0x67FE78: cmp     eax, esi
0x67FE7A: mov     [esp+28h+var_4], 1
0x67FE82: jz      short loc_67FE8F
0x67FE84: push    25h ; '%'
0x67FE86: mov     ecx, eax
0x67FE88: call    ??0?$NiTPointerMap@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@QAE@XZ; NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>(void)
0x67FE8D: jmp     short loc_67FE91
0x67FE8F: xor     eax, eax
0x67FE91: mov     ecx, ds:0B3BE00h; this
0x67FE97: mov     ebp, eax
0x67FE99: mov     eax, [esp+28h+a2]
0x67FE9D: push    ebp; a3
0x67FE9E: push    eax; a2
0x67FE9F: mov     [esp+30h+var_4], 0FFFFFFFFh
0x67FEA7: call    NiTMap_SetAt
0x67FEAC: push    8; Size
0x67FEAE: call    FormHeapAlloc
0x67FEB3: add     esp, 4
0x67FEB6: cmp     eax, esi
0x67FEB8: jz      short loc_67FEC3
0x67FEBA: mov     [eax], esi
0x67FEBC: mov     [eax+4], esi
0x67FEBF: mov     edi, eax
0x67FEC1: jmp     short loc_67FEC5
0x67FEC3: xor     edi, edi
0x67FEC5: mov     ecx, [esp+28h+arg_0]
0x67FEC9: push    ecx
0x67FECA: mov     ecx, edi
0x67FECC: call    BSSimpleList_PushFront
0x67FED1: push    edi; a3
0x67FED2: push    ebx; a2
0x67FED3: mov     ecx, ebp; this
0x67FED5: call    NiTMap_SetAt
0x67FEDA: cmp     [esp+28h+a2], ebx
0x67FEDE: jz      loc_67FFF5
0x67FEE4: mov     ecx, ds:0B3BE00h
0x67FEEA: lea     edx, [esp+28h+var_14]
0x67FEEE: push    edx
0x67FEEF: push    ebx
0x67FEF0: mov     [esp+30h+var_14], esi
0x67FEF4: call    NiTMap_GetAt
0x67FEF9: test    al, al
0x67FEFB: jz      short loc_67FF5D
0x67FEFD: mov     edi, [esp+28h+var_14]
0x67FF01: cmp     edi, esi
0x67FF03: jz      short loc_67FF5D
0x67FF05: mov     ebx, [esp+28h+a2]
0x67FF09: lea     eax, [esp+28h+var_14]
0x67FF0D: push    eax
0x67FF0E: push    ebx
0x67FF0F: mov     ecx, edi
0x67FF11: mov     [esp+30h+var_14], esi
0x67FF15: call    NiTMap_GetAt
0x67FF1A: test    al, al
0x67FF1C: jz      short loc_67FF35
0x67FF1E: mov     ecx, [esp+28h+var_14]
0x67FF22: cmp     ecx, esi
0x67FF24: jz      short loc_67FF35
0x67FF26: mov     edx, [esp+28h+arg_0]
0x67FF2A: push    edx
0x67FF2B: call    BSSimpleList_PushFront
0x67FF30: jmp     loc_67FFF5
0x67FF35: push    8; Size
0x67FF37: call    FormHeapAlloc
0x67FF3C: add     esp, 4
0x67FF3F: cmp     eax, esi
0x67FF41: jz      short loc_67FF4A
0x67FF43: mov     [eax], esi
0x67FF45: mov     [eax+4], esi
0x67FF48: mov     esi, eax
0x67FF4A: mov     eax, [esp+28h+arg_0]
0x67FF4E: push    eax
0x67FF4F: mov     ecx, esi
0x67FF51: call    BSSimpleList_PushFront
0x67FF56: push    esi
0x67FF57: push    ebx
0x67FF58: jmp     loc_67FFEE
0x67FF5D: cmp     byte ptr [ebx+4], 35h ; '5'
0x67FF61: push    10h; Size
0x67FF63: jnz     short loc_67FF8B
0x67FF65: call    FormHeapAlloc
0x67FF6A: add     esp, 4
0x67FF6D: mov     [esp+28h+var_14], eax
0x67FF71: cmp     eax, esi
0x67FF73: mov     [esp+28h+var_4], 2
0x67FF7B: jz      short loc_67FFAE
0x67FF7D: push    0BFh ; '¿'
0x67FF82: mov     ecx, eax
0x67FF84: call    ??0?$NiTPointerMap@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@QAE@XZ; NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>(void)
0x67FF89: jmp     short loc_67FFB0
0x67FF8B: call    FormHeapAlloc
0x67FF90: add     esp, 4
0x67FF93: mov     [esp+28h+var_14], eax
0x67FF97: cmp     eax, esi
0x67FF99: mov     [esp+28h+var_4], 3
0x67FFA1: jz      short loc_67FFAE
0x67FFA3: push    25h ; '%'
0x67FFA5: mov     ecx, eax
0x67FFA7: call    ??0?$NiTPointerMap@PAVTESForm@@PAV?$BSSimpleList@PAVAStarWorldNode@@@@@@QAE@XZ; NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>::NiTPointerMap<TESForm *,BSSimpleList<AStarWorldNode *> *>(void)
0x67FFAC: jmp     short loc_67FFB0
0x67FFAE: xor     eax, eax
0x67FFB0: mov     ecx, ds:0B3BE00h; this
0x67FFB6: mov     edi, eax
0x67FFB8: push    edi; a3
0x67FFB9: push    ebx; a2
0x67FFBA: mov     [esp+30h+var_4], 0FFFFFFFFh
0x67FFC2: call    NiTMap_SetAt
0x67FFC7: push    8; Size
0x67FFC9: call    FormHeapAlloc
0x67FFCE: add     esp, 4
0x67FFD1: cmp     eax, esi
0x67FFD3: jz      short loc_67FFDC
0x67FFD5: mov     [eax], esi
0x67FFD7: mov     [eax+4], esi
0x67FFDA: mov     esi, eax
0x67FFDC: mov     ecx, [esp+28h+arg_0]
0x67FFE0: push    ecx
0x67FFE1: mov     ecx, esi
0x67FFE3: call    BSSimpleList_PushFront
0x67FFE8: mov     edx, [esp+28h+a2]
0x67FFEC: push    esi; a3
0x67FFED: push    edx; a2
0x67FFEE: mov     ecx, edi; this
0x67FFF0: call    NiTMap_SetAt
0x67FFF5: mov     ecx, offset g_pathingMutex; lpCriticalSection
0x67FFFA: call    NiLeaveCriticalSection_0
0x67FFFF: mov     ecx, dword ptr [esp+28h+var_C]
0x680003: mov     large fs:0, ecx
0x68000A: pop     ecx
0x68000B: pop     edi
0x68000C: pop     esi
0x68000D: pop     ebp
0x68000E: pop     ebx
0x68000F: add     esp, 14h
0x680012: retn
