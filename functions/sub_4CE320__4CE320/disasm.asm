0x4CE320: push    ecx
0x4CE321: push    esi
0x4CE322: push    edi
0x4CE323: mov     edi, ecx
0x4CE325: mov     esi, [edi+54h]
0x4CE328: test    esi, esi
0x4CE32A: mov     byte ptr [edi+26h], 1
0x4CE32E: jz      short loc_4CE3AF
0x4CE330: mov     ecx, [esi+1Ch]
0x4CE333: test    ecx, ecx
0x4CE335: push    ebx
0x4CE336: mov     ebx, ds:0A2807Ch
0x4CE33C: jz      short loc_4CE373
0x4CE33E: mov     eax, [ecx]
0x4CE340: mov     eax, [eax+88h]
0x4CE346: push    esi
0x4CE347: lea     edx, [esp+14h+var_4]
0x4CE34B: push    edx
0x4CE34C: call    eax
0x4CE34E: mov     eax, dword ptr [esp+10h+var_4]
0x4CE352: test    eax, eax
0x4CE354: jz      short loc_4CE373
0x4CE356: push    ebp
0x4CE357: mov     ebp, eax
0x4CE359: add     eax, 4
0x4CE35C: push    eax; lpAddend
0x4CE35D: call    ebx ; InterlockedDecrement
0x4CE35F: test    eax, eax
0x4CE361: jnz     short loc_4CE372
0x4CE363: test    ebp, ebp
0x4CE365: jz      short loc_4CE372
0x4CE367: mov     edx, [ebp+0]
0x4CE36A: mov     eax, [edx]
0x4CE36C: push    1
0x4CE36E: mov     ecx, ebp
0x4CE370: call    eax
0x4CE372: pop     ebp
0x4CE373: lea     ecx, [esi+0ACh]
0x4CE379: call    sub_477EF0
0x4CE37E: mov     esi, [edi+54h]
0x4CE381: test    esi, esi
0x4CE383: jz      short loc_4CE3A4
0x4CE385: lea     ecx, [esi+4]
0x4CE388: push    ecx; lpAddend
0x4CE389: call    ebx ; InterlockedDecrement
0x4CE38B: test    eax, eax
0x4CE38D: jnz     short loc_4CE39D
0x4CE38F: test    esi, esi
0x4CE391: jz      short loc_4CE39D
0x4CE393: mov     edx, [esi]
0x4CE395: mov     eax, [edx]
0x4CE397: push    1
0x4CE399: mov     ecx, esi
0x4CE39B: call    eax
0x4CE39D: mov     dword ptr [edi+54h], 0
0x4CE3A4: push    0
0x4CE3A6: lea     ecx, [edi+28h]
0x4CE3A9: call    sub_4240C0
0x4CE3AE: pop     ebx
0x4CE3AF: mov     byte ptr [edi+26h], 0
0x4CE3B3: pop     edi
0x4CE3B4: pop     esi
0x4CE3B5: pop     ecx
0x4CE3B6: retn
