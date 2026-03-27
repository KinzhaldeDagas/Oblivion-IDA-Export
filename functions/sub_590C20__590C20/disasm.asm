0x590C20: push    0FFFFFFFFh
0x590C22: push    offset SEH_478B90
0x590C27: mov     eax, large fs:0
0x590C2D: push    eax
0x590C2E: push    ecx
0x590C2F: push    esi
0x590C30: mov     eax, ds:0B30AACh
0x590C35: xor     eax, esp
0x590C37: push    eax
0x590C38: lea     eax, [esp+18h+var_C]
0x590C3C: mov     large fs:0, eax
0x590C42: mov     esi, ecx
0x590C44: mov     eax, [esi+24h]
0x590C47: test    eax, eax
0x590C49: jz      short loc_590C61
0x590C4B: mov     dword ptr [eax+1Ch], 0
0x590C52: mov     ecx, [esi+24h]
0x590C55: test    ecx, ecx
0x590C57: jz      short loc_590C61
0x590C59: mov     eax, [ecx]
0x590C5B: mov     edx, [eax]
0x590C5D: push    1
0x590C5F: call    edx
0x590C61: push    0DCh ; 'Ü'; Size
0x590C66: call    FormHeapAlloc
0x590C6B: add     esp, 4
0x590C6E: mov     [esp+18h+var_10], eax
0x590C72: test    eax, eax
0x590C74: mov     [esp+18h+var_4], 0
0x590C7C: jz      short loc_590C89
0x590C7E: push    0
0x590C80: mov     ecx, eax; this
0x590C82: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x590C87: jmp     short loc_590C8B
0x590C89: xor     eax, eax
0x590C8B: mov     ecx, [esi+10h]
0x590C8E: mov     [esp+18h+var_4], 0FFFFFFFFh
0x590C96: mov     [esi+24h], eax
0x590C99: call    sub_5894D0
0x590C9E: test    eax, eax
0x590CA0: jnz     short loc_590CB0
0x590CA2: push    1; arg1
0x590CA4: push    eax; canCreate
0x590CA5: call    InterfaceManager_GetSingleton
0x590CAA: mov     eax, [eax+54h]
0x590CAD: add     esp, 8
0x590CB0: mov     ecx, [esi+24h]
0x590CB3: mov     edx, [eax]
0x590CB5: mov     edx, [edx+84h]
0x590CBB: push    1
0x590CBD: push    ecx
0x590CBE: mov     ecx, eax
0x590CC0: call    edx
0x590CC2: mov     ecx, esi
0x590CC4: call    sub_590970
0x590CC9: push    14h; Size
0x590CCB: call    FormHeapAlloc
0x590CD0: add     esp, 4
0x590CD3: mov     [esp+18h+var_10], eax
0x590CD7: test    eax, eax
0x590CD9: mov     [esp+18h+var_4], 1
0x590CE1: jz      short loc_590CF1
0x590CE3: mov     ecx, [esi+24h]
0x590CE6: push    ecx
0x590CE7: push    esi
0x590CE8: mov     ecx, eax; this
0x590CEA: call    ??0Extra@Tile@@QAE@XZ; Tile::Extra::Extra(void)
0x590CEF: jmp     short loc_590CF3
0x590CF1: xor     eax, eax
0x590CF3: mov     ecx, [esi+24h]
0x590CF6: push    eax
0x590CF7: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x590CFF: call    NiNode_AddNiExtraData
0x590D04: mov     eax, [esi+24h]
0x590D07: mov     ecx, dword ptr [esp+18h+var_C]
0x590D0B: mov     large fs:0, ecx
0x590D12: pop     ecx
0x590D13: pop     esi
0x590D14: add     esp, 10h
0x590D17: retn
