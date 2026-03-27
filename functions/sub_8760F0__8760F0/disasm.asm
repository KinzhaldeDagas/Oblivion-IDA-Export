0x8760F0: push    0FFFFFFFFh
0x8760F2: push    offset SEH_882120
0x8760F7: mov     eax, large fs:0
0x8760FD: push    eax
0x8760FE: push    ebx
0x8760FF: push    ebp
0x876100: push    esi
0x876101: push    edi
0x876102: mov     eax, ds:0B30AACh
0x876107: xor     eax, esp
0x876109: push    eax
0x87610A: lea     eax, [esp+20h+var_C]
0x87610E: mov     large fs:0, eax
0x876114: mov     ebx, ecx
0x876116: mov     eax, [esp+20h+arg_8]
0x87611A: mov     edi, [eax+0Ch]
0x87611D: mov     esi, ds:0B47674h
0x876123: push    edi
0x876124: call    sub_848E50
0x876129: mov     edx, [ebx]
0x87612B: mov     eax, [esp+20h+arg_0]
0x87612F: mov     edx, [edx+0BCh]
0x876135: push    0
0x876137: push    edi
0x876138: push    eax
0x876139: mov     ecx, ebx
0x87613B: call    edx
0x87613D: mov     eax, [esi+24h]
0x876140: mov     ebp, [esp+20h+arg_C]
0x876144: mov     edi, [eax]
0x876146: mov     edx, [ebp+0]
0x876149: mov     eax, [edx+88h]
0x87614F: push    0
0x876151: mov     ecx, ebp
0x876153: mov     [esp+24h+arg_8], edi
0x876157: call    eax
0x876159: mov     edi, [edi+4]
0x87615C: cmp     edi, eax
0x87615E: mov     [esp+20h+arg_0], eax
0x876162: jz      short loc_87619D
0x876164: test    edi, edi
0x876166: jz      short loc_876188
0x876168: lea     ecx, [edi+4]
0x87616B: push    ecx; lpAddend
0x87616C: call    dword ptr ds:0A2807Ch
0x876172: test    eax, eax
0x876174: jnz     short loc_876184
0x876176: test    edi, edi
0x876178: jz      short loc_876184
0x87617A: mov     edx, [edi]
0x87617C: mov     eax, [edx]
0x87617E: push    1
0x876180: mov     ecx, edi
0x876182: call    eax
0x876184: mov     eax, [esp+20h+arg_0]
0x876188: test    eax, eax
0x87618A: mov     ecx, [esp+20h+arg_8]
0x87618E: mov     [ecx+4], eax
0x876191: jz      short loc_87619D
0x876193: add     eax, 4
0x876196: push    eax; lpAddend
0x876197: call    dword ptr ds:0A28078h
0x87619D: mov     edx, [esi+24h]
0x8761A0: mov     edi, [edx+4]
0x8761A3: push    0
0x8761A5: push    ebp
0x8761A6: mov     ecx, ebx
0x8761A8: mov     [esp+28h+arg_8], edi
0x8761AC: call    sub_848FD0
0x8761B1: mov     edi, [edi+4]
0x8761B4: cmp     edi, eax
0x8761B6: mov     [esp+20h+arg_0], eax
0x8761BA: jz      short loc_8761F5
0x8761BC: test    edi, edi
0x8761BE: jz      short loc_8761E0
0x8761C0: lea     eax, [edi+4]
0x8761C3: push    eax; lpAddend
0x8761C4: call    dword ptr ds:0A2807Ch
0x8761CA: test    eax, eax
0x8761CC: jnz     short loc_8761DC
0x8761CE: test    edi, edi
0x8761D0: jz      short loc_8761DC
0x8761D2: mov     edx, [edi]
0x8761D4: mov     eax, [edx]
0x8761D6: push    1
0x8761D8: mov     ecx, edi
0x8761DA: call    eax
0x8761DC: mov     eax, [esp+20h+arg_0]
0x8761E0: test    eax, eax
0x8761E2: mov     ecx, [esp+20h+arg_8]
0x8761E6: mov     [ecx+4], eax
0x8761E9: jz      short loc_8761F5
0x8761EB: add     eax, 4
0x8761EE: push    eax; lpAddend
0x8761EF: call    dword ptr ds:0A28078h
0x8761F5: mov     edx, [esi+24h]
0x8761F8: mov     eax, [edx+10h]
0x8761FB: mov     edx, [ebp+0]
0x8761FE: mov     [esp+20h+arg_8], eax
0x876202: mov     eax, [edx+90h]
0x876208: push    0
0x87620A: mov     ecx, ebp
0x87620C: call    eax
0x87620E: mov     ecx, [esp+20h+arg_8]
0x876212: mov     ebp, [ecx+4]
0x876215: mov     edi, eax
0x876217: cmp     ebp, edi
0x876219: jz      short loc_876251
0x87621B: test    ebp, ebp
0x87621D: jz      short loc_87623C
0x87621F: lea     edx, [ebp+4]
0x876222: push    edx; lpAddend
0x876223: call    dword ptr ds:0A2807Ch
0x876229: test    eax, eax
0x87622B: jnz     short loc_87623C
0x87622D: test    ebp, ebp
0x87622F: jz      short loc_87623C
0x876231: mov     eax, [ebp+0]
0x876234: mov     edx, [eax]
0x876236: push    1
0x876238: mov     ecx, ebp
0x87623A: call    edx
0x87623C: test    edi, edi
0x87623E: mov     eax, [esp+20h+arg_8]
0x876242: mov     [eax+4], edi
0x876245: jz      short loc_876251
0x876247: add     edi, 4
0x87624A: push    edi; lpAddend
0x87624B: call    dword ptr ds:0A28078h
0x876251: mov     ecx, [esi+24h]
0x876254: mov     edi, [ecx+18h]
0x876257: mov     eax, ds:0B43108h
0x87625C: mov     ebp, [edi+4]
0x87625F: add     edi, 4
0x876262: cmp     ebp, eax
0x876264: mov     [esp+20h+arg_8], eax
0x876268: jz      short loc_87629F
0x87626A: test    ebp, ebp
0x87626C: jz      short loc_87628F
0x87626E: lea     edx, [ebp+4]
0x876271: push    edx; lpAddend
0x876272: call    dword ptr ds:0A2807Ch
0x876278: test    eax, eax
0x87627A: jnz     short loc_87628B
0x87627C: test    ebp, ebp
0x87627E: jz      short loc_87628B
0x876280: mov     eax, [ebp+0]
0x876283: mov     edx, [eax]
0x876285: push    1
0x876287: mov     ecx, ebp
0x876289: call    edx
0x87628B: mov     eax, [esp+20h+arg_8]
0x87628F: test    eax, eax
0x876291: mov     [edi], eax
0x876293: jz      short loc_87629F
0x876295: add     eax, 4
0x876298: push    eax; lpAddend
0x876299: call    dword ptr ds:0A28078h
0x87629F: mov     eax, [esi+24h]
0x8762A2: mov     edi, [eax+1Ch]
0x8762A5: mov     eax, ds:0B4310Ch
0x8762AA: mov     ebp, [edi+4]
0x8762AD: cmp     ebp, eax
0x8762AF: mov     ecx, eax
0x8762B1: mov     [esp+20h+arg_8], ecx
0x8762B5: jz      short loc_8762ED
0x8762B7: test    ebp, ebp
0x8762B9: jz      short loc_8762DC
0x8762BB: lea     ecx, [ebp+4]
0x8762BE: push    ecx; lpAddend
0x8762BF: call    dword ptr ds:0A2807Ch
0x8762C5: test    eax, eax
0x8762C7: jnz     short loc_8762D8
0x8762C9: test    ebp, ebp
0x8762CB: jz      short loc_8762D8
0x8762CD: mov     edx, [ebp+0]
0x8762D0: mov     eax, [edx]
0x8762D2: push    1
0x8762D4: mov     ecx, ebp
0x8762D6: call    eax
0x8762D8: mov     ecx, [esp+20h+arg_8]
0x8762DC: test    ecx, ecx
0x8762DE: mov     [edi+4], ecx
0x8762E1: jz      short loc_8762ED
0x8762E3: add     ecx, 4
0x8762E6: push    ecx; lpAddend
0x8762E7: call    dword ptr ds:0A28078h
0x8762ED: mov     edi, 1
0x8762F2: add     [esi+60h], edi
0x8762F5: mov     [esp+20h+arg_8], esi
0x8762F9: mov     edx, [ebx+38h]
0x8762FC: lea     ecx, [esp+20h+arg_8]
0x876300: push    ecx
0x876301: push    edx
0x876302: lea     ecx, [ebx+40h]
0x876305: mov     [esp+28h+var_4], 0
0x87630D: call    sub_76CE40
0x876312: or      eax, 0FFFFFFFFh
0x876315: add     [esi+60h], eax
0x876318: mov     [esp+20h+var_4], eax
0x87631C: jnz     short loc_876325
0x87631E: mov     ecx, esi
0x876320: call    sub_7604D0
0x876325: add     [ebx+38h], edi
0x876328: mov     ecx, [esp+20h+var_C]
0x87632C: mov     large fs:0, ecx
0x876333: pop     ecx
0x876334: pop     edi
0x876335: pop     esi
0x876336: pop     ebp
0x876337: pop     ebx
0x876338: add     esp, 0Ch
0x87633B: retn    10h
