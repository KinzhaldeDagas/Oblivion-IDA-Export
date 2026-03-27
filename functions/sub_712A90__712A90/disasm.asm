0x712A90: sub     esp, 8
0x712A93: push    esi
0x712A94: mov     esi, ecx
0x712A96: mov     eax, [esi+21Ch]
0x712A9C: push    1
0x712A9E: lea     ecx, [esp+10h+var_8]
0x712AA2: push    ecx
0x712AA3: push    4
0x712AA5: lea     edx, [esp+18h+var_4]
0x712AA9: push    edx
0x712AAA: push    eax
0x712AAB: mov     eax, [eax+4]
0x712AAE: mov     [esp+20h+var_8], 4
0x712AB6: call    eax
0x712AB8: mov     eax, [esp+20h+var_4]
0x712ABC: add     esp, 14h
0x712ABF: cmp     eax, 0FFFFFFFFh
0x712AC2: jnz     short loc_712ACB
0x712AC4: xor     eax, eax
0x712AC6: pop     esi
0x712AC7: add     esp, 8
0x712ACA: retn
0x712ACB: mov     ecx, [esi+1F0h]
0x712AD1: mov     eax, [ecx+eax*4]
0x712AD4: pop     esi
0x712AD5: add     esp, 8
0x712AD8: retn
