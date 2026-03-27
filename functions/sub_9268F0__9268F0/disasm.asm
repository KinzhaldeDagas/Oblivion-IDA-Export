0x9268F0: push    esi
0x9268F1: mov     esi, [esp+4+arg_0]
0x9268F5: push    edi
0x9268F6: push    esi
0x9268F7: mov     edi, ecx
0x9268F9: call    sub_8A0C80
0x9268FE: mov     edi, [edi+4]
0x926901: mov     eax, [esi+220h]
0x926907: push    1
0x926909: lea     ecx, [esp+0Ch+arg_0]
0x92690D: push    ecx
0x92690E: push    4
0x926910: lea     edx, [edi+10h]
0x926913: push    edx
0x926914: push    eax
0x926915: mov     eax, [eax+8]
0x926918: mov     [esp+1Ch+arg_0], 4
0x926920: call    eax
0x926922: mov     eax, [esi+220h]
0x926928: push    1
0x92692A: lea     ecx, [esp+20h+arg_0]
0x92692E: push    ecx
0x92692F: push    1
0x926931: lea     edx, [edi+14h]
0x926934: push    edx
0x926935: push    eax
0x926936: mov     eax, [eax+8]
0x926939: mov     [esp+30h+arg_0], 1
0x926941: call    eax
0x926943: mov     eax, [esi+220h]
0x926949: push    1
0x92694B: lea     ecx, [esp+34h+arg_0]
0x92694F: push    ecx
0x926950: push    40h ; '@'
0x926952: lea     edx, [edi+20h]
0x926955: push    edx
0x926956: push    eax
0x926957: mov     eax, [eax+8]
0x92695A: mov     [esp+44h+arg_0], 40h ; '@'
0x926962: call    eax
0x926964: mov     esi, [esi+220h]
0x92696A: mov     edx, [esi+8]
0x92696D: push    1
0x92696F: lea     ecx, [esp+48h+arg_0]
0x926973: push    ecx
0x926974: push    40h ; '@'
0x926976: add     edi, 60h ; '`'
0x926979: push    edi
0x92697A: push    esi
0x92697B: mov     [esp+58h+arg_0], 40h ; '@'
0x926983: call    edx
0x926985: add     esp, 50h
0x926988: pop     edi
0x926989: pop     esi
0x92698A: retn    4
