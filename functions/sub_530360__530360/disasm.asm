0x530360: push    ebx
0x530361: push    edi
0x530362: mov     edi, [esp+8+arg_0]
0x530366: xor     bl, bl
0x530368: test    edi, edi
0x53036A: jz      short loc_5303CC
0x53036C: mov     eax, [edi]
0x53036E: cmp     eax, ds:0B05E20h
0x530374: jnz     short loc_5303CC
0x530376: push    esi
0x530377: push    ecx
0x530378: call    TESTopic_static_GetTopicInfoParent?
0x53037D: mov     esi, eax
0x53037F: add     esp, 4
0x530382: test    esi, esi
0x530384: jz      short loc_5303C4
0x530386: mov     eax, [esp+0Ch+arg_4]
0x53038A: test    al, al
0x53038C: jz      short loc_5303A7
0x53038E: mov     ecx, [esp+0Ch+arg_8]
0x530392: mov     edx, [esi]
0x530394: mov     edx, [edx+0BCh]
0x53039A: push    ecx
0x53039B: push    eax
0x53039C: push    edi
0x53039D: mov     ecx, esi
0x53039F: call    edx
0x5303A1: mov     bl, al
0x5303A3: test    bl, bl
0x5303A5: jnz     short loc_5303C4
0x5303A7: cmp     dword ptr [edi+0Ch], 7
0x5303AB: jnz     short loc_5303C4
0x5303AD: mov     eax, [edi+8]
0x5303B0: push    eax
0x5303B1: mov     ecx, esi
0x5303B3: call    sub_46AF50
0x5303B8: test    al, al
0x5303BA: jz      short loc_5303C4
0x5303BC: pop     esi
0x5303BD: pop     edi
0x5303BE: mov     al, 1
0x5303C0: pop     ebx
0x5303C1: retn    0Ch
0x5303C4: pop     esi
0x5303C5: pop     edi
0x5303C6: mov     al, bl
0x5303C8: pop     ebx
0x5303C9: retn    0Ch
0x5303CC: pop     edi
0x5303CD: mov     al, bl
0x5303CF: pop     ebx
0x5303D0: retn    0Ch
