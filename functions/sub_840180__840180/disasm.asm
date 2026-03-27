0x840180: push    0FFFFFFFFh
0x840182: push    offset SEH_882120
0x840187: mov     eax, large fs:0
0x84018D: push    eax
0x84018E: push    ebx
0x84018F: push    ebp
0x840190: push    esi
0x840191: push    edi
0x840192: mov     eax, ds:0B30AACh
0x840197: xor     eax, esp
0x840199: push    eax
0x84019A: lea     eax, [esp+20h+var_C]
0x84019E: mov     large fs:0, eax
0x8401A4: mov     esi, ecx
0x8401A6: mov     ebx, [esp+20h+arg_8]
0x8401AA: mov     eax, [ebx+10h]
0x8401AD: mov     edi, ds:0B458BCh
0x8401B3: push    eax
0x8401B4: call    sub_848DA0
0x8401B9: mov     ebp, [ebx+0Ch]
0x8401BC: push    ebp
0x8401BD: mov     ecx, esi
0x8401BF: call    sub_848E50
0x8401C4: mov     ebx, [ebx+10h]
0x8401C7: mov     ecx, [esp+20h+arg_0]
0x8401CB: mov     eax, [esi]
0x8401CD: mov     edx, [eax+0BCh]
0x8401D3: push    ebx
0x8401D4: push    ebp
0x8401D5: push    ecx
0x8401D6: mov     ecx, esi
0x8401D8: call    edx
0x8401DA: mov     eax, [edi+24h]
0x8401DD: mov     ebx, [esp+20h+arg_C]
0x8401E1: mov     ebp, [eax]
0x8401E3: mov     edx, [ebx]
0x8401E5: mov     eax, [edx+88h]
0x8401EB: push    0
0x8401ED: mov     ecx, ebx
0x8401EF: mov     [esp+24h+arg_8], ebp
0x8401F3: call    eax
0x8401F5: mov     ebp, [ebp+4]
0x8401F8: cmp     ebp, eax
0x8401FA: mov     [esp+20h+arg_0], eax
0x8401FE: jz      short loc_84023A
0x840200: test    ebp, ebp
0x840202: jz      short loc_840225
0x840204: lea     ecx, [ebp+4]
0x840207: push    ecx; lpAddend
0x840208: call    dword ptr ds:0A2807Ch
0x84020E: test    eax, eax
0x840210: jnz     short loc_840221
0x840212: test    ebp, ebp
0x840214: jz      short loc_840221
0x840216: mov     edx, [ebp+0]
0x840219: mov     eax, [edx]
0x84021B: push    1
0x84021D: mov     ecx, ebp
0x84021F: call    eax
0x840221: mov     eax, [esp+20h+arg_0]
0x840225: test    eax, eax
0x840227: mov     ecx, [esp+20h+arg_8]
0x84022B: mov     [ecx+4], eax
0x84022E: jz      short loc_84023A
0x840230: add     eax, 4
0x840233: push    eax; lpAddend
0x840234: call    dword ptr ds:0A28078h
0x84023A: mov     edx, [esp+20h+arg_8]
0x84023E: push    ebx
0x84023F: push    edx
0x840240: mov     ecx, esi
0x840242: call    sub_848FA0
0x840247: mov     eax, [edi+24h]
0x84024A: mov     ebp, [eax+4]
0x84024D: push    0
0x84024F: push    ebx
0x840250: mov     ecx, esi
0x840252: mov     [esp+28h+arg_8], ebp
0x840256: call    sub_848FD0
0x84025B: mov     ebp, [ebp+4]
0x84025E: cmp     ebp, eax
0x840260: mov     [esp+20h+arg_0], eax
0x840264: jz      short loc_8402A0
0x840266: test    ebp, ebp
0x840268: jz      short loc_84028B
0x84026A: lea     ecx, [ebp+4]
0x84026D: push    ecx; lpAddend
0x84026E: call    dword ptr ds:0A2807Ch
0x840274: test    eax, eax
0x840276: jnz     short loc_840287
0x840278: test    ebp, ebp
0x84027A: jz      short loc_840287
0x84027C: mov     edx, [ebp+0]
0x84027F: mov     eax, [edx]
0x840281: push    1
0x840283: mov     ecx, ebp
0x840285: call    eax
0x840287: mov     eax, [esp+20h+arg_0]
0x84028B: test    eax, eax
0x84028D: mov     ecx, [esp+20h+arg_8]
0x840291: mov     [ecx+4], eax
0x840294: jz      short loc_8402A0
0x840296: add     eax, 4
0x840299: push    eax; lpAddend
0x84029A: call    dword ptr ds:0A28078h
0x8402A0: mov     edx, [esp+20h+arg_8]
0x8402A4: push    ebx
0x8402A5: push    edx
0x8402A6: mov     ecx, esi
0x8402A8: call    sub_848FA0
0x8402AD: mov     eax, [edi+24h]
0x8402B0: mov     ebp, [eax+10h]
0x8402B3: mov     edx, [ebx]
0x8402B5: mov     eax, [edx+90h]
0x8402BB: push    0
0x8402BD: mov     ecx, ebx
0x8402BF: mov     [esp+24h+arg_8], ebp
0x8402C3: call    eax
0x8402C5: mov     ebp, [ebp+4]
0x8402C8: cmp     ebp, eax
0x8402CA: mov     [esp+20h+arg_0], eax
0x8402CE: jz      short loc_84030A
0x8402D0: test    ebp, ebp
0x8402D2: jz      short loc_8402F5
0x8402D4: lea     ecx, [ebp+4]
0x8402D7: push    ecx; lpAddend
0x8402D8: call    dword ptr ds:0A2807Ch
0x8402DE: test    eax, eax
0x8402E0: jnz     short loc_8402F1
0x8402E2: test    ebp, ebp
0x8402E4: jz      short loc_8402F1
0x8402E6: mov     edx, [ebp+0]
0x8402E9: mov     eax, [edx]
0x8402EB: push    1
0x8402ED: mov     ecx, ebp
0x8402EF: call    eax
0x8402F1: mov     eax, [esp+20h+arg_0]
0x8402F5: test    eax, eax
0x8402F7: mov     ecx, [esp+20h+arg_8]
0x8402FB: mov     [ecx+4], eax
0x8402FE: jz      short loc_84030A
0x840300: add     eax, 4
0x840303: push    eax; lpAddend
0x840304: call    dword ptr ds:0A28078h
0x84030A: mov     edx, [esp+20h+arg_8]
0x84030E: push    ebx
0x84030F: push    edx
0x840310: mov     ecx, esi
0x840312: call    sub_848FA0
0x840317: mov     ebx, 1
0x84031C: add     [edi+60h], ebx
0x84031F: mov     [esp+20h+arg_8], edi
0x840323: mov     ecx, [esi+38h]
0x840326: lea     eax, [esp+20h+arg_8]
0x84032A: push    eax
0x84032B: push    ecx
0x84032C: lea     ecx, [esi+40h]
0x84032F: mov     [esp+28h+var_4], 0
0x840337: call    sub_76CE40
0x84033C: or      eax, 0FFFFFFFFh
0x84033F: add     [edi+60h], eax
0x840342: mov     [esp+20h+var_4], eax
0x840346: jnz     short loc_84034F
0x840348: mov     ecx, edi
0x84034A: call    sub_7604D0
0x84034F: add     [esi+38h], ebx
0x840352: mov     ecx, [esp+20h+var_C]
0x840356: mov     large fs:0, ecx
0x84035D: pop     ecx
0x84035E: pop     edi
0x84035F: pop     esi
0x840360: pop     ebp
0x840361: pop     ebx
0x840362: add     esp, 0Ch
0x840365: retn    10h
