0x840000: push    0FFFFFFFFh
0x840002: push    offset SEH_882120
0x840007: mov     eax, large fs:0
0x84000D: push    eax
0x84000E: push    ebx
0x84000F: push    ebp
0x840010: push    esi
0x840011: push    edi
0x840012: mov     eax, ds:0B30AACh
0x840017: xor     eax, esp
0x840019: push    eax
0x84001A: lea     eax, [esp+20h+var_C]
0x84001E: mov     large fs:0, eax
0x840024: mov     esi, ecx
0x840026: mov     ebx, [esp+20h+arg_8]
0x84002A: mov     eax, [ebx+10h]
0x84002D: mov     edi, ds:0B458B8h
0x840033: push    eax
0x840034: call    sub_848C40
0x840039: mov     ebp, [ebx+0Ch]
0x84003C: push    ebp
0x84003D: mov     ecx, esi
0x84003F: call    sub_848E50
0x840044: mov     ebx, [ebx+10h]
0x840047: mov     ecx, [esp+20h+arg_0]
0x84004B: mov     eax, [esi]
0x84004D: mov     edx, [eax+0BCh]
0x840053: push    ebx
0x840054: push    ebp
0x840055: push    ecx
0x840056: mov     ecx, esi
0x840058: call    edx
0x84005A: mov     eax, [edi+24h]
0x84005D: mov     ebx, [esp+20h+arg_C]
0x840061: mov     ebp, [eax]
0x840063: mov     edx, [ebx]
0x840065: mov     eax, [edx+88h]
0x84006B: push    0
0x84006D: mov     ecx, ebx
0x84006F: mov     [esp+24h+arg_8], ebp
0x840073: call    eax
0x840075: mov     ebp, [ebp+4]
0x840078: cmp     ebp, eax
0x84007A: mov     [esp+20h+arg_0], eax
0x84007E: jz      short loc_8400BA
0x840080: test    ebp, ebp
0x840082: jz      short loc_8400A5
0x840084: lea     ecx, [ebp+4]
0x840087: push    ecx; lpAddend
0x840088: call    dword ptr ds:0A2807Ch
0x84008E: test    eax, eax
0x840090: jnz     short loc_8400A1
0x840092: test    ebp, ebp
0x840094: jz      short loc_8400A1
0x840096: mov     edx, [ebp+0]
0x840099: mov     eax, [edx]
0x84009B: push    1
0x84009D: mov     ecx, ebp
0x84009F: call    eax
0x8400A1: mov     eax, [esp+20h+arg_0]
0x8400A5: test    eax, eax
0x8400A7: mov     ecx, [esp+20h+arg_8]
0x8400AB: mov     [ecx+4], eax
0x8400AE: jz      short loc_8400BA
0x8400B0: add     eax, 4
0x8400B3: push    eax; lpAddend
0x8400B4: call    dword ptr ds:0A28078h
0x8400BA: mov     edx, [esp+20h+arg_8]
0x8400BE: push    ebx
0x8400BF: push    edx
0x8400C0: mov     ecx, esi
0x8400C2: call    sub_848FA0
0x8400C7: mov     eax, [edi+24h]
0x8400CA: mov     ebp, [eax+4]
0x8400CD: push    0
0x8400CF: push    ebx
0x8400D0: mov     ecx, esi
0x8400D2: mov     [esp+28h+arg_8], ebp
0x8400D6: call    sub_848FD0
0x8400DB: mov     ebp, [ebp+4]
0x8400DE: cmp     ebp, eax
0x8400E0: mov     [esp+20h+arg_0], eax
0x8400E4: jz      short loc_840120
0x8400E6: test    ebp, ebp
0x8400E8: jz      short loc_84010B
0x8400EA: lea     ecx, [ebp+4]
0x8400ED: push    ecx; lpAddend
0x8400EE: call    dword ptr ds:0A2807Ch
0x8400F4: test    eax, eax
0x8400F6: jnz     short loc_840107
0x8400F8: test    ebp, ebp
0x8400FA: jz      short loc_840107
0x8400FC: mov     edx, [ebp+0]
0x8400FF: mov     eax, [edx]
0x840101: push    1
0x840103: mov     ecx, ebp
0x840105: call    eax
0x840107: mov     eax, [esp+20h+arg_0]
0x84010B: test    eax, eax
0x84010D: mov     ecx, [esp+20h+arg_8]
0x840111: mov     [ecx+4], eax
0x840114: jz      short loc_840120
0x840116: add     eax, 4
0x840119: push    eax; lpAddend
0x84011A: call    dword ptr ds:0A28078h
0x840120: mov     edx, [esp+20h+arg_8]
0x840124: push    ebx
0x840125: push    edx
0x840126: mov     ecx, esi
0x840128: call    sub_848FA0
0x84012D: mov     ebx, 1
0x840132: add     [edi+60h], ebx
0x840135: mov     [esp+20h+arg_8], edi
0x840139: mov     ecx, [esi+38h]
0x84013C: lea     eax, [esp+20h+arg_8]
0x840140: push    eax
0x840141: push    ecx
0x840142: lea     ecx, [esi+40h]
0x840145: mov     [esp+28h+var_4], 0
0x84014D: call    sub_76CE40
0x840152: or      eax, 0FFFFFFFFh
0x840155: add     [edi+60h], eax
0x840158: mov     [esp+20h+var_4], eax
0x84015C: jnz     short loc_840165
0x84015E: mov     ecx, edi
0x840160: call    sub_7604D0
0x840165: add     [esi+38h], ebx
0x840168: mov     ecx, [esp+20h+var_C]
0x84016C: mov     large fs:0, ecx
0x840173: pop     ecx
0x840174: pop     edi
0x840175: pop     esi
0x840176: pop     ebp
0x840177: pop     ebx
0x840178: add     esp, 0Ch
0x84017B: retn    10h
