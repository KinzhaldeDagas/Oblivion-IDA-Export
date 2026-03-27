0x709510: push    ebx
0x709511: push    esi
0x709512: push    edi
0x709513: mov     edi, [esp+0Ch+arg_0]
0x709517: mov     eax, [edi+220h]
0x70951D: mov     edx, [eax+8]
0x709520: mov     esi, ecx
0x709522: push    1
0x709524: lea     ecx, [esp+10h+arg_0]
0x709528: push    ecx
0x709529: mov     ebx, 4
0x70952E: push    ebx
0x70952F: push    esi
0x709530: push    eax
0x709531: mov     [esp+20h+arg_0], ebx
0x709535: call    edx
0x709537: mov     eax, [edi+220h]
0x70953D: push    1
0x70953F: lea     ecx, [esp+24h+arg_0]
0x709543: push    ecx
0x709544: push    ebx
0x709545: lea     edx, [esi+4]
0x709548: push    edx
0x709549: push    eax
0x70954A: mov     eax, [eax+8]
0x70954D: mov     [esp+34h+arg_0], ebx
0x709551: call    eax
0x709553: mov     eax, [edi+220h]
0x709559: push    1
0x70955B: lea     ecx, [esp+38h+arg_0]
0x70955F: push    ecx
0x709560: push    ebx
0x709561: lea     edx, [esi+8]
0x709564: push    edx
0x709565: push    eax
0x709566: mov     eax, [eax+8]
0x709569: mov     [esp+48h+arg_0], ebx
0x70956D: call    eax
0x70956F: mov     edi, [edi+220h]
0x709575: mov     edx, [edi+8]
0x709578: push    1
0x70957A: lea     ecx, [esp+4Ch+arg_0]
0x70957E: push    ecx
0x70957F: push    ebx
0x709580: add     esi, 0Ch
0x709583: push    esi
0x709584: push    edi
0x709585: mov     [esp+5Ch+arg_0], ebx
0x709589: call    edx
0x70958B: add     esp, 50h
0x70958E: pop     edi
0x70958F: pop     esi
0x709590: pop     ebx
0x709591: retn    4
