0x723F70: push    0FFFFFFFFh
0x723F72: push    offset SEH_723F70
0x723F77: mov     eax, large fs:0
0x723F7D: push    eax
0x723F7E: push    ecx
0x723F7F: push    esi
0x723F80: push    edi
0x723F81: mov     eax, ds:0B30AACh
0x723F86: xor     eax, esp
0x723F88: push    eax
0x723F89: lea     eax, [esp+1Ch+var_C]
0x723F8D: mov     large fs:0, eax
0x723F93: mov     esi, ecx
0x723F95: mov     [esp+1Ch+var_10], esi
0x723F99: xor     edi, edi
0x723F9B: push    edi
0x723F9C: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x723FA1: fldz
0x723FA3: fstp    dword ptr [esi+0E4h]
0x723FA9: mov     dword ptr [esi], offset ??_7NiSwitchNode@@6B@; const NiSwitchNode::`vftable'
0x723FAF: mov     [esi+0DCh], di
0x723FB6: mov     dword ptr [esi+0E0h], 0FFFFFFFFh
0x723FC0: mov     eax, 1
0x723FC5: mov     [esi+0E8h], eax
0x723FCB: xor     ecx, ecx
0x723FCD: mov     [esi+0F4h], ax
0x723FD4: mov     [esi+0FAh], ax
0x723FDB: mov     edx, 4
0x723FE0: mul     edx
0x723FE2: seto    cl
0x723FE5: mov     [esp+1Ch+var_4], edi
0x723FE9: mov     dword ptr [esi+0ECh], offset ??_7?$NiTArray@I@@6B@; const NiTArray<uint>::`vftable'
0x723FF3: mov     [esi+0F6h], di
0x723FFA: mov     [esi+0F8h], di
0x724001: neg     ecx
0x724003: or      ecx, eax
0x724005: push    ecx; Size
0x724006: call    FormHeapAlloc
0x72400B: mov     [esi+0F0h], eax
0x724011: add     esp, 4
0x724014: or      word ptr [esi+0DCh], 3
0x72401C: mov     eax, esi
0x72401E: mov     ecx, [esp+1Ch+var_C]
0x724022: mov     large fs:0, ecx
0x724029: pop     ecx
0x72402A: pop     edi
0x72402B: pop     esi
0x72402C: add     esp, 10h
0x72402F: retn
