0x8ABB50: sub     esp, 0Ch
0x8ABB53: push    esi
0x8ABB54: mov     esi, ecx
0x8ABB56: mov     ecx, [esi+8]
0x8ABB59: test    ecx, ecx
0x8ABB5B: jz      short loc_8ABBA2
0x8ABB5D: mov     eax, [ecx+88h]
0x8ABB63: test    eax, eax
0x8ABB65: jz      short loc_8ABB8B
0x8ABB67: mov     eax, [esp+10h+arg_0]
0x8ABB6B: lea     edx, [esp+10h+var_C]
0x8ABB6F: push    edx
0x8ABB70: mov     [esp+14h+var_C], 5
0x8ABB75: mov     [esp+14h+var_8], esi
0x8ABB79: mov     [esp+14h+var_4], eax
0x8ABB7D: call    sub_898820
0x8ABB82: xor     eax, eax
0x8ABB84: pop     esi
0x8ABB85: add     esp, 0Ch
0x8ABB88: retn    4
0x8ABB8B: test    ecx, ecx
0x8ABB8D: jz      short loc_8ABBA2
0x8ABB8F: inc     dword ptr [ecx+88h]
0x8ABB95: mov     eax, [esi+8]
0x8ABB98: push    esi
0x8ABB99: push    eax
0x8ABB9A: call    sub_8CCB90
0x8ABB9F: add     esp, 8
0x8ABBA2: mov     ecx, [esi+14h]
0x8ABBA5: test    ecx, ecx
0x8ABBA7: jz      short loc_8ABBC1
0x8ABBA9: cmp     word ptr [ecx+4], 0
0x8ABBAE: jz      short loc_8ABBC1
0x8ABBB0: dec     word ptr [ecx+6]
0x8ABBB4: cmp     word ptr [ecx+6], 0
0x8ABBB9: jnz     short loc_8ABBC1
0x8ABBBB: mov     edx, [ecx]
0x8ABBBD: push    1
0x8ABBBF: call    dword ptr [edx]
0x8ABBC1: mov     eax, [esp+10h+arg_0]
0x8ABBC5: mov     [esi+14h], eax
0x8ABBC8: cmp     word ptr [eax+4], 0
0x8ABBCD: jz      short loc_8ABBD3
0x8ABBCF: inc     word ptr [eax+6]
0x8ABBD3: mov     eax, [esi+8]
0x8ABBD6: test    eax, eax
0x8ABBD8: jz      short loc_8ABBE4
0x8ABBDA: push    esi
0x8ABBDB: push    eax
0x8ABBDC: call    sub_8DC650
0x8ABBE1: add     esp, 8
0x8ABBE4: mov     ecx, esi
0x8ABBE6: call    sub_8DE600
0x8ABBEB: mov     eax, [esi+8]
0x8ABBEE: test    eax, eax
0x8ABBF0: jz      short loc_8ABC27
0x8ABBF2: push    esi
0x8ABBF3: push    eax
0x8ABBF4: call    sub_8CC950
0x8ABBF9: mov     ecx, [esi+8]
0x8ABBFC: mov     eax, [ecx+88h]
0x8ABC02: add     esp, 8
0x8ABC05: dec     eax
0x8ABC06: mov     [ecx+88h], eax
0x8ABC0C: jnz     short loc_8ABC27
0x8ABC0E: mov     eax, [ecx+84h]
0x8ABC14: test    eax, eax
0x8ABC16: jz      short loc_8ABC27
0x8ABC18: mov     al, [ecx+90h]
0x8ABC1E: test    al, al
0x8ABC20: jnz     short loc_8ABC27
0x8ABC22: call    sub_899210
0x8ABC27: mov     eax, 1
0x8ABC2C: pop     esi
0x8ABC2D: add     esp, 0Ch
0x8ABC30: retn    4
