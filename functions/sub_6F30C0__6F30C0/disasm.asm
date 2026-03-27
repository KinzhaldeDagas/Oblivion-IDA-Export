0x6F30C0: sub     esp, 8
0x6F30C3: mov     edx, [esp+8+arg_8]
0x6F30C7: push    ebx
0x6F30C8: mov     ebx, [esp+0Ch+arg_0]
0x6F30CC: push    esi
0x6F30CD: mov     esi, [esp+10h+arg_8]
0x6F30D1: push    edi
0x6F30D2: mov     edi, [esp+14h+arg_4]
0x6F30D6: xor     al, al
0x6F30D8: mov     byte ptr [esp+14h+var_4], al
0x6F30DC: mov     ecx, [esp+14h+var_4]
0x6F30E0: mov     byte ptr [esp+14h+var_8], al
0x6F30E4: mov     eax, [esp+14h+var_8]
0x6F30E8: push    eax
0x6F30E9: push    ecx
0x6F30EA: push    edx
0x6F30EB: push    esi
0x6F30EC: push    edi
0x6F30ED: push    ebx
0x6F30EE: call    sub_6F28A0
0x6F30F3: mov     eax, edi
0x6F30F5: sub     eax, ebx
0x6F30F7: add     esp, 18h
0x6F30FA: sar     eax, 5
0x6F30FD: shl     eax, 5
0x6F3100: pop     edi
0x6F3101: add     eax, esi
0x6F3103: pop     esi
0x6F3104: pop     ebx
0x6F3105: add     esp, 8
0x6F3108: retn
