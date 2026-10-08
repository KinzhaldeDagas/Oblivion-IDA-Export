0x6BF4D0: push    0FFFFFFFFh
0x6BF4D2: push    offset ExtraDataList_SetReferencePointer_SEH
0x6BF4D7: mov     eax, large fs:0
0x6BF4DD: push    eax
0x6BF4DE: push    esi
0x6BF4DF: push    edi
0x6BF4E0: mov     eax, ds:0B30AACh
0x6BF4E5: xor     eax, esp
0x6BF4E7: push    eax
0x6BF4E8: lea     eax, [esp+18h+var_C]
0x6BF4EC: mov     large fs:0, eax
0x6BF4F2: mov     edi, [esp+18h+size]
0x6BF4F6: xor     ecx, ecx
0x6BF4F8: mov     eax, edi
0x6BF4FA: mov     edx, 10h
0x6BF4FF: mul     edx
0x6BF501: seto    cl
0x6BF504: neg     ecx
0x6BF506: or      ecx, eax
0x6BF508: xor     eax, eax
0x6BF50A: add     ecx, 4
0x6BF50D: setb    al
0x6BF510: neg     eax
0x6BF512: or      eax, ecx
0x6BF514: push    eax; Size
0x6BF515: call    FormHeapAlloc
0x6BF51A: add     esp, 4
0x6BF51D: mov     [esp+18h+size], eax
0x6BF521: test    eax, eax
0x6BF523: mov     [esp+18h+var_4], 0
0x6BF52B: jz      short loc_6BF559
0x6BF52D: push    offset Shared_NoOpVirtual_60D0A0; a5
0x6BF532: push    offset ActorList_ReturnHead; a4
0x6BF537: push    edi; size
0x6BF538: lea     esi, [eax+4]
0x6BF53B: push    10h; a2
0x6BF53D: push    esi; a1
0x6BF53E: mov     [eax], edi
0x6BF540: call    ArrayConstructor
0x6BF545: mov     eax, esi
0x6BF547: mov     ecx, [esp+18h+var_C]
0x6BF54B: mov     large fs:0, ecx
0x6BF552: pop     ecx
0x6BF553: pop     edi
0x6BF554: pop     esi
0x6BF555: add     esp, 0Ch
0x6BF558: retn
0x6BF559: xor     eax, eax
0x6BF55B: mov     ecx, [esp+18h+var_C]
0x6BF55F: mov     large fs:0, ecx
0x6BF566: pop     ecx
0x6BF567: pop     edi
0x6BF568: pop     esi
0x6BF569: add     esp, 0Ch
0x6BF56C: retn
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
