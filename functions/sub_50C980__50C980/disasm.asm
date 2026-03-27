0x50C980: push    ecx
0x50C981: mov     ecx, [esp+4+l]
0x50C985: mov     edx, [esp+4+arg_10]
0x50C989: lea     eax, [esp+4+var_4]
0x50C98C: push    eax; UInt16
0x50C98D: mov     eax, [esp+8+arg_C]
0x50C991: push    ecx; l
0x50C992: mov     ecx, [esp+0Ch+a4]
0x50C996: push    edx; a6
0x50C997: mov     edx, [esp+10h+a3]
0x50C99B: push    eax; a5
0x50C99C: mov     eax, [esp+14h+arg_4]
0x50C9A0: push    ecx; a4
0x50C9A1: mov     ecx, [esp+18h+a1]
0x50C9A5: push    edx; a3
0x50C9A6: push    eax; a2
0x50C9A7: push    ecx; a1
0x50C9A8: mov     dword ptr [esp+24h+var_4], 0
0x50C9B0: call    Script_ExtractArgs
0x50C9B5: add     esp, 20h
0x50C9B8: test    al, al
0x50C9BA: jnz     short loc_50C9BE
0x50C9BC: pop     ecx
0x50C9BD: retn
0x50C9BE: mov     ecx, ds:0B333C4h
0x50C9C4: mov     edx, [ecx]
0x50C9C6: mov     eax, [edx+204h]
0x50C9CC: call    eax
0x50C9CE: add     eax, dword ptr [esp+4+var_4]
0x50C9D1: mov     ecx, ds:0B333C4h
0x50C9D7: mov     [ecx+6F4h], eax
0x50C9DD: cmp     byte ptr ds:0B361ACh, 0
0x50C9E4: jz      short loc_50CA04
0x50C9E6: mov     ecx, ds:0B333C4h
0x50C9EC: mov     edx, [ecx]
0x50C9EE: mov     eax, [edx+204h]
0x50C9F4: call    eax
0x50C9F6: push    eax
0x50C9F7: push    offset aPlayerFameIsD; "Player Fame is %d "
0x50C9FC: call    Interface_ConsolePrint
0x50CA01: add     esp, 8
0x50CA04: mov     al, 1
0x50CA06: pop     ecx
0x50CA07: retn
