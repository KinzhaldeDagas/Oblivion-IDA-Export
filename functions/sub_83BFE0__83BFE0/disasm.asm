0x83BFE0: push    0FFFFFFFFh
0x83BFE2: push    offset SEH_882120
0x83BFE7: mov     eax, large fs:0
0x83BFED: push    eax
0x83BFEE: push    ebx
0x83BFEF: push    ebp
0x83BFF0: push    esi
0x83BFF1: push    edi
0x83BFF2: mov     eax, ds:0B30AACh
0x83BFF7: xor     eax, esp
0x83BFF9: push    eax
0x83BFFA: lea     eax, [esp+20h+var_C]
0x83BFFE: mov     large fs:0, eax
0x83C004: mov     esi, ecx
0x83C006: mov     edi, [esp+20h+arg_8]
0x83C00A: mov     eax, [edi+10h]
0x83C00D: mov     ebx, ds:0B457B8h
0x83C013: push    eax
0x83C014: call    sub_848DA0
0x83C019: mov     edi, [edi+0Ch]
0x83C01C: push    edi
0x83C01D: mov     ecx, esi
0x83C01F: call    sub_848E50
0x83C024: mov     ecx, [esp+20h+arg_0]
0x83C028: mov     eax, [esi]
0x83C02A: mov     edx, [eax+0BCh]
0x83C030: push    0
0x83C032: push    edi
0x83C033: push    ecx
0x83C034: mov     ecx, esi
0x83C036: call    edx
0x83C038: mov     eax, [ebx+24h]
0x83C03B: mov     edi, [esp+20h+arg_C]
0x83C03F: mov     ebp, [eax]
0x83C041: mov     edx, [edi]
0x83C043: mov     eax, [edx+88h]
0x83C049: push    0
0x83C04B: mov     ecx, edi
0x83C04D: mov     [esp+24h+arg_8], ebp
0x83C051: call    eax
0x83C053: mov     ebp, [ebp+4]
0x83C056: cmp     ebp, eax
0x83C058: mov     [esp+20h+arg_0], eax
0x83C05C: jz      short loc_83C098
0x83C05E: test    ebp, ebp
0x83C060: jz      short loc_83C083
0x83C062: lea     ecx, [ebp+4]
0x83C065: push    ecx; lpAddend
0x83C066: call    dword ptr ds:0A2807Ch
0x83C06C: test    eax, eax
0x83C06E: jnz     short loc_83C07F
0x83C070: test    ebp, ebp
0x83C072: jz      short loc_83C07F
0x83C074: mov     edx, [ebp+0]
0x83C077: mov     eax, [edx]
0x83C079: push    1
0x83C07B: mov     ecx, ebp
0x83C07D: call    eax
0x83C07F: mov     eax, [esp+20h+arg_0]
0x83C083: test    eax, eax
0x83C085: mov     ecx, [esp+20h+arg_8]
0x83C089: mov     [ecx+4], eax
0x83C08C: jz      short loc_83C098
0x83C08E: add     eax, 4
0x83C091: push    eax; lpAddend
0x83C092: call    dword ptr ds:0A28078h
0x83C098: mov     edx, [esp+20h+arg_8]
0x83C09C: push    edi
0x83C09D: push    edx
0x83C09E: mov     ecx, esi
0x83C0A0: call    sub_848FA0
0x83C0A5: mov     eax, [ebx+24h]
0x83C0A8: mov     ebp, [eax+4]
0x83C0AB: push    0
0x83C0AD: push    edi
0x83C0AE: mov     ecx, esi
0x83C0B0: mov     [esp+28h+arg_8], ebp
0x83C0B4: call    sub_848FD0
0x83C0B9: mov     ebp, [ebp+4]
0x83C0BC: cmp     ebp, eax
0x83C0BE: mov     [esp+20h+arg_0], eax
0x83C0C2: jz      short loc_83C0FE
0x83C0C4: test    ebp, ebp
0x83C0C6: jz      short loc_83C0E9
0x83C0C8: lea     ecx, [ebp+4]
0x83C0CB: push    ecx; lpAddend
0x83C0CC: call    dword ptr ds:0A2807Ch
0x83C0D2: test    eax, eax
0x83C0D4: jnz     short loc_83C0E5
0x83C0D6: test    ebp, ebp
0x83C0D8: jz      short loc_83C0E5
0x83C0DA: mov     edx, [ebp+0]
0x83C0DD: mov     eax, [edx]
0x83C0DF: push    1
0x83C0E1: mov     ecx, ebp
0x83C0E3: call    eax
0x83C0E5: mov     eax, [esp+20h+arg_0]
0x83C0E9: test    eax, eax
0x83C0EB: mov     ecx, [esp+20h+arg_8]
0x83C0EF: mov     [ecx+4], eax
0x83C0F2: jz      short loc_83C0FE
0x83C0F4: add     eax, 4
0x83C0F7: push    eax; lpAddend
0x83C0F8: call    dword ptr ds:0A28078h
0x83C0FE: mov     edx, [esp+20h+arg_8]
0x83C102: push    edi
0x83C103: push    edx
0x83C104: mov     ecx, esi
0x83C106: call    sub_848FA0
0x83C10B: mov     eax, [ebx+24h]
0x83C10E: mov     ebp, [eax+10h]
0x83C111: mov     edx, [edi]
0x83C113: mov     eax, [edx+90h]
0x83C119: push    0
0x83C11B: mov     ecx, edi
0x83C11D: mov     [esp+24h+arg_8], ebp
0x83C121: call    eax
0x83C123: mov     ebp, [ebp+4]
0x83C126: cmp     ebp, eax
0x83C128: mov     [esp+20h+arg_0], eax
0x83C12C: jz      short loc_83C168
0x83C12E: test    ebp, ebp
0x83C130: jz      short loc_83C153
0x83C132: lea     ecx, [ebp+4]
0x83C135: push    ecx; lpAddend
0x83C136: call    dword ptr ds:0A2807Ch
0x83C13C: test    eax, eax
0x83C13E: jnz     short loc_83C14F
0x83C140: test    ebp, ebp
0x83C142: jz      short loc_83C14F
0x83C144: mov     edx, [ebp+0]
0x83C147: mov     eax, [edx]
0x83C149: push    1
0x83C14B: mov     ecx, ebp
0x83C14D: call    eax
0x83C14F: mov     eax, [esp+20h+arg_0]
0x83C153: test    eax, eax
0x83C155: mov     ecx, [esp+20h+arg_8]
0x83C159: mov     [ecx+4], eax
0x83C15C: jz      short loc_83C168
0x83C15E: add     eax, 4
0x83C161: push    eax; lpAddend
0x83C162: call    dword ptr ds:0A28078h
0x83C168: mov     edx, [esp+20h+arg_8]
0x83C16C: push    edi
0x83C16D: push    edx
0x83C16E: mov     ecx, esi
0x83C170: call    sub_848FA0
0x83C175: mov     ecx, [ebx+24h]
0x83C178: mov     edi, [ecx+18h]
0x83C17B: mov     eax, ds:0B43108h
0x83C180: mov     ebp, [edi+4]
0x83C183: add     edi, 4
0x83C186: cmp     ebp, eax
0x83C188: mov     [esp+20h+arg_8], eax
0x83C18C: jz      short loc_83C1C3
0x83C18E: test    ebp, ebp
0x83C190: jz      short loc_83C1B3
0x83C192: lea     edx, [ebp+4]
0x83C195: push    edx; lpAddend
0x83C196: call    dword ptr ds:0A2807Ch
0x83C19C: test    eax, eax
0x83C19E: jnz     short loc_83C1AF
0x83C1A0: test    ebp, ebp
0x83C1A2: jz      short loc_83C1AF
0x83C1A4: mov     eax, [ebp+0]
0x83C1A7: mov     edx, [eax]
0x83C1A9: push    1
0x83C1AB: mov     ecx, ebp
0x83C1AD: call    edx
0x83C1AF: mov     eax, [esp+20h+arg_8]
0x83C1B3: test    eax, eax
0x83C1B5: mov     [edi], eax
0x83C1B7: jz      short loc_83C1C3
0x83C1B9: add     eax, 4
0x83C1BC: push    eax; lpAddend
0x83C1BD: call    dword ptr ds:0A28078h
0x83C1C3: mov     eax, [ebx+24h]
0x83C1C6: mov     ebp, [eax+1Ch]
0x83C1C9: mov     eax, ds:0B4310Ch
0x83C1CE: mov     edi, [ebp+4]
0x83C1D1: cmp     edi, eax
0x83C1D3: mov     ecx, eax
0x83C1D5: mov     [esp+20h+arg_8], ecx
0x83C1D9: jz      short loc_83C210
0x83C1DB: test    edi, edi
0x83C1DD: jz      short loc_83C1FF
0x83C1DF: lea     ecx, [edi+4]
0x83C1E2: push    ecx; lpAddend
0x83C1E3: call    dword ptr ds:0A2807Ch
0x83C1E9: test    eax, eax
0x83C1EB: jnz     short loc_83C1FB
0x83C1ED: test    edi, edi
0x83C1EF: jz      short loc_83C1FB
0x83C1F1: mov     edx, [edi]
0x83C1F3: mov     eax, [edx]
0x83C1F5: push    1
0x83C1F7: mov     ecx, edi
0x83C1F9: call    eax
0x83C1FB: mov     ecx, [esp+20h+arg_8]
0x83C1FF: test    ecx, ecx
0x83C201: mov     [ebp+4], ecx
0x83C204: jz      short loc_83C210
0x83C206: add     ecx, 4
0x83C209: push    ecx; lpAddend
0x83C20A: call    dword ptr ds:0A28078h
0x83C210: mov     edi, 1
0x83C215: add     [ebx+60h], edi
0x83C218: mov     [esp+20h+arg_8], ebx
0x83C21C: mov     edx, [esi+38h]
0x83C21F: lea     ecx, [esp+20h+arg_8]
0x83C223: push    ecx
0x83C224: push    edx
0x83C225: lea     ecx, [esi+40h]
0x83C228: mov     [esp+28h+var_4], 0
0x83C230: call    sub_76CE40
0x83C235: or      eax, 0FFFFFFFFh
0x83C238: add     [ebx+60h], eax
0x83C23B: mov     [esp+20h+var_4], eax
0x83C23F: jnz     short loc_83C248
0x83C241: mov     ecx, ebx
0x83C243: call    sub_7604D0
0x83C248: add     [esi+38h], edi
0x83C24B: mov     ecx, [esp+20h+var_C]
0x83C24F: mov     large fs:0, ecx
0x83C256: pop     ecx
0x83C257: pop     edi
0x83C258: pop     esi
0x83C259: pop     ebp
0x83C25A: pop     ebx
0x83C25B: add     esp, 0Ch
0x83C25E: retn    10h
