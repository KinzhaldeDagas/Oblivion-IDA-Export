0x6748B0: push    ebp
0x6748B1: lea     ebp, [ecx+58h]
0x6748B4: mov     eax, ebp
0x6748B6: test    eax, eax
0x6748B8: push    esi
0x6748B9: mov     esi, [esp+8+arg_0]
0x6748BD: jz      short loc_6748CB
0x6748BF: nop
0x6748C0: cmp     [eax], esi
0x6748C2: jz      short loc_67493E
0x6748C4: mov     eax, [eax+4]
0x6748C7: test    eax, eax
0x6748C9: jnz     short loc_6748C0
0x6748CB: mov     ecx, [esi+58h]
0x6748CE: test    ecx, ecx
0x6748D0: jz      short loc_67493E
0x6748D2: mov     eax, [ecx]
0x6748D4: mov     edx, [eax+8]
0x6748D7: push    ebx
0x6748D8: push    edi
0x6748D9: call    edx
0x6748DB: mov     ecx, esi
0x6748DD: mov     edi, eax
0x6748DF: call    MobileObject_GetProcessLevel
0x6748E4: mov     ebx, eax
0x6748E6: mov     eax, [esi]
0x6748E8: mov     edx, [eax+198h]
0x6748EE: push    0
0x6748F0: mov     ecx, esi
0x6748F2: call    edx
0x6748F4: test    al, al
0x6748F6: jnz     short loc_674926
0x6748F8: cmp     edi, ebx
0x6748FA: jnz     short loc_674926
0x6748FC: mov     ecx, [esi+58h]
0x6748FF: mov     eax, [ecx]
0x674901: mov     edx, [eax+248h]
0x674907: call    edx
0x674909: test    al, al
0x67490B: jnz     short loc_674926
0x67490D: mov     eax, [esi+8]
0x674910: shr     eax, 5
0x674913: test    al, 1
0x674915: jnz     short loc_674926
0x674917: mov     ecx, ds:0B333C4h; this
0x67491D: call    PlayerCharacter__IsSleeping?
0x674922: test    al, al
0x674924: jz      short loc_67493C
0x674926: mov     edx, [esi]
0x674928: mov     eax, [edx+0A0h]
0x67492E: push    1
0x674930: mov     ecx, esi
0x674932: call    eax
0x674934: push    esi
0x674935: mov     ecx, ebp
0x674937: call    BSSimpleList_PushFront
0x67493C: pop     edi
0x67493D: pop     ebx
0x67493E: pop     esi
0x67493F: pop     ebp
0x674940: retn    4
