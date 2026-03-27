0x7027A0: sub     esp, 8
0x7027A3: push    esi
0x7027A4: push    edi
0x7027A5: mov     edi, [esp+10h+arg_0]
0x7027A9: push    edi
0x7027AA: mov     esi, ecx
0x7027AC: call    sub_700A80
0x7027B1: cmp     dword ptr [esi+3Ch], 0
0x7027B5: push    1
0x7027B7: lea     ecx, [esp+14h+var_4]
0x7027BB: push    ecx
0x7027BC: setz    al
0x7027BF: mov     byte ptr [esp+18h+arg_0], al
0x7027C3: mov     eax, [edi+220h]
0x7027C9: push    1
0x7027CB: lea     edx, [esp+1Ch+arg_0]
0x7027CF: push    edx
0x7027D0: push    eax
0x7027D1: mov     eax, [eax+8]
0x7027D4: mov     [esp+24h+var_4], 1
0x7027DC: call    eax
0x7027DE: mov     ecx, [esi+34h]
0x7027E1: add     esp, 14h
0x7027E4: push    ecx
0x7027E5: mov     ecx, edi
0x7027E7: call    sub_713720
0x7027EC: mov     edx, [edi]
0x7027EE: mov     eax, [esi+3Ch]
0x7027F1: mov     edx, [edx+2Ch]
0x7027F4: push    eax
0x7027F5: mov     ecx, edi
0x7027F7: call    edx
0x7027F9: mov     eax, [edi+220h]
0x7027FF: push    1
0x702801: lea     ecx, [esp+14h+var_4]
0x702805: push    ecx
0x702806: push    4
0x702808: lea     edx, [esi+18h]
0x70280B: push    edx
0x70280C: push    eax
0x70280D: mov     eax, [eax+8]
0x702810: mov     [esp+24h+var_4], 4
0x702818: call    eax
0x70281A: mov     eax, [edi+220h]
0x702820: push    1
0x702822: lea     ecx, [esp+28h+var_4]
0x702826: push    ecx
0x702827: push    4
0x702829: lea     edx, [esi+20h]
0x70282C: push    edx
0x70282D: push    eax
0x70282E: mov     eax, [eax+8]
0x702831: mov     [esp+38h+var_4], 4
0x702839: call    eax
0x70283B: mov     eax, [edi+220h]
0x702841: push    1
0x702843: lea     ecx, [esp+3Ch+var_4]
0x702847: push    ecx
0x702848: push    4
0x70284A: lea     edx, [esi+1Ch]
0x70284D: push    edx
0x70284E: push    eax
0x70284F: mov     eax, [eax+8]
0x702852: mov     [esp+4Ch+var_4], 4
0x70285A: call    eax
0x70285C: mov     cl, [esi+40h]
0x70285F: mov     eax, [edi+220h]
0x702865: push    1
0x702867: lea     edx, [esp+50h+var_4]
0x70286B: push    edx
0x70286C: mov     byte ptr [esp+54h+var_8+2], cl
0x702870: mov     edx, [eax+8]
0x702873: push    1
0x702875: lea     ecx, [esp+58h+var_8+2]
0x702879: push    ecx
0x70287A: push    eax
0x70287B: mov     [esp+60h+var_4], 1
0x702883: call    edx
0x702885: mov     al, [esi+41h]
0x702888: mov     edi, [edi+220h]
0x70288E: add     esp, 50h
0x702891: mov     byte ptr [esp+10h+var_8+3], al
0x702895: mov     eax, [edi+8]
0x702898: push    1
0x70289A: lea     ecx, [esp+14h+var_4]
0x70289E: push    ecx
0x70289F: push    1
0x7028A1: lea     edx, [esp+1Ch+var_8+3]
0x7028A5: push    edx
0x7028A6: push    edi
0x7028A7: mov     [esp+24h+var_4], 1
0x7028AF: call    eax
0x7028B1: add     esp, 14h
0x7028B4: pop     edi
0x7028B5: pop     esi
0x7028B6: add     esp, 8
0x7028B9: retn    4
