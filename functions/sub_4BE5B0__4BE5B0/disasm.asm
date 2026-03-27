0x4BE5B0: push    0FFFFFFFFh
0x4BE5B2: push    offset SEH_4BE5B0
0x4BE5B7: mov     eax, large fs:0
0x4BE5BD: push    eax
0x4BE5BE: sub     esp, 1BCh
0x4BE5C4: mov     eax, ds:0B30AACh
0x4BE5C9: xor     eax, esp
0x4BE5CB: mov     [esp+1C8h+var_10], eax
0x4BE5D2: push    ebx
0x4BE5D3: push    ebp
0x4BE5D4: push    esi
0x4BE5D5: push    edi
0x4BE5D6: mov     eax, ds:0B30AACh
0x4BE5DB: xor     eax, esp
0x4BE5DD: push    eax
0x4BE5DE: lea     eax, [esp+1DCh+var_C]
0x4BE5E5: mov     large fs:0, eax
0x4BE5EB: mov     eax, [esp+1DCh+arg_4]
0x4BE5F2: mov     edi, [eax]
0x4BE5F4: mov     ebx, ecx
0x4BE5F6: mov     ecx, [esp+1DCh+arg_8]
0x4BE5FD: mov     edx, [ebx]
0x4BE5FF: mov     [esp+1DCh+var_1BC], eax
0x4BE603: mov     eax, [ecx]
0x4BE605: mov     [esp+1DCh+var_1C0], ecx
0x4BE609: mov     [esp+1DCh+var_1C4], eax
0x4BE60D: mov     eax, [edx+38h]
0x4BE610: mov     ecx, ebx
0x4BE612: mov     [esp+1DCh+var_1C8], edi
0x4BE616: call    eax
0x4BE618: push    eax
0x4BE619: lea     ecx, [esp+1E0h+var_1A0]
0x4BE61D: push    offset aExteriorsToLoa; "Exteriors to load: %d"
0x4BE622: push    ecx
0x4BE623: call    __sprintf
0x4BE628: fild    [esp+1E8h+var_1C8]
0x4BE62C: add     esp, 0Ch
0x4BE62F: push    0FFFFFFFFh; int
0x4BE631: push    1; int
0x4BE633: sub     esp, 8
0x4BE636: fstp    [esp+1ECh+var_1E8]; float
0x4BE63A: lea     edx, [esp+1ECh+var_1A0]
0x4BE63E: fild    dword ptr ds:0B02E24h
0x4BE644: fstp    [esp+1ECh+var_1EC]; float
0x4BE647: push    edx; int
0x4BE648: call    InterfaceMgr_DebugTextLine
0x4BE64D: add     edi, [esp+1F0h+arg_0]
0x4BE654: add     esp, 14h
0x4BE657: xor     esi, esi
0x4BE659: mov     [esp+1DCh+var_1C8], edi
0x4BE65D: mov     [esp+1DCh+var_1B4], offset ??_7LockFreeMapIterator@?$LockFreeMap@IV?$NiPointer@VExteriorCellLoaderTask@@@@@@6B@; const LockFreeMap<uint,NiPointer<ExteriorCellLoaderTask>>::LockFreeMapIterator::`vftable'
0x4BE665: mov     [esp+1DCh+var_1B0], esi
0x4BE669: mov     [esp+1DCh+var_1AC], esi
0x4BE66D: mov     [esp+1DCh+var_1A8], 0
0x4BE672: mov     [esp+1DCh+var_4], esi
0x4BE679: mov     [esp+1DCh+var_1B8], esi
0x4BE67D: push    1
0x4BE67F: lea     eax, [esp+1E0h+var_1B8]
0x4BE683: push    eax
0x4BE684: lea     ecx, [esp+1E4h+var_1A4]
0x4BE688: push    ecx
0x4BE689: lea     edx, [esp+1E8h+var_1B4]
0x4BE68D: push    edx
0x4BE68E: mov     ecx, ebx
0x4BE690: mov     byte ptr [esp+1ECh+var_4], 1
0x4BE698: call    sub_642D90
0x4BE69D: test    al, al
0x4BE69F: mov     ebp, [esp+1DCh+var_1B8]
0x4BE6A3: jz      short loc_4BE717
0x4BE6A5: mov     esi, [ebp+1Ch]
0x4BE6A8: mov     ecx, [esi+8]
0x4BE6AB: test    ecx, ecx
0x4BE6AD: jz      short loc_4BE6BB
0x4BE6AF: mov     eax, [ecx]
0x4BE6B1: mov     edx, [eax+0D4h]
0x4BE6B7: call    edx
0x4BE6B9: jmp     short loc_4BE6C0
0x4BE6BB: mov     eax, offset aNone_0; "NONE"
0x4BE6C0: mov     ecx, [esi+4]
0x4BE6C3: mov     edx, [esi]
0x4BE6C5: push    ecx
0x4BE6C6: push    edx
0x4BE6C7: push    eax
0x4BE6C8: lea     eax, [esp+1E8h+var_1A0]
0x4BE6CC: push    offset aSII; "%s - (%i, %i)"
0x4BE6D1: push    eax
0x4BE6D2: call    __sprintf
0x4BE6D7: fild    [esp+1F0h+var_1C8]
0x4BE6DB: add     esp, 14h
0x4BE6DE: push    0FFFFFFFFh; int
0x4BE6E0: push    1; int
0x4BE6E2: sub     esp, 8
0x4BE6E5: fstp    [esp+1ECh+var_1E8]; float
0x4BE6E9: lea     ecx, [esp+1ECh+var_1A0]
0x4BE6ED: fild    dword ptr ds:0B02E24h
0x4BE6F3: fstp    [esp+1ECh+var_1EC]; float
0x4BE6F6: push    ecx; int
0x4BE6F7: call    InterfaceMgr_DebugTextLine
0x4BE6FC: add     edi, [esp+1F0h+arg_0]
0x4BE703: mov     edx, ds:0B06C50h
0x4BE709: add     edx, 0FFFFFFF6h
0x4BE70C: add     esp, 14h
0x4BE70F: cmp     edi, edx
0x4BE711: mov     [esp+1DCh+var_1C8], edi
0x4BE715: jg      short loc_4BE74B
0x4BE717: xor     esi, esi
0x4BE719: cmp     ebp, esi
0x4BE71B: mov     byte ptr [esp+1DCh+var_4], 0
0x4BE723: jz      short loc_4BE73E
0x4BE725: lea     eax, [ebp+8]
0x4BE728: push    eax; lpAddend
0x4BE729: call    dword ptr ds:0A2807Ch
0x4BE72F: test    eax, eax
0x4BE731: jnz     short loc_4BE73E
0x4BE733: mov     edx, [ebp+0]
0x4BE736: mov     eax, [edx]
0x4BE738: push    1
0x4BE73A: mov     ecx, ebp
0x4BE73C: call    eax
0x4BE73E: test    [esp+1DCh+var_1A8], 2
0x4BE743: jz      loc_4BE679
0x4BE749: jmp     short loc_4BE76C
0x4BE74B: lea     ecx, [ebp+8]
0x4BE74E: push    ecx; lpAddend
0x4BE74F: mov     byte ptr [esp+1E0h+var_4], 0
0x4BE757: call    dword ptr ds:0A2807Ch
0x4BE75D: test    eax, eax
0x4BE75F: jnz     short loc_4BE76C
0x4BE761: mov     edx, [ebp+0]
0x4BE764: mov     eax, [edx]
0x4BE766: push    1
0x4BE768: mov     ecx, ebp
0x4BE76A: call    eax
0x4BE76C: mov     ecx, ds:0B35B8Ch
0x4BE772: test    ecx, ecx
0x4BE774: jz      short loc_4BE797
0x4BE776: mov     ebx, [esp+1DCh+var_1C0]
0x4BE77A: mov     esi, [esp+1DCh+var_1BC]
0x4BE77E: mov     edx, [esp+1DCh+arg_0]
0x4BE785: push    ebx
0x4BE786: push    esi
0x4BE787: push    edx
0x4BE788: call    sub_4BD990
0x4BE78D: mov     eax, [esp+1DCh+var_1C4]
0x4BE791: mov     [esi], edi
0x4BE793: mov     [ebx], eax
0x4BE795: jmp     short loc_4BE7A7
0x4BE797: mov     ecx, [esp+1DCh+var_1BC]
0x4BE79B: mov     edx, [esp+1DCh+var_1C4]
0x4BE79F: mov     eax, [esp+1DCh+var_1C0]
0x4BE7A3: mov     [ecx], edi
0x4BE7A5: mov     [eax], edx
0x4BE7A7: mov     ecx, dword ptr [esp+1DCh+var_C]
0x4BE7AE: mov     large fs:0, ecx
0x4BE7B5: pop     ecx
0x4BE7B6: pop     edi
0x4BE7B7: pop     esi
0x4BE7B8: pop     ebp
0x4BE7B9: pop     ebx
0x4BE7BA: mov     ecx, [esp+1C8h+var_10]
0x4BE7C1: xor     ecx, esp
0x4BE7C3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4BE7C8: add     esp, 1C8h
0x4BE7CE: retn    0Ch
