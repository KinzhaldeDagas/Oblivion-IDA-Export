0x8430E0: push    0FFFFFFFFh
0x8430E2: push    offset SEH_882120
0x8430E7: mov     eax, large fs:0
0x8430ED: push    eax
0x8430EE: push    ebx
0x8430EF: push    ebp
0x8430F0: push    esi
0x8430F1: push    edi
0x8430F2: mov     eax, ds:0B30AACh
0x8430F7: xor     eax, esp
0x8430F9: push    eax
0x8430FA: lea     eax, [esp+20h+var_C]
0x8430FE: mov     large fs:0, eax
0x843104: mov     esi, ecx
0x843106: mov     ebx, [esp+20h+arg_8]
0x84310A: mov     eax, [ebx+10h]
0x84310D: mov     edi, ds:0B4574Ch
0x843113: push    eax
0x843114: call    sub_848C40
0x843119: mov     ebx, [ebx+0Ch]
0x84311C: push    ebx
0x84311D: mov     ecx, esi
0x84311F: call    sub_848E50
0x843124: mov     ecx, [esp+20h+arg_0]
0x843128: mov     eax, [esi]
0x84312A: mov     edx, [eax+0BCh]
0x843130: push    0
0x843132: push    ebx
0x843133: push    ecx
0x843134: mov     ecx, esi
0x843136: call    edx
0x843138: mov     eax, [edi+24h]
0x84313B: mov     ebx, [esp+20h+arg_C]
0x84313F: mov     ebp, [eax]
0x843141: mov     edx, [ebx]
0x843143: mov     eax, [edx+88h]
0x843149: push    0
0x84314B: mov     ecx, ebx
0x84314D: mov     [esp+24h+arg_8], ebp
0x843151: call    eax
0x843153: mov     ebp, [ebp+4]
0x843156: cmp     ebp, eax
0x843158: mov     [esp+20h+arg_0], eax
0x84315C: jz      short loc_843198
0x84315E: test    ebp, ebp
0x843160: jz      short loc_843183
0x843162: lea     ecx, [ebp+4]
0x843165: push    ecx; lpAddend
0x843166: call    dword ptr ds:0A2807Ch
0x84316C: test    eax, eax
0x84316E: jnz     short loc_84317F
0x843170: test    ebp, ebp
0x843172: jz      short loc_84317F
0x843174: mov     edx, [ebp+0]
0x843177: mov     eax, [edx]
0x843179: push    1
0x84317B: mov     ecx, ebp
0x84317D: call    eax
0x84317F: mov     eax, [esp+20h+arg_0]
0x843183: test    eax, eax
0x843185: mov     ecx, [esp+20h+arg_8]
0x843189: mov     [ecx+4], eax
0x84318C: jz      short loc_843198
0x84318E: add     eax, 4
0x843191: push    eax; lpAddend
0x843192: call    dword ptr ds:0A28078h
0x843198: mov     edx, [esp+20h+arg_8]
0x84319C: push    ebx
0x84319D: push    edx
0x84319E: mov     ecx, esi
0x8431A0: call    sub_848FA0
0x8431A5: mov     eax, [edi+24h]
0x8431A8: mov     ebp, [eax+4]
0x8431AB: push    0
0x8431AD: push    ebx
0x8431AE: mov     ecx, esi
0x8431B0: mov     [esp+28h+arg_8], ebp
0x8431B4: call    sub_848FD0
0x8431B9: mov     ebp, [ebp+4]
0x8431BC: cmp     ebp, eax
0x8431BE: mov     [esp+20h+arg_0], eax
0x8431C2: jz      short loc_8431FE
0x8431C4: test    ebp, ebp
0x8431C6: jz      short loc_8431E9
0x8431C8: lea     ecx, [ebp+4]
0x8431CB: push    ecx; lpAddend
0x8431CC: call    dword ptr ds:0A2807Ch
0x8431D2: test    eax, eax
0x8431D4: jnz     short loc_8431E5
0x8431D6: test    ebp, ebp
0x8431D8: jz      short loc_8431E5
0x8431DA: mov     edx, [ebp+0]
0x8431DD: mov     eax, [edx]
0x8431DF: push    1
0x8431E1: mov     ecx, ebp
0x8431E3: call    eax
0x8431E5: mov     eax, [esp+20h+arg_0]
0x8431E9: test    eax, eax
0x8431EB: mov     ecx, [esp+20h+arg_8]
0x8431EF: mov     [ecx+4], eax
0x8431F2: jz      short loc_8431FE
0x8431F4: add     eax, 4
0x8431F7: push    eax; lpAddend
0x8431F8: call    dword ptr ds:0A28078h
0x8431FE: mov     edx, [esp+20h+arg_8]
0x843202: push    ebx
0x843203: push    edx
0x843204: mov     ecx, esi
0x843206: call    sub_848FA0
0x84320B: mov     ecx, [edi+24h]
0x84320E: mov     ebx, [ecx+14h]
0x843211: mov     eax, ds:0B43108h
0x843216: mov     ebp, [ebx+4]
0x843219: add     ebx, 4
0x84321C: cmp     ebp, eax
0x84321E: mov     [esp+20h+arg_8], eax
0x843222: jz      short loc_843259
0x843224: test    ebp, ebp
0x843226: jz      short loc_843249
0x843228: lea     edx, [ebp+4]
0x84322B: push    edx; lpAddend
0x84322C: call    dword ptr ds:0A2807Ch
0x843232: test    eax, eax
0x843234: jnz     short loc_843245
0x843236: test    ebp, ebp
0x843238: jz      short loc_843245
0x84323A: mov     eax, [ebp+0]
0x84323D: mov     edx, [eax]
0x84323F: push    1
0x843241: mov     ecx, ebp
0x843243: call    edx
0x843245: mov     eax, [esp+20h+arg_8]
0x843249: test    eax, eax
0x84324B: mov     [ebx], eax
0x84324D: jz      short loc_843259
0x84324F: add     eax, 4
0x843252: push    eax; lpAddend
0x843253: call    dword ptr ds:0A28078h
0x843259: mov     eax, [edi+24h]
0x84325C: mov     ebp, [eax+18h]
0x84325F: mov     eax, ds:0B4310Ch
0x843264: mov     ebx, [ebp+4]
0x843267: cmp     ebx, eax
0x843269: mov     ecx, eax
0x84326B: mov     [esp+20h+arg_8], ecx
0x84326F: jz      short loc_8432A6
0x843271: test    ebx, ebx
0x843273: jz      short loc_843295
0x843275: lea     ecx, [ebx+4]
0x843278: push    ecx; lpAddend
0x843279: call    dword ptr ds:0A2807Ch
0x84327F: test    eax, eax
0x843281: jnz     short loc_843291
0x843283: test    ebx, ebx
0x843285: jz      short loc_843291
0x843287: mov     edx, [ebx]
0x843289: mov     eax, [edx]
0x84328B: push    1
0x84328D: mov     ecx, ebx
0x84328F: call    eax
0x843291: mov     ecx, [esp+20h+arg_8]
0x843295: test    ecx, ecx
0x843297: mov     [ebp+4], ecx
0x84329A: jz      short loc_8432A6
0x84329C: add     ecx, 4
0x84329F: push    ecx; lpAddend
0x8432A0: call    dword ptr ds:0A28078h
0x8432A6: mov     ebx, 1
0x8432AB: add     [edi+60h], ebx
0x8432AE: mov     [esp+20h+arg_8], edi
0x8432B2: mov     edx, [esi+38h]
0x8432B5: lea     ecx, [esp+20h+arg_8]
0x8432B9: push    ecx
0x8432BA: push    edx
0x8432BB: lea     ecx, [esi+40h]
0x8432BE: mov     [esp+28h+var_4], 0
0x8432C6: call    sub_76CE40
0x8432CB: or      eax, 0FFFFFFFFh
0x8432CE: add     [edi+60h], eax
0x8432D1: mov     [esp+20h+var_4], eax
0x8432D5: jnz     short loc_8432DE
0x8432D7: mov     ecx, edi
0x8432D9: call    sub_7604D0
0x8432DE: add     [esi+38h], ebx
0x8432E1: mov     ecx, [esp+20h+var_C]
0x8432E5: mov     large fs:0, ecx
0x8432EC: pop     ecx
0x8432ED: pop     edi
0x8432EE: pop     esi
0x8432EF: pop     ebp
0x8432F0: pop     ebx
0x8432F1: add     esp, 0Ch
0x8432F4: retn    10h
