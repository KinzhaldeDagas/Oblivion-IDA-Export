0x435E70: push    0FFFFFFFFh
0x435E72: push    offset SEH_787830
0x435E77: mov     eax, large fs:0
0x435E7D: push    eax
0x435E7E: push    ebp
0x435E7F: push    esi
0x435E80: push    edi
0x435E81: mov     eax, ___security_cookie
0x435E86: xor     eax, esp
0x435E88: push    eax
0x435E89: lea     eax, [esp+1Ch+var_C]
0x435E8D: mov     large fs:0, eax
0x435E93: mov     esi, ecx
0x435E95: mov     ebp, [esp+1Ch+a2]
0x435E99: xor     ecx, ecx
0x435E9B: mov     eax, ebp
0x435E9D: mov     edx, 8
0x435EA2: mul     edx
0x435EA4: seto    cl
0x435EA7: mov     dword ptr [esi+0Ch], 0
0x435EAE: mov     [esi], ebp
0x435EB0: neg     ecx
0x435EB2: or      ecx, eax
0x435EB4: push    ecx; Size
0x435EB5: call    FormHeapAlloc
0x435EBA: mov     edi, eax
0x435EBC: add     esp, 4
0x435EBF: mov     [esp+1Ch+a2], edi
0x435EC3: test    edi, edi
0x435EC5: mov     [esp+1Ch+var_4], 0
0x435ECD: jz      short loc_435EDF
0x435ECF: push    offset ??0DNameNode@@IAE@XZ; DNameNode::DNameNode(void)
0x435ED4: push    ebp
0x435ED5: push    8
0x435ED7: push    edi
0x435ED8: call    sub_401080
0x435EDD: jmp     short loc_435EE1
0x435EDF: xor     edi, edi
0x435EE1: mov     [esi+8], edi
0x435EE4: call    ds:TlsAlloc
0x435EEA: mov     [esi+4], eax
0x435EED: mov     eax, esi
0x435EEF: mov     ecx, [esp+1Ch+var_C]
0x435EF3: mov     large fs:0, ecx
0x435EFA: pop     ecx
0x435EFB: pop     edi
0x435EFC: pop     esi
0x435EFD: pop     ebp
0x435EFE: add     esp, 0Ch
0x435F01: retn    4
