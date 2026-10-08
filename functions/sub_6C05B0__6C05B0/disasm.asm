0x6C05B0: push    0FFFFFFFFh
0x6C05B2: push    offset ExtraDataList_SetReferencePointer_SEH
0x6C05B7: mov     eax, large fs:0
0x6C05BD: push    eax
0x6C05BE: push    esi
0x6C05BF: push    edi
0x6C05C0: mov     eax, ds:0B30AACh
0x6C05C5: xor     eax, esp
0x6C05C7: push    eax
0x6C05C8: lea     eax, [esp+18h+var_C]
0x6C05CC: mov     large fs:0, eax
0x6C05D2: mov     edi, [esp+18h+size]
0x6C05D6: xor     ecx, ecx
0x6C05D8: mov     eax, edi
0x6C05DA: mov     edx, 4Ch ; 'L'
0x6C05DF: mul     edx
0x6C05E1: seto    cl
0x6C05E4: neg     ecx
0x6C05E6: or      ecx, eax
0x6C05E8: xor     eax, eax
0x6C05EA: add     ecx, 4
0x6C05ED: setb    al
0x6C05F0: neg     eax
0x6C05F2: or      eax, ecx
0x6C05F4: push    eax; Size
0x6C05F5: call    FormHeapAlloc
0x6C05FA: add     esp, 4
0x6C05FD: mov     [esp+18h+size], eax
0x6C0601: test    eax, eax
0x6C0603: mov     [esp+18h+var_4], 0
0x6C060B: jz      short loc_6C0639
0x6C060D: push    offset Shared_NoOpVirtual_60D0A0; a5
0x6C0612: push    offset ActorList_ReturnHead; a4
0x6C0617: push    edi; size
0x6C0618: lea     esi, [eax+4]
0x6C061B: push    4Ch ; 'L'; a2
0x6C061D: push    esi; a1
0x6C061E: mov     [eax], edi
0x6C0620: call    ArrayConstructor
0x6C0625: mov     eax, esi
0x6C0627: mov     ecx, [esp+18h+var_C]
0x6C062B: mov     large fs:0, ecx
0x6C0632: pop     ecx
0x6C0633: pop     edi
0x6C0634: pop     esi
0x6C0635: add     esp, 0Ch
0x6C0638: retn
0x6C0639: xor     eax, eax
0x6C063B: mov     ecx, [esp+18h+var_C]
0x6C063F: mov     large fs:0, ecx
0x6C0646: pop     ecx
0x6C0647: pop     edi
0x6C0648: pop     esi
0x6C0649: add     esp, 0Ch
0x6C064C: retn
0x9C3090: mov     eax, [ebp+4]
0x9C3093: push    eax
0x9C3094: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x9C3099: pop     ecx
0x9C309A: retn
0x9C309B: mov     edx, [esp+arg_4]
0x9C309F: lea     eax, [edx-8]
0x9C30A2: mov     ecx, [edx-0Ch]
0x9C30A5: xor     ecx, eax
0x9C30A7: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9C30AC: mov     eax, offset stru_AEBD48
0x9C30B1: jmp     ___CxxFrameHandler3
