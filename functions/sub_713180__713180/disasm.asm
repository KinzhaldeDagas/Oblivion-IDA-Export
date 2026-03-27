0x713180: sub     esp, 10h
0x713183: push    ebx
0x713184: push    ebp
0x713185: push    esi
0x713186: mov     esi, ecx
0x713188: mov     ecx, [esi+220h]
0x71318E: mov     eax, [ecx]
0x713190: mov     edx, [eax+8]
0x713193: push    edi
0x713194: push    0
0x713196: call    edx
0x713198: mov     ecx, [esi+220h]
0x71319E: push    offset aGamebryoFileFo; "Gamebryo File Format, Version 20.0.0.5"...
0x7131A3: call    sub_7483C0
0x7131A8: mov     eax, [esi+220h]
0x7131AE: mov     edx, [eax+8]
0x7131B1: mov     ebx, 1
0x7131B6: push    ebx
0x7131B7: lea     ecx, [esp+24h+var_C]
0x7131BB: push    ecx
0x7131BC: mov     ebp, 4
0x7131C1: push    ebp
0x7131C2: push    offset dword_B26DF4
0x7131C7: push    eax
0x7131C8: mov     [esp+34h+var_C], ebp
0x7131CC: call    edx
0x7131CE: mov     eax, [esi+220h]
0x7131D4: mov     edx, [eax+8]
0x7131D7: push    ebx
0x7131D8: lea     ecx, [esp+38h+var_C]
0x7131DC: push    ecx
0x7131DD: lea     edi, [esi+1E4h]
0x7131E3: push    ebx
0x7131E4: push    edi
0x7131E5: push    eax
0x7131E6: mov     [esp+48h+var_C], ebx
0x7131EA: mov     [esp+48h+var_4], edi
0x7131EE: call    edx
0x7131F0: mov     eax, [esi+220h]
0x7131F6: mov     edx, [eax+8]
0x7131F9: push    ebx
0x7131FA: lea     ecx, [esp+4Ch+var_C]
0x7131FE: push    ecx
0x7131FF: push    ebp
0x713200: push    offset dword_B26DF8
0x713205: push    eax
0x713206: mov     [esp+5Ch+var_C], ebp
0x71320A: call    edx
0x71320C: mov     eax, [esi+1F8h]
0x713212: push    ebx
0x713213: lea     ecx, [esp+60h+var_C]
0x713217: push    ecx
0x713218: mov     [esp+64h+var_8], eax
0x71321C: mov     eax, [esi+220h]
0x713222: push    ebp
0x713223: lea     edx, [esp+68h+var_8]
0x713227: push    edx
0x713228: push    eax
0x713229: mov     eax, [eax+8]
0x71322C: mov     [esp+70h+var_C], ebp
0x713230: call    eax
0x713232: add     esp, 50h
0x713235: cmp     dword ptr ds:0B26DF8h, 0
0x71323C: jz      loc_713369
0x713242: mov     eax, [esi+220h]
0x713248: push    ebx
0x713249: lea     ecx, [esp+24h+var_8]
0x71324D: push    ecx
0x71324E: push    ebp
0x71324F: lea     edx, [esi+4]
0x713252: push    edx
0x713253: push    eax
0x713254: mov     eax, [eax+8]
0x713257: mov     [esp+34h+var_8], ebp
0x71325B: call    eax
0x71325D: lea     edi, [esi+8]
0x713260: mov     eax, edi
0x713262: add     esp, 14h
0x713265: lea     ebp, [eax+1]
0x713268: mov     cl, [eax]
0x71326A: add     eax, 1
0x71326D: test    cl, cl
0x71326F: jnz     short loc_713268
0x713271: push    ebx
0x713272: sub     eax, ebp
0x713274: lea     ecx, [esp+24h+var_8]
0x713278: push    ecx
0x713279: add     al, bl
0x71327B: mov     byte ptr [esp+28h+var_10+3], al
0x71327F: mov     eax, [esi+220h]
0x713285: push    ebx
0x713286: lea     edx, [esp+2Ch+var_10+3]
0x71328A: push    edx
0x71328B: push    eax
0x71328C: mov     eax, [eax+8]
0x71328F: mov     [esp+34h+var_8], ebx
0x713293: call    eax
0x713295: movzx   edx, byte ptr [esp+34h+var_10+3]
0x71329A: mov     eax, [esi+220h]
0x7132A0: push    ebx
0x7132A1: lea     ecx, [esp+38h+var_8]
0x7132A5: push    ecx
0x7132A6: push    edx
0x7132A7: push    edi
0x7132A8: push    eax
0x7132A9: mov     eax, [eax+8]
0x7132AC: mov     [esp+48h+var_8], ebx
0x7132B0: call    eax
0x7132B2: lea     edi, [esi+48h]
0x7132B5: mov     eax, edi
0x7132B7: add     esp, 28h
0x7132BA: lea     ebp, [eax+1]
0x7132BD: lea     ecx, [ecx+0]
0x7132C0: mov     cl, [eax]
0x7132C2: add     eax, 1
0x7132C5: test    cl, cl
0x7132C7: jnz     short loc_7132C0
0x7132C9: push    ebx
0x7132CA: sub     eax, ebp
0x7132CC: lea     ecx, [esp+24h+var_8]
0x7132D0: push    ecx
0x7132D1: add     al, bl
0x7132D3: mov     byte ptr [esp+28h+var_10+3], al
0x7132D7: mov     eax, [esi+220h]
0x7132DD: push    ebx
0x7132DE: lea     edx, [esp+2Ch+var_10+3]
0x7132E2: push    edx
0x7132E3: push    eax
0x7132E4: mov     eax, [eax+8]
0x7132E7: mov     [esp+34h+var_8], ebx
0x7132EB: call    eax
0x7132ED: movzx   edx, byte ptr [esp+34h+var_10+3]
0x7132F2: mov     eax, [esi+220h]
0x7132F8: push    ebx
0x7132F9: lea     ecx, [esp+38h+var_8]
0x7132FD: push    ecx
0x7132FE: push    edx
0x7132FF: push    edi
0x713300: push    eax
0x713301: mov     eax, [eax+8]
0x713304: mov     [esp+48h+var_8], ebx
0x713308: call    eax
0x71330A: lea     edi, [esi+88h]
0x713310: mov     eax, edi
0x713312: add     esp, 28h
0x713315: lea     ebp, [eax+1]
0x713318: mov     cl, [eax]
0x71331A: add     eax, 1
0x71331D: test    cl, cl
0x71331F: jnz     short loc_713318
0x713321: push    ebx
0x713322: sub     eax, ebp
0x713324: lea     ecx, [esp+24h+var_8]
0x713328: push    ecx
0x713329: add     al, bl
0x71332B: mov     byte ptr [esp+28h+var_10+3], al
0x71332F: mov     eax, [esi+220h]
0x713335: push    ebx
0x713336: lea     edx, [esp+2Ch+var_10+3]
0x71333A: push    edx
0x71333B: push    eax
0x71333C: mov     eax, [eax+8]
0x71333F: mov     [esp+34h+var_8], ebx
0x713343: call    eax
0x713345: movzx   edx, byte ptr [esp+34h+var_10+3]
0x71334A: mov     eax, [esi+220h]
0x713350: push    ebx
0x713351: lea     ecx, [esp+38h+var_8]
0x713355: push    ecx
0x713356: push    edx
0x713357: push    edi
0x713358: push    eax
0x713359: mov     eax, [eax+8]
0x71335C: mov     [esp+48h+var_8], ebx
0x713360: call    eax
0x713362: mov     edi, [esp+48h+var_4]
0x713366: add     esp, 28h
0x713369: movzx   eax, byte ptr [edi]
0x71336C: mov     esi, [esi+220h]
0x713372: mov     edx, [esi]
0x713374: mov     edx, [edx+8]
0x713377: xor     al, bl
0x713379: mov     ecx, esi
0x71337B: push    eax
0x71337C: call    edx
0x71337E: pop     edi
0x71337F: pop     esi
0x713380: pop     ebp
0x713381: pop     ebx
0x713382: add     esp, 10h
0x713385: retn
