0x844B50: push    0FFFFFFFFh
0x844B52: push    offset SEH_880560
0x844B57: mov     eax, large fs:0
0x844B5D: push    eax
0x844B5E: push    ebx
0x844B5F: push    ebp
0x844B60: push    esi
0x844B61: push    edi
0x844B62: mov     eax, ds:0B30AACh
0x844B67: xor     eax, esp
0x844B69: push    eax
0x844B6A: lea     eax, [esp+20h+var_C]
0x844B6E: mov     large fs:0, eax
0x844B74: mov     esi, ecx
0x844B76: mov     eax, [esp+20h+arg_8]
0x844B7A: mov     eax, [eax+10h]
0x844B7D: mov     edx, [esi]
0x844B7F: mov     edx, [edx+0BCh]
0x844B85: mov     edi, ds:0B45A3Ch
0x844B8B: push    eax
0x844B8C: mov     eax, [esp+24h+arg_0]
0x844B90: push    0
0x844B92: push    eax
0x844B93: call    edx
0x844B95: mov     ecx, [esp+20h+arg_C]
0x844B99: mov     eax, [edi+24h]
0x844B9C: mov     ebp, [eax]
0x844B9E: push    0
0x844BA0: push    ecx
0x844BA1: mov     ecx, esi
0x844BA3: call    sub_848FD0
0x844BA8: mov     ebx, [ebp+4]
0x844BAB: cmp     ebx, eax
0x844BAD: mov     [esp+20h+arg_8], eax
0x844BB1: jz      short loc_844BE8
0x844BB3: test    ebx, ebx
0x844BB5: jz      short loc_844BD7
0x844BB7: lea     edx, [ebx+4]
0x844BBA: push    edx; lpAddend
0x844BBB: call    dword ptr ds:0A2807Ch
0x844BC1: test    eax, eax
0x844BC3: jnz     short loc_844BD3
0x844BC5: test    ebx, ebx
0x844BC7: jz      short loc_844BD3
0x844BC9: mov     eax, [ebx]
0x844BCB: mov     edx, [eax]
0x844BCD: push    1
0x844BCF: mov     ecx, ebx
0x844BD1: call    edx
0x844BD3: mov     eax, [esp+20h+arg_8]
0x844BD7: test    eax, eax
0x844BD9: mov     [ebp+4], eax
0x844BDC: jz      short loc_844BE8
0x844BDE: add     eax, 4
0x844BE1: push    eax; lpAddend
0x844BE2: call    dword ptr ds:0A28078h
0x844BE8: mov     eax, [esp+20h+arg_C]
0x844BEC: push    eax
0x844BED: push    ebp
0x844BEE: mov     ecx, esi
0x844BF0: call    sub_848FA0
0x844BF5: mov     ebx, 1
0x844BFA: add     [edi+60h], ebx
0x844BFD: mov     [esp+20h+arg_C], edi
0x844C01: mov     edx, [esi+38h]
0x844C04: lea     ecx, [esp+20h+arg_C]
0x844C08: push    ecx
0x844C09: push    edx
0x844C0A: lea     ecx, [esi+40h]
0x844C0D: mov     [esp+28h+var_4], 0
0x844C15: call    sub_76CE40
0x844C1A: or      eax, 0FFFFFFFFh
0x844C1D: add     [edi+60h], eax
0x844C20: mov     [esp+20h+var_4], eax
0x844C24: jnz     short loc_844C2D
0x844C26: mov     ecx, edi
0x844C28: call    sub_7604D0
0x844C2D: add     [esi+38h], ebx
0x844C30: mov     ecx, dword ptr [esp+20h+var_C]
0x844C34: mov     large fs:0, ecx
0x844C3B: pop     ecx
0x844C3C: pop     edi
0x844C3D: pop     esi
0x844C3E: pop     ebp
0x844C3F: pop     ebx
0x844C40: add     esp, 0Ch
0x844C43: retn    10h
