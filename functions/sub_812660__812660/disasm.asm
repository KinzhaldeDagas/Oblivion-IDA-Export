0x812660: push    esi
0x812661: mov     esi, [esp+4+arg_0]
0x812665: xor     edx, edx
0x812667: cmp     esi, edx
0x812669: mov     eax, ecx
0x81266B: jz      short loc_812679
0x81266D: push    edi
0x81266E: lea     edi, [eax+18h]
0x812671: mov     ecx, 8
0x812676: rep movsd
0x812678: pop     edi
0x812679: cmp     [eax+34h], dl
0x81267C: mov     ecx, [eax+8]
0x81267F: pop     esi
0x812680: jz      short loc_81268B
0x812682: or      dword ptr [ecx+1Ch], 400h
0x812689: jmp     short loc_812692
0x81268B: and     dword ptr [ecx+1Ch], 0FFFFFBFFh
0x812692: mov     [ecx+24h], edx
0x812695: cmp     [eax+35h], dl
0x812698: mov     ecx, [eax+8]
0x81269B: jz      short loc_8126A6
0x81269D: or      dword ptr [ecx+1Ch], 800h
0x8126A4: jmp     short loc_8126AD
0x8126A6: and     dword ptr [ecx+1Ch], 0FFFFF7FFh
0x8126AD: mov     [ecx+24h], edx
0x8126B0: mov     ecx, [eax+8]
0x8126B3: cmp     [eax+36h], dl
0x8126B6: mov     [ecx+24h], edx
0x8126B9: jz      short loc_8126C5
0x8126BB: or      dword ptr [ecx+1Ch], 1000h
0x8126C2: retn    4
0x8126C5: and     dword ptr [ecx+1Ch], 0FFFFEFFFh
0x8126CC: retn    4
