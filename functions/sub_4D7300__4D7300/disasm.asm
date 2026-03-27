0x4D7300: push    0FFFFFFFFh
0x4D7302: push    offset SEH_6CF490
0x4D7307: mov     eax, large fs:0
0x4D730D: push    eax
0x4D730E: push    ebx
0x4D730F: push    ebp
0x4D7310: push    esi
0x4D7311: push    edi
0x4D7312: mov     eax, ds:0B30AACh
0x4D7317: xor     eax, esp
0x4D7319: push    eax
0x4D731A: lea     eax, [esp+20h+var_C]
0x4D731E: mov     large fs:0, eax
0x4D7324: mov     esi, ecx
0x4D7326: mov     eax, [esi]
0x4D7328: mov     edx, [eax+170h]
0x4D732E: call    edx
0x4D7330: cmp     byte ptr [eax+4], 20h ; ' '
0x4D7334: jnz     loc_4D73D1
0x4D733A: mov     eax, [esi]
0x4D733C: mov     edx, [eax+40h]
0x4D733F: push    400000h
0x4D7344: mov     ecx, esi
0x4D7346: call    edx
0x4D7348: lea     ebp, [esi+44h]
0x4D734B: push    17h; a2
0x4D734D: mov     ecx, ebp; this
0x4D734F: call    BaseExtraList_GetExtraData
0x4D7354: mov     edi, eax
0x4D7356: test    edi, edi
0x4D7358: jz      short loc_4D738B
0x4D735A: mov     eax, [esp+20h+arg_4]
0x4D735E: mov     ecx, [esp+20h+arg_0]
0x4D7362: push    eax
0x4D7363: push    ecx
0x4D7364: mov     ecx, edi
0x4D7366: call    sub_4295F0
0x4D736B: cmp     dword ptr [edi+0Ch], 0
0x4D736F: jnz     short loc_4D73D1
0x4D7371: push    1
0x4D7373: push    edi
0x4D7374: mov     ecx, ebp
0x4D7376: call    BaseExtraList_RemoveExtraByPtr
0x4D737B: mov     edx, [esi]
0x4D737D: mov     eax, [edx+44h]
0x4D7380: push    400000h
0x4D7385: mov     ecx, esi
0x4D7387: call    eax
0x4D7389: jmp     short loc_4D73D1
0x4D738B: mov     ebx, [esp+20h+arg_4]
0x4D738F: test    bl, bl
0x4D7391: jz      short loc_4D73D1
0x4D7393: push    10h; Size
0x4D7395: call    FormHeapAlloc
0x4D739A: add     esp, 4
0x4D739D: mov     [esp+20h+arg_4], eax
0x4D73A1: xor     esi, esi
0x4D73A3: cmp     eax, esi
0x4D73A5: mov     [esp+20h+var_4], esi
0x4D73A9: jz      short loc_4D73B4
0x4D73AB: mov     ecx, eax
0x4D73AD: call    sub_42A390
0x4D73B2: mov     esi, eax
0x4D73B4: push    esi; BSExtraData *
0x4D73B5: mov     ecx, ebp; ExtraDataList *
0x4D73B7: mov     [esp+24h+var_4], 0FFFFFFFFh
0x4D73BF: call    BaseExtraList_AddExtra
0x4D73C4: mov     ecx, [esp+20h+arg_0]
0x4D73C8: push    ebx
0x4D73C9: push    ecx
0x4D73CA: mov     ecx, esi
0x4D73CC: call    sub_4295F0
0x4D73D1: mov     ecx, dword ptr [esp+20h+var_C]
0x4D73D5: mov     large fs:0, ecx
0x4D73DC: pop     ecx
0x4D73DD: pop     edi
0x4D73DE: pop     esi
0x4D73DF: pop     ebp
0x4D73E0: pop     ebx
0x4D73E1: add     esp, 0Ch
0x4D73E4: retn    8
