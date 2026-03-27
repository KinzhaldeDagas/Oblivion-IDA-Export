0x5E2800: push    esi
0x5E2801: push    edi
0x5E2802: mov     edi, [esp+8+arg_0]
0x5E2806: cmp     edi, 0Ah
0x5E2809: mov     esi, ecx
0x5E280B: jnz     short loc_5E282C
0x5E280D: fldz
0x5E280F: fcomp   [esp+8+arg_4]
0x5E2813: fnstsw  ax
0x5E2815: test    ah, 41h
0x5E2818: jnz     short loc_5E282C
0x5E281A: mov     eax, [esi]
0x5E281C: mov     edx, [eax+278h]
0x5E2822: call    edx
0x5E2824: test    al, al
0x5E2826: jz      Actor_ModMaxAVf___Done
0x5E282C: push    ebp
0x5E282D: mov     ebp, [esi+58h]
0x5E2830: test    ebp, ebp
0x5E2832: jz      short loc_5E287B
0x5E2834: mov     eax, [esi]
0x5E2836: mov     edx, [eax+170h]
0x5E283C: push    ebx
0x5E283D: mov     ecx, esi
0x5E283F: xor     ebx, ebx
0x5E2841: call    edx
0x5E2843: mov     edi, eax
0x5E2845: test    edi, edi
0x5E2847: jz      short loc_5E285B
0x5E2849: mov     eax, [esi]
0x5E284B: mov     edx, [eax+190h]
0x5E2851: mov     ecx, esi
0x5E2853: call    edx
0x5E2855: test    al, al
0x5E2857: jz      short loc_5E285B
0x5E2859: mov     ebx, edi
0x5E285B: fld     [esp+10h+arg_4]
0x5E285F: mov     eax, [ebp+0]
0x5E2862: mov     edx, [eax+278h]
0x5E2868: push    ecx
0x5E2869: mov     ecx, [esp+14h+arg_0]
0x5E286D: fstp    [esp+14h+var_14]
0x5E2870: push    ecx
0x5E2871: push    ebx
0x5E2872: mov     ecx, ebp
0x5E2874: call    edx
0x5E2876: mov     edi, [esp+1Ch+var_8]
0x5E287A: pop     ebx
0x5E287B: cmp     edi, 8
0x5E287E: pop     ebp
0x5E287F: jnz     short loc_5E28AB
0x5E2881: fldz
0x5E2883: fld     [esp+14h+var_4]
0x5E2887: fcom    st(1)
0x5E2889: fnstsw  ax
0x5E288B: fstp    st(1)
0x5E288D: test    ah, 5
0x5E2890: jp      short loc_5E28A9
0x5E2892: mov     eax, [esi]
0x5E2894: mov     edx, [eax+3B8h]
0x5E289A: push    ecx
0x5E289B: mov     ecx, [esp+18h]
0x5E289F: fstp    [esp+18h+var_18]
0x5E28A2: push    ecx
0x5E28A3: mov     ecx, esi
0x5E28A5: call    edx
0x5E28A7: jmp     short loc_5E28AB
0x5E28A9: fstp    st
0x5E28AB: mov     eax, [esi]
0x5E28AD: mov     edx, [eax+40h]
0x5E28B0: push    100000h
0x5E28B5: mov     ecx, esi
0x5E28B7: call    edx
0x5E28B9: lea     eax, [edi-0Ch]
0x5E28BC: cmp     eax, 14h
0x5E28BF: ja      short Actor_ModMaxAVf___Done
0x5E28C1: cmp     edi, 12h
0x5E28C4: jz      short loc_5E28CB
0x5E28C6: cmp     edi, 1Bh
0x5E28C9: jnz     short Actor_ModMaxAVf___Done
0x5E28CB: lea     ecx, [esi+44h]; this
0x5E28CE: call    ExtraDataList_GetContainerChanges
0x5E28D3: test    eax, eax
0x5E28D5: jz      short loc_5E28DE
0x5E28D7: mov     ecx, eax
0x5E28D9: call    sub_484310
0x5E28DE: mov     edx, [esi]
0x5E28E0: mov     eax, [edx+2C0h]
0x5E28E6: mov     ecx, esi
0x5E28E8: call    eax
