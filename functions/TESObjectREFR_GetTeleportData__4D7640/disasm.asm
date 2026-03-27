0x4D7640: push    0FFFFFFFFh
0x4D7642: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x4D7647: mov     eax, large fs:0
0x4D764D: push    eax
0x4D764E: push    ecx
0x4D764F: push    ebx
0x4D7650: push    esi
0x4D7651: push    edi
0x4D7652: mov     eax, ds:0B30AACh
0x4D7657: xor     eax, esp
0x4D7659: push    eax
0x4D765A: lea     eax, [esp+20h+var_C]
0x4D765E: mov     large fs:0, eax
0x4D7664: mov     esi, ecx
0x4D7666: lea     ebx, [esi+44h]
0x4D7669: mov     ecx, ebx; this
0x4D766B: call    ExtraDataList_GetTeleport
0x4D7670: xor     edi, edi
0x4D7672: cmp     eax, edi
0x4D7674: jnz     short loc_4D76B5
0x4D7676: push    1Ch; Size
0x4D7678: call    FormHeapAlloc
0x4D767D: add     esp, 4
0x4D7680: mov     [esp+20h+var_10], eax
0x4D7684: cmp     eax, edi
0x4D7686: mov     [esp+20h+var_4], edi
0x4D768A: jz      short loc_4D7695
0x4D768C: mov     ecx, eax
0x4D768E: call    sub_42B590
0x4D7693: mov     edi, eax
0x4D7695: push    edi
0x4D7696: mov     ecx, ebx
0x4D7698: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4D76A0: call    ExtraDataList__SetTeleportData
0x4D76A5: mov     eax, [esi]
0x4D76A7: mov     edx, [eax+40h]
0x4D76AA: push    100000h
0x4D76AF: mov     ecx, esi
0x4D76B1: call    edx
0x4D76B3: mov     eax, edi
0x4D76B5: mov     ecx, dword ptr [esp+20h+var_C]
0x4D76B9: mov     large fs:0, ecx
0x4D76C0: pop     ecx
0x4D76C1: pop     edi
0x4D76C2: pop     esi
0x4D76C3: pop     ebx
0x4D76C4: add     esp, 10h
0x4D76C7: retn
