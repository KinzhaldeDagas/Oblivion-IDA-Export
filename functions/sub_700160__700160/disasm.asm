0x700160: push    esi
0x700161: mov     esi, [esp+4+arg_0]
0x700165: push    edi
0x700166: push    esi
0x700167: mov     edi, ecx
0x700169: call    nullsub_returnvVoid_1arg
0x70016E: cmp     dword ptr [esi+0D8h], 500000Bh
0x700178: jnb     short loc_7001AF
0x70017A: mov     esi, [edi+10h]
0x70017D: test    esi, esi
0x70017F: jz      short loc_7001AF
0x700181: mov     dword ptr [edi+10h], 0
0x700188: push    ebx
0x700189: lea     esp, [esp+0]
0x700190: mov     ecx, esi
0x700192: call    sub_452A60
0x700197: mov     ecx, esi
0x700199: mov     ebx, eax
0x70019B: call    sub_733830
0x7001A0: push    esi
0x7001A1: mov     ecx, edi
0x7001A3: call    NiNode_AddNiExtraData
0x7001A8: test    ebx, ebx
0x7001AA: mov     esi, ebx
0x7001AC: jnz     short loc_700190
0x7001AE: pop     ebx
0x7001AF: xor     esi, esi
0x7001B1: cmp     [edi+14h], si
0x7001B5: jbe     short loc_7001ED
0x7001B7: mov     ecx, [edi+10h]
0x7001BA: movzx   eax, si
0x7001BD: mov     ecx, [ecx+eax*4]
0x7001C0: test    ecx, ecx
0x7001C2: jz      short loc_7001E2
0x7001C4: mov     edx, [ecx]
0x7001C6: mov     eax, [edx+4]
0x7001C9: call    eax
0x7001CB: cmp     eax, offset dword_B3FFA8
0x7001D0: setz    al
0x7001D3: test    al, al
0x7001D5: jz      short loc_7001E2
0x7001D7: push    esi
0x7001D8: mov     ecx, edi
0x7001DA: call    sub_6FFBE0
0x7001DF: or      esi, 0FFFFFFFFh
0x7001E2: movzx   ecx, word ptr [edi+14h]
0x7001E6: add     esi, 1
0x7001E9: cmp     esi, ecx
0x7001EB: jb      short loc_7001B7
0x7001ED: pop     edi
0x7001EE: pop     esi
0x7001EF: retn    4
