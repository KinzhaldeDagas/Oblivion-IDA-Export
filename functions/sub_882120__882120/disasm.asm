0x882120: push    0FFFFFFFFh
0x882122: push    offset SEH_882120
0x882127: mov     eax, large fs:0
0x88212D: push    eax
0x88212E: push    ebx
0x88212F: push    ebp
0x882130: push    esi
0x882131: push    edi
0x882132: mov     eax, ds:0B30AACh
0x882137: xor     eax, esp
0x882139: push    eax
0x88213A: lea     eax, [esp+20h+var_C]
0x88213E: mov     large fs:0, eax
0x882144: mov     esi, ecx
0x882146: mov     ebx, [esp+20h+arg_8]
0x88214A: mov     eax, [ebx+10h]
0x88214D: mov     edi, ds:0B47760h
0x882153: push    eax
0x882154: call    sub_848C40
0x882159: mov     ebx, [ebx+0Ch]
0x88215C: push    ebx
0x88215D: mov     ecx, esi
0x88215F: call    sub_848E50
0x882164: mov     ecx, [esp+20h+arg_0]
0x882168: mov     eax, [esi]
0x88216A: mov     edx, [eax+0BCh]
0x882170: push    0
0x882172: push    ebx
0x882173: push    ecx
0x882174: mov     ecx, esi
0x882176: call    edx
0x882178: mov     eax, [edi+24h]
0x88217B: mov     ecx, [esp+20h+arg_C]
0x88217F: mov     ebx, [eax]
0x882181: push    0
0x882183: push    ecx
0x882184: mov     ecx, esi
0x882186: mov     [esp+28h+arg_8], ebx
0x88218A: call    sub_848FD0
0x88218F: mov     ebx, [ebx+4]
0x882192: mov     ebp, eax
0x882194: cmp     ebx, ebp
0x882196: jz      short loc_8821CD
0x882198: test    ebx, ebx
0x88219A: jz      short loc_8821B8
0x88219C: lea     edx, [ebx+4]
0x88219F: push    edx; lpAddend
0x8821A0: call    dword ptr ds:0A2807Ch
0x8821A6: test    eax, eax
0x8821A8: jnz     short loc_8821B8
0x8821AA: test    ebx, ebx
0x8821AC: jz      short loc_8821B8
0x8821AE: mov     eax, [ebx]
0x8821B0: mov     edx, [eax]
0x8821B2: push    1
0x8821B4: mov     ecx, ebx
0x8821B6: call    edx
0x8821B8: test    ebp, ebp
0x8821BA: mov     eax, [esp+20h+arg_8]
0x8821BE: mov     [eax+4], ebp
0x8821C1: jz      short loc_8821CD
0x8821C3: add     ebp, 4
0x8821C6: push    ebp; lpAddend
0x8821C7: call    dword ptr ds:0A28078h
0x8821CD: mov     ecx, [edi+24h]
0x8821D0: mov     ebp, [ecx+0Ch]
0x8821D3: mov     eax, ds:0B43110h
0x8821D8: mov     ebx, [ebp+4]
0x8821DB: cmp     ebx, eax
0x8821DD: mov     ecx, eax
0x8821DF: mov     [esp+20h+arg_8], ecx
0x8821E3: jz      short loc_88221A
0x8821E5: test    ebx, ebx
0x8821E7: jz      short loc_882209
0x8821E9: lea     edx, [ebx+4]
0x8821EC: push    edx; lpAddend
0x8821ED: call    dword ptr ds:0A2807Ch
0x8821F3: test    eax, eax
0x8821F5: jnz     short loc_882205
0x8821F7: test    ebx, ebx
0x8821F9: jz      short loc_882205
0x8821FB: mov     eax, [ebx]
0x8821FD: mov     edx, [eax]
0x8821FF: push    1
0x882201: mov     ecx, ebx
0x882203: call    edx
0x882205: mov     ecx, [esp+20h+arg_8]
0x882209: test    ecx, ecx
0x88220B: mov     [ebp+4], ecx
0x88220E: jz      short loc_88221A
0x882210: add     ecx, 4
0x882213: push    ecx; lpAddend
0x882214: call    dword ptr ds:0A28078h
0x88221A: mov     ebx, 1
0x88221F: add     [edi+60h], ebx
0x882222: mov     [esp+20h+arg_8], edi
0x882226: mov     ecx, [esi+38h]
0x882229: lea     eax, [esp+20h+arg_8]
0x88222D: push    eax
0x88222E: push    ecx
0x88222F: lea     ecx, [esi+40h]
0x882232: mov     [esp+28h+var_4], 0
0x88223A: call    sub_76CE40
0x88223F: or      eax, 0FFFFFFFFh
0x882242: add     [edi+60h], eax
0x882245: mov     [esp+20h+var_4], eax
0x882249: jnz     short loc_882252
0x88224B: mov     ecx, edi
0x88224D: call    sub_7604D0
0x882252: add     [esi+38h], ebx
0x882255: mov     ecx, dword ptr [esp+20h+var_C]
0x882259: mov     large fs:0, ecx
0x882260: pop     ecx
0x882261: pop     edi
0x882262: pop     esi
0x882263: pop     ebp
0x882264: pop     ebx
0x882265: add     esp, 0Ch
0x882268: retn    10h
