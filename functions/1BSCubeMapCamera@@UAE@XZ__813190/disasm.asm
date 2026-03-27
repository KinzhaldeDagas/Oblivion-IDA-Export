0x813190: push    0FFFFFFFFh
0x813192: push    offset ??1BSCubeMapCamera@@UAE@XZ_SEH
0x813197: mov     eax, large fs:0
0x81319D: push    eax
0x81319E: push    ecx
0x81319F: push    ebx
0x8131A0: push    ebp
0x8131A1: push    esi
0x8131A2: push    edi
0x8131A3: mov     eax, ds:0B30AACh
0x8131A8: xor     eax, esp
0x8131AA: push    eax
0x8131AB: lea     eax, [esp+24h+var_C]
0x8131AF: mov     large fs:0, eax
0x8131B5: mov     ebp, ecx
0x8131B7: mov     [esp+24h+var_10], ebp
0x8131BB: mov     dword ptr [ebp+0], offset ??_7BSCubeMapCamera@@6B@; const BSCubeMapCamera::`vftable'
0x8131C2: mov     [esp+24h+var_4], 3
0x8131CA: lea     edi, [ebp+128h]
0x8131D0: mov     ebx, 6
0x8131D5: mov     esi, [edi]
0x8131D7: test    esi, esi
0x8131D9: jz      short loc_8131FD
0x8131DB: lea     eax, [esi+4]
0x8131DE: push    eax; lpAddend
0x8131DF: call    dword ptr ds:0A2807Ch
0x8131E5: test    eax, eax
0x8131E7: jnz     short loc_8131F7
0x8131E9: test    esi, esi
0x8131EB: jz      short loc_8131F7
0x8131ED: mov     edx, [esi]
0x8131EF: mov     eax, [edx]
0x8131F1: push    1
0x8131F3: mov     ecx, esi
0x8131F5: call    eax
0x8131F7: mov     dword ptr [edi], 0
0x8131FD: add     edi, 4
0x813200: sub     ebx, 1
0x813203: jnz     short loc_8131D5
0x813205: mov     esi, [ebp+140h]
0x81320B: test    esi, esi
0x81320D: mov     edi, ds:0A2807Ch
0x813213: jz      short loc_813237
0x813215: lea     ecx, [esi+4]
0x813218: push    ecx; lpAddend
0x813219: call    edi ; InterlockedDecrement
0x81321B: test    eax, eax
0x81321D: jnz     short loc_81322D
0x81321F: test    esi, esi
0x813221: jz      short loc_81322D
0x813223: mov     edx, [esi]
0x813225: mov     eax, [edx]
0x813227: push    1
0x813229: mov     ecx, esi
0x81322B: call    eax
0x81322D: mov     dword ptr [ebp+140h], 0
0x813237: mov     esi, [ebp+14Ch]
0x81323D: test    esi, esi
0x81323F: jz      short loc_81325B
0x813241: mov     ecx, esi
0x813243: call    ImageSpaceShaderList__Destroy
0x813248: push    esi
0x813249: call    FormHeapFree
0x81324E: add     esp, 4
0x813251: mov     dword ptr [ebp+14Ch], 0
0x81325B: mov     esi, [ebp+148h]
0x813261: test    esi, esi
0x813263: mov     byte ptr [esp+24h+var_4], 2
0x813268: jz      short loc_813282
0x81326A: lea     ecx, [esi+4]
0x81326D: push    ecx; lpAddend
0x81326E: call    edi ; InterlockedDecrement
0x813270: test    eax, eax
0x813272: jnz     short loc_813282
0x813274: test    esi, esi
0x813276: jz      short loc_813282
0x813278: mov     edx, [esi]
0x81327A: mov     eax, [edx]
0x81327C: push    1
0x81327E: mov     ecx, esi
0x813280: call    eax
0x813282: mov     esi, [ebp+140h]
0x813288: test    esi, esi
0x81328A: mov     byte ptr [esp+24h+var_4], 1
0x81328F: jz      short loc_8132A9
0x813291: lea     ecx, [esi+4]
0x813294: push    ecx; lpAddend
0x813295: call    edi ; InterlockedDecrement
0x813297: test    eax, eax
0x813299: jnz     short loc_8132A9
0x81329B: test    esi, esi
0x81329D: jz      short loc_8132A9
0x81329F: mov     edx, [esi]
0x8132A1: mov     eax, [edx]
0x8132A3: push    1
0x8132A5: mov     ecx, esi
0x8132A7: call    eax
0x8132A9: push    offset sub_7016A0; void (__thiscall *)(void *)
0x8132AE: push    6; int
0x8132B0: push    4; unsigned int
0x8132B2: lea     eax, [ebp+128h]
0x8132B8: push    eax; void *
0x8132B9: mov     byte ptr [esp+34h+var_4], 0
0x8132BE: call    $LN21
0x8132C3: mov     ecx, ebp
0x8132C5: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8132CD: call    DestroyNiCamera?
0x8132D2: mov     ecx, dword ptr [esp+24h+var_C]
0x8132D6: mov     large fs:0, ecx
0x8132DD: pop     ecx
0x8132DE: pop     edi
0x8132DF: pop     esi
0x8132E0: pop     ebp
0x8132E1: pop     ebx
0x8132E2: add     esp, 10h
0x8132E5: retn
