0x83BA70: push    0FFFFFFFFh
0x83BA72: push    offset SEH_882120
0x83BA77: mov     eax, large fs:0
0x83BA7D: push    eax
0x83BA7E: push    ebx
0x83BA7F: push    ebp
0x83BA80: push    esi
0x83BA81: push    edi
0x83BA82: mov     eax, ds:0B30AACh
0x83BA87: xor     eax, esp
0x83BA89: push    eax
0x83BA8A: lea     eax, [esp+20h+var_C]
0x83BA8E: mov     large fs:0, eax
0x83BA94: mov     esi, ecx
0x83BA96: mov     ebx, [esp+20h+arg_8]
0x83BA9A: mov     eax, [ebx+10h]
0x83BA9D: mov     edi, ds:0B45B8Ch
0x83BAA3: push    eax
0x83BAA4: call    sub_848C40
0x83BAA9: mov     ebx, [ebx+0Ch]
0x83BAAC: push    ebx
0x83BAAD: mov     ecx, esi
0x83BAAF: call    sub_848E50
0x83BAB4: mov     ecx, [esp+20h+arg_0]
0x83BAB8: mov     eax, [esi]
0x83BABA: mov     edx, [eax+0BCh]
0x83BAC0: push    0
0x83BAC2: push    ebx
0x83BAC3: push    ecx
0x83BAC4: mov     ecx, esi
0x83BAC6: call    edx
0x83BAC8: mov     eax, [edi+24h]
0x83BACB: mov     ebx, [esp+20h+arg_C]
0x83BACF: mov     ebp, [eax]
0x83BAD1: mov     edx, [ebx]
0x83BAD3: mov     eax, [edx+88h]
0x83BAD9: push    0
0x83BADB: mov     ecx, ebx
0x83BADD: mov     [esp+24h+arg_8], ebp
0x83BAE1: call    eax
0x83BAE3: mov     ebp, [ebp+4]
0x83BAE6: cmp     ebp, eax
0x83BAE8: mov     [esp+20h+arg_0], eax
0x83BAEC: jz      short loc_83BB28
0x83BAEE: test    ebp, ebp
0x83BAF0: jz      short loc_83BB13
0x83BAF2: lea     ecx, [ebp+4]
0x83BAF5: push    ecx; lpAddend
0x83BAF6: call    dword ptr ds:0A2807Ch
0x83BAFC: test    eax, eax
0x83BAFE: jnz     short loc_83BB0F
0x83BB00: test    ebp, ebp
0x83BB02: jz      short loc_83BB0F
0x83BB04: mov     edx, [ebp+0]
0x83BB07: mov     eax, [edx]
0x83BB09: push    1
0x83BB0B: mov     ecx, ebp
0x83BB0D: call    eax
0x83BB0F: mov     eax, [esp+20h+arg_0]
0x83BB13: test    eax, eax
0x83BB15: mov     ecx, [esp+20h+arg_8]
0x83BB19: mov     [ecx+4], eax
0x83BB1C: jz      short loc_83BB28
0x83BB1E: add     eax, 4
0x83BB21: push    eax; lpAddend
0x83BB22: call    dword ptr ds:0A28078h
0x83BB28: mov     edx, [esp+20h+arg_8]
0x83BB2C: push    ebx
0x83BB2D: push    edx
0x83BB2E: mov     ecx, esi
0x83BB30: call    sub_848FA0
0x83BB35: mov     eax, [edi+24h]
0x83BB38: mov     ebp, [eax+4]
0x83BB3B: push    0
0x83BB3D: push    ebx
0x83BB3E: mov     ecx, esi
0x83BB40: mov     [esp+28h+arg_8], ebp
0x83BB44: call    sub_848FD0
0x83BB49: mov     ebp, [ebp+4]
0x83BB4C: cmp     ebp, eax
0x83BB4E: mov     [esp+20h+arg_0], eax
0x83BB52: jz      short loc_83BB8E
0x83BB54: test    ebp, ebp
0x83BB56: jz      short loc_83BB79
0x83BB58: lea     ecx, [ebp+4]
0x83BB5B: push    ecx; lpAddend
0x83BB5C: call    dword ptr ds:0A2807Ch
0x83BB62: test    eax, eax
0x83BB64: jnz     short loc_83BB75
0x83BB66: test    ebp, ebp
0x83BB68: jz      short loc_83BB75
0x83BB6A: mov     edx, [ebp+0]
0x83BB6D: mov     eax, [edx]
0x83BB6F: push    1
0x83BB71: mov     ecx, ebp
0x83BB73: call    eax
0x83BB75: mov     eax, [esp+20h+arg_0]
0x83BB79: test    eax, eax
0x83BB7B: mov     ecx, [esp+20h+arg_8]
0x83BB7F: mov     [ecx+4], eax
0x83BB82: jz      short loc_83BB8E
0x83BB84: add     eax, 4
0x83BB87: push    eax; lpAddend
0x83BB88: call    dword ptr ds:0A28078h
0x83BB8E: mov     edx, [esp+20h+arg_8]
0x83BB92: push    ebx
0x83BB93: push    edx
0x83BB94: mov     ecx, esi
0x83BB96: call    sub_848FA0
0x83BB9B: mov     ebx, 1
0x83BBA0: add     [edi+60h], ebx
0x83BBA3: mov     [esp+20h+arg_8], edi
0x83BBA7: mov     ecx, [esi+38h]
0x83BBAA: lea     eax, [esp+20h+arg_8]
0x83BBAE: push    eax
0x83BBAF: push    ecx
0x83BBB0: lea     ecx, [esi+40h]
0x83BBB3: mov     [esp+28h+var_4], 0
0x83BBBB: call    sub_76CE40
0x83BBC0: or      eax, 0FFFFFFFFh
0x83BBC3: add     [edi+60h], eax
0x83BBC6: mov     [esp+20h+var_4], eax
0x83BBCA: jnz     short loc_83BBD3
0x83BBCC: mov     ecx, edi
0x83BBCE: call    sub_7604D0
0x83BBD3: add     [esi+38h], ebx
0x83BBD6: mov     ecx, [esp+20h+var_C]
0x83BBDA: mov     large fs:0, ecx
0x83BBE1: pop     ecx
0x83BBE2: pop     edi
0x83BBE3: pop     esi
0x83BBE4: pop     ebp
0x83BBE5: pop     ebx
0x83BBE6: add     esp, 0Ch
0x83BBE9: retn    10h
