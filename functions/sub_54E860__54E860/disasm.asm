0x54E860: push    ebp
0x54E861: mov     ebp, [esp+4+arg_4]
0x54E865: push    esi
0x54E866: push    edi
0x54E867: mov     edi, [esp+0Ch+arg_0]
0x54E86B: mov     esi, ecx
0x54E86D: cmp     edi, [esi+10h]
0x54E870: jz      short loc_54E8B9
0x54E872: mov     eax, [esi+0Ch]
0x54E875: test    eax, eax
0x54E877: jz      short loc_54E889
0x54E879: push    eax
0x54E87A: call    FormHeapFree
0x54E87F: add     esp, 4
0x54E882: mov     dword ptr [esi+0Ch], 0
0x54E889: test    edi, edi
0x54E88B: mov     [esi+10h], edi
0x54E88E: jbe     short loc_54E8B9
0x54E890: xor     ecx, ecx
0x54E892: mov     eax, edi
0x54E894: mov     edx, 4
0x54E899: mul     edx
0x54E89B: seto    cl
0x54E89E: neg     ecx
0x54E8A0: or      ecx, eax
0x54E8A2: push    ecx; Size
0x54E8A3: call    FormHeapAlloc
0x54E8A8: mov     ecx, [esi+10h]
0x54E8AB: push    ebp
0x54E8AC: push    ecx
0x54E8AD: push    eax
0x54E8AE: mov     [esi+0Ch], eax
0x54E8B1: call    sub_54F630
0x54E8B6: add     esp, 10h
0x54E8B9: mov     eax, [esi+10h]
0x54E8BC: test    eax, eax
0x54E8BE: jbe     short loc_54E8CE
0x54E8C0: mov     edx, [esi+0Ch]
0x54E8C3: push    ebp
0x54E8C4: push    eax
0x54E8C5: push    edx
0x54E8C6: call    sub_54F630
0x54E8CB: add     esp, 0Ch
0x54E8CE: pop     edi
0x54E8CF: pop     esi
0x54E8D0: pop     ebp
0x54E8D1: retn    8
