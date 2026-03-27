0x4DC5B0: sub     esp, 0Ch
0x4DC5B3: push    ebp
0x4DC5B4: mov     ebp, ecx
0x4DC5B6: cmp     dword ptr [ebp+3Ch], 0
0x4DC5BA: mov     [esp+10h+var_8], ebp
0x4DC5BE: jz      loc_4DC8E6
0x4DC5C4: mov     eax, [ebp+0]
0x4DC5C7: mov     edx, [eax+168h]
0x4DC5CD: push    esi
0x4DC5CE: call    edx
0x4DC5D0: mov     esi, eax
0x4DC5D2: mov     eax, [ebp+0]
0x4DC5D5: mov     edx, [eax+190h]
0x4DC5DB: mov     ecx, ebp
0x4DC5DD: mov     [esp+14h+var_4], 0
0x4DC5E5: call    edx
0x4DC5E7: test    al, al
0x4DC5E9: jz      short loc_4DC5EF
0x4DC5EB: mov     [esp+14h+var_4], ebp
0x4DC5EF: mov     ecx, ds:0B333C4h
0x4DC5F5: cmp     ebp, ecx
0x4DC5F7: jnz     short loc_4DC620
0x4DC5F9: test    esi, esi
0x4DC5FB: jz      short loc_4DC60A
0x4DC5FD: mov     ecx, esi
0x4DC5FF: call    sub_478CE0
0x4DC604: mov     ecx, ds:0B333C4h
0x4DC60A: mov     al, [ecx+588h]
0x4DC610: mov     byte ptr [esp+14h+var_C], al
0x4DC614: mov     edx, [esp+14h+var_C]
0x4DC618: push    edx
0x4DC619: call    sub_6600D0
0x4DC61E: mov     esi, eax
0x4DC620: test    esi, esi
0x4DC622: mov     eax, [esp+14h+var_4]
0x4DC626: push    ebx
0x4DC627: push    edi
0x4DC628: mov     edi, [eax+58h]
0x4DC62B: mov     [esp+1Ch+var_C], edi
0x4DC62F: jz      short loc_4DC63D
0x4DC631: mov     ecx, esi
0x4DC633: call    sub_478CE0
0x4DC638: jmp     loc_4DC75A
0x4DC63D: xor     bl, bl
0x4DC63F: test    edi, edi
0x4DC641: jz      loc_4DC6F2
0x4DC647: mov     edx, [edi]
0x4DC649: mov     eax, [edx+130h]
0x4DC64F: push    0
0x4DC651: mov     ecx, edi
0x4DC653: call    eax
0x4DC655: test    eax, eax
0x4DC657: jz      short loc_4DC66A
0x4DC659: cmp     word ptr [eax+0B8h], 0
0x4DC661: jz      short loc_4DC66A
0x4DC663: mov     bl, 1
0x4DC665: jmp     loc_4DC6F2
0x4DC66A: mov     edx, [edi]
0x4DC66C: mov     eax, [edx+134h]
0x4DC672: push    0
0x4DC674: mov     ecx, edi
0x4DC676: call    eax
0x4DC678: test    eax, eax
0x4DC67A: jz      short loc_4DC6C2
0x4DC67C: movzx   ebx, word ptr [eax+0B6h]
0x4DC683: xor     edx, edx
0x4DC685: test    ebx, ebx
0x4DC687: jbe     short loc_4DC6C2
0x4DC689: cmp     ebx, edx
0x4DC68B: jbe     short loc_4DC6BB
0x4DC68D: mov     ecx, [eax+0B0h]
0x4DC693: mov     ecx, [ecx+edx*4]
0x4DC696: test    ecx, ecx
0x4DC698: jz      short loc_4DC6BB
0x4DC69A: mov     ecx, [ecx+8]
0x4DC69D: test    ecx, ecx
0x4DC69F: jz      short loc_4DC6BB
0x4DC6A1: mov     esi, ecx
0x4DC6A3: xor     ebp, ebp
0x4DC6A5: mov     ebp, [esp+1Ch+var_8]
0x4DC6A9: mov     edi, offset aBow
0x4DC6AE: mov     ecx, 4
0x4DC6B3: repe cmpsb
0x4DC6B5: mov     edi, [esp+1Ch+var_C]
0x4DC6B9: jz      short loc_4DC6E2
0x4DC6BB: add     edx, 1
0x4DC6BE: cmp     ebx, edx
0x4DC6C0: ja      short loc_4DC68D
0x4DC6C2: mov     edx, [edi]
0x4DC6C4: mov     eax, [edx+124h]
0x4DC6CA: push    0
0x4DC6CC: mov     ecx, edi
0x4DC6CE: call    eax
0x4DC6D0: test    eax, eax
0x4DC6D2: jz      short loc_4DC6F0
0x4DC6D4: cmp     word ptr [eax+0B8h], 0
0x4DC6DC: jz      short loc_4DC6F0
0x4DC6DE: mov     bl, 1
0x4DC6E0: jmp     short loc_4DC6F2
0x4DC6E2: cmp     word ptr [eax+0B8h], 0
0x4DC6EA: jz      short loc_4DC6C2
0x4DC6EC: mov     bl, 1
0x4DC6EE: jmp     short loc_4DC6F2
0x4DC6F0: xor     bl, bl
0x4DC6F2: lea     ecx, [ebp+44h]; this
0x4DC6F5: call    ExtraDataList_GetContainerChanges
0x4DC6FA: test    eax, eax
0x4DC6FC: jz      short loc_4DC75A
0x4DC6FE: push    0
0x4DC700: push    9
0x4DC702: mov     ecx, eax
0x4DC704: call    ContainerExtraData_GetEquippedInstance
0x4DC709: mov     esi, eax
0x4DC70B: test    esi, esi
0x4DC70D: jz      short loc_4DC75A
0x4DC70F: mov     eax, [esi+8]
0x4DC712: push    0; int
0x4DC714: push    offset ??_R0?AVTESModel@@@8; struct TypeDescriptor *
0x4DC719: push    offset ??_R0?AVTESBoundObject@@@8; struct _s_RTTICompleteObjectLocator *
0x4DC71E: push    0; int
0x4DC720: push    eax; void *
0x4DC721: call    OblivionDynamicCast
0x4DC726: add     esp, 14h
0x4DC729: test    eax, eax
0x4DC72B: jz      short loc_4DC74A
0x4DC72D: test    bl, bl
0x4DC72F: jz      short loc_4DC74A
0x4DC731: mov     edx, [eax]
0x4DC733: mov     ecx, eax
0x4DC735: mov     eax, [edx+14h]
0x4DC738: call    eax
0x4DC73A: mov     ecx, ds:0B33A1Ch
0x4DC740: push    1
0x4DC742: push    1
0x4DC744: push    eax
0x4DC745: call    QueuedModelLoader_RemoveModel
0x4DC74A: mov     ecx, esi
0x4DC74C: call    ContainerEntryExtraData_DestroyDataTable
0x4DC751: push    esi
0x4DC752: call    FormHeapFree
0x4DC757: add     esp, 4
0x4DC75A: test    edi, edi
0x4DC75C: jz      loc_4DC885
0x4DC762: mov     edx, [edi]
0x4DC764: mov     eax, [edx+130h]
0x4DC76A: push    0
0x4DC76C: mov     ecx, edi
0x4DC76E: call    eax
0x4DC770: mov     esi, eax
0x4DC772: test    esi, esi
0x4DC774: jz      short loc_4DC7A7
0x4DC776: push    3
0x4DC778: call    nullsub_returnTrue_0arg
0x4DC77D: add     esp, 4
0x4DC780: push    esi
0x4DC781: push    0
0x4DC783: call    GetShadowSceneNode
0x4DC788: add     esp, 4
0x4DC78B: mov     ecx, eax
0x4DC78D: call    sub_7C5E70
0x4DC792: lea     ecx, [esi+0ACh]
0x4DC798: call    sub_477EF0
0x4DC79D: push    2
0x4DC79F: call    nullsub_returnTrue_0arg
0x4DC7A4: add     esp, 4
0x4DC7A7: mov     edx, [edi]
0x4DC7A9: mov     eax, [edx+134h]
0x4DC7AF: push    0
0x4DC7B1: mov     ecx, edi
0x4DC7B3: call    eax
0x4DC7B5: mov     ebx, eax
0x4DC7B7: test    ebx, ebx
0x4DC7B9: jz      loc_4DC840
0x4DC7BF: movzx   edx, word ptr [ebx+0B6h]
0x4DC7C6: xor     eax, eax
0x4DC7C8: test    edx, edx
0x4DC7CA: jbe     short loc_4DC840
0x4DC7CC: cmp     edx, eax
0x4DC7CE: jbe     short loc_4DC7FE
0x4DC7D0: mov     ecx, [ebx+0B0h]
0x4DC7D6: mov     ecx, [ecx+eax*4]
0x4DC7D9: test    ecx, ecx
0x4DC7DB: jz      short loc_4DC7FE
0x4DC7DD: mov     ecx, [ecx+8]
0x4DC7E0: test    ecx, ecx
0x4DC7E2: jz      short loc_4DC7FE
0x4DC7E4: mov     esi, ecx
0x4DC7E6: mov     edi, offset aBow
0x4DC7EB: mov     ecx, 4
0x4DC7F0: xor     ebp, ebp
0x4DC7F2: repe cmpsb
0x4DC7F4: jz      short loc_4DC807
0x4DC7F6: mov     edi, [esp+18h+var_8]
0x4DC7FA: mov     ebp, [esp+18h+var_4]
0x4DC7FE: add     eax, 1
0x4DC801: cmp     edx, eax
0x4DC803: ja      short loc_4DC7D0
0x4DC805: jmp     short loc_4DC840
0x4DC807: push    3
0x4DC809: call    nullsub_returnTrue_0arg
0x4DC80E: add     esp, 4
0x4DC811: push    ebx
0x4DC812: push    0
0x4DC814: call    GetShadowSceneNode
0x4DC819: add     esp, 4
0x4DC81C: mov     ecx, eax
0x4DC81E: call    sub_7C5E70
0x4DC823: lea     ecx, [ebx+0ACh]
0x4DC829: call    sub_477EF0
0x4DC82E: push    2
0x4DC830: call    nullsub_returnTrue_0arg
0x4DC835: mov     edi, [esp+1Ch+var_8]
0x4DC839: mov     ebp, [esp+1Ch+var_4]
0x4DC83D: add     esp, 4
0x4DC840: mov     edx, [edi]
0x4DC842: mov     eax, [edx+124h]
0x4DC848: push    0
0x4DC84A: mov     ecx, edi
0x4DC84C: call    eax
0x4DC84E: mov     esi, eax
0x4DC850: test    esi, esi
0x4DC852: jz      short loc_4DC885
0x4DC854: push    3
0x4DC856: call    nullsub_returnTrue_0arg
0x4DC85B: add     esp, 4
0x4DC85E: push    esi
0x4DC85F: push    0
0x4DC861: call    GetShadowSceneNode
0x4DC866: add     esp, 4
0x4DC869: mov     ecx, eax
0x4DC86B: call    sub_7C5E70
0x4DC870: lea     ecx, [esi+0ACh]
0x4DC876: call    sub_477EF0
0x4DC87B: push    2
0x4DC87D: call    nullsub_returnTrue_0arg
0x4DC882: add     esp, 4
0x4DC885: mov     esi, [esp+1Ch+var_4]
0x4DC889: mov     ecx, [esi+58h]
0x4DC88C: test    ecx, ecx
0x4DC88E: pop     edi
0x4DC88F: pop     ebx
0x4DC890: jz      short loc_4DC8DA
0x4DC892: mov     edx, ds:0B33A98h
0x4DC898: cmp     byte ptr [edx+0CD4h], 0
0x4DC89F: jnz     short loc_4DC8DA
0x4DC8A1: mov     eax, ds:0B33B00h
0x4DC8A6: mov     edx, [eax+18h]
0x4DC8A9: shr     edx, 0Ch
0x4DC8AC: test    dl, 1
0x4DC8AF: jnz     short loc_4DC8DA
0x4DC8B1: mov     eax, [ecx]
0x4DC8B3: mov     edx, [eax+0ECh]
0x4DC8B9: push    1
0x4DC8BB: call    edx
0x4DC8BD: test    eax, eax
0x4DC8BF: jz      short loc_4DC8DA
0x4DC8C1: mov     eax, [eax+8]
0x4DC8C4: test    eax, eax
0x4DC8C6: jz      short loc_4DC8DA
0x4DC8C8: cmp     byte ptr [eax+90h], 5
0x4DC8CF: jnz     short loc_4DC8DA
0x4DC8D1: push    0
0x4DC8D3: mov     ecx, esi
0x4DC8D5: call    sub_5E13D0
0x4DC8DA: mov     eax, [ebp+3Ch]
0x4DC8DD: push    eax
0x4DC8DE: mov     ecx, esi
0x4DC8E0: call    sub_5EA1A0
0x4DC8E5: pop     esi
0x4DC8E6: pop     ebp
0x4DC8E7: add     esp, 0Ch
0x4DC8EA: retn
