0x722510: push    esi
0x722511: push    edi
0x722512: mov     edi, [esp+8+arg_0]
0x722516: push    edi
0x722517: mov     esi, ecx
0x722519: call    sub_709EE0
0x72251E: cmp     dword ptr [edi+0D8h], 0A000102h
0x722528: jnb     short loc_72257D
0x72252A: movzx   eax, word ptr [edi+258h]
0x722531: mov     [esi+0DCh], ax
0x722538: cmp     dword ptr [edi+0D8h], 4020003h
0x722542: jnb     short loc_72255D
0x722544: movzx   ecx, ax
0x722547: and     eax, 0E000h
0x72254C: add     eax, eax
0x72254E: and     ecx, 1FFFh
0x722554: or      eax, ecx
0x722556: mov     [esi+0DCh], ax
0x72255D: movzx   ax, byte ptr [esi+0DDh]
0x722565: and     ax, 7FFh
0x722569: mov     [esi+0DCh], ax
0x722570: or      word ptr [esi+0DCh], 8
0x722578: pop     edi
0x722579: pop     esi
0x72257A: retn    4
0x72257D: mov     eax, [edi+21Ch]
0x722583: mov     edx, [eax+4]
0x722586: push    1
0x722588: lea     ecx, [esp+0Ch+arg_0]
0x72258C: push    ecx
0x72258D: push    2
0x72258F: add     esi, 0DCh ; 'Ü'
0x722595: push    esi
0x722596: push    eax
0x722597: mov     [esp+1Ch+arg_0], 2
0x72259F: call    edx
0x7225A1: or      word ptr [esi], 8
0x7225A5: add     esp, 14h
0x7225A8: pop     edi
0x7225A9: pop     esi
0x7225AA: retn    4
