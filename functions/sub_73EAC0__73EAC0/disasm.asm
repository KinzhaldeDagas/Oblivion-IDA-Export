0x73EAC0: push    0FFFFFFFFh
0x73EAC2: push    offset SEH_8C8970
0x73EAC7: mov     eax, large fs:0
0x73EACD: push    eax
0x73EACE: push    ecx
0x73EACF: push    esi
0x73EAD0: push    edi
0x73EAD1: mov     eax, ds:0B30AACh
0x73EAD6: xor     eax, esp
0x73EAD8: push    eax
0x73EAD9: lea     eax, [esp+1Ch+var_C]
0x73EADD: mov     large fs:0, eax
0x73EAE3: mov     edi, ecx
0x73EAE5: push    30h ; '0'; Size
0x73EAE7: call    FormHeapAlloc
0x73EAEC: add     esp, 4
0x73EAEF: mov     [esp+1Ch+var_10], eax
0x73EAF3: xor     esi, esi
0x73EAF5: cmp     eax, esi
0x73EAF7: mov     [esp+1Ch+var_4], esi
0x73EAFB: jz      short loc_73EB06
0x73EAFD: mov     ecx, eax
0x73EAFF: call    sub_73E630
0x73EB04: mov     esi, eax
0x73EB06: mov     eax, [edi+8]
0x73EB09: mov     [esi+8], eax
0x73EB0C: mov     ecx, [edi+0Ch]
0x73EB0F: mov     [esi+0Ch], ecx
0x73EB12: mov     edx, [edi+10h]
0x73EB15: mov     [esi+10h], edx
0x73EB18: mov     eax, [edi+14h]
0x73EB1B: mov     [esi+14h], eax
0x73EB1E: mov     ecx, [edi+28h]
0x73EB21: push    ecx
0x73EB22: mov     ecx, esi
0x73EB24: mov     [esp+20h+var_4], 0FFFFFFFFh
0x73EB2C: call    sub_73E6A0
0x73EB31: mov     edx, [edi+28h]
0x73EB34: mov     eax, [edi+2Ch]
0x73EB37: mov     ecx, [esi+2Ch]
0x73EB3A: add     edx, edx
0x73EB3C: add     edx, edx
0x73EB3E: push    edx; Size
0x73EB3F: push    eax; Src
0x73EB40: push    ecx; Dst
0x73EB41: call    _memcpy
0x73EB46: add     esp, 0Ch
0x73EB49: mov     eax, esi
0x73EB4B: mov     ecx, [esp+1Ch+var_C]
0x73EB4F: mov     large fs:0, ecx
0x73EB56: pop     ecx
0x73EB57: pop     edi
0x73EB58: pop     esi
0x73EB59: add     esp, 10h
0x73EB5C: retn    4
