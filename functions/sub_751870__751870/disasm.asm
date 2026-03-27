0x751870: push    esi
0x751871: push    edi
0x751872: mov     edi, [esp+8+arg_0]
0x751876: push    edi
0x751877: mov     esi, ecx
0x751879: call    sub_752CD0
0x75187E: test    al, al
0x751880: jz      loc_751912
0x751886: mov     eax, [esi+18h]
0x751889: test    eax, eax
0x75188B: jz      short loc_751897
0x75188D: cmp     dword ptr [edi+18h], 0
0x751891: jz      short loc_751912
0x751893: test    eax, eax
0x751895: jnz     short loc_7518A1
0x751897: cmp     dword ptr [edi+18h], 0
0x75189B: jnz     short loc_751912
0x75189D: test    eax, eax
0x75189F: jz      short loc_7518B7
0x7518A1: mov     eax, [edi+18h]
0x7518A4: test    eax, eax
0x7518A6: jz      short loc_7518B7
0x7518A8: mov     ecx, [esi+18h]
0x7518AB: mov     edx, [ecx]
0x7518AD: push    eax
0x7518AE: mov     eax, [edx+2Ch]
0x7518B1: call    eax
0x7518B3: test    al, al
0x7518B5: jz      short loc_751912
0x7518B7: lea     ecx, [esi+1Ch]
0x7518BA: push    ecx
0x7518BB: lea     ecx, [edi+1Ch]
0x7518BE: call    sub_8AA390
0x7518C3: test    al, al
0x7518C5: jnz     short loc_751912
0x7518C7: fld     dword ptr [edi+28h]
0x7518CA: fld     dword ptr [esi+28h]
0x7518CD: fucompp
0x7518CF: fnstsw  ax
0x7518D1: test    ah, 44h
0x7518D4: jp      short loc_751912
0x7518D6: fld     dword ptr [edi+2Ch]
0x7518D9: fld     dword ptr [esi+2Ch]
0x7518DC: fucompp
0x7518DE: fnstsw  ax
0x7518E0: test    ah, 44h
0x7518E3: jp      short loc_751912
0x7518E5: mov     edx, [edi+30h]
0x7518E8: cmp     edx, [esi+30h]
0x7518EB: jnz     short loc_751912
0x7518ED: fld     dword ptr [edi+34h]
0x7518F0: fld     dword ptr [esi+34h]
0x7518F3: fucompp
0x7518F5: fnstsw  ax
0x7518F7: test    ah, 44h
0x7518FA: jp      short loc_751912
0x7518FC: fld     dword ptr [edi+38h]
0x7518FF: fld     dword ptr [esi+38h]
0x751902: fucompp
0x751904: fnstsw  ax
0x751906: test    ah, 44h
0x751909: jp      short loc_751912
0x75190B: pop     edi
0x75190C: mov     al, 1
0x75190E: pop     esi
0x75190F: retn    4
0x751912: pop     edi
0x751913: xor     al, al
0x751915: pop     esi
0x751916: retn    4
