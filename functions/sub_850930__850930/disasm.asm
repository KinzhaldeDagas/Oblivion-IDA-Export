0x850930: push    0FFFFFFFFh
0x850932: push    offset SEH_880560
0x850937: mov     eax, large fs:0
0x85093D: push    eax
0x85093E: push    ebx
0x85093F: push    ebp
0x850940: push    esi
0x850941: push    edi
0x850942: mov     eax, ds:0B30AACh
0x850947: xor     eax, esp
0x850949: push    eax
0x85094A: lea     eax, [esp+20h+var_C]
0x85094E: mov     large fs:0, eax
0x850954: mov     edi, ecx
0x850956: mov     eax, [esp+20h+arg_8]
0x85095A: mov     eax, [eax+10h]
0x85095D: mov     esi, ds:0B45C18h
0x850963: push    eax
0x850964: call    sub_848DA0
0x850969: mov     ecx, [esi+24h]
0x85096C: mov     ebx, [ecx]
0x85096E: mov     ecx, [esp+20h+arg_C]
0x850972: mov     edx, [ecx]
0x850974: mov     eax, [edx+90h]
0x85097A: push    0
0x85097C: mov     [esp+24h+arg_8], ebx
0x850980: call    eax
0x850982: mov     ebx, [ebx+4]
0x850985: mov     ebp, eax
0x850987: cmp     ebx, ebp
0x850989: jz      short loc_8509C2
0x85098B: test    ebx, ebx
0x85098D: jz      short loc_8509AB
0x85098F: lea     ecx, [ebx+4]
0x850992: push    ecx; lpAddend
0x850993: call    dword ptr ds:0A2807Ch
0x850999: test    eax, eax
0x85099B: jnz     short loc_8509AB
0x85099D: test    ebx, ebx
0x85099F: jz      short loc_8509AB
0x8509A1: mov     edx, [ebx]
0x8509A3: mov     eax, [edx]
0x8509A5: push    1
0x8509A7: mov     ecx, ebx
0x8509A9: call    eax
0x8509AB: test    ebp, ebp
0x8509AD: mov     ebx, [esp+20h+arg_8]
0x8509B1: mov     [ebx+4], ebp
0x8509B4: jz      short loc_8509C6
0x8509B6: add     ebp, 4
0x8509B9: push    ebp; lpAddend
0x8509BA: call    dword ptr ds:0A28078h
0x8509C0: jmp     short loc_8509C6
0x8509C2: mov     ebx, [esp+20h+arg_8]
0x8509C6: test    ebx, ebx
0x8509C8: jz      short loc_8509E6
0x8509CA: cmp     byte ptr ds:0B42CDDh, 0
0x8509D1: jz      short loc_8509E6
0x8509D3: mov     ecx, [esp+20h+arg_C]
0x8509D7: mov     edx, [ecx]
0x8509D9: mov     eax, [edx+78h]
0x8509DC: call    eax
0x8509DE: push    eax
0x8509DF: mov     ecx, ebx
0x8509E1: call    sub_7715E0
0x8509E6: mov     ebx, 1
0x8509EB: add     [esi+60h], ebx
0x8509EE: mov     [esp+20h+arg_C], esi
0x8509F2: mov     edx, [edi+38h]
0x8509F5: lea     ecx, [esp+20h+arg_C]
0x8509F9: push    ecx
0x8509FA: push    edx
0x8509FB: lea     ecx, [edi+40h]
0x8509FE: mov     [esp+28h+var_4], 0
0x850A06: call    sub_76CE40
0x850A0B: or      eax, 0FFFFFFFFh
0x850A0E: add     [esi+60h], eax
0x850A11: mov     [esp+20h+var_4], eax
0x850A15: jnz     short loc_850A1E
0x850A17: mov     ecx, esi
0x850A19: call    sub_7604D0
0x850A1E: add     [edi+38h], ebx
0x850A21: mov     ecx, dword ptr [esp+20h+var_C]
0x850A25: mov     large fs:0, ecx
0x850A2C: pop     ecx
0x850A2D: pop     edi
0x850A2E: pop     esi
0x850A2F: pop     ebp
0x850A30: pop     ebx
0x850A31: add     esp, 0Ch
0x850A34: retn    10h
