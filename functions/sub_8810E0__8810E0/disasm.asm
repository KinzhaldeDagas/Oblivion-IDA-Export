0x8810E0: push    0FFFFFFFFh
0x8810E2: push    offset SEH_882120
0x8810E7: mov     eax, large fs:0
0x8810ED: push    eax
0x8810EE: push    ebx
0x8810EF: push    ebp
0x8810F0: push    esi
0x8810F1: push    edi
0x8810F2: mov     eax, ds:0B30AACh
0x8810F7: xor     eax, esp
0x8810F9: push    eax
0x8810FA: lea     eax, [esp+20h+var_C]
0x8810FE: mov     large fs:0, eax
0x881104: mov     esi, ecx
0x881106: mov     ebx, [esp+20h+arg_8]
0x88110A: mov     eax, [ebx+10h]
0x88110D: mov     edi, ds:0B47744h
0x881113: push    eax
0x881114: call    sub_848C40
0x881119: mov     ebx, [ebx+0Ch]
0x88111C: push    ebx
0x88111D: mov     ecx, esi
0x88111F: call    sub_848E50
0x881124: mov     ecx, [esp+20h+arg_0]
0x881128: mov     eax, [esi]
0x88112A: mov     edx, [eax+0BCh]
0x881130: push    0
0x881132: push    ebx
0x881133: push    ecx
0x881134: mov     ecx, esi
0x881136: call    edx
0x881138: mov     eax, [edi+24h]
0x88113B: mov     ebp, [esp+20h+arg_C]
0x88113F: mov     ebx, [eax]
0x881141: mov     edx, [ebp+0]
0x881144: mov     eax, [edx+88h]
0x88114A: push    0
0x88114C: mov     ecx, ebp
0x88114E: mov     [esp+24h+arg_8], ebx
0x881152: call    eax
0x881154: mov     ebx, [ebx+4]
0x881157: cmp     ebx, eax
0x881159: mov     [esp+20h+arg_0], eax
0x88115D: jz      short loc_881198
0x88115F: test    ebx, ebx
0x881161: jz      short loc_881183
0x881163: lea     ecx, [ebx+4]
0x881166: push    ecx; lpAddend
0x881167: call    dword ptr ds:0A2807Ch
0x88116D: test    eax, eax
0x88116F: jnz     short loc_88117F
0x881171: test    ebx, ebx
0x881173: jz      short loc_88117F
0x881175: mov     edx, [ebx]
0x881177: mov     eax, [edx]
0x881179: push    1
0x88117B: mov     ecx, ebx
0x88117D: call    eax
0x88117F: mov     eax, [esp+20h+arg_0]
0x881183: test    eax, eax
0x881185: mov     ecx, [esp+20h+arg_8]
0x881189: mov     [ecx+4], eax
0x88118C: jz      short loc_881198
0x88118E: add     eax, 4
0x881191: push    eax; lpAddend
0x881192: call    dword ptr ds:0A28078h
0x881198: mov     edx, [edi+24h]
0x88119B: mov     ebx, [edx+4]
0x88119E: push    0
0x8811A0: push    ebp
0x8811A1: mov     ecx, esi
0x8811A3: mov     [esp+28h+arg_8], ebx
0x8811A7: call    sub_848FD0
0x8811AC: mov     ebx, [ebx+4]
0x8811AF: cmp     ebx, eax
0x8811B1: mov     [esp+20h+arg_0], eax
0x8811B5: jz      short loc_8811F0
0x8811B7: test    ebx, ebx
0x8811B9: jz      short loc_8811DB
0x8811BB: lea     eax, [ebx+4]
0x8811BE: push    eax; lpAddend
0x8811BF: call    dword ptr ds:0A2807Ch
0x8811C5: test    eax, eax
0x8811C7: jnz     short loc_8811D7
0x8811C9: test    ebx, ebx
0x8811CB: jz      short loc_8811D7
0x8811CD: mov     edx, [ebx]
0x8811CF: mov     eax, [edx]
0x8811D1: push    1
0x8811D3: mov     ecx, ebx
0x8811D5: call    eax
0x8811D7: mov     eax, [esp+20h+arg_0]
0x8811DB: test    eax, eax
0x8811DD: mov     ecx, [esp+20h+arg_8]
0x8811E1: mov     [ecx+4], eax
0x8811E4: jz      short loc_8811F0
0x8811E6: add     eax, 4
0x8811E9: push    eax; lpAddend
0x8811EA: call    dword ptr ds:0A28078h
0x8811F0: mov     edx, [edi+24h]
0x8811F3: mov     ebx, [edx+8]
0x8811F6: mov     eax, [ebp+0]
0x8811F9: mov     edx, [eax+88h]
0x8811FF: push    1
0x881201: mov     ecx, ebp
0x881203: mov     [esp+24h+arg_8], ebx
0x881207: call    edx
0x881209: mov     ebx, [ebx+4]
0x88120C: cmp     ebx, eax
0x88120E: mov     [esp+20h+arg_0], eax
0x881212: jz      short loc_88124D
0x881214: test    ebx, ebx
0x881216: jz      short loc_881238
0x881218: lea     eax, [ebx+4]
0x88121B: push    eax; lpAddend
0x88121C: call    dword ptr ds:0A2807Ch
0x881222: test    eax, eax
0x881224: jnz     short loc_881234
0x881226: test    ebx, ebx
0x881228: jz      short loc_881234
0x88122A: mov     edx, [ebx]
0x88122C: mov     eax, [edx]
0x88122E: push    1
0x881230: mov     ecx, ebx
0x881232: call    eax
0x881234: mov     eax, [esp+20h+arg_0]
0x881238: test    eax, eax
0x88123A: mov     ecx, [esp+20h+arg_8]
0x88123E: mov     [ecx+4], eax
0x881241: jz      short loc_88124D
0x881243: add     eax, 4
0x881246: push    eax; lpAddend
0x881247: call    dword ptr ds:0A28078h
0x88124D: mov     edx, [edi+24h]
0x881250: mov     eax, [edx+0Ch]
0x881253: push    1
0x881255: push    ebp
0x881256: mov     ecx, esi
0x881258: mov     [esp+28h+arg_8], eax
0x88125C: call    sub_848FD0
0x881261: mov     ecx, [esp+20h+arg_8]
0x881265: mov     ebp, [ecx+4]
0x881268: mov     ebx, eax
0x88126A: cmp     ebp, ebx
0x88126C: jz      short loc_8812A4
0x88126E: test    ebp, ebp
0x881270: jz      short loc_88128F
0x881272: lea     edx, [ebp+4]
0x881275: push    edx; lpAddend
0x881276: call    dword ptr ds:0A2807Ch
0x88127C: test    eax, eax
0x88127E: jnz     short loc_88128F
0x881280: test    ebp, ebp
0x881282: jz      short loc_88128F
0x881284: mov     eax, [ebp+0]
0x881287: mov     edx, [eax]
0x881289: push    1
0x88128B: mov     ecx, ebp
0x88128D: call    edx
0x88128F: test    ebx, ebx
0x881291: mov     eax, [esp+20h+arg_8]
0x881295: mov     [eax+4], ebx
0x881298: jz      short loc_8812A4
0x88129A: add     ebx, 4
0x88129D: push    ebx; lpAddend
0x88129E: call    dword ptr ds:0A28078h
0x8812A4: mov     ecx, [edi+24h]
0x8812A7: mov     ebx, [ecx+18h]
0x8812AA: mov     eax, ds:0B43108h
0x8812AF: mov     ebp, [ebx+4]
0x8812B2: add     ebx, 4
0x8812B5: cmp     ebp, eax
0x8812B7: mov     [esp+20h+arg_8], eax
0x8812BB: jz      short loc_8812F2
0x8812BD: test    ebp, ebp
0x8812BF: jz      short loc_8812E2
0x8812C1: lea     edx, [ebp+4]
0x8812C4: push    edx; lpAddend
0x8812C5: call    dword ptr ds:0A2807Ch
0x8812CB: test    eax, eax
0x8812CD: jnz     short loc_8812DE
0x8812CF: test    ebp, ebp
0x8812D1: jz      short loc_8812DE
0x8812D3: mov     eax, [ebp+0]
0x8812D6: mov     edx, [eax]
0x8812D8: push    1
0x8812DA: mov     ecx, ebp
0x8812DC: call    edx
0x8812DE: mov     eax, [esp+20h+arg_8]
0x8812E2: test    eax, eax
0x8812E4: mov     [ebx], eax
0x8812E6: jz      short loc_8812F2
0x8812E8: add     eax, 4
0x8812EB: push    eax; lpAddend
0x8812EC: call    dword ptr ds:0A28078h
0x8812F2: mov     eax, [edi+24h]
0x8812F5: mov     ebx, [eax+1Ch]
0x8812F8: mov     eax, ds:0B4310Ch
0x8812FD: mov     ebp, [ebx+4]
0x881300: cmp     ebp, eax
0x881302: mov     ecx, eax
0x881304: mov     [esp+20h+arg_8], ecx
0x881308: jz      short loc_881340
0x88130A: test    ebp, ebp
0x88130C: jz      short loc_88132F
0x88130E: lea     ecx, [ebp+4]
0x881311: push    ecx; lpAddend
0x881312: call    dword ptr ds:0A2807Ch
0x881318: test    eax, eax
0x88131A: jnz     short loc_88132B
0x88131C: test    ebp, ebp
0x88131E: jz      short loc_88132B
0x881320: mov     edx, [ebp+0]
0x881323: mov     eax, [edx]
0x881325: push    1
0x881327: mov     ecx, ebp
0x881329: call    eax
0x88132B: mov     ecx, [esp+20h+arg_8]
0x88132F: test    ecx, ecx
0x881331: mov     [ebx+4], ecx
0x881334: jz      short loc_881340
0x881336: add     ecx, 4
0x881339: push    ecx; lpAddend
0x88133A: call    dword ptr ds:0A28078h
0x881340: mov     ebx, 1
0x881345: add     [edi+60h], ebx
0x881348: mov     [esp+20h+arg_8], edi
0x88134C: mov     edx, [esi+38h]
0x88134F: lea     ecx, [esp+20h+arg_8]
0x881353: push    ecx
0x881354: push    edx
0x881355: lea     ecx, [esi+40h]
0x881358: mov     [esp+28h+var_4], 0
0x881360: call    sub_76CE40
0x881365: or      eax, 0FFFFFFFFh
0x881368: add     [edi+60h], eax
0x88136B: mov     [esp+20h+var_4], eax
0x88136F: jnz     short loc_881378
0x881371: mov     ecx, edi
0x881373: call    sub_7604D0
0x881378: add     [esi+38h], ebx
0x88137B: mov     ecx, [esp+20h+var_C]
0x88137F: mov     large fs:0, ecx
0x881386: pop     ecx
0x881387: pop     edi
0x881388: pop     esi
0x881389: pop     ebp
0x88138A: pop     ebx
0x88138B: add     esp, 0Ch
0x88138E: retn    10h
