0x8773B0: push    0FFFFFFFFh
0x8773B2: push    offset SEH_880560
0x8773B7: mov     eax, large fs:0
0x8773BD: push    eax
0x8773BE: push    ebx
0x8773BF: push    ebp
0x8773C0: push    esi
0x8773C1: push    edi
0x8773C2: mov     eax, ds:0B30AACh
0x8773C7: xor     eax, esp
0x8773C9: push    eax
0x8773CA: lea     eax, [esp+20h+var_C]
0x8773CE: mov     large fs:0, eax
0x8773D4: mov     esi, ecx
0x8773D6: mov     ebx, [esp+20h+arg_8]
0x8773DA: mov     eax, [ebx+10h]
0x8773DD: mov     edi, ds:0B47698h
0x8773E3: push    eax
0x8773E4: call    sub_848C40
0x8773E9: mov     ebx, [ebx+0Ch]
0x8773EC: push    ebx
0x8773ED: mov     ecx, esi
0x8773EF: call    sub_848E50
0x8773F4: mov     ecx, [esp+20h+arg_0]
0x8773F8: mov     eax, [esi]
0x8773FA: mov     edx, [eax+0BCh]
0x877400: push    0
0x877402: push    ebx
0x877403: push    ecx
0x877404: mov     ecx, esi
0x877406: call    edx
0x877408: mov     eax, [edi+24h]
0x87740B: mov     ecx, [esp+20h+arg_C]
0x87740F: mov     ebx, [eax]
0x877411: mov     edx, [ecx]
0x877413: mov     eax, [edx+88h]
0x877419: push    0
0x87741B: mov     [esp+24h+arg_8], ebx
0x87741F: call    eax
0x877421: mov     ebx, [ebx+4]
0x877424: mov     ebp, eax
0x877426: cmp     ebx, ebp
0x877428: jz      short loc_87745F
0x87742A: test    ebx, ebx
0x87742C: jz      short loc_87744A
0x87742E: lea     ecx, [ebx+4]
0x877431: push    ecx; lpAddend
0x877432: call    dword ptr ds:0A2807Ch
0x877438: test    eax, eax
0x87743A: jnz     short loc_87744A
0x87743C: test    ebx, ebx
0x87743E: jz      short loc_87744A
0x877440: mov     edx, [ebx]
0x877442: mov     eax, [edx]
0x877444: push    1
0x877446: mov     ecx, ebx
0x877448: call    eax
0x87744A: test    ebp, ebp
0x87744C: mov     ecx, [esp+20h+arg_8]
0x877450: mov     [ecx+4], ebp
0x877453: jz      short loc_87745F
0x877455: add     ebp, 4
0x877458: push    ebp; lpAddend
0x877459: call    dword ptr ds:0A28078h
0x87745F: mov     edx, [edi+24h]
0x877462: mov     eax, [esp+20h+arg_C]
0x877466: mov     ebx, [edx+4]
0x877469: push    0
0x87746B: push    eax
0x87746C: mov     ecx, esi
0x87746E: mov     [esp+28h+arg_8], ebx
0x877472: call    sub_848FD0
0x877477: mov     ebx, [ebx+4]
0x87747A: mov     ebp, eax
0x87747C: cmp     ebx, ebp
0x87747E: jz      short loc_8774B5
0x877480: test    ebx, ebx
0x877482: jz      short loc_8774A0
0x877484: lea     ecx, [ebx+4]
0x877487: push    ecx; lpAddend
0x877488: call    dword ptr ds:0A2807Ch
0x87748E: test    eax, eax
0x877490: jnz     short loc_8774A0
0x877492: test    ebx, ebx
0x877494: jz      short loc_8774A0
0x877496: mov     edx, [ebx]
0x877498: mov     eax, [edx]
0x87749A: push    1
0x87749C: mov     ecx, ebx
0x87749E: call    eax
0x8774A0: test    ebp, ebp
0x8774A2: mov     ecx, [esp+20h+arg_8]
0x8774A6: mov     [ecx+4], ebp
0x8774A9: jz      short loc_8774B5
0x8774AB: add     ebp, 4
0x8774AE: push    ebp; lpAddend
0x8774AF: call    dword ptr ds:0A28078h
0x8774B5: mov     edx, [edi+24h]
0x8774B8: mov     ebx, [edx+14h]
0x8774BB: mov     eax, ds:0B43110h
0x8774C0: mov     ebp, [ebx+4]
0x8774C3: add     ebx, 4
0x8774C6: cmp     ebp, eax
0x8774C8: mov     [esp+20h+arg_C], eax
0x8774CC: jz      short loc_877503
0x8774CE: test    ebp, ebp
0x8774D0: jz      short loc_8774F3
0x8774D2: lea     eax, [ebp+4]
0x8774D5: push    eax; lpAddend
0x8774D6: call    dword ptr ds:0A2807Ch
0x8774DC: test    eax, eax
0x8774DE: jnz     short loc_8774EF
0x8774E0: test    ebp, ebp
0x8774E2: jz      short loc_8774EF
0x8774E4: mov     edx, [ebp+0]
0x8774E7: mov     eax, [edx]
0x8774E9: push    1
0x8774EB: mov     ecx, ebp
0x8774ED: call    eax
0x8774EF: mov     eax, [esp+20h+arg_C]
0x8774F3: test    eax, eax
0x8774F5: mov     [ebx], eax
0x8774F7: jz      short loc_877503
0x8774F9: add     eax, 4
0x8774FC: push    eax; lpAddend
0x8774FD: call    dword ptr ds:0A28078h
0x877503: mov     ecx, [edi+24h]
0x877506: mov     ebx, [ecx+18h]
0x877509: mov     eax, ds:0B43108h
0x87750E: mov     ebp, [ebx+4]
0x877511: add     ebx, 4
0x877514: cmp     ebp, eax
0x877516: mov     [esp+20h+arg_C], eax
0x87751A: jz      short loc_877551
0x87751C: test    ebp, ebp
0x87751E: jz      short loc_877541
0x877520: lea     edx, [ebp+4]
0x877523: push    edx; lpAddend
0x877524: call    dword ptr ds:0A2807Ch
0x87752A: test    eax, eax
0x87752C: jnz     short loc_87753D
0x87752E: test    ebp, ebp
0x877530: jz      short loc_87753D
0x877532: mov     eax, [ebp+0]
0x877535: mov     edx, [eax]
0x877537: push    1
0x877539: mov     ecx, ebp
0x87753B: call    edx
0x87753D: mov     eax, [esp+20h+arg_C]
0x877541: test    eax, eax
0x877543: mov     [ebx], eax
0x877545: jz      short loc_877551
0x877547: add     eax, 4
0x87754A: push    eax; lpAddend
0x87754B: call    dword ptr ds:0A28078h
0x877551: mov     eax, [edi+24h]
0x877554: mov     ebp, [eax+1Ch]
0x877557: mov     eax, ds:0B4310Ch
0x87755C: mov     ebx, [ebp+4]
0x87755F: cmp     ebx, eax
0x877561: mov     ecx, eax
0x877563: mov     [esp+20h+arg_C], ecx
0x877567: jz      short loc_87759E
0x877569: test    ebx, ebx
0x87756B: jz      short loc_87758D
0x87756D: lea     ecx, [ebx+4]
0x877570: push    ecx; lpAddend
0x877571: call    dword ptr ds:0A2807Ch
0x877577: test    eax, eax
0x877579: jnz     short loc_877589
0x87757B: test    ebx, ebx
0x87757D: jz      short loc_877589
0x87757F: mov     edx, [ebx]
0x877581: mov     eax, [edx]
0x877583: push    1
0x877585: mov     ecx, ebx
0x877587: call    eax
0x877589: mov     ecx, [esp+20h+arg_C]
0x87758D: test    ecx, ecx
0x87758F: mov     [ebp+4], ecx
0x877592: jz      short loc_87759E
0x877594: add     ecx, 4
0x877597: push    ecx; lpAddend
0x877598: call    dword ptr ds:0A28078h
0x87759E: mov     ebx, 1
0x8775A3: add     [edi+60h], ebx
0x8775A6: mov     [esp+20h+arg_C], edi
0x8775AA: mov     edx, [esi+38h]
0x8775AD: lea     ecx, [esp+20h+arg_C]
0x8775B1: push    ecx
0x8775B2: push    edx
0x8775B3: lea     ecx, [esi+40h]
0x8775B6: mov     [esp+28h+var_4], 0
0x8775BE: call    sub_76CE40
0x8775C3: or      eax, 0FFFFFFFFh
0x8775C6: add     [edi+60h], eax
0x8775C9: mov     [esp+20h+var_4], eax
0x8775CD: jnz     short loc_8775D6
0x8775CF: mov     ecx, edi
0x8775D1: call    sub_7604D0
0x8775D6: add     [esi+38h], ebx
0x8775D9: mov     ecx, [esp+20h+var_C]
0x8775DD: mov     large fs:0, ecx
0x8775E4: pop     ecx
0x8775E5: pop     edi
0x8775E6: pop     esi
0x8775E7: pop     ebp
0x8775E8: pop     ebx
0x8775E9: add     esp, 0Ch
0x8775EC: retn    10h
