0x438CF0: push    0FFFFFFFFh
0x438CF2: push    offset SEH_864830
0x438CF7: mov     eax, large fs:0
0x438CFD: push    eax
0x438CFE: push    esi
0x438CFF: push    edi
0x438D00: mov     eax, ___security_cookie
0x438D05: xor     eax, esp
0x438D07: push    eax
0x438D08: lea     eax, [esp+18h+var_C]
0x438D0C: mov     large fs:0, eax
0x438D12: mov     esi, ecx
0x438D14: mov     dword ptr [esi], offset ??_7?$LockFreeQueue@V?$NiPointer@VAttachDistant3DTask@@@@@@6B@; const LockFreeQueue<NiPointer<AttachDistant3DTask>>::`vftable'
0x438D1A: push    8; Size
0x438D1C: mov     dword ptr [esi+18h], 0
0x438D23: call    FormHeapAlloc
0x438D28: add     esp, 4
0x438D2B: test    eax, eax
0x438D2D: jz      short loc_438D3E
0x438D2F: mov     dword ptr [eax], 0
0x438D35: mov     dword ptr [eax+4], 0
0x438D3C: jmp     short loc_438D40
0x438D3E: xor     eax, eax
0x438D40: mov     edi, [esp+18h+a2]
0x438D44: mov     [esi+4], eax
0x438D47: mov     [esi+8], eax
0x438D4A: mov     eax, [esp+18h+arg_4]
0x438D4E: mov     [esi+0Ch], eax
0x438D51: xor     ecx, ecx
0x438D53: lea     eax, [edi+edi]
0x438D56: mov     edx, 4
0x438D5B: mul     edx
0x438D5D: seto    cl
0x438D60: neg     ecx
0x438D62: or      ecx, eax
0x438D64: push    ecx; Size
0x438D65: call    FormHeapAlloc
0x438D6A: push    10h; Size
0x438D6C: mov     [esi+10h], eax
0x438D6F: call    FormHeapAlloc
0x438D74: add     esp, 8
0x438D77: mov     [esp+18h+arg_4], eax
0x438D7B: test    eax, eax
0x438D7D: mov     [esp+18h+var_4], 0
0x438D85: jz      short loc_438D91
0x438D87: push    edi; a2
0x438D88: mov     ecx, eax; this
0x438D8A: call    ThreadSpecificInterfaceManager__ThreadSpecificInterfaceManager
0x438D8F: jmp     short loc_438D93
0x438D91: xor     eax, eax
0x438D93: mov     [esi+14h], eax
0x438D96: mov     eax, esi
0x438D98: mov     ecx, [esp+18h+var_C]
0x438D9C: mov     large fs:0, ecx
0x438DA3: pop     ecx
0x438DA4: pop     edi
0x438DA5: pop     esi
0x438DA6: add     esp, 0Ch
0x438DA9: retn    8
