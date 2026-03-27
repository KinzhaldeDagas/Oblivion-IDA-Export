0x87FA20: push    0FFFFFFFFh
0x87FA22: push    offset SEH_880560
0x87FA27: mov     eax, large fs:0
0x87FA2D: push    eax
0x87FA2E: push    ebx
0x87FA2F: push    ebp
0x87FA30: push    esi
0x87FA31: push    edi
0x87FA32: mov     eax, ds:0B30AACh
0x87FA37: xor     eax, esp
0x87FA39: push    eax
0x87FA3A: lea     eax, [esp+20h+var_C]
0x87FA3E: mov     large fs:0, eax
0x87FA44: mov     esi, ecx
0x87FA46: mov     ebx, [esp+20h+arg_8]
0x87FA4A: mov     eax, [ebx+10h]
0x87FA4D: mov     edi, ds:0B47718h
0x87FA53: push    eax
0x87FA54: call    sub_848C40
0x87FA59: mov     ebx, [ebx+0Ch]
0x87FA5C: push    ebx
0x87FA5D: mov     ecx, esi
0x87FA5F: call    sub_848E50
0x87FA64: mov     ecx, [esp+20h+arg_0]
0x87FA68: mov     eax, [esi]
0x87FA6A: mov     edx, [eax+0BCh]
0x87FA70: push    0
0x87FA72: push    ebx
0x87FA73: push    ecx
0x87FA74: mov     ecx, esi
0x87FA76: call    edx
0x87FA78: mov     eax, [edi+24h]
0x87FA7B: mov     ecx, [esp+20h+arg_C]
0x87FA7F: mov     ebx, [eax]
0x87FA81: mov     edx, [ecx]
0x87FA83: mov     eax, [edx+88h]
0x87FA89: push    0
0x87FA8B: mov     [esp+24h+arg_8], ebx
0x87FA8F: call    eax
0x87FA91: mov     ebx, [ebx+4]
0x87FA94: mov     ebp, eax
0x87FA96: cmp     ebx, ebp
0x87FA98: jz      short loc_87FACF
0x87FA9A: test    ebx, ebx
0x87FA9C: jz      short loc_87FABA
0x87FA9E: lea     ecx, [ebx+4]
0x87FAA1: push    ecx; lpAddend
0x87FAA2: call    dword ptr ds:0A2807Ch
0x87FAA8: test    eax, eax
0x87FAAA: jnz     short loc_87FABA
0x87FAAC: test    ebx, ebx
0x87FAAE: jz      short loc_87FABA
0x87FAB0: mov     edx, [ebx]
0x87FAB2: mov     eax, [edx]
0x87FAB4: push    1
0x87FAB6: mov     ecx, ebx
0x87FAB8: call    eax
0x87FABA: test    ebp, ebp
0x87FABC: mov     ecx, [esp+20h+arg_8]
0x87FAC0: mov     [ecx+4], ebp
0x87FAC3: jz      short loc_87FACF
0x87FAC5: add     ebp, 4
0x87FAC8: push    ebp; lpAddend
0x87FAC9: call    dword ptr ds:0A28078h
0x87FACF: mov     edx, [edi+24h]
0x87FAD2: mov     eax, [esp+20h+arg_C]
0x87FAD6: mov     ebx, [edx+4]
0x87FAD9: push    0
0x87FADB: push    eax
0x87FADC: mov     ecx, esi
0x87FADE: mov     [esp+28h+arg_8], ebx
0x87FAE2: call    sub_848FD0
0x87FAE7: mov     ebx, [ebx+4]
0x87FAEA: mov     ebp, eax
0x87FAEC: cmp     ebx, ebp
0x87FAEE: jz      short loc_87FB25
0x87FAF0: test    ebx, ebx
0x87FAF2: jz      short loc_87FB10
0x87FAF4: lea     ecx, [ebx+4]
0x87FAF7: push    ecx; lpAddend
0x87FAF8: call    dword ptr ds:0A2807Ch
0x87FAFE: test    eax, eax
0x87FB00: jnz     short loc_87FB10
0x87FB02: test    ebx, ebx
0x87FB04: jz      short loc_87FB10
0x87FB06: mov     edx, [ebx]
0x87FB08: mov     eax, [edx]
0x87FB0A: push    1
0x87FB0C: mov     ecx, ebx
0x87FB0E: call    eax
0x87FB10: test    ebp, ebp
0x87FB12: mov     ecx, [esp+20h+arg_8]
0x87FB16: mov     [ecx+4], ebp
0x87FB19: jz      short loc_87FB25
0x87FB1B: add     ebp, 4
0x87FB1E: push    ebp; lpAddend
0x87FB1F: call    dword ptr ds:0A28078h
0x87FB25: mov     edx, [edi+24h]
0x87FB28: mov     ebp, [edx+10h]
0x87FB2B: mov     eax, ds:0B43110h
0x87FB30: mov     ebx, [ebp+4]
0x87FB33: cmp     ebx, eax
0x87FB35: mov     ecx, eax
0x87FB37: mov     [esp+20h+arg_C], ecx
0x87FB3B: jz      short loc_87FB72
0x87FB3D: test    ebx, ebx
0x87FB3F: jz      short loc_87FB61
0x87FB41: lea     eax, [ebx+4]
0x87FB44: push    eax; lpAddend
0x87FB45: call    dword ptr ds:0A2807Ch
0x87FB4B: test    eax, eax
0x87FB4D: jnz     short loc_87FB5D
0x87FB4F: test    ebx, ebx
0x87FB51: jz      short loc_87FB5D
0x87FB53: mov     edx, [ebx]
0x87FB55: mov     eax, [edx]
0x87FB57: push    1
0x87FB59: mov     ecx, ebx
0x87FB5B: call    eax
0x87FB5D: mov     ecx, [esp+20h+arg_C]
0x87FB61: test    ecx, ecx
0x87FB63: mov     [ebp+4], ecx
0x87FB66: jz      short loc_87FB72
0x87FB68: add     ecx, 4
0x87FB6B: push    ecx; lpAddend
0x87FB6C: call    dword ptr ds:0A28078h
0x87FB72: mov     ebx, 1
0x87FB77: add     [edi+60h], ebx
0x87FB7A: mov     [esp+20h+arg_C], edi
0x87FB7E: mov     edx, [esi+38h]
0x87FB81: lea     ecx, [esp+20h+arg_C]
0x87FB85: push    ecx
0x87FB86: push    edx
0x87FB87: lea     ecx, [esi+40h]
0x87FB8A: mov     [esp+28h+var_4], 0
0x87FB92: call    sub_76CE40
0x87FB97: or      eax, 0FFFFFFFFh
0x87FB9A: add     [edi+60h], eax
0x87FB9D: mov     [esp+20h+var_4], eax
0x87FBA1: jnz     short loc_87FBAA
0x87FBA3: mov     ecx, edi
0x87FBA5: call    sub_7604D0
0x87FBAA: add     [esi+38h], ebx
0x87FBAD: mov     ecx, [esp+20h+var_C]
0x87FBB1: mov     large fs:0, ecx
0x87FBB8: pop     ecx
0x87FBB9: pop     edi
0x87FBBA: pop     esi
0x87FBBB: pop     ebp
0x87FBBC: pop     ebx
0x87FBBD: add     esp, 0Ch
0x87FBC0: retn    10h
