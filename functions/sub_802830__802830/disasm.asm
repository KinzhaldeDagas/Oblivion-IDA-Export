0x802830: push    esi
0x802831: push    edi
0x802832: mov     edi, ecx
0x802834: mov     esi, [edi+7Ch]
0x802837: test    esi, esi
0x802839: jz      short loc_80285E
0x80283B: lea     eax, [esi+4]
0x80283E: push    eax; lpAddend
0x80283F: call    dword ptr ds:0A2807Ch
0x802845: test    eax, eax
0x802847: jnz     short loc_802857
0x802849: test    esi, esi
0x80284B: jz      short loc_802857
0x80284D: mov     edx, [esi]
0x80284F: mov     eax, [edx]
0x802851: push    1
0x802853: mov     ecx, esi
0x802855: call    eax
0x802857: mov     dword ptr [edi+7Ch], 0
0x80285E: mov     ecx, [esp+8+a8]
0x802862: mov     edx, [esp+8+a7]
0x802866: mov     eax, [esp+8+a6]
0x80286A: push    ecx; a8
0x80286B: mov     ecx, [esp+0Ch+a5]
0x80286F: push    edx; a7
0x802870: mov     edx, [esp+10h+a4]
0x802874: push    eax; a6
0x802875: mov     eax, [esp+14h+a3]
0x802879: push    ecx; a5
0x80287A: mov     ecx, [esp+18h+a2]
0x80287E: push    edx; a4
0x80287F: push    eax; a3
0x802880: push    ecx; a2
0x802881: mov     ecx, edi; this
0x802883: call    sub_76C7D0
0x802888: pop     edi
0x802889: pop     esi
0x80288A: retn    1Ch
