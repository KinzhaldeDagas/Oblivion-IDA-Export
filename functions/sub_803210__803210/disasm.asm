0x803210: push    0FFFFFFFFh
0x803212: push    offset SEH_812D60
0x803217: mov     eax, large fs:0
0x80321D: push    eax
0x80321E: sub     esp, 8
0x803221: push    ebx
0x803222: push    ebp
0x803223: push    esi
0x803224: push    edi
0x803225: mov     eax, ds:0B30AACh
0x80322A: xor     eax, esp
0x80322C: push    eax
0x80322D: lea     eax, [esp+28h+var_C]
0x803231: mov     large fs:0, eax
0x803237: mov     esi, ecx
0x803239: mov     [esp+28h+var_10], esi
0x80323D: mov     edi, [esi+8]
0x803240: mov     ebp, ds:0A2807Ch
0x803246: xor     ebx, ebx
0x803248: cmp     edi, ebx
0x80324A: mov     [esp+28h+var_4], 2
0x803252: jz      short loc_80326F
0x803254: lea     eax, [edi+4]
0x803257: push    eax; lpAddend
0x803258: call    ebp ; InterlockedDecrement
0x80325A: test    eax, eax
0x80325C: jnz     short loc_80326C
0x80325E: cmp     edi, ebx
0x803260: jz      short loc_80326C
0x803262: mov     edx, [edi]
0x803264: mov     eax, [edx]
0x803266: push    1
0x803268: mov     ecx, edi
0x80326A: call    eax
0x80326C: mov     [esi+8], ebx
0x80326F: mov     edi, [esi+4]
0x803272: cmp     edi, ebx
0x803274: jz      short loc_803291
0x803276: lea     ecx, [edi+4]
0x803279: push    ecx; lpAddend
0x80327A: call    ebp ; InterlockedDecrement
0x80327C: test    eax, eax
0x80327E: jnz     short loc_80328E
0x803280: cmp     edi, ebx
0x803282: jz      short loc_80328E
0x803284: mov     edx, [edi]
0x803286: mov     eax, [edx]
0x803288: push    1
0x80328A: mov     ecx, edi
0x80328C: call    eax
0x80328E: mov     [esi+4], ebx
0x803291: mov     eax, [esi]
0x803293: cmp     [eax+1Ch], ebx
0x803296: jz      short loc_8032CD
0x803298: mov     ecx, [eax+1Ch]
0x80329B: mov     edx, [ecx]
0x80329D: mov     edx, [edx+88h]
0x8032A3: push    eax
0x8032A4: lea     eax, [esp+2Ch+var_14]
0x8032A8: push    eax
0x8032A9: call    edx
0x8032AB: mov     eax, [esp+28h+var_14]
0x8032AF: cmp     eax, ebx
0x8032B1: jz      short loc_8032CD
0x8032B3: mov     edi, eax
0x8032B5: add     eax, 4
0x8032B8: push    eax; lpAddend
0x8032B9: call    ebp ; InterlockedDecrement
0x8032BB: test    eax, eax
0x8032BD: jnz     short loc_8032CD
0x8032BF: cmp     edi, ebx
0x8032C1: jz      short loc_8032CD
0x8032C3: mov     eax, [edi]
0x8032C5: mov     edx, [eax]
0x8032C7: push    1
0x8032C9: mov     ecx, edi
0x8032CB: call    edx
0x8032CD: mov     edi, [esi]
0x8032CF: cmp     edi, ebx
0x8032D1: jz      short loc_8032ED
0x8032D3: lea     eax, [edi+4]
0x8032D6: push    eax; lpAddend
0x8032D7: call    ebp ; InterlockedDecrement
0x8032D9: test    eax, eax
0x8032DB: jnz     short loc_8032EB
0x8032DD: cmp     edi, ebx
0x8032DF: jz      short loc_8032EB
0x8032E1: mov     edx, [edi]
0x8032E3: mov     eax, [edx]
0x8032E5: push    1
0x8032E7: mov     ecx, edi
0x8032E9: call    eax
0x8032EB: mov     [esi], ebx
0x8032ED: mov     ecx, esi
0x8032EF: call    sub_802DB0
0x8032F4: mov     eax, [esi+10h]
0x8032F7: cmp     eax, ebx
0x8032F9: jz      short loc_803307
0x8032FB: push    eax
0x8032FC: call    FormHeapFree
0x803301: add     esp, 4
0x803304: mov     [esi+10h], ebx
0x803307: mov     eax, [esi+14h]
0x80330A: push    eax
0x80330B: call    FormHeapFree
0x803310: mov     [esi+14h], ebx
0x803313: mov     edi, [esi+8]
0x803316: add     esp, 4
0x803319: cmp     edi, ebx
0x80331B: mov     byte ptr [esp+28h+var_4], 1
0x803320: jz      short loc_80333A
0x803322: lea     ecx, [edi+4]
0x803325: push    ecx; lpAddend
0x803326: call    ebp ; InterlockedDecrement
0x803328: test    eax, eax
0x80332A: jnz     short loc_80333A
0x80332C: cmp     edi, ebx
0x80332E: jz      short loc_80333A
0x803330: mov     edx, [edi]
0x803332: mov     eax, [edx]
0x803334: push    1
0x803336: mov     ecx, edi
0x803338: call    eax
0x80333A: mov     edi, [esi+4]
0x80333D: cmp     edi, ebx
0x80333F: mov     byte ptr [esp+28h+var_4], bl
0x803343: jz      short loc_80335D
0x803345: lea     ecx, [edi+4]
0x803348: push    ecx; lpAddend
0x803349: call    ebp ; InterlockedDecrement
0x80334B: test    eax, eax
0x80334D: jnz     short loc_80335D
0x80334F: cmp     edi, ebx
0x803351: jz      short loc_80335D
0x803353: mov     edx, [edi]
0x803355: mov     eax, [edx]
0x803357: push    1
0x803359: mov     ecx, edi
0x80335B: call    eax
0x80335D: mov     esi, [esi]
0x80335F: cmp     esi, ebx
0x803361: mov     [esp+28h+var_4], 0FFFFFFFFh
0x803369: jz      short loc_803383
0x80336B: lea     ecx, [esi+4]
0x80336E: push    ecx; lpAddend
0x80336F: call    ebp ; InterlockedDecrement
0x803371: test    eax, eax
0x803373: jnz     short loc_803383
0x803375: cmp     esi, ebx
0x803377: jz      short loc_803383
0x803379: mov     edx, [esi]
0x80337B: mov     eax, [edx]
0x80337D: push    1
0x80337F: mov     ecx, esi
0x803381: call    eax
0x803383: mov     ecx, dword ptr [esp+28h+var_C]
0x803387: mov     large fs:0, ecx
0x80338E: pop     ecx
0x80338F: pop     edi
0x803390: pop     esi
0x803391: pop     ebp
0x803392: pop     ebx
0x803393: add     esp, 14h
0x803396: retn
