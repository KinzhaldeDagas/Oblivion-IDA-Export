0x8C0750: push    esi
0x8C0751: mov     esi, [esp+4+arg_0]
0x8C0755: push    edi
0x8C0756: push    esi
0x8C0757: mov     edi, ecx
0x8C0759: call    sub_8A0C30
0x8C075E: mov     edi, [edi+4]
0x8C0761: mov     eax, [esi+21Ch]
0x8C0767: mov     edx, [eax+4]
0x8C076A: push    0
0x8C076C: push    0
0x8C076E: push    10h
0x8C0770: lea     ecx, [edi+10h]
0x8C0773: push    ecx
0x8C0774: push    eax
0x8C0775: call    edx
0x8C0777: mov     eax, [esi+21Ch]
0x8C077D: mov     edx, [eax+4]
0x8C0780: push    0
0x8C0782: push    0
0x8C0784: push    10h
0x8C0786: lea     ecx, [edi+20h]
0x8C0789: push    ecx
0x8C078A: push    eax
0x8C078B: call    edx
0x8C078D: mov     esi, [esi+21Ch]
0x8C0793: mov     ecx, [esi+4]
0x8C0796: push    1
0x8C0798: lea     eax, [esp+34h+arg_0]
0x8C079C: push    eax
0x8C079D: push    4
0x8C079F: add     edi, 0Ch
0x8C07A2: push    edi
0x8C07A3: push    esi
0x8C07A4: mov     [esp+44h+arg_0], 4
0x8C07AC: call    ecx
0x8C07AE: add     esp, 3Ch
0x8C07B1: pop     edi
0x8C07B2: pop     esi
0x8C07B3: retn    4
