0x7055F0: push    ebx
0x7055F1: push    esi
0x7055F2: push    edi
0x7055F3: mov     edi, [esp+0Ch+arg_0]
0x7055F7: push    edi
0x7055F8: mov     esi, ecx
0x7055FA: call    sub_7052F0
0x7055FF: mov     eax, [edi+21Ch]
0x705605: push    1
0x705607: lea     ecx, [esp+10h+arg_0]
0x70560B: push    ecx
0x70560C: mov     ebx, 4
0x705611: push    ebx
0x705612: lea     edx, [esi+10h]
0x705615: push    edx
0x705616: push    eax
0x705617: mov     eax, [eax+4]
0x70561A: mov     [esp+20h+arg_0], ebx
0x70561E: call    eax
0x705620: mov     eax, [edi+21Ch]
0x705626: push    1
0x705628: lea     ecx, [esp+24h+arg_0]
0x70562C: push    ecx
0x70562D: push    ebx
0x70562E: lea     edx, [esi+14h]
0x705631: push    edx
0x705632: push    eax
0x705633: mov     eax, [eax+4]
0x705636: mov     [esp+34h+arg_0], ebx
0x70563A: call    eax
0x70563C: mov     eax, [edi+21Ch]
0x705642: push    1
0x705644: lea     ecx, [esp+38h+arg_0]
0x705648: push    ecx
0x705649: push    ebx
0x70564A: lea     edx, [esi+18h]
0x70564D: push    edx
0x70564E: push    eax
0x70564F: mov     eax, [eax+4]
0x705652: mov     [esp+48h+arg_0], ebx
0x705656: call    eax
0x705658: mov     eax, [edi+21Ch]
0x70565E: push    1
0x705660: lea     ecx, [esp+4Ch+arg_0]
0x705664: push    ecx
0x705665: push    ebx
0x705666: lea     edx, [esi+1Ch]
0x705669: push    edx
0x70566A: push    eax
0x70566B: mov     eax, [eax+4]
0x70566E: mov     [esp+5Ch+arg_0], ebx
0x705672: call    eax
0x705674: mov     eax, [edi+21Ch]
0x70567A: add     esp, 50h
0x70567D: push    1
0x70567F: lea     ecx, [esp+10h+arg_0]
0x705683: push    ecx
0x705684: push    ebx
0x705685: lea     edx, [esi+20h]
0x705688: push    edx
0x705689: push    eax
0x70568A: mov     eax, [eax+4]
0x70568D: mov     [esp+20h+arg_0], ebx
0x705691: call    eax
0x705693: mov     edi, [edi+21Ch]
0x705699: mov     edx, [edi+4]
0x70569C: push    1
0x70569E: lea     ecx, [esp+24h+arg_0]
0x7056A2: push    ecx
0x7056A3: push    ebx
0x7056A4: add     esi, 24h ; '$'
0x7056A7: push    esi
0x7056A8: push    edi
0x7056A9: mov     [esp+34h+arg_0], ebx
0x7056AD: call    edx
0x7056AF: add     esp, 28h
0x7056B2: pop     edi
0x7056B3: pop     esi
0x7056B4: pop     ebx
0x7056B5: retn    4
