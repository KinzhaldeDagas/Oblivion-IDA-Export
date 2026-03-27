0x77C2A0: push    esi
0x77C2A1: mov     esi, [esp+4+a2]
0x77C2A5: test    esi, esi
0x77C2A7: push    edi
0x77C2A8: mov     edi, ecx
0x77C2AA: jz      short loc_77C2B6
0x77C2AC: lea     eax, [esi+4]
0x77C2AF: push    eax; lpAddend
0x77C2B0: call    dword ptr ds:0A28078h
0x77C2B6: mov     edx, [esi]
0x77C2B8: mov     eax, [edi+14h]
0x77C2BB: mov     edx, [edx+24h]
0x77C2BE: push    eax
0x77C2BF: mov     ecx, esi
0x77C2C1: call    edx
0x77C2C3: test    al, al
0x77C2C5: mov     ecx, esi
0x77C2C7: jnz     short loc_77C2FF
0x77C2C9: call    sub_452A60
0x77C2CE: push    eax; ArgList
0x77C2CF: push    offset aInitializeOnSF; "Initialize on %s failed\n"
0x77C2D4: push    0; int
0x77C2D6: push    1; int
0x77C2D8: call    sub_738460
0x77C2DD: add     esp, 10h
0x77C2E0: lea     eax, [esi+4]
0x77C2E3: push    eax; lpAddend
0x77C2E4: call    dword ptr ds:0A2807Ch
0x77C2EA: test    eax, eax
0x77C2EC: jnz     short loc_77C2F8
0x77C2EE: mov     edx, [esi]
0x77C2F0: mov     eax, [edx]
0x77C2F2: push    1
0x77C2F4: mov     ecx, esi
0x77C2F6: call    eax
0x77C2F8: pop     edi
0x77C2F9: xor     al, al
0x77C2FB: pop     esi
0x77C2FC: retn    8
0x77C2FF: mov     edx, [esi]
0x77C301: mov     edi, [esp+8+arg_0]
0x77C305: mov     eax, [edx+18h]
0x77C308: push    edi
0x77C309: call    eax
0x77C30B: test    al, al
0x77C30D: jnz     short loc_77C347
0x77C30F: mov     ecx, esi
0x77C311: call    sub_452A60
0x77C316: push    eax; ArgList
0x77C317: push    offset aSetupgeometryO; "SetupGeometry on %s failed\n"
0x77C31C: push    0; int
0x77C31E: push    1; int
0x77C320: call    sub_738460
0x77C325: add     esp, 10h
0x77C328: lea     ecx, [esi+4]
0x77C32B: push    ecx; lpAddend
0x77C32C: call    dword ptr ds:0A2807Ch
0x77C332: test    eax, eax
0x77C334: jnz     short loc_77C2F8
0x77C336: mov     edx, [esi]
0x77C338: mov     eax, [edx]
0x77C33A: push    1
0x77C33C: mov     ecx, esi
0x77C33E: call    eax
0x77C340: pop     edi
0x77C341: xor     al, al
0x77C343: pop     esi
0x77C344: retn    8
0x77C347: push    esi; a2
0x77C348: mov     ecx, edi; this
0x77C34A: call    sub_4EC910
0x77C34F: lea     ecx, [esi+4]
0x77C352: push    ecx; lpAddend
0x77C353: call    dword ptr ds:0A2807Ch
0x77C359: test    eax, eax
0x77C35B: jnz     short loc_77C367
0x77C35D: mov     edx, [esi]
0x77C35F: mov     eax, [edx]
0x77C361: push    1
0x77C363: mov     ecx, esi
0x77C365: call    eax
0x77C367: pop     edi
0x77C368: mov     al, 1
0x77C36A: pop     esi
0x77C36B: retn    8
