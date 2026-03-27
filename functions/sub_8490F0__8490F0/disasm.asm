0x8490F0: push    0FFFFFFFFh
0x8490F2: push    offset SEH_880560
0x8490F7: mov     eax, large fs:0
0x8490FD: push    eax
0x8490FE: push    ebx
0x8490FF: push    ebp
0x849100: push    esi
0x849101: push    edi
0x849102: mov     eax, ds:0B30AACh
0x849107: xor     eax, esp
0x849109: push    eax
0x84910A: lea     eax, [esp+20h+var_C]
0x84910E: mov     large fs:0, eax
0x849114: mov     ebx, ecx
0x849116: cmp     [esp+20h+arg_4], 0
0x84911B: mov     esi, ds:0B455ACh
0x849121: jz      short loc_84912B
0x849123: mov     eax, ds:0B4530Ch
0x849128: push    eax
0x849129: jmp     short loc_849132
0x84912B: mov     ecx, ds:0B45290h
0x849131: push    ecx; a2
0x849132: mov     ecx, esi; this
0x849134: call    sub_7AECB0
0x849139: mov     edx, [esp+20h+arg_8]
0x84913D: mov     eax, [edx+10h]
0x849140: push    eax
0x849141: mov     ecx, ebx
0x849143: call    sub_848C40
0x849148: mov     eax, [esi+24h]
0x84914B: mov     ecx, [esp+20h+arg_C]
0x84914F: mov     edi, [eax]
0x849151: mov     edx, [ecx]
0x849153: mov     eax, [edx+88h]
0x849159: push    0
0x84915B: mov     [esp+24h+arg_4], edi
0x84915F: call    eax
0x849161: mov     edi, [edi+4]
0x849164: mov     ebp, eax
0x849166: cmp     edi, ebp
0x849168: jz      short loc_8491A1
0x84916A: test    edi, edi
0x84916C: jz      short loc_84918A
0x84916E: lea     ecx, [edi+4]
0x849171: push    ecx; lpAddend
0x849172: call    dword ptr ds:0A2807Ch
0x849178: test    eax, eax
0x84917A: jnz     short loc_84918A
0x84917C: test    edi, edi
0x84917E: jz      short loc_84918A
0x849180: mov     edx, [edi]
0x849182: mov     eax, [edx]
0x849184: push    1
0x849186: mov     ecx, edi
0x849188: call    eax
0x84918A: test    ebp, ebp
0x84918C: mov     edi, [esp+20h+arg_4]
0x849190: mov     [edi+4], ebp
0x849193: jz      short loc_8491A5
0x849195: add     ebp, 4
0x849198: push    ebp; lpAddend
0x849199: call    dword ptr ds:0A28078h
0x84919F: jmp     short loc_8491A5
0x8491A1: mov     edi, [esp+20h+arg_4]
0x8491A5: test    edi, edi
0x8491A7: jz      short loc_8491C5
0x8491A9: cmp     byte ptr ds:0B42CDDh, 0
0x8491B0: jz      short loc_8491C5
0x8491B2: mov     ecx, [esp+20h+arg_C]
0x8491B6: mov     edx, [ecx]
0x8491B8: mov     eax, [edx+78h]
0x8491BB: call    eax
0x8491BD: push    eax
0x8491BE: mov     ecx, edi
0x8491C0: call    sub_7715E0
0x8491C5: mov     edi, 1
0x8491CA: add     [esi+60h], edi
0x8491CD: mov     [esp+20h+arg_C], esi
0x8491D1: mov     edx, [ebx+38h]
0x8491D4: lea     ecx, [esp+20h+arg_C]
0x8491D8: push    ecx
0x8491D9: push    edx
0x8491DA: lea     ecx, [ebx+40h]
0x8491DD: mov     [esp+28h+var_4], 0
0x8491E5: call    sub_76CE40
0x8491EA: or      eax, 0FFFFFFFFh
0x8491ED: add     [esi+60h], eax
0x8491F0: mov     [esp+20h+var_4], eax
0x8491F4: jnz     short loc_8491FD
0x8491F6: mov     ecx, esi
0x8491F8: call    sub_7604D0
0x8491FD: add     [ebx+38h], edi
0x849200: mov     ecx, dword ptr [esp+20h+var_C]
0x849204: mov     large fs:0, ecx
0x84920B: pop     ecx
0x84920C: pop     edi
0x84920D: pop     esi
0x84920E: pop     ebp
0x84920F: pop     ebx
0x849210: add     esp, 0Ch
0x849213: retn    10h
