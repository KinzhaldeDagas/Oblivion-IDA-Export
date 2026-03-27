0x879110: push    0FFFFFFFFh
0x879112: push    offset SEH_880560
0x879117: mov     eax, large fs:0
0x87911D: push    eax
0x87911E: push    ebx
0x87911F: push    ebp
0x879120: push    esi
0x879121: push    edi
0x879122: mov     eax, ds:0B30AACh
0x879127: xor     eax, esp
0x879129: push    eax
0x87912A: lea     eax, [esp+20h+var_C]
0x87912E: mov     large fs:0, eax
0x879134: mov     esi, ecx
0x879136: mov     ebx, [esp+20h+arg_8]
0x87913A: mov     eax, [ebx+10h]
0x87913D: mov     edi, ds:0B476D0h
0x879143: push    eax
0x879144: call    sub_848C40
0x879149: mov     ebp, [ebx+0Ch]
0x87914C: push    ebp
0x87914D: mov     ecx, esi
0x87914F: call    sub_848E50
0x879154: mov     ebx, [ebx+10h]
0x879157: mov     ecx, [esp+20h+arg_0]
0x87915B: mov     eax, [esi]
0x87915D: mov     edx, [eax+0BCh]
0x879163: push    ebx
0x879164: push    ebp
0x879165: push    ecx
0x879166: mov     ecx, esi
0x879168: call    edx
0x87916A: mov     eax, [edi+24h]
0x87916D: mov     ecx, [esp+20h+arg_C]
0x879171: mov     ebx, [eax]
0x879173: mov     edx, [ecx]
0x879175: mov     eax, [edx+88h]
0x87917B: push    0
0x87917D: mov     [esp+24h+arg_8], ebx
0x879181: call    eax
0x879183: mov     ebx, [ebx+4]
0x879186: mov     ebp, eax
0x879188: cmp     ebx, ebp
0x87918A: jz      short loc_8791C1
0x87918C: test    ebx, ebx
0x87918E: jz      short loc_8791AC
0x879190: lea     ecx, [ebx+4]
0x879193: push    ecx; lpAddend
0x879194: call    dword ptr ds:0A2807Ch
0x87919A: test    eax, eax
0x87919C: jnz     short loc_8791AC
0x87919E: test    ebx, ebx
0x8791A0: jz      short loc_8791AC
0x8791A2: mov     edx, [ebx]
0x8791A4: mov     eax, [edx]
0x8791A6: push    1
0x8791A8: mov     ecx, ebx
0x8791AA: call    eax
0x8791AC: test    ebp, ebp
0x8791AE: mov     ecx, [esp+20h+arg_8]
0x8791B2: mov     [ecx+4], ebp
0x8791B5: jz      short loc_8791C1
0x8791B7: add     ebp, 4
0x8791BA: push    ebp; lpAddend
0x8791BB: call    dword ptr ds:0A28078h
0x8791C1: mov     edx, [edi+24h]
0x8791C4: mov     eax, [esp+20h+arg_C]
0x8791C8: mov     ebx, [edx+4]
0x8791CB: push    0
0x8791CD: push    eax
0x8791CE: mov     ecx, esi
0x8791D0: mov     [esp+28h+arg_8], ebx
0x8791D4: call    sub_848FD0
0x8791D9: mov     ebx, [ebx+4]
0x8791DC: mov     ebp, eax
0x8791DE: cmp     ebx, ebp
0x8791E0: jz      short loc_879217
0x8791E2: test    ebx, ebx
0x8791E4: jz      short loc_879202
0x8791E6: lea     ecx, [ebx+4]
0x8791E9: push    ecx; lpAddend
0x8791EA: call    dword ptr ds:0A2807Ch
0x8791F0: test    eax, eax
0x8791F2: jnz     short loc_879202
0x8791F4: test    ebx, ebx
0x8791F6: jz      short loc_879202
0x8791F8: mov     edx, [ebx]
0x8791FA: mov     eax, [edx]
0x8791FC: push    1
0x8791FE: mov     ecx, ebx
0x879200: call    eax
0x879202: test    ebp, ebp
0x879204: mov     ecx, [esp+20h+arg_8]
0x879208: mov     [ecx+4], ebp
0x87920B: jz      short loc_879217
0x87920D: add     ebp, 4
0x879210: push    ebp; lpAddend
0x879211: call    dword ptr ds:0A28078h
0x879217: mov     edx, [edi+24h]
0x87921A: mov     ebx, [edx+14h]
0x87921D: mov     eax, ds:0B43110h
0x879222: mov     ebp, [ebx+4]
0x879225: add     ebx, 4
0x879228: cmp     ebp, eax
0x87922A: mov     [esp+20h+arg_C], eax
0x87922E: jz      short loc_879265
0x879230: test    ebp, ebp
0x879232: jz      short loc_879255
0x879234: lea     eax, [ebp+4]
0x879237: push    eax; lpAddend
0x879238: call    dword ptr ds:0A2807Ch
0x87923E: test    eax, eax
0x879240: jnz     short loc_879251
0x879242: test    ebp, ebp
0x879244: jz      short loc_879251
0x879246: mov     edx, [ebp+0]
0x879249: mov     eax, [edx]
0x87924B: push    1
0x87924D: mov     ecx, ebp
0x87924F: call    eax
0x879251: mov     eax, [esp+20h+arg_C]
0x879255: test    eax, eax
0x879257: mov     [ebx], eax
0x879259: jz      short loc_879265
0x87925B: add     eax, 4
0x87925E: push    eax; lpAddend
0x87925F: call    dword ptr ds:0A28078h
0x879265: mov     ecx, [edi+24h]
0x879268: mov     ebx, [ecx+18h]
0x87926B: mov     eax, ds:0B43108h
0x879270: mov     ebp, [ebx+4]
0x879273: add     ebx, 4
0x879276: cmp     ebp, eax
0x879278: mov     [esp+20h+arg_C], eax
0x87927C: jz      short loc_8792B3
0x87927E: test    ebp, ebp
0x879280: jz      short loc_8792A3
0x879282: lea     edx, [ebp+4]
0x879285: push    edx; lpAddend
0x879286: call    dword ptr ds:0A2807Ch
0x87928C: test    eax, eax
0x87928E: jnz     short loc_87929F
0x879290: test    ebp, ebp
0x879292: jz      short loc_87929F
0x879294: mov     eax, [ebp+0]
0x879297: mov     edx, [eax]
0x879299: push    1
0x87929B: mov     ecx, ebp
0x87929D: call    edx
0x87929F: mov     eax, [esp+20h+arg_C]
0x8792A3: test    eax, eax
0x8792A5: mov     [ebx], eax
0x8792A7: jz      short loc_8792B3
0x8792A9: add     eax, 4
0x8792AC: push    eax; lpAddend
0x8792AD: call    dword ptr ds:0A28078h
0x8792B3: mov     eax, [edi+24h]
0x8792B6: mov     ebp, [eax+1Ch]
0x8792B9: mov     eax, ds:0B4310Ch
0x8792BE: mov     ebx, [ebp+4]
0x8792C1: cmp     ebx, eax
0x8792C3: mov     ecx, eax
0x8792C5: mov     [esp+20h+arg_C], ecx
0x8792C9: jz      short loc_879300
0x8792CB: test    ebx, ebx
0x8792CD: jz      short loc_8792EF
0x8792CF: lea     ecx, [ebx+4]
0x8792D2: push    ecx; lpAddend
0x8792D3: call    dword ptr ds:0A2807Ch
0x8792D9: test    eax, eax
0x8792DB: jnz     short loc_8792EB
0x8792DD: test    ebx, ebx
0x8792DF: jz      short loc_8792EB
0x8792E1: mov     edx, [ebx]
0x8792E3: mov     eax, [edx]
0x8792E5: push    1
0x8792E7: mov     ecx, ebx
0x8792E9: call    eax
0x8792EB: mov     ecx, [esp+20h+arg_C]
0x8792EF: test    ecx, ecx
0x8792F1: mov     [ebp+4], ecx
0x8792F4: jz      short loc_879300
0x8792F6: add     ecx, 4
0x8792F9: push    ecx; lpAddend
0x8792FA: call    dword ptr ds:0A28078h
0x879300: mov     ebx, 1
0x879305: add     [edi+60h], ebx
0x879308: mov     [esp+20h+arg_C], edi
0x87930C: mov     edx, [esi+38h]
0x87930F: lea     ecx, [esp+20h+arg_C]
0x879313: push    ecx
0x879314: push    edx
0x879315: lea     ecx, [esi+40h]
0x879318: mov     [esp+28h+var_4], 0
0x879320: call    sub_76CE40
0x879325: or      eax, 0FFFFFFFFh
0x879328: add     [edi+60h], eax
0x87932B: mov     [esp+20h+var_4], eax
0x87932F: jnz     short loc_879338
0x879331: mov     ecx, edi
0x879333: call    sub_7604D0
0x879338: add     [esi+38h], ebx
0x87933B: mov     ecx, [esp+20h+var_C]
0x87933F: mov     large fs:0, ecx
0x879346: pop     ecx
0x879347: pop     edi
0x879348: pop     esi
0x879349: pop     ebp
0x87934A: pop     ebx
0x87934B: add     esp, 0Ch
0x87934E: retn    10h
