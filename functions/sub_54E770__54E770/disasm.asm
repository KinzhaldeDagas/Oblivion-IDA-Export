0x54E770: push    ecx
0x54E771: fldz
0x54E773: push    esi
0x54E774: push    edi
0x54E775: fstp    [esp+0Ch+var_4]
0x54E779: mov     esi, ecx
0x54E77B: xor     edi, edi
0x54E77D: cmp     [esi+10h], edi
0x54E780: jbe     short loc_54E7B4
0x54E782: mov     eax, [esi]
0x54E784: mov     edx, [eax+54h]
0x54E787: push    edi
0x54E788: mov     ecx, esi
0x54E78A: call    edx
0x54E78C: test    al, al
0x54E78E: jz      short loc_54E7AC
0x54E790: mov     eax, [esi+0Ch]
0x54E793: fld     dword ptr [eax+edi*4]
0x54E796: lea     ecx, [eax+edi*4]
0x54E799: fld     [esp+0Ch+var_4]
0x54E79D: fcompp
0x54E79F: fnstsw  ax
0x54E7A1: test    ah, 5
0x54E7A4: jp      short loc_54E7AC
0x54E7A6: fld     dword ptr [ecx]
0x54E7A8: fstp    [esp+0Ch+var_4]
0x54E7AC: add     edi, 1
0x54E7AF: cmp     edi, [esi+10h]
0x54E7B2: jb      short loc_54E782
0x54E7B4: fld     [esp+0Ch+var_4]
0x54E7B8: pop     edi
0x54E7B9: pop     esi
0x54E7BA: pop     ecx
0x54E7BB: retn
