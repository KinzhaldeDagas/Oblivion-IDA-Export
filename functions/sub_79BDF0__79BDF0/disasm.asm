0x79BDF0: sub     esp, 8
0x79BDF3: mov     edx, [esp+8+arg_8]
0x79BDF7: push    ebx
0x79BDF8: mov     ebx, [esp+0Ch+arg_0]
0x79BDFC: push    esi
0x79BDFD: mov     esi, [esp+10h+arg_4]
0x79BE01: push    edi
0x79BE02: mov     edi, [esp+14h+arg_8]
0x79BE06: xor     al, al
0x79BE08: mov     byte ptr [esp+14h+var_4], al
0x79BE0C: mov     ecx, [esp+14h+var_4]
0x79BE10: mov     byte ptr [esp+14h+var_8], al
0x79BE14: mov     eax, [esp+14h+var_8]
0x79BE18: push    eax
0x79BE19: push    ecx
0x79BE1A: push    edx
0x79BE1B: push    edi
0x79BE1C: push    esi
0x79BE1D: push    ebx
0x79BE1E: call    sub_79B420
0x79BE23: sub     esi, ebx
0x79BE25: mov     eax, 2E8BA2E9h
0x79BE2A: imul    esi
0x79BE2C: sar     edx, 3
0x79BE2F: mov     eax, edx
0x79BE31: shr     eax, 1Fh
0x79BE34: add     eax, edx
0x79BE36: imul    eax, 2Ch ; ','
0x79BE39: add     esp, 18h
0x79BE3C: add     eax, edi
0x79BE3E: pop     edi
0x79BE3F: pop     esi
0x79BE40: pop     ebx
0x79BE41: add     esp, 8
0x79BE44: retn
