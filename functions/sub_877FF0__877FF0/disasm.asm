0x877FF0: push    0FFFFFFFFh
0x877FF2: push    offset SEH_880560
0x877FF7: mov     eax, large fs:0
0x877FFD: push    eax
0x877FFE: push    ebx
0x877FFF: push    ebp
0x878000: push    esi
0x878001: push    edi
0x878002: mov     eax, ds:0B30AACh
0x878007: xor     eax, esp
0x878009: push    eax
0x87800A: lea     eax, [esp+20h+var_C]
0x87800E: mov     large fs:0, eax
0x878014: mov     esi, ecx
0x878016: mov     ebx, [esp+20h+arg_8]
0x87801A: mov     eax, [ebx+10h]
0x87801D: mov     edi, ds:0B476B0h
0x878023: push    eax
0x878024: call    sub_848C40
0x878029: mov     ebp, [ebx+0Ch]
0x87802C: push    ebp
0x87802D: mov     ecx, esi
0x87802F: call    sub_848E50
0x878034: mov     ebx, [ebx+10h]
0x878037: mov     ecx, [esp+20h+arg_0]
0x87803B: mov     eax, [esi]
0x87803D: mov     edx, [eax+0BCh]
0x878043: push    ebx
0x878044: push    ebp
0x878045: push    ecx
0x878046: mov     ecx, esi
0x878048: call    edx
0x87804A: mov     eax, [edi+24h]
0x87804D: mov     ecx, [esp+20h+arg_C]
0x878051: mov     ebx, [eax]
0x878053: mov     edx, [ecx]
0x878055: mov     eax, [edx+88h]
0x87805B: push    0
0x87805D: mov     [esp+24h+arg_8], ebx
0x878061: call    eax
0x878063: mov     ebx, [ebx+4]
0x878066: mov     ebp, eax
0x878068: cmp     ebx, ebp
0x87806A: jz      short loc_8780A1
0x87806C: test    ebx, ebx
0x87806E: jz      short loc_87808C
0x878070: lea     ecx, [ebx+4]
0x878073: push    ecx; lpAddend
0x878074: call    dword ptr ds:0A2807Ch
0x87807A: test    eax, eax
0x87807C: jnz     short loc_87808C
0x87807E: test    ebx, ebx
0x878080: jz      short loc_87808C
0x878082: mov     edx, [ebx]
0x878084: mov     eax, [edx]
0x878086: push    1
0x878088: mov     ecx, ebx
0x87808A: call    eax
0x87808C: test    ebp, ebp
0x87808E: mov     ecx, [esp+20h+arg_8]
0x878092: mov     [ecx+4], ebp
0x878095: jz      short loc_8780A1
0x878097: add     ebp, 4
0x87809A: push    ebp; lpAddend
0x87809B: call    dword ptr ds:0A28078h
0x8780A1: mov     edx, [edi+24h]
0x8780A4: mov     eax, [esp+20h+arg_C]
0x8780A8: mov     ebx, [edx+4]
0x8780AB: push    0
0x8780AD: push    eax
0x8780AE: mov     ecx, esi
0x8780B0: mov     [esp+28h+arg_8], ebx
0x8780B4: call    sub_848FD0
0x8780B9: mov     ebx, [ebx+4]
0x8780BC: mov     ebp, eax
0x8780BE: cmp     ebx, ebp
0x8780C0: jz      short loc_8780F7
0x8780C2: test    ebx, ebx
0x8780C4: jz      short loc_8780E2
0x8780C6: lea     ecx, [ebx+4]
0x8780C9: push    ecx; lpAddend
0x8780CA: call    dword ptr ds:0A2807Ch
0x8780D0: test    eax, eax
0x8780D2: jnz     short loc_8780E2
0x8780D4: test    ebx, ebx
0x8780D6: jz      short loc_8780E2
0x8780D8: mov     edx, [ebx]
0x8780DA: mov     eax, [edx]
0x8780DC: push    1
0x8780DE: mov     ecx, ebx
0x8780E0: call    eax
0x8780E2: test    ebp, ebp
0x8780E4: mov     ecx, [esp+20h+arg_8]
0x8780E8: mov     [ecx+4], ebp
0x8780EB: jz      short loc_8780F7
0x8780ED: add     ebp, 4
0x8780F0: push    ebp; lpAddend
0x8780F1: call    dword ptr ds:0A28078h
0x8780F7: mov     edx, [edi+24h]
0x8780FA: mov     ebx, [edx+14h]
0x8780FD: mov     eax, ds:0B43110h
0x878102: mov     ebp, [ebx+4]
0x878105: add     ebx, 4
0x878108: cmp     ebp, eax
0x87810A: mov     [esp+20h+arg_C], eax
0x87810E: jz      short loc_878145
0x878110: test    ebp, ebp
0x878112: jz      short loc_878135
0x878114: lea     eax, [ebp+4]
0x878117: push    eax; lpAddend
0x878118: call    dword ptr ds:0A2807Ch
0x87811E: test    eax, eax
0x878120: jnz     short loc_878131
0x878122: test    ebp, ebp
0x878124: jz      short loc_878131
0x878126: mov     edx, [ebp+0]
0x878129: mov     eax, [edx]
0x87812B: push    1
0x87812D: mov     ecx, ebp
0x87812F: call    eax
0x878131: mov     eax, [esp+20h+arg_C]
0x878135: test    eax, eax
0x878137: mov     [ebx], eax
0x878139: jz      short loc_878145
0x87813B: add     eax, 4
0x87813E: push    eax; lpAddend
0x87813F: call    dword ptr ds:0A28078h
0x878145: mov     ecx, [edi+24h]
0x878148: mov     ebx, [ecx+18h]
0x87814B: mov     eax, ds:0B43108h
0x878150: mov     ebp, [ebx+4]
0x878153: add     ebx, 4
0x878156: cmp     ebp, eax
0x878158: mov     [esp+20h+arg_C], eax
0x87815C: jz      short loc_878193
0x87815E: test    ebp, ebp
0x878160: jz      short loc_878183
0x878162: lea     edx, [ebp+4]
0x878165: push    edx; lpAddend
0x878166: call    dword ptr ds:0A2807Ch
0x87816C: test    eax, eax
0x87816E: jnz     short loc_87817F
0x878170: test    ebp, ebp
0x878172: jz      short loc_87817F
0x878174: mov     eax, [ebp+0]
0x878177: mov     edx, [eax]
0x878179: push    1
0x87817B: mov     ecx, ebp
0x87817D: call    edx
0x87817F: mov     eax, [esp+20h+arg_C]
0x878183: test    eax, eax
0x878185: mov     [ebx], eax
0x878187: jz      short loc_878193
0x878189: add     eax, 4
0x87818C: push    eax; lpAddend
0x87818D: call    dword ptr ds:0A28078h
0x878193: mov     eax, [edi+24h]
0x878196: mov     ebp, [eax+1Ch]
0x878199: mov     eax, ds:0B4310Ch
0x87819E: mov     ebx, [ebp+4]
0x8781A1: cmp     ebx, eax
0x8781A3: mov     ecx, eax
0x8781A5: mov     [esp+20h+arg_C], ecx
0x8781A9: jz      short loc_8781E0
0x8781AB: test    ebx, ebx
0x8781AD: jz      short loc_8781CF
0x8781AF: lea     ecx, [ebx+4]
0x8781B2: push    ecx; lpAddend
0x8781B3: call    dword ptr ds:0A2807Ch
0x8781B9: test    eax, eax
0x8781BB: jnz     short loc_8781CB
0x8781BD: test    ebx, ebx
0x8781BF: jz      short loc_8781CB
0x8781C1: mov     edx, [ebx]
0x8781C3: mov     eax, [edx]
0x8781C5: push    1
0x8781C7: mov     ecx, ebx
0x8781C9: call    eax
0x8781CB: mov     ecx, [esp+20h+arg_C]
0x8781CF: test    ecx, ecx
0x8781D1: mov     [ebp+4], ecx
0x8781D4: jz      short loc_8781E0
0x8781D6: add     ecx, 4
0x8781D9: push    ecx; lpAddend
0x8781DA: call    dword ptr ds:0A28078h
0x8781E0: mov     ebx, 1
0x8781E5: add     [edi+60h], ebx
0x8781E8: mov     [esp+20h+arg_C], edi
0x8781EC: mov     edx, [esi+38h]
0x8781EF: lea     ecx, [esp+20h+arg_C]
0x8781F3: push    ecx
0x8781F4: push    edx
0x8781F5: lea     ecx, [esi+40h]
0x8781F8: mov     [esp+28h+var_4], 0
0x878200: call    sub_76CE40
0x878205: or      eax, 0FFFFFFFFh
0x878208: add     [edi+60h], eax
0x87820B: mov     [esp+20h+var_4], eax
0x87820F: jnz     short loc_878218
0x878211: mov     ecx, edi
0x878213: call    sub_7604D0
0x878218: add     [esi+38h], ebx
0x87821B: mov     ecx, [esp+20h+var_C]
0x87821F: mov     large fs:0, ecx
0x878226: pop     ecx
0x878227: pop     edi
0x878228: pop     esi
0x878229: pop     ebp
0x87822A: pop     ebx
0x87822B: add     esp, 0Ch
0x87822E: retn    10h
