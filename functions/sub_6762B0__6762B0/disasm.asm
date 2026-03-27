0x6762B0: push    ebp
0x6762B1: mov     ebp, esp
0x6762B3: and     esp, 0FFFFFFF8h
0x6762B6: sub     esp, 1Ch
0x6762B9: mov     eax, ds:0B333C4h
0x6762BE: push    ebx
0x6762BF: push    esi
0x6762C0: mov     [esp+24h+var_10], ecx
0x6762C4: xor     ebx, ebx
0x6762C6: push    edi
0x6762C7: add     ecx, 68h ; 'h'; this
0x6762CA: mov     [esp+28h+var_14], ebx
0x6762CE: mov     [eax+5A8h], bl
0x6762D4: call    sub_7616D0
0x6762D9: cmp     eax, ebx
0x6762DB: mov     [esp+28h+var_18], eax
0x6762DF: jz      loc_676464
0x6762E5: mov     edi, [ebp+arg_0]
0x6762E8: jmp     short loc_6762F4
0x6762EA: align 10h
0x6762F0: mov     eax, [esp+28h+var_18]
0x6762F4: mov     ecx, [eax]
0x6762F6: cmp     ecx, ebx
0x6762F8: jz      loc_676464
0x6762FE: mov     edx, [ecx]
0x676300: mov     eax, [edx+190h]
0x676306: xor     esi, esi
0x676308: call    eax
0x67630A: test    al, al
0x67630C: jz      short loc_676314
0x67630E: mov     ecx, [esp+28h+var_18]
0x676312: mov     esi, [ecx]
0x676314: cmp     [ebp+arg_4], bl
0x676317: jnz     short loc_67634F
0x676319: cmp     esi, ebx
0x67631B: jz      loc_676451
0x676321: mov     ecx, [esp+28h+var_10]
0x676325: lea     edx, [esp+28h+var_8]
0x676329: push    edx
0x67632A: push    edi
0x67632B: mov     [esp+30h+var_8], ebx
0x67632F: mov     [esp+30h+var_4], ebx
0x676333: call    sub_6761A0
0x676338: lea     eax, [esp+28h+var_8]
0x67633C: lea     esp, [esp+0]
0x676340: cmp     [eax], esi
0x676342: jz      loc_676451
0x676348: mov     eax, [eax+4]
0x67634B: cmp     eax, ebx
0x67634D: jnz     short loc_676340
0x67634F: cmp     esi, ebx
0x676351: jz      loc_676451
0x676357: mov     eax, [esi]
0x676359: mov     edx, [eax+198h]
0x67635F: push    ebx
0x676360: mov     ecx, esi
0x676362: call    edx
0x676364: test    al, al
0x676366: jnz     loc_676451
0x67636C: mov     eax, [esi+8]
0x67636F: shr     eax, 0Bh
0x676372: test    al, 1
0x676374: jnz     loc_676451
0x67637A: mov     eax, ds:0B333C4h
0x67637F: cmp     edi, eax
0x676381: jnz     short loc_6763B8
0x676383: cmp     [eax+5A8h], bl
0x676389: jnz     short loc_6763B8
0x67638B: push    ebx
0x67638C: push    esi
0x67638D: mov     ecx, edi
0x67638F: call    TesObjectREF_GetDistance
0x676394: fstp    [esp+28h+var_C]
0x676398: fld     [esp+28h+var_C]
0x67639C: fild    dword ptr ds:0B36790h
0x6763A2: fcompp
0x6763A4: fnstsw  ax
0x6763A6: test    ah, 1
0x6763A9: jnz     short loc_6763B8
0x6763AB: mov     ecx, ds:0B333C4h
0x6763B1: mov     byte ptr [ecx+5A8h], 1
0x6763B8: mov     edx, [esi]
0x6763BA: mov     eax, [edx+334h]
0x6763C0: push    1
0x6763C2: mov     ecx, esi
0x6763C4: call    eax
0x6763C6: test    al, al
0x6763C8: jnz     short loc_6763D5
0x6763CA: mov     ecx, esi
0x6763CC: call    sub_5E6BA0
0x6763D1: test    al, al
0x6763D3: jz      short loc_67643F
0x6763D5: mov     edx, [esi]
0x6763D7: mov     eax, [edx+334h]
0x6763DD: push    1
0x6763DF: mov     ecx, esi
0x6763E1: call    eax
0x6763E3: test    al, al
0x6763E5: jz      short loc_676425
0x6763E7: mov     edx, [esi]
0x6763E9: mov     eax, [edx+330h]
0x6763EF: mov     ecx, esi
0x6763F1: call    eax
0x6763F3: test    eax, eax
0x6763F5: jz      short loc_676425
0x6763F7: mov     edx, [esi]
0x6763F9: mov     eax, [edx+330h]
0x6763FF: mov     ecx, esi
0x676401: call    eax
0x676403: mov     ecx, eax
0x676405: call    sub_6135F0
0x67640A: cmp     eax, edi
0x67640C: jnz     short loc_676425
0x67640E: mov     edx, [esi]
0x676410: mov     eax, [edx+330h]
0x676416: mov     ecx, esi
0x676418: call    eax
0x67641A: mov     ecx, eax
0x67641C: call    sub_612A10
0x676421: test    al, al
0x676423: jz      short loc_676471
0x676425: mov     ecx, esi
0x676427: call    sub_5E6BA0
0x67642C: test    al, al
0x67642E: jz      short loc_67643F
0x676430: mov     ecx, esi
0x676432: call    sub_5E2E00
0x676437: cmp     eax, ds:0B333C4h
0x67643D: jz      short loc_676471
0x67643F: push    edi
0x676440: mov     ecx, esi
0x676442: call    sub_5E10A0
0x676447: cmp     eax, [esp+28h+var_14]
0x67644B: jle     short loc_676451
0x67644D: mov     [esp+28h+var_14], eax
0x676451: mov     ecx, [esp+28h+var_18]
0x676455: mov     eax, [ecx+4]
0x676458: cmp     eax, ebx
0x67645A: mov     [esp+28h+var_18], eax
0x67645E: jnz     loc_6762F0
0x676464: mov     eax, [esp+28h+var_14]
0x676468: pop     edi
0x676469: pop     esi
0x67646A: pop     ebx
0x67646B: mov     esp, ebp
0x67646D: pop     ebp
0x67646E: retn    8
0x676471: pop     edi
0x676472: pop     esi
0x676473: mov     eax, 3
0x676478: pop     ebx
0x676479: mov     esp, ebp
0x67647B: pop     ebp
0x67647C: retn    8
