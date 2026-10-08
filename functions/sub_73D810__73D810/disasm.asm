0x73D810: push    0FFFFFFFFh
0x73D812: push    offset SEH_8C62B0
0x73D817: mov     eax, large fs:0
0x73D81D: push    eax
0x73D81E: push    ecx
0x73D81F: push    esi
0x73D820: mov     eax, ds:0B30AACh
0x73D825: xor     eax, esp
0x73D827: push    eax
0x73D828: lea     eax, [esp+18h+var_C]
0x73D82C: mov     large fs:0, eax
0x73D832: push    0E0h ; 'à'; Size
0x73D837: call    FormHeapAlloc
0x73D83C: mov     esi, eax
0x73D83E: add     esp, 4
0x73D841: mov     [esp+18h+var_10], esi
0x73D845: test    esi, esi
0x73D847: mov     [esp+18h+var_4], 0
0x73D84F: jz      short loc_73D87D
0x73D851: push    0
0x73D853: mov     ecx, esi; this
0x73D855: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x73D85A: mov     dword ptr [esi], offset ??_7NiSortAdjustNode@@6B@; const NiSortAdjustNode::`vftable'
0x73D860: mov     dword ptr [esi+0DCh], 0
0x73D86A: mov     eax, esi
0x73D86C: mov     ecx, [esp+18h+var_C]
0x73D870: mov     large fs:0, ecx
0x73D877: pop     ecx
0x73D878: pop     esi
0x73D879: add     esp, 10h
0x73D87C: retn
0x73D87D: xor     eax, eax
0x73D87F: mov     ecx, [esp+18h+var_C]
0x73D883: mov     large fs:0, ecx
0x73D88A: pop     ecx
0x73D88B: pop     esi
0x73D88C: add     esp, 10h
0x73D88F: retn
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
