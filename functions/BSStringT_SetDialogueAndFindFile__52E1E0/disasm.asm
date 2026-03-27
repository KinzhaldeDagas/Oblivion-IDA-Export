0x52E1E0: sub     esp, 108h
0x52E1E6: mov     eax, ds:0B30AACh
0x52E1EB: xor     eax, esp
0x52E1ED: mov     [esp+108h+var_4], eax
0x52E1F4: mov     edx, [esp+108h+initialPath]
0x52E1FB: mov     cl, [edx]
0x52E1FD: test    cl, cl
0x52E1FF: push    esi
0x52E200: push    edi
0x52E201: mov     edi, [esp+110h+arg_0]
0x52E208: lea     eax, [esp+110h+a2]
0x52E20C: jz      short loc_52E21E
0x52E20E: mov     edi, edi
0x52E210: add     edx, 1
0x52E213: mov     [eax], cl
0x52E215: mov     cl, [edx]
0x52E217: add     eax, 1
0x52E21A: test    cl, cl
0x52E21C: jnz     short loc_52E210
0x52E21E: mov     edx, [esp+110h+arg_8]
0x52E225: mov     cl, [edx]
0x52E227: mov     byte ptr [eax], 5Ch ; '\'
0x52E22A: add     eax, 1
0x52E22D: test    cl, cl
0x52E22F: jz      short loc_52E23F
0x52E231: add     edx, 1
0x52E234: mov     [eax], cl
0x52E236: mov     cl, [edx]
0x52E238: add     eax, 1
0x52E23B: test    cl, cl
0x52E23D: jnz     short loc_52E231
0x52E23F: mov     edx, [esp+110h+raceName]
0x52E246: mov     cl, [edx]
0x52E248: mov     byte ptr [eax], 5Ch ; '\'
0x52E24B: add     eax, 1
0x52E24E: test    cl, cl
0x52E250: jz      short loc_52E260
0x52E252: add     edx, 1
0x52E255: mov     [eax], cl
0x52E257: mov     cl, [edx]
0x52E259: add     eax, 1
0x52E25C: test    cl, cl
0x52E25E: jnz     short loc_52E252
0x52E260: mov     edx, [esp+110h+sex]
0x52E267: mov     cl, [edx]
0x52E269: mov     byte ptr [eax], 5Ch ; '\'
0x52E26C: add     eax, 1
0x52E26F: test    cl, cl
0x52E271: jz      short loc_52E287
0x52E273: add     edx, 1
0x52E276: mov     [eax], cl
0x52E278: mov     cl, [edx]
0x52E27A: add     eax, 1
0x52E27D: test    cl, cl
0x52E27F: jnz     short loc_52E273
0x52E281: mov     byte ptr [eax], 5Ch ; '\'
0x52E284: add     eax, 1
0x52E287: mov     edx, [esp+110h+arg_14]
0x52E28E: mov     cl, [edx]
0x52E290: test    cl, cl
0x52E292: jz      short loc_52E2A2
0x52E294: add     edx, 1
0x52E297: mov     [eax], cl
0x52E299: mov     cl, [edx]
0x52E29B: add     eax, 1
0x52E29E: test    cl, cl
0x52E2A0: jnz     short loc_52E294
0x52E2A2: mov     edx, [esp+110h+extString]
0x52E2A9: mov     cl, [edx]
0x52E2AB: mov     byte ptr [eax], 2Eh ; '.'
0x52E2AE: add     eax, 1
0x52E2B1: test    cl, cl
0x52E2B3: jz      short loc_52E2C3
0x52E2B5: add     edx, 1
0x52E2B8: mov     [eax], cl
0x52E2BA: mov     cl, [edx]
0x52E2BC: add     eax, 1
0x52E2BF: test    cl, cl
0x52E2C1: jnz     short loc_52E2B5
0x52E2C3: mov     ecx, ds:0B33A04h
0x52E2C9: test    ecx, ecx
0x52E2CB: mov     byte ptr [eax], 0
0x52E2CE: jz      short loc_52E2E6
0x52E2D0: mov     eax, [ecx]
0x52E2D2: mov     eax, [eax+4]
0x52E2D5: push    0FFFFFFFFh
0x52E2D7: push    0
0x52E2D9: push    0
0x52E2DB: lea     edx, [esp+11Ch+a2]
0x52E2DF: push    edx
0x52E2E0: call    eax
0x52E2E2: mov     esi, eax
0x52E2E4: jmp     short loc_52E2E8
0x52E2E6: xor     esi, esi
0x52E2E8: push    0; a3
0x52E2EA: lea     ecx, [esp+114h+a2]
0x52E2EE: push    ecx; a2
0x52E2EF: mov     ecx, edi; this
0x52E2F1: call    BSStringT_Set
0x52E2F6: mov     ecx, [esp+110h+var_4]
0x52E2FD: test    esi, esi
0x52E2FF: pop     edi
0x52E300: setnz   al
0x52E303: pop     esi
0x52E304: xor     ecx, esp
0x52E306: call    @__security_check_cookie@4; __security_check_cookie(x)
0x52E30B: add     esp, 108h
0x52E311: retn    1Ch
