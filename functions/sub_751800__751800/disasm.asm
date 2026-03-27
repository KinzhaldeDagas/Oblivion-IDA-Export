0x751800: push    esi
0x751801: push    edi
0x751802: push    3Ch ; '<'; Size
0x751804: mov     edi, ecx
0x751806: call    FormHeapAlloc
0x75180B: add     esp, 4
0x75180E: test    eax, eax
0x751810: jz      short loc_75181D
0x751812: mov     ecx, eax
0x751814: call    sub_750B50
0x751819: mov     esi, eax
0x75181B: jmp     short loc_75181F
0x75181D: xor     esi, esi
0x75181F: mov     eax, [esp+8+arg_0]
0x751823: push    eax
0x751824: push    esi
0x751825: mov     ecx, edi
0x751827: call    sub_752C40
0x75182C: mov     ecx, [edi+1Ch]
0x75182F: mov     [esi+1Ch], ecx
0x751832: mov     edx, [edi+20h]
0x751835: mov     [esi+20h], edx
0x751838: mov     eax, [edi+24h]
0x75183B: mov     [esi+24h], eax
0x75183E: fld     dword ptr [edi+28h]
0x751841: fstp    dword ptr [esi+28h]
0x751844: mov     eax, esi
0x751846: fld     dword ptr [edi+2Ch]
0x751849: fstp    dword ptr [esi+2Ch]
0x75184C: mov     ecx, [edi+30h]
0x75184F: mov     [esi+30h], ecx
0x751852: fld     dword ptr [edi+34h]
0x751855: fstp    dword ptr [esi+34h]
0x751858: fld     dword ptr [edi+38h]
0x75185B: pop     edi
0x75185C: fstp    dword ptr [esi+38h]
0x75185F: pop     esi
0x751860: retn    4
