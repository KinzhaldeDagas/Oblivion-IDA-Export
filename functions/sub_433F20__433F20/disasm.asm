0x433F20: push    0FFFFFFFFh
0x433F22: push    offset SEH_643180
0x433F27: mov     eax, large fs:0
0x433F2D: push    eax
0x433F2E: push    ebx
0x433F2F: push    esi
0x433F30: push    edi
0x433F31: mov     eax, ___security_cookie
0x433F36: xor     eax, esp
0x433F38: push    eax
0x433F39: lea     eax, [esp+1Ch+var_C]
0x433F3D: mov     large fs:0, eax
0x433F43: mov     edi, ecx
0x433F45: mov     ebx, [edi+14h]
0x433F48: mov     eax, [ebx+4]
0x433F4B: push    eax; dwTlsIndex
0x433F4C: mov     [esp+20h+var_4], 0
0x433F54: call    ds:TlsGetValue
0x433F5A: test    eax, eax
0x433F5C: jnz     short loc_433F66
0x433F5E: push    edi; a2
0x433F5F: mov     ecx, ebx; this
0x433F61: call    ThreadSpecificInterfaceManager_AddInterface
0x433F66: mov     edx, dword ptr [esp+1Ch+arg_C]
0x433F6A: push    edx; char
0x433F6B: mov     edx, [esp+20h+arg_0]
0x433F6F: mov     esi, eax
0x433F71: mov     ecx, [esi]
0x433F73: mov     edi, [ecx]
0x433F75: lea     eax, [esp+20h+arg_8]
0x433F79: push    eax; int
0x433F7A: mov     eax, [esp+24h+arg_4]
0x433F7E: push    eax; int
0x433F7F: push    edx; int
0x433F80: push    eax
0x433F81: push    edx
0x433F82: mov     edx, [edi+1Ch]
0x433F85: call    edx
0x433F87: push    eax; LONG
0x433F88: mov     ecx, esi
0x433F8A: call    sub_4331F0
0x433F8F: mov     esi, [esp+1Ch+arg_8]
0x433F93: test    esi, esi
0x433F95: mov     bl, al
0x433F97: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x433F9F: jz      short loc_433FB9
0x433FA1: lea     eax, [esi+8]
0x433FA4: push    eax; lpAddend
0x433FA5: call    ds:InterlockedDecrement
0x433FAB: test    eax, eax
0x433FAD: jnz     short loc_433FB9
0x433FAF: mov     edx, [esi]
0x433FB1: mov     eax, [edx]
0x433FB3: push    1
0x433FB5: mov     ecx, esi
0x433FB7: call    eax
0x433FB9: mov     al, bl
0x433FBB: mov     ecx, [esp+1Ch+var_C]
0x433FBF: mov     large fs:0, ecx
0x433FC6: pop     ecx
0x433FC7: pop     edi
0x433FC8: pop     esi
0x433FC9: pop     ebx
0x433FCA: add     esp, 0Ch
0x433FCD: retn    10h
