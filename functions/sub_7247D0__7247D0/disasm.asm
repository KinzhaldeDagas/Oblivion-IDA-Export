0x7247D0: push    ebx
0x7247D1: mov     ebx, [esp+4+arg_0]
0x7247D5: push    esi
0x7247D6: push    edi
0x7247D7: push    ebx
0x7247D8: mov     edi, ecx
0x7247DA: call    sub_709EE0
0x7247DF: cmp     dword ptr [ebx+0D8h], 0A000102h
0x7247E9: lea     esi, [edi+0DCh]
0x7247EF: jnb     short loc_724802
0x7247F1: movzx   ax, byte ptr [ebx+259h]
0x7247F9: and     ax, 1FFh
0x7247FD: mov     [esi], ax
0x724800: jmp     short loc_724823
0x724802: mov     eax, [ebx+21Ch]
0x724808: mov     edx, [eax+4]
0x72480B: push    1
0x72480D: lea     ecx, [esp+10h+arg_0]
0x724811: push    ecx
0x724812: push    2
0x724814: push    esi
0x724815: push    eax
0x724816: mov     [esp+20h+arg_0], 2
0x72481E: call    edx
0x724820: add     esp, 14h
0x724823: mov     ebx, [ebx+21Ch]
0x724829: mov     ecx, [ebx+4]
0x72482C: push    1
0x72482E: lea     eax, [esp+10h+arg_0]
0x724832: push    eax
0x724833: push    4
0x724835: add     edi, 0E0h ; 'à'
0x72483B: push    edi
0x72483C: push    ebx
0x72483D: mov     [esp+20h+arg_0], 4
0x724845: call    ecx
0x724847: or      word ptr [esi], 2
0x72484B: add     esp, 14h
0x72484E: pop     edi
0x72484F: pop     esi
0x724850: pop     ebx
0x724851: retn    4
