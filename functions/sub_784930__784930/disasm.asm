0x784930: push    ecx
0x784931: mov     eax, [ecx+4]
0x784934: push    esi
0x784935: mov     esi, [eax+4]
0x784938: cmp     byte ptr [esi+2Dh], 0
0x78493C: mov     [esp+8+var_4], eax
0x784940: jnz     short loc_7849B7
0x784942: mov     eax, [esp+8+arg_0]
0x784946: mov     ecx, [eax+18h]
0x784949: push    ebx
0x78494A: mov     ebx, [eax+14h]
0x78494D: push    ebp
0x78494E: push    edi
0x78494F: mov     [esp+14h+arg_0], ecx
0x784953: lea     ebp, [eax+4]
0x784956: cmp     [esp+14h+arg_0], 10h
0x78495B: jb      short loc_784962
0x78495D: mov     edx, [ebp+0]
0x784960: jmp     short loc_784964
0x784962: mov     edx, ebp
0x784964: mov     edi, [esi+20h]
0x784967: mov     eax, edi
0x784969: cmp     eax, edi
0x78496B: jnb     short $+2
0x78496D: cmp     edi, ebx
0x78496F: mov     ecx, edi
0x784971: jb      short loc_784975
0x784973: mov     ecx, ebx
0x784975: cmp     dword ptr [esi+24h], 10h
0x784979: jb      short loc_784980
0x78497B: mov     eax, [esi+10h]
0x78497E: jmp     short loc_784983
0x784980: lea     eax, [esi+10h]
0x784983: push    ecx
0x784984: push    edx
0x784985: push    eax
0x784986: call    sub_6F5CB0
0x78498B: add     esp, 0Ch
0x78498E: test    eax, eax
0x784990: jnz     short loc_78499D
0x784992: cmp     edi, ebx
0x784994: jb      short loc_78499F
0x784996: cmp     edi, ebx
0x784998: setnz   al
0x78499B: test    eax, eax
0x78499D: jge     short loc_7849A4
0x78499F: mov     esi, [esi+8]
0x7849A2: jmp     short loc_7849AA
0x7849A4: mov     [esp+14h+var_4], esi
0x7849A8: mov     esi, [esi]
0x7849AA: cmp     byte ptr [esi+2Dh], 0
0x7849AE: jz      short loc_784956
0x7849B0: mov     eax, [esp+14h+var_4]
0x7849B4: pop     edi
0x7849B5: pop     ebp
0x7849B6: pop     ebx
0x7849B7: pop     esi
0x7849B8: pop     ecx
0x7849B9: retn    4
