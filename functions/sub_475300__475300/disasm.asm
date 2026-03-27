0x475300: push    0FFFFFFFFh
0x475302: push    offset SEH_8C8970
0x475307: mov     eax, large fs:0
0x47530D: push    eax
0x47530E: push    ecx
0x47530F: push    esi
0x475310: push    edi
0x475311: mov     eax, ds:0B30AACh
0x475316: xor     eax, esp
0x475318: push    eax
0x475319: lea     eax, [esp+1Ch+var_C]
0x47531D: mov     large fs:0, eax
0x475323: mov     esi, ecx
0x475325: mov     eax, [esi+0CCh]
0x47532B: test    eax, eax
0x47532D: lea     edi, [esi+0CCh]
0x475333: jz      short loc_47539F
0x475335: mov     ecx, [eax+0Ch]
0x475338: mov     edx, ecx
0x47533A: sub     edx, 5
0x47533D: jz      short loc_47534B
0x47533F: sub     edx, 1
0x475342: jnz     short loc_47534D
0x475344: mov     ecx, 3
0x475349: jmp     short loc_47534D
0x47534B: xor     ecx, ecx
0x47534D: mov     eax, [eax+10h]
0x475350: test    eax, eax
0x475352: jz      short loc_475365
0x475354: cmp     [esi+ecx*4+0A0h], eax
0x47535B: jnz     short loc_475365
0x47535D: push    ecx
0x47535E: mov     ecx, esi
0x475360: call    sub_4733A0
0x475365: cmp     dword ptr [esi+0D4h], 0
0x47536C: jnz     short loc_47537E
0x47536E: mov     eax, [edi]
0x475370: mov     [esi+0D4h], eax
0x475376: mov     dword ptr [edi], 0
0x47537C: jmp     short loc_47539F
0x47537E: cmp     dword ptr [esi+0D8h], 0
0x475385: jnz     short loc_475397
0x475387: mov     ecx, [edi]
0x475389: mov     [esi+0D8h], ecx
0x47538F: mov     dword ptr [edi], 0
0x475395: jmp     short loc_47539F
0x475397: push    edi
0x475398: mov     ecx, esi
0x47539A: call    sub_472ED0
0x47539F: push    2Ch ; ','; Size
0x4753A1: call    FormHeapAlloc
0x4753A6: add     esp, 4
0x4753A9: mov     [esp+1Ch+var_10], eax
0x4753AD: test    eax, eax
0x4753AF: mov     [esp+1Ch+var_4], 0
0x4753B7: jz      short loc_4753D2
0x4753B9: mov     edx, [esp+1Ch+arg_4]
0x4753BD: mov     ecx, [esp+1Ch+arg_0]
0x4753C1: push    0
0x4753C3: push    0
0x4753C5: push    1
0x4753C7: push    edx
0x4753C8: push    ecx
0x4753C9: mov     ecx, eax
0x4753CB: call    sub_474C50
0x4753D0: jmp     short loc_4753D4
0x4753D2: xor     eax, eax
0x4753D4: mov     [edi], eax
0x4753D6: mov     ecx, [esp+1Ch+var_C]
0x4753DA: mov     large fs:0, ecx
0x4753E1: pop     ecx
0x4753E2: pop     edi
0x4753E3: pop     esi
0x4753E4: add     esp, 10h
0x4753E7: retn    8
