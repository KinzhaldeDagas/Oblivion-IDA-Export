0x5704A0: push    0FFFFFFFFh
0x5704A2: push    offset ??1BSTempEffectGeometryDecal@@UAE@XZ_SEH
0x5704A7: mov     eax, large fs:0
0x5704AD: push    eax
0x5704AE: sub     esp, 8
0x5704B1: push    ebx
0x5704B2: push    ebp
0x5704B3: push    esi
0x5704B4: push    edi
0x5704B5: mov     eax, ds:0B30AACh
0x5704BA: xor     eax, esp
0x5704BC: push    eax
0x5704BD: lea     eax, [esp+28h+var_C]
0x5704C1: mov     large fs:0, eax
0x5704C7: mov     esi, ecx
0x5704C9: mov     [esp+28h+var_10], esi
0x5704CD: mov     dword ptr [esi], offset ??_7BSTempEffectGeometryDecal@@6B@; const BSTempEffectGeometryDecal::`vftable'
0x5704D3: mov     eax, [esi+1Ch]
0x5704D6: xor     ebx, ebx
0x5704D8: cmp     eax, ebx
0x5704DA: mov     [esp+28h+var_4], 3
0x5704E2: jz      short loc_570548
0x5704E4: cmp     [eax+1Ch], ebx
0x5704E7: jz      short loc_570522
0x5704E9: mov     ecx, [eax+1Ch]
0x5704EC: mov     edx, [ecx]
0x5704EE: mov     edx, [edx+88h]
0x5704F4: push    eax
0x5704F5: lea     eax, [esp+2Ch+var_14]
0x5704F9: push    eax
0x5704FA: call    edx
0x5704FC: mov     eax, dword ptr [esp+28h+var_14]
0x570500: cmp     eax, ebx
0x570502: jz      short loc_570522
0x570504: mov     edi, eax
0x570506: add     eax, 4
0x570509: push    eax; lpAddend
0x57050A: call    dword ptr ds:0A2807Ch
0x570510: test    eax, eax
0x570512: jnz     short loc_570522
0x570514: cmp     edi, ebx
0x570516: jz      short loc_570522
0x570518: mov     eax, [edi]
0x57051A: mov     edx, [eax]
0x57051C: push    1
0x57051E: mov     ecx, edi
0x570520: call    edx
0x570522: mov     edi, [esi+1Ch]
0x570525: cmp     edi, ebx
0x570527: jz      short loc_570548
0x570529: lea     eax, [edi+4]
0x57052C: push    eax; lpAddend
0x57052D: call    dword ptr ds:0A2807Ch
0x570533: test    eax, eax
0x570535: jnz     short loc_570545
0x570537: cmp     edi, ebx
0x570539: jz      short loc_570545
0x57053B: mov     edx, [edi]
0x57053D: mov     eax, [edx]
0x57053F: push    1
0x570541: mov     ecx, edi
0x570543: call    eax
0x570545: mov     [esi+1Ch], ebx
0x570548: mov     eax, [esi+18h]
0x57054B: mov     ecx, [eax+48h]
0x57054E: cmp     ecx, ebx
0x570550: jz      short loc_570558
0x570552: push    eax
0x570553: call    sub_7EE740
0x570558: mov     ebp, [esi+18h]
0x57055B: mov     edi, [ebp+48h]
0x57055E: add     ebp, 48h ; 'H'
0x570561: cmp     edi, ebx
0x570563: jz      short loc_570584
0x570565: lea     ecx, [edi+4]
0x570568: push    ecx; lpAddend
0x570569: call    dword ptr ds:0A2807Ch
0x57056F: test    eax, eax
0x570571: jnz     short loc_570581
0x570573: cmp     edi, ebx
0x570575: jz      short loc_570581
0x570577: mov     edx, [edi]
0x570579: mov     eax, [edx]
0x57057B: push    1
0x57057D: mov     ecx, edi
0x57057F: call    eax
0x570581: mov     [ebp+0], ebx
0x570584: mov     eax, [esi+24h]
0x570587: cmp     eax, ebx
0x570589: jz      short loc_570594
0x57058B: push    eax
0x57058C: call    FormHeapFree
0x570591: add     esp, 4
0x570594: mov     edi, [esi+18h]
0x570597: cmp     edi, ebx
0x570599: jz      short loc_5705AB
0x57059B: mov     ecx, edi
0x57059D: call    sub_56C0F0
0x5705A2: push    edi
0x5705A3: call    FormHeapFree
0x5705A8: add     esp, 4
0x5705AB: mov     edi, [esi+2Ch]
0x5705AE: cmp     edi, ebx
0x5705B0: mov     ebp, ds:0A2807Ch
0x5705B6: jz      short loc_5705D3
0x5705B8: lea     ecx, [edi+4]
0x5705BB: push    ecx; lpAddend
0x5705BC: call    ebp ; InterlockedDecrement
0x5705BE: test    eax, eax
0x5705C0: jnz     short loc_5705D0
0x5705C2: cmp     edi, ebx
0x5705C4: jz      short loc_5705D0
0x5705C6: mov     edx, [edi]
0x5705C8: mov     eax, [edx]
0x5705CA: push    1
0x5705CC: mov     ecx, edi
0x5705CE: call    eax
0x5705D0: mov     [esi+2Ch], ebx
0x5705D3: mov     edi, [esi+30h]
0x5705D6: cmp     edi, ebx
0x5705D8: jz      short loc_5705F5
0x5705DA: lea     ecx, [edi+4]
0x5705DD: push    ecx; lpAddend
0x5705DE: call    ebp ; InterlockedDecrement
0x5705E0: test    eax, eax
0x5705E2: jnz     short loc_5705F2
0x5705E4: cmp     edi, ebx
0x5705E6: jz      short loc_5705F2
0x5705E8: mov     edx, [edi]
0x5705EA: mov     eax, [edx]
0x5705EC: push    1
0x5705EE: mov     ecx, edi
0x5705F0: call    eax
0x5705F2: mov     [esi+30h], ebx
0x5705F5: mov     edi, [esi+30h]
0x5705F8: cmp     edi, ebx
0x5705FA: mov     byte ptr [esp+28h+var_4], 2
0x5705FF: jz      short loc_570619
0x570601: lea     ecx, [edi+4]
0x570604: push    ecx; lpAddend
0x570605: call    ebp ; InterlockedDecrement
0x570607: test    eax, eax
0x570609: jnz     short loc_570619
0x57060B: cmp     edi, ebx
0x57060D: jz      short loc_570619
0x57060F: mov     edx, [edi]
0x570611: mov     eax, [edx]
0x570613: push    1
0x570615: mov     ecx, edi
0x570617: call    eax
0x570619: mov     edi, [esi+2Ch]
0x57061C: cmp     edi, ebx
0x57061E: mov     byte ptr [esp+28h+var_4], 1
0x570623: jz      short loc_57063D
0x570625: lea     ecx, [edi+4]
0x570628: push    ecx; lpAddend
0x570629: call    ebp ; InterlockedDecrement
0x57062B: test    eax, eax
0x57062D: jnz     short loc_57063D
0x57062F: cmp     edi, ebx
0x570631: jz      short loc_57063D
0x570633: mov     edx, [edi]
0x570635: mov     eax, [edx]
0x570637: push    1
0x570639: mov     ecx, edi
0x57063B: call    eax
0x57063D: mov     edi, [esi+1Ch]
0x570640: cmp     edi, ebx
0x570642: mov     byte ptr [esp+28h+var_4], bl
0x570646: jz      short loc_570660
0x570648: lea     ecx, [edi+4]
0x57064B: push    ecx; lpAddend
0x57064C: call    ebp ; InterlockedDecrement
0x57064E: test    eax, eax
0x570650: jnz     short loc_570660
0x570652: cmp     edi, ebx
0x570654: jz      short loc_570660
0x570656: mov     edx, [edi]
0x570658: mov     eax, [edx]
0x57065A: push    1
0x57065C: mov     ecx, edi
0x57065E: call    eax
0x570660: mov     ecx, esi
0x570662: mov     [esp+28h+var_4], 0FFFFFFFFh
0x57066A: call    BSTempEffect_destr
0x57066F: mov     ecx, dword ptr [esp+28h+var_C]
0x570673: mov     large fs:0, ecx
0x57067A: pop     ecx
0x57067B: pop     edi
0x57067C: pop     esi
0x57067D: pop     ebp
0x57067E: pop     ebx
0x57067F: add     esp, 14h
0x570682: retn
