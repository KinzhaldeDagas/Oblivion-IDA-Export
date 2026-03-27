0x84C200: push    0FFFFFFFFh
0x84C202: push    offset SEH_879360
0x84C207: mov     eax, large fs:0
0x84C20D: push    eax
0x84C20E: push    ecx
0x84C20F: push    ebx
0x84C210: push    ebp
0x84C211: push    esi
0x84C212: push    edi
0x84C213: mov     eax, ds:0B30AACh
0x84C218: xor     eax, esp
0x84C21A: push    eax
0x84C21B: lea     eax, [esp+24h+var_C]
0x84C21F: mov     large fs:0, eax
0x84C225: mov     [esp+24h+var_10], ecx
0x84C229: mov     eax, [esp+24h+arg_8]
0x84C22D: mov     eax, [eax+10h]
0x84C230: mov     edi, ds:0B45630h
0x84C236: push    eax
0x84C237: call    sub_848C40
0x84C23C: mov     ecx, [edi+24h]
0x84C23F: mov     ebx, [esp+24h+arg_C]
0x84C243: mov     esi, [ecx]
0x84C245: mov     edx, [ebx]
0x84C247: mov     eax, [edx+88h]
0x84C24D: push    0
0x84C24F: mov     ecx, ebx
0x84C251: mov     [esp+28h+arg_8], esi
0x84C255: call    eax
0x84C257: mov     esi, [esi+4]
0x84C25A: mov     ebp, eax
0x84C25C: cmp     esi, ebp
0x84C25E: jz      short loc_84C297
0x84C260: test    esi, esi
0x84C262: jz      short loc_84C280
0x84C264: lea     ecx, [esi+4]
0x84C267: push    ecx; lpAddend
0x84C268: call    dword ptr ds:0A2807Ch
0x84C26E: test    eax, eax
0x84C270: jnz     short loc_84C280
0x84C272: test    esi, esi
0x84C274: jz      short loc_84C280
0x84C276: mov     edx, [esi]
0x84C278: mov     eax, [edx]
0x84C27A: push    1
0x84C27C: mov     ecx, esi
0x84C27E: call    eax
0x84C280: test    ebp, ebp
0x84C282: mov     esi, [esp+24h+arg_8]
0x84C286: mov     [esi+4], ebp
0x84C289: jz      short loc_84C29B
0x84C28B: add     ebp, 4
0x84C28E: push    ebp; lpAddend
0x84C28F: call    dword ptr ds:0A28078h
0x84C295: jmp     short loc_84C29B
0x84C297: mov     esi, [esp+24h+arg_8]
0x84C29B: test    esi, esi
0x84C29D: jz      short loc_84C2B9
0x84C29F: cmp     byte ptr ds:0B42CDDh, 0
0x84C2A6: jz      short loc_84C2B9
0x84C2A8: mov     edx, [ebx]
0x84C2AA: mov     eax, [edx+78h]
0x84C2AD: mov     ecx, ebx
0x84C2AF: call    eax
0x84C2B1: push    eax
0x84C2B2: mov     ecx, esi
0x84C2B4: call    sub_7715E0
0x84C2B9: mov     ecx, [edi+24h]
0x84C2BC: mov     esi, [ecx+4]
0x84C2BF: mov     edx, [ebx]
0x84C2C1: mov     eax, [edx+8Ch]
0x84C2C7: push    0
0x84C2C9: mov     ecx, ebx
0x84C2CB: mov     [esp+28h+arg_8], esi
0x84C2CF: call    eax
0x84C2D1: test    eax, eax
0x84C2D3: jz      short loc_84C2E7
0x84C2D5: mov     edx, [ebx]
0x84C2D7: mov     eax, [edx+8Ch]
0x84C2DD: push    0
0x84C2DF: mov     ecx, ebx
0x84C2E1: call    eax
0x84C2E3: mov     ebp, eax
0x84C2E5: jmp     short loc_84C2FC
0x84C2E7: test    dword ptr [ebx+1Ch], 80h
0x84C2EE: mov     ebp, ds:0B430F0h
0x84C2F4: ja      short loc_84C2FC
0x84C2F6: mov     ebp, ds:0B430DCh
0x84C2FC: mov     esi, [esi+4]
0x84C2FF: cmp     esi, ebp
0x84C301: jz      short loc_84C33A
0x84C303: test    esi, esi
0x84C305: jz      short loc_84C323
0x84C307: lea     ecx, [esi+4]
0x84C30A: push    ecx; lpAddend
0x84C30B: call    dword ptr ds:0A2807Ch
0x84C311: test    eax, eax
0x84C313: jnz     short loc_84C323
0x84C315: test    esi, esi
0x84C317: jz      short loc_84C323
0x84C319: mov     edx, [esi]
0x84C31B: mov     eax, [edx]
0x84C31D: push    1
0x84C31F: mov     ecx, esi
0x84C321: call    eax
0x84C323: test    ebp, ebp
0x84C325: mov     esi, [esp+24h+arg_8]
0x84C329: mov     [esi+4], ebp
0x84C32C: jz      short loc_84C33E
0x84C32E: add     ebp, 4
0x84C331: push    ebp; lpAddend
0x84C332: call    dword ptr ds:0A28078h
0x84C338: jmp     short loc_84C33E
0x84C33A: mov     esi, [esp+24h+arg_8]
0x84C33E: test    esi, esi
0x84C340: jz      short loc_84C35C
0x84C342: cmp     byte ptr ds:0B42CDDh, 0
0x84C349: jz      short loc_84C35C
0x84C34B: mov     edx, [ebx]
0x84C34D: mov     eax, [edx+78h]
0x84C350: mov     ecx, ebx
0x84C352: call    eax
0x84C354: push    eax
0x84C355: mov     ecx, esi
0x84C357: call    sub_7715E0
0x84C35C: mov     ebx, 1
0x84C361: add     [edi+60h], ebx
0x84C364: mov     [esp+24h+arg_8], edi
0x84C368: mov     esi, [esp+24h+var_10]
0x84C36C: mov     edx, [esi+38h]
0x84C36F: lea     ecx, [esp+24h+arg_8]
0x84C373: push    ecx
0x84C374: push    edx
0x84C375: lea     ecx, [esi+40h]
0x84C378: mov     [esp+2Ch+var_4], 0
0x84C380: call    sub_76CE40
0x84C385: or      eax, 0FFFFFFFFh
0x84C388: add     [edi+60h], eax
0x84C38B: mov     [esp+24h+var_4], eax
0x84C38F: jnz     short loc_84C398
0x84C391: mov     ecx, edi
0x84C393: call    sub_7604D0
0x84C398: add     [esi+38h], ebx
0x84C39B: mov     ecx, [esp+24h+var_C]
0x84C39F: mov     large fs:0, ecx
0x84C3A6: pop     ecx
0x84C3A7: pop     edi
0x84C3A8: pop     esi
0x84C3A9: pop     ebp
0x84C3AA: pop     ebx
0x84C3AB: add     esp, 10h
0x84C3AE: retn    10h
