0x607620: push    0FFFFFFFFh
0x607622: push    offset SEH_8C8970
0x607627: mov     eax, large fs:0
0x60762D: push    eax
0x60762E: push    ecx
0x60762F: push    esi
0x607630: push    edi
0x607631: mov     eax, ds:0B30AACh
0x607636: xor     eax, esp
0x607638: push    eax
0x607639: lea     eax, [esp+1Ch+var_C]
0x60763D: mov     large fs:0, eax
0x607643: mov     esi, ecx
0x607645: mov     ecx, [esi+58h]
0x607648: test    ecx, ecx
0x60764A: jz      short loc_60765C
0x60764C: mov     eax, [ecx]
0x60764E: mov     edx, [eax+8]
0x607651: call    edx
0x607653: cmp     eax, 1
0x607656: jz      loc_6076EE
0x60765C: mov     ecx, [esi+58h]
0x60765F: mov     eax, [ecx]
0x607661: mov     edx, [eax+8]
0x607664: call    edx
0x607666: push    eax
0x607667: push    esi
0x607668: mov     ecx, offset ActorProcessManager_ptr
0x60766D: call    sub_674550
0x607672: push    18Ch; Size
0x607677: call    FormHeapAlloc
0x60767C: add     esp, 4
0x60767F: mov     [esp+1Ch+var_10], eax
0x607683: test    eax, eax
0x607685: mov     [esp+1Ch+var_4], 0
0x60768D: jz      short loc_60769A
0x60768F: mov     ecx, eax; this
0x607691: call    ??0MiddleHighProcess@@QAE@XZ; MiddleHighProcess::MiddleHighProcess(void)
0x607696: mov     edi, eax
0x607698: jmp     short loc_60769C
0x60769A: xor     edi, edi
0x60769C: mov     ecx, [esi+58h]
0x60769F: mov     eax, [edi]
0x6076A1: mov     edx, [eax+4]
0x6076A4: push    ecx
0x6076A5: mov     ecx, edi
0x6076A7: mov     [esp+20h+var_4], 0FFFFFFFFh
0x6076AF: call    edx
0x6076B1: mov     ecx, [esi+58h]
0x6076B4: test    ecx, ecx
0x6076B6: jz      short loc_6076C0
0x6076B8: mov     eax, [ecx]
0x6076BA: mov     edx, [eax]
0x6076BC: push    1
0x6076BE: call    edx
0x6076C0: push    0
0x6076C2: push    0
0x6076C4: push    0
0x6076C6: push    1
0x6076C8: push    esi
0x6076C9: mov     ecx, offset ActorProcessManager_ptr
0x6076CE: mov     [esi+58h], edi
0x6076D1: call    sub_673A90
0x6076D6: mov     eax, [esi]
0x6076D8: mov     edx, [eax+178h]
0x6076DE: push    0
0x6076E0: mov     ecx, esi
0x6076E2: call    edx
0x6076E4: mov     ecx, [esi+58h]
0x6076E7: mov     eax, [ecx]
0x6076E9: mov     edx, [eax+4Ch]
0x6076EC: call    edx
0x6076EE: mov     al, 1
0x6076F0: mov     ecx, [esp+1Ch+var_C]
0x6076F4: mov     large fs:0, ecx
0x6076FB: pop     ecx
0x6076FC: pop     edi
0x6076FD: pop     esi
0x6076FE: add     esp, 10h
0x607701: retn
