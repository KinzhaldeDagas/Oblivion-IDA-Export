0x722490: push    0FFFFFFFFh
0x722492: push    offset SEH_8C62B0
0x722497: mov     eax, large fs:0
0x72249D: push    eax
0x72249E: push    ecx
0x72249F: push    esi
0x7224A0: mov     eax, ds:0B30AACh
0x7224A5: xor     eax, esp
0x7224A7: push    eax
0x7224A8: lea     eax, [esp+18h+var_C]
0x7224AC: mov     large fs:0, eax
0x7224B2: push    0E4h ; 'ä'; Size
0x7224B7: call    FormHeapAlloc
0x7224BC: mov     esi, eax
0x7224BE: add     esp, 4
0x7224C1: mov     [esp+18h+var_10], esi
0x7224C5: xor     eax, eax
0x7224C7: cmp     esi, eax
0x7224C9: mov     [esp+18h+var_4], eax
0x7224CD: jz      short loc_7224F0
0x7224CF: push    eax
0x7224D0: mov     ecx, esi; this
0x7224D2: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x7224D7: fldz
0x7224D9: fstp    dword ptr [esi+0E0h]
0x7224DF: mov     dword ptr [esi], offset ??_7NiBillboardNode@@6B@; const NiBillboardNode::`vftable'
0x7224E5: mov     word ptr [esi+0DCh], 9
0x7224EE: mov     eax, esi
0x7224F0: mov     ecx, [esp+18h+var_C]
0x7224F4: mov     large fs:0, ecx
0x7224FB: pop     ecx
0x7224FC: pop     esi
0x7224FD: add     esp, 10h
0x722500: retn
0x9D62E0: mov     eax, [ebp-10h]
0x9D62E3: push    eax
0x9D62E4: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9D62E9: pop     ecx
0x9D62EA: retn
0x9D62EB: mov     edx, [esp+arg_4]
0x9D62EF: lea     eax, [edx-8]
0x9D62F2: mov     ecx, [edx-0Ch]
0x9D62F5: xor     ecx, eax
0x9D62F7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9D62FC: mov     eax, offset stru_AFE21C
0x9D6301: jmp     ___CxxFrameHandler3
