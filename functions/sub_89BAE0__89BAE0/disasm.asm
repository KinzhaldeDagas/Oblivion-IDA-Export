0x89BAE0: sub     esp, 24h
0x89BAE3: push    esi
0x89BAE4: mov     esi, ecx
0x89BAE6: mov     eax, [esi+88h]
0x89BAEC: push    edi
0x89BAED: xor     edi, edi
0x89BAEF: cmp     eax, edi
0x89BAF1: mov     [esp+2Ch+var_24], esi
0x89BAF5: jz      short loc_89BB1E
0x89BAF7: mov     eax, [esp+2Ch+arg_0]
0x89BAFB: lea     ecx, [esp+2Ch+var_24]
0x89BAFF: push    ecx
0x89BB00: mov     ecx, [esi+80h]
0x89BB06: mov     byte ptr [esp+30h+var_24], 0Ah
0x89BB0B: mov     [esp+30h+var_20], eax
0x89BB0F: call    sub_8D8830
0x89BB14: pop     edi
0x89BB15: xor     eax, eax
0x89BB17: pop     esi
0x89BB18: add     esp, 24h
0x89BB1B: retn    4
0x89BB1E: push    ebx
0x89BB1F: mov     ebx, [esp+30h+arg_0]
0x89BB23: cmp     [ebx+4], di
0x89BB27: jz      short loc_89BB2D
0x89BB29: inc     word ptr [ebx+6]
0x89BB2D: push    ebp
0x89BB2E: mov     ebp, [esi+88h]
0x89BB34: lea     ecx, [esp+34h+var_1C]
0x89BB38: inc     ebp
0x89BB39: mov     [esi+88h], ebp
0x89BB3F: mov     eax, [ebx]
0x89BB41: lea     edx, [esp+34h+var_10]
0x89BB45: push    ecx
0x89BB46: mov     ecx, ebx
0x89BB48: mov     [esp+38h+var_1C], edx
0x89BB4C: mov     [esp+38h+var_18], edi
0x89BB50: mov     [esp+38h+var_14], 80000004h
0x89BB58: call    dword ptr [eax+0Ch]
0x89BB5B: mov     eax, [esp+34h+var_18]
0x89BB5F: xor     ebp, ebp
0x89BB61: cmp     eax, edi
0x89BB63: mov     [ebx+8], esi
0x89BB66: jle     loc_89BC2D
0x89BB6C: lea     esp, [esp+0]
0x89BB70: mov     edx, [esp+34h+var_1C]
0x89BB74: mov     eax, [edx+edi*4]
0x89BB77: mov     ebx, [eax+54h]
0x89BB7A: mov     ecx, [eax+0BCh]
0x89BB80: lea     esi, [eax+0B8h]
0x89BB86: xor     eax, eax
0x89BB88: test    ecx, ecx
0x89BB8A: jle     short loc_89BB9D
0x89BB8C: mov     edx, [esi]
0x89BB8E: mov     edi, edi
0x89BB90: cmp     dword ptr [edx], 0
0x89BB93: jz      short loc_89BBE7
0x89BB95: inc     eax
0x89BB96: add     edx, 4
0x89BB99: cmp     eax, ecx
0x89BB9B: jl      short loc_89BB90
0x89BB9D: mov     eax, [esi+8]
0x89BBA0: mov     ecx, [esi+4]
0x89BBA3: and     eax, 3FFFFFFFh
0x89BBA8: cmp     ecx, eax
0x89BBAA: jnz     short loc_89BBB7
0x89BBAC: push    4
0x89BBAE: push    esi
0x89BBAF: call    sub_8A6EE0
0x89BBB4: add     esp, 8
0x89BBB7: mov     ecx, [esi+4]
0x89BBBA: mov     eax, [esp+34h+arg_0]
0x89BBBE: mov     edx, [esi]
0x89BBC0: mov     [edx+ecx*4], eax
0x89BBC3: inc     dword ptr [esi+4]
0x89BBC6: cmp     word ptr [ebx+20h], 0FFFFh
0x89BBCC: jz      short loc_89BC14
0x89BBCE: test    ebp, ebp
0x89BBD0: jnz     short loc_89BBF6
0x89BBD2: mov     ecx, [esp+34h+var_1C]
0x89BBD6: mov     edx, [esp+34h+arg_0]
0x89BBDA: mov     ebp, [ecx+edi*4]
0x89BBDD: push    edx
0x89BBDE: mov     ecx, ebx
0x89BBE0: call    sub_8DE080
0x89BBE5: jmp     short loc_89BC14
0x89BBE7: test    eax, eax
0x89BBE9: jl      short loc_89BB9D
0x89BBEB: mov     ecx, [esi]
0x89BBED: mov     edx, [esp+34h+arg_0]
0x89BBF1: mov     [ecx+eax*4], edx
0x89BBF4: jmp     short loc_89BBC6
0x89BBF6: mov     eax, [esp+34h+var_1C]
0x89BBFA: mov     eax, [eax+edi*4]
0x89BBFD: mov     ecx, [ebp+54h]
0x89BC00: cmp     ecx, [eax+54h]
0x89BC03: jz      short loc_89BC14
0x89BC05: mov     edx, [esp+34h+var_24]
0x89BC09: push    eax
0x89BC0A: push    ebp
0x89BC0B: push    edx
0x89BC0C: call    sub_8CD320
0x89BC11: add     esp, 0Ch
0x89BC14: mov     eax, [esp+34h+var_18]
0x89BC18: inc     edi
0x89BC19: cmp     edi, eax
0x89BC1B: jl      loc_89BB70
0x89BC21: test    ebp, ebp
0x89BC23: mov     ebx, [esp+34h+arg_0]
0x89BC27: mov     esi, [esp+34h+var_24]
0x89BC2B: jnz     short loc_89BC3C
0x89BC2D: mov     eax, [esp+34h+var_1C]
0x89BC31: mov     ecx, [eax]
0x89BC33: mov     ecx, [ecx+54h]
0x89BC36: push    ebx
0x89BC37: call    sub_8DE080
0x89BC3C: dec     dword ptr [esi+88h]
0x89BC42: pop     ebp
0x89BC43: jnz     short loc_89BC60
0x89BC45: mov     eax, [esi+84h]
0x89BC4B: test    eax, eax
0x89BC4D: jz      short loc_89BC60
0x89BC4F: mov     al, [esi+90h]
0x89BC55: test    al, al
0x89BC57: jnz     short loc_89BC60
0x89BC59: mov     ecx, esi
0x89BC5B: call    sub_899210
0x89BC60: push    ebx
0x89BC61: push    esi
0x89BC62: call    sub_8DC260
0x89BC67: mov     eax, [esp+38h+var_14]
0x89BC6B: add     esp, 8
0x89BC6E: test    eax, eax
0x89BC70: js      short loc_89BCA7
0x89BC72: mov     ecx, large fs:2Ch
0x89BC79: mov     edx, ds:0BA9DE4h
0x89BC7F: mov     edx, [ecx+edx*4]
0x89BC82: mov     ecx, [edx+19Ch]
0x89BC88: test    ecx, ecx
0x89BC8A: jnz     short loc_89BC92
0x89BC8C: mov     ecx, ds:0BA7D9Ch
0x89BC92: and     eax, 3FFFFFFFh
0x89BC97: push    14h
0x89BC99: shl     eax, 2
0x89BC9C: push    eax
0x89BC9D: mov     eax, [esp+38h+var_1C]
0x89BCA1: push    eax
0x89BCA2: call    sub_8A75D0
0x89BCA7: mov     eax, ebx
0x89BCA9: pop     ebx
0x89BCAA: pop     edi
0x89BCAB: pop     esi
0x89BCAC: add     esp, 24h
0x89BCAF: retn    4
