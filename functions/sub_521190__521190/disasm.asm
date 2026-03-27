0x521190: sub     esp, 88h
0x521196: mov     eax, ds:0B30AACh
0x52119B: xor     eax, esp
0x52119D: mov     [esp+88h+var_4], eax
0x5211A4: mov     eax, [esp+88h+arg_0]
0x5211AB: push    esi
0x5211AC: push    edi
0x5211AD: xor     edi, edi
0x5211AF: test    eax, eax
0x5211B1: mov     esi, ecx
0x5211B3: jz      short loc_52121E
0x5211B5: cmp     byte ptr [eax], 0
0x5211B8: jz      short loc_52121E
0x5211BA: lea     edx, [esp+90h+Str]
0x5211BE: mov     [esp+90h+var_88], edi
0x5211C2: sub     edx, eax
0x5211C4: mov     cl, [eax]
0x5211C6: mov     [edx+eax], cl
0x5211C9: add     eax, 1
0x5211CC: test    cl, cl
0x5211CE: jnz     short loc_5211C4
0x5211D0: lea     eax, [esp+90h+Str]
0x5211D4: push    5Ch ; '\'; Ch
0x5211D6: push    eax; Str
0x5211D7: call    _strrchr
0x5211DC: mov     ecx, ds:0A538D0h
0x5211E2: mov     [eax+1], ecx
0x5211E5: mov     edx, ds:0A538D4h
0x5211EB: mov     [eax+5], edx
0x5211EE: mov     cx, ds:0A538D8h
0x5211F5: add     esp, 8
0x5211F8: mov     [eax+9], cx
0x5211FC: lea     edx, [esp+90h+var_88]
0x521200: push    edx
0x521201: lea     eax, [esp+94h+Str]
0x521205: push    eax
0x521206: mov     ecx, esi
0x521208: call    NiTMap_GetAt
0x52120D: test    al, al
0x52120F: jz      short loc_52121E
0x521211: mov     eax, [esp+90h+var_88]
0x521215: test    eax, eax
0x521217: jz      short loc_52121E
0x521219: mov     eax, [eax+20h]
0x52121C: jmp     short loc_521220
0x52121E: mov     eax, edi
0x521220: mov     ecx, [esp+90h+var_4]
0x521227: pop     edi
0x521228: pop     esi
0x521229: xor     ecx, esp
0x52122B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x521230: add     esp, 88h
0x521236: retn    4
