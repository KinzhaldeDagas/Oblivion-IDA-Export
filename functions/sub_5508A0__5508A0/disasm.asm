0x5508A0: push    ebx
0x5508A1: mov     ebx, [esp+4+arg_0]
0x5508A5: test    ebx, ebx
0x5508A7: jnz     short loc_5508AD
0x5508A9: xor     eax, eax
0x5508AB: pop     ebx
0x5508AC: retn
0x5508AD: push    edi
0x5508AE: movzx   edi, word ptr [ebx+14h]
0x5508B2: test    edi, edi
0x5508B4: jnz     short loc_5508BB
0x5508B6: pop     edi
0x5508B7: xor     eax, eax
0x5508B9: pop     ebx
0x5508BA: retn
0x5508BB: push    esi
0x5508BC: xor     esi, esi
0x5508BE: test    edi, edi
0x5508C0: jbe     short loc_5508E8
0x5508C2: mov     ecx, [ebx+10h]
0x5508C5: movzx   eax, si
0x5508C8: mov     eax, [ecx+eax*4]
0x5508CB: test    eax, eax
0x5508CD: jz      short loc_5508E1
0x5508CF: push    eax
0x5508D0: push    offset unk_B39D90
0x5508D5: call    NiRTTI_Cast
0x5508DA: add     esp, 8
0x5508DD: test    eax, eax
0x5508DF: jnz     short loc_5508EA
0x5508E1: add     esi, 1
0x5508E4: cmp     esi, edi
0x5508E6: jb      short loc_5508C2
0x5508E8: xor     eax, eax
0x5508EA: pop     esi
0x5508EB: pop     edi
0x5508EC: pop     ebx
0x5508ED: retn
