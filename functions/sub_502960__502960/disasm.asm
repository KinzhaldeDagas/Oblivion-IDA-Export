0x502960: push    ecx
0x502961: mov     ecx, [esp+4+l]
0x502965: mov     edx, [esp+4+arg_10]
0x502969: push    esi
0x50296A: mov     esi, [esp+8+a4]
0x50296E: lea     eax, [esp+8+var_4]
0x502972: push    eax; UInt16
0x502973: mov     eax, [esp+0Ch+arg_C]
0x502977: push    ecx; l
0x502978: mov     ecx, [esp+10h+a3]
0x50297C: push    edx; a6
0x50297D: mov     edx, [esp+14h+arg_4]
0x502981: push    eax; a5
0x502982: mov     eax, [esp+18h+a1]
0x502986: push    esi; a4
0x502987: push    ecx; a3
0x502988: push    edx; a2
0x502989: push    eax; a1
0x50298A: mov     dword ptr [esp+28h+var_4], 0
0x502992: call    Script_ExtractArgs
0x502997: add     esp, 20h
0x50299A: test    al, al
0x50299C: jnz     short loc_5029A1
0x50299E: pop     esi
0x50299F: pop     ecx
0x5029A0: retn
0x5029A1: mov     ecx, [esp+8+arg_18]
0x5029A5: mov     edx, dword ptr [esp+8+var_4]
0x5029A9: push    ecx
0x5029AA: push    0
0x5029AC: push    edx
0x5029AD: push    esi
0x5029AE: call    sub_4F4980
0x5029B3: add     esp, 10h
0x5029B6: pop     esi
0x5029B7: pop     ecx
0x5029B8: retn
