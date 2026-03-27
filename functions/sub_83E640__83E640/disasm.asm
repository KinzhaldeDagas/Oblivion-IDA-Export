0x83E640: push    0FFFFFFFFh
0x83E642: push    offset SEH_882120
0x83E647: mov     eax, large fs:0
0x83E64D: push    eax
0x83E64E: push    ebx
0x83E64F: push    ebp
0x83E650: push    esi
0x83E651: push    edi
0x83E652: mov     eax, ds:0B30AACh
0x83E657: xor     eax, esp
0x83E659: push    eax
0x83E65A: lea     eax, [esp+20h+var_C]
0x83E65E: mov     large fs:0, eax
0x83E664: mov     esi, ecx
0x83E666: mov     ebx, [esp+20h+arg_8]
0x83E66A: mov     eax, [ebx+10h]
0x83E66D: mov     edi, ds:0B45850h
0x83E673: push    eax
0x83E674: call    sub_848C40
0x83E679: mov     ebp, [ebx+0Ch]
0x83E67C: push    ebp
0x83E67D: mov     ecx, esi
0x83E67F: call    sub_848E50
0x83E684: mov     ebx, [ebx+10h]
0x83E687: mov     ecx, [esp+20h+arg_0]
0x83E68B: mov     eax, [esi]
0x83E68D: mov     edx, [eax+0BCh]
0x83E693: push    ebx
0x83E694: push    ebp
0x83E695: push    ecx
0x83E696: mov     ecx, esi
0x83E698: call    edx
0x83E69A: mov     eax, [edi+24h]
0x83E69D: mov     ebx, [esp+20h+arg_C]
0x83E6A1: mov     ebp, [eax]
0x83E6A3: mov     edx, [ebx]
0x83E6A5: mov     eax, [edx+88h]
0x83E6AB: push    0
0x83E6AD: mov     ecx, ebx
0x83E6AF: mov     [esp+24h+arg_8], ebp
0x83E6B3: call    eax
0x83E6B5: mov     ebp, [ebp+4]
0x83E6B8: cmp     ebp, eax
0x83E6BA: mov     [esp+20h+arg_0], eax
0x83E6BE: jz      short loc_83E6FA
0x83E6C0: test    ebp, ebp
0x83E6C2: jz      short loc_83E6E5
0x83E6C4: lea     ecx, [ebp+4]
0x83E6C7: push    ecx; lpAddend
0x83E6C8: call    dword ptr ds:0A2807Ch
0x83E6CE: test    eax, eax
0x83E6D0: jnz     short loc_83E6E1
0x83E6D2: test    ebp, ebp
0x83E6D4: jz      short loc_83E6E1
0x83E6D6: mov     edx, [ebp+0]
0x83E6D9: mov     eax, [edx]
0x83E6DB: push    1
0x83E6DD: mov     ecx, ebp
0x83E6DF: call    eax
0x83E6E1: mov     eax, [esp+20h+arg_0]
0x83E6E5: test    eax, eax
0x83E6E7: mov     ecx, [esp+20h+arg_8]
0x83E6EB: mov     [ecx+4], eax
0x83E6EE: jz      short loc_83E6FA
0x83E6F0: add     eax, 4
0x83E6F3: push    eax; lpAddend
0x83E6F4: call    dword ptr ds:0A28078h
0x83E6FA: mov     edx, [esp+20h+arg_8]
0x83E6FE: push    ebx
0x83E6FF: push    edx
0x83E700: mov     ecx, esi
0x83E702: call    sub_848FA0
0x83E707: mov     eax, [edi+24h]
0x83E70A: mov     ebp, [eax+4]
0x83E70D: push    0
0x83E70F: push    ebx
0x83E710: mov     ecx, esi
0x83E712: mov     [esp+28h+arg_8], ebp
0x83E716: call    sub_848FD0
0x83E71B: mov     ebp, [ebp+4]
0x83E71E: cmp     ebp, eax
0x83E720: mov     [esp+20h+arg_0], eax
0x83E724: jz      short loc_83E760
0x83E726: test    ebp, ebp
0x83E728: jz      short loc_83E74B
0x83E72A: lea     ecx, [ebp+4]
0x83E72D: push    ecx; lpAddend
0x83E72E: call    dword ptr ds:0A2807Ch
0x83E734: test    eax, eax
0x83E736: jnz     short loc_83E747
0x83E738: test    ebp, ebp
0x83E73A: jz      short loc_83E747
0x83E73C: mov     edx, [ebp+0]
0x83E73F: mov     eax, [edx]
0x83E741: push    1
0x83E743: mov     ecx, ebp
0x83E745: call    eax
0x83E747: mov     eax, [esp+20h+arg_0]
0x83E74B: test    eax, eax
0x83E74D: mov     ecx, [esp+20h+arg_8]
0x83E751: mov     [ecx+4], eax
0x83E754: jz      short loc_83E760
0x83E756: add     eax, 4
0x83E759: push    eax; lpAddend
0x83E75A: call    dword ptr ds:0A28078h
0x83E760: mov     edx, [esp+20h+arg_8]
0x83E764: push    ebx
0x83E765: push    edx
0x83E766: mov     ecx, esi
0x83E768: call    sub_848FA0
0x83E76D: mov     ebx, 1
0x83E772: add     [edi+60h], ebx
0x83E775: mov     [esp+20h+arg_8], edi
0x83E779: mov     ecx, [esi+38h]
0x83E77C: lea     eax, [esp+20h+arg_8]
0x83E780: push    eax
0x83E781: push    ecx
0x83E782: lea     ecx, [esi+40h]
0x83E785: mov     [esp+28h+var_4], 0
0x83E78D: call    sub_76CE40
0x83E792: or      eax, 0FFFFFFFFh
0x83E795: add     [edi+60h], eax
0x83E798: mov     [esp+20h+var_4], eax
0x83E79C: jnz     short loc_83E7A5
0x83E79E: mov     ecx, edi
0x83E7A0: call    sub_7604D0
0x83E7A5: add     [esi+38h], ebx
0x83E7A8: mov     ecx, [esp+20h+var_C]
0x83E7AC: mov     large fs:0, ecx
0x83E7B3: pop     ecx
0x83E7B4: pop     edi
0x83E7B5: pop     esi
0x83E7B6: pop     ebp
0x83E7B7: pop     ebx
0x83E7B8: add     esp, 0Ch
0x83E7BB: retn    10h
