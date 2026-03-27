0x6F35C0: sub     esp, 8
0x6F35C3: mov     edx, [esp+8+arg_8]
0x6F35C7: push    ebx
0x6F35C8: mov     ebx, [esp+0Ch+arg_0]
0x6F35CC: push    esi
0x6F35CD: mov     esi, [esp+10h+arg_4]
0x6F35D1: push    edi
0x6F35D2: mov     edi, [esp+14h+arg_8]
0x6F35D6: xor     al, al
0x6F35D8: mov     byte ptr [esp+14h+var_4], al
0x6F35DC: mov     ecx, [esp+14h+var_4]
0x6F35E0: mov     byte ptr [esp+14h+var_8], al
0x6F35E4: mov     eax, [esp+14h+var_8]
0x6F35E8: push    eax
0x6F35E9: push    ecx
0x6F35EA: push    edx
0x6F35EB: push    edi
0x6F35EC: push    esi
0x6F35ED: push    ebx
0x6F35EE: call    sub_6F2930
0x6F35F3: sub     esi, ebx
0x6F35F5: add     esp, 18h
0x6F35F8: sar     esi, 5
0x6F35FB: shl     esi, 5
0x6F35FE: mov     eax, edi
0x6F3600: pop     edi
0x6F3601: sub     eax, esi
0x6F3603: pop     esi
0x6F3604: pop     ebx
0x6F3605: add     esp, 8
0x6F3608: retn
