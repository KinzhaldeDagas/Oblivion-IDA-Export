0x83C270: push    0FFFFFFFFh
0x83C272: push    offset SEH_882120
0x83C277: mov     eax, large fs:0
0x83C27D: push    eax
0x83C27E: push    ebx
0x83C27F: push    ebp
0x83C280: push    esi
0x83C281: push    edi
0x83C282: mov     eax, ds:0B30AACh
0x83C287: xor     eax, esp
0x83C289: push    eax
0x83C28A: lea     eax, [esp+20h+var_C]
0x83C28E: mov     large fs:0, eax
0x83C294: mov     edi, ecx
0x83C296: mov     eax, [esp+20h+arg_8]
0x83C29A: mov     esi, [eax+0Ch]
0x83C29D: mov     ebx, ds:0B457C8h
0x83C2A3: push    esi
0x83C2A4: call    sub_848E50
0x83C2A9: mov     edx, [edi]
0x83C2AB: mov     eax, [esp+20h+arg_0]
0x83C2AF: mov     edx, [edx+0BCh]
0x83C2B5: push    0
0x83C2B7: push    esi
0x83C2B8: push    eax
0x83C2B9: mov     ecx, edi
0x83C2BB: call    edx
0x83C2BD: mov     esi, [esp+20h+arg_C]
0x83C2C1: mov     eax, [esi+0A8h]
0x83C2C7: mov     ds:0B46628h, eax
0x83C2CC: mov     ecx, [esi+0ACh]
0x83C2D2: mov     ds:0B4662Ch, ecx
0x83C2D8: mov     edx, [esi+0B0h]
0x83C2DE: mov     ds:0B46630h, edx
0x83C2E4: mov     eax, [esi+0B4h]
0x83C2EA: mov     ds:0B46634h, eax
0x83C2EF: mov     ecx, [ebx+24h]
0x83C2F2: mov     ebp, [ecx]
0x83C2F4: mov     edx, [esi]
0x83C2F6: mov     eax, [edx+88h]
0x83C2FC: push    0
0x83C2FE: mov     ecx, esi
0x83C300: mov     [esp+24h+arg_8], ebp
0x83C304: call    eax
0x83C306: mov     ebp, [ebp+4]
0x83C309: cmp     ebp, eax
0x83C30B: mov     [esp+20h+arg_0], eax
0x83C30F: jz      short loc_83C34B
0x83C311: test    ebp, ebp
0x83C313: jz      short loc_83C336
0x83C315: lea     ecx, [ebp+4]
0x83C318: push    ecx; lpAddend
0x83C319: call    dword ptr ds:0A2807Ch
0x83C31F: test    eax, eax
0x83C321: jnz     short loc_83C332
0x83C323: test    ebp, ebp
0x83C325: jz      short loc_83C332
0x83C327: mov     edx, [ebp+0]
0x83C32A: mov     eax, [edx]
0x83C32C: push    1
0x83C32E: mov     ecx, ebp
0x83C330: call    eax
0x83C332: mov     eax, [esp+20h+arg_0]
0x83C336: test    eax, eax
0x83C338: mov     ecx, [esp+20h+arg_8]
0x83C33C: mov     [ecx+4], eax
0x83C33F: jz      short loc_83C34B
0x83C341: add     eax, 4
0x83C344: push    eax; lpAddend
0x83C345: call    dword ptr ds:0A28078h
0x83C34B: mov     edx, [esp+20h+arg_8]
0x83C34F: push    esi
0x83C350: push    edx
0x83C351: mov     ecx, edi
0x83C353: call    sub_848FA0
0x83C358: mov     eax, [ebx+24h]
0x83C35B: mov     ebp, [eax+4]
0x83C35E: push    0
0x83C360: push    esi
0x83C361: mov     ecx, edi
0x83C363: mov     [esp+28h+arg_8], ebp
0x83C367: call    sub_848FD0
0x83C36C: mov     ebp, [ebp+4]
0x83C36F: cmp     ebp, eax
0x83C371: mov     [esp+20h+arg_0], eax
0x83C375: jz      short loc_83C3B1
0x83C377: test    ebp, ebp
0x83C379: jz      short loc_83C39C
0x83C37B: lea     ecx, [ebp+4]
0x83C37E: push    ecx; lpAddend
0x83C37F: call    dword ptr ds:0A2807Ch
0x83C385: test    eax, eax
0x83C387: jnz     short loc_83C398
0x83C389: test    ebp, ebp
0x83C38B: jz      short loc_83C398
0x83C38D: mov     edx, [ebp+0]
0x83C390: mov     eax, [edx]
0x83C392: push    1
0x83C394: mov     ecx, ebp
0x83C396: call    eax
0x83C398: mov     eax, [esp+20h+arg_0]
0x83C39C: test    eax, eax
0x83C39E: mov     ecx, [esp+20h+arg_8]
0x83C3A2: mov     [ecx+4], eax
0x83C3A5: jz      short loc_83C3B1
0x83C3A7: add     eax, 4
0x83C3AA: push    eax; lpAddend
0x83C3AB: call    dword ptr ds:0A28078h
0x83C3B1: mov     edx, [esp+20h+arg_8]
0x83C3B5: push    esi
0x83C3B6: push    edx
0x83C3B7: mov     ecx, edi
0x83C3B9: call    sub_848FA0
0x83C3BE: mov     eax, [ebx+24h]
0x83C3C1: mov     ebp, [eax+10h]
0x83C3C4: mov     edx, [esi]
0x83C3C6: mov     eax, [edx+88h]
0x83C3CC: push    1
0x83C3CE: mov     ecx, esi
0x83C3D0: mov     [esp+24h+arg_8], ebp
0x83C3D4: call    eax
0x83C3D6: mov     ebp, [ebp+4]
0x83C3D9: cmp     ebp, eax
0x83C3DB: mov     [esp+20h+arg_0], eax
0x83C3DF: jz      short loc_83C41B
0x83C3E1: test    ebp, ebp
0x83C3E3: jz      short loc_83C406
0x83C3E5: lea     ecx, [ebp+4]
0x83C3E8: push    ecx; lpAddend
0x83C3E9: call    dword ptr ds:0A2807Ch
0x83C3EF: test    eax, eax
0x83C3F1: jnz     short loc_83C402
0x83C3F3: test    ebp, ebp
0x83C3F5: jz      short loc_83C402
0x83C3F7: mov     edx, [ebp+0]
0x83C3FA: mov     eax, [edx]
0x83C3FC: push    1
0x83C3FE: mov     ecx, ebp
0x83C400: call    eax
0x83C402: mov     eax, [esp+20h+arg_0]
0x83C406: test    eax, eax
0x83C408: mov     ecx, [esp+20h+arg_8]
0x83C40C: mov     [ecx+4], eax
0x83C40F: jz      short loc_83C41B
0x83C411: add     eax, 4
0x83C414: push    eax; lpAddend
0x83C415: call    dword ptr ds:0A28078h
0x83C41B: mov     edx, [esp+20h+arg_8]
0x83C41F: push    esi
0x83C420: push    edx
0x83C421: mov     ecx, edi
0x83C423: call    sub_848FA0
0x83C428: mov     ecx, [ebx+24h]
0x83C42B: mov     esi, [ecx+18h]
0x83C42E: mov     eax, ds:0B43108h
0x83C433: mov     ebp, [esi+4]
0x83C436: add     esi, 4
0x83C439: cmp     ebp, eax
0x83C43B: mov     [esp+20h+arg_8], eax
0x83C43F: jz      short loc_83C476
0x83C441: test    ebp, ebp
0x83C443: jz      short loc_83C466
0x83C445: lea     edx, [ebp+4]
0x83C448: push    edx; lpAddend
0x83C449: call    dword ptr ds:0A2807Ch
0x83C44F: test    eax, eax
0x83C451: jnz     short loc_83C462
0x83C453: test    ebp, ebp
0x83C455: jz      short loc_83C462
0x83C457: mov     eax, [ebp+0]
0x83C45A: mov     edx, [eax]
0x83C45C: push    1
0x83C45E: mov     ecx, ebp
0x83C460: call    edx
0x83C462: mov     eax, [esp+20h+arg_8]
0x83C466: test    eax, eax
0x83C468: mov     [esi], eax
0x83C46A: jz      short loc_83C476
0x83C46C: add     eax, 4
0x83C46F: push    eax; lpAddend
0x83C470: call    dword ptr ds:0A28078h
0x83C476: mov     eax, [ebx+24h]
0x83C479: mov     ebp, [eax+1Ch]
0x83C47C: mov     eax, ds:0B4310Ch
0x83C481: mov     esi, [ebp+4]
0x83C484: cmp     esi, eax
0x83C486: mov     ecx, eax
0x83C488: mov     [esp+20h+arg_8], ecx
0x83C48C: jz      short loc_83C4C3
0x83C48E: test    esi, esi
0x83C490: jz      short loc_83C4B2
0x83C492: lea     ecx, [esi+4]
0x83C495: push    ecx; lpAddend
0x83C496: call    dword ptr ds:0A2807Ch
0x83C49C: test    eax, eax
0x83C49E: jnz     short loc_83C4AE
0x83C4A0: test    esi, esi
0x83C4A2: jz      short loc_83C4AE
0x83C4A4: mov     edx, [esi]
0x83C4A6: mov     eax, [edx]
0x83C4A8: push    1
0x83C4AA: mov     ecx, esi
0x83C4AC: call    eax
0x83C4AE: mov     ecx, [esp+20h+arg_8]
0x83C4B2: test    ecx, ecx
0x83C4B4: mov     [ebp+4], ecx
0x83C4B7: jz      short loc_83C4C3
0x83C4B9: add     ecx, 4
0x83C4BC: push    ecx; lpAddend
0x83C4BD: call    dword ptr ds:0A28078h
0x83C4C3: mov     esi, 1
0x83C4C8: add     [ebx+60h], esi
0x83C4CB: mov     [esp+20h+arg_8], ebx
0x83C4CF: mov     edx, [edi+38h]
0x83C4D2: lea     ecx, [esp+20h+arg_8]
0x83C4D6: push    ecx
0x83C4D7: push    edx
0x83C4D8: lea     ecx, [edi+40h]
0x83C4DB: mov     [esp+28h+var_4], 0
0x83C4E3: call    sub_76CE40
0x83C4E8: or      eax, 0FFFFFFFFh
0x83C4EB: add     [ebx+60h], eax
0x83C4EE: mov     [esp+20h+var_4], eax
0x83C4F2: jnz     short loc_83C4FB
0x83C4F4: mov     ecx, ebx
0x83C4F6: call    sub_7604D0
0x83C4FB: add     [edi+38h], esi
0x83C4FE: mov     ecx, [esp+20h+var_C]
0x83C502: mov     large fs:0, ecx
0x83C509: pop     ecx
0x83C50A: pop     edi
0x83C50B: pop     esi
0x83C50C: pop     ebp
0x83C50D: pop     ebx
0x83C50E: add     esp, 0Ch
0x83C511: retn    10h
