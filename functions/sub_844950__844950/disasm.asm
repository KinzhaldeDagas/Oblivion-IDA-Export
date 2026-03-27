0x844950: push    0FFFFFFFFh
0x844952: push    offset SEH_880560
0x844957: mov     eax, large fs:0
0x84495D: push    eax
0x84495E: push    ebx
0x84495F: push    ebp
0x844960: push    esi
0x844961: push    edi
0x844962: mov     eax, ds:0B30AACh
0x844967: xor     eax, esp
0x844969: push    eax
0x84496A: lea     eax, [esp+20h+var_C]
0x84496E: mov     large fs:0, eax
0x844974: mov     esi, ecx
0x844976: mov     eax, [esp+20h+arg_8]
0x84497A: mov     eax, [eax+10h]
0x84497D: mov     edx, [esi]
0x84497F: mov     edx, [edx+0BCh]
0x844985: mov     edi, ds:0B45A30h
0x84498B: push    eax
0x84498C: mov     eax, [esp+24h+arg_0]
0x844990: push    0
0x844992: push    eax
0x844993: call    edx
0x844995: mov     ecx, [esp+20h+arg_C]
0x844999: mov     eax, [edi+24h]
0x84499C: mov     ebp, [eax]
0x84499E: push    0
0x8449A0: push    ecx
0x8449A1: mov     ecx, esi
0x8449A3: call    sub_848FD0
0x8449A8: mov     ebx, [ebp+4]
0x8449AB: cmp     ebx, eax
0x8449AD: mov     [esp+20h+arg_8], eax
0x8449B1: jz      short loc_8449E8
0x8449B3: test    ebx, ebx
0x8449B5: jz      short loc_8449D7
0x8449B7: lea     edx, [ebx+4]
0x8449BA: push    edx; lpAddend
0x8449BB: call    dword ptr ds:0A2807Ch
0x8449C1: test    eax, eax
0x8449C3: jnz     short loc_8449D3
0x8449C5: test    ebx, ebx
0x8449C7: jz      short loc_8449D3
0x8449C9: mov     eax, [ebx]
0x8449CB: mov     edx, [eax]
0x8449CD: push    1
0x8449CF: mov     ecx, ebx
0x8449D1: call    edx
0x8449D3: mov     eax, [esp+20h+arg_8]
0x8449D7: test    eax, eax
0x8449D9: mov     [ebp+4], eax
0x8449DC: jz      short loc_8449E8
0x8449DE: add     eax, 4
0x8449E1: push    eax; lpAddend
0x8449E2: call    dword ptr ds:0A28078h
0x8449E8: mov     eax, [esp+20h+arg_C]
0x8449EC: push    eax
0x8449ED: push    ebp
0x8449EE: mov     ecx, esi
0x8449F0: call    sub_848FA0
0x8449F5: mov     ebx, 1
0x8449FA: add     [edi+60h], ebx
0x8449FD: mov     [esp+20h+arg_C], edi
0x844A01: mov     edx, [esi+38h]
0x844A04: lea     ecx, [esp+20h+arg_C]
0x844A08: push    ecx
0x844A09: push    edx
0x844A0A: lea     ecx, [esi+40h]
0x844A0D: mov     [esp+28h+var_4], 0
0x844A15: call    sub_76CE40
0x844A1A: or      eax, 0FFFFFFFFh
0x844A1D: add     [edi+60h], eax
0x844A20: mov     [esp+20h+var_4], eax
0x844A24: jnz     short loc_844A2D
0x844A26: mov     ecx, edi
0x844A28: call    sub_7604D0
0x844A2D: add     [esi+38h], ebx
0x844A30: mov     ecx, dword ptr [esp+20h+var_C]
0x844A34: mov     large fs:0, ecx
0x844A3B: pop     ecx
0x844A3C: pop     edi
0x844A3D: pop     esi
0x844A3E: pop     ebp
0x844A3F: pop     ebx
0x844A40: add     esp, 0Ch
0x844A43: retn    10h
