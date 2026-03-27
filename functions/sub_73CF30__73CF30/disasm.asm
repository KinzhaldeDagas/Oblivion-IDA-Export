0x73CF30: push    ebx
0x73CF31: mov     ebx, [esp+4+Size]
0x73CF35: push    ebp
0x73CF36: push    esi
0x73CF37: push    edi
0x73CF38: push    ebx; Size
0x73CF39: mov     esi, ecx
0x73CF3B: call    sub_721610
0x73CF40: mov     eax, [ebx+21Ch]
0x73CF46: mov     edx, [eax+4]
0x73CF49: push    1
0x73CF4B: lea     ecx, [esp+14h+Size]
0x73CF4F: push    ecx
0x73CF50: push    4
0x73CF52: lea     ebp, [esi+0Ch]
0x73CF55: push    ebp
0x73CF56: push    eax
0x73CF57: mov     [esp+24h+Size], 4
0x73CF5F: call    edx
0x73CF61: mov     edi, [ebp+0]
0x73CF64: add     esp, 14h
0x73CF67: test    edi, edi
0x73CF69: jbe     short loc_73CFBD
0x73CF6B: xor     ecx, ecx
0x73CF6D: mov     eax, edi
0x73CF6F: mov     edx, 4
0x73CF74: mul     edx
0x73CF76: seto    cl
0x73CF79: neg     ecx
0x73CF7B: or      ecx, eax
0x73CF7D: push    ecx; Size
0x73CF7E: call    FormHeapAlloc
0x73CF83: xor     edi, edi
0x73CF85: add     esp, 4
0x73CF88: cmp     [ebp+0], edi
0x73CF8B: mov     [esi+10h], eax
0x73CF8E: jbe     short loc_73CFC4
0x73CF90: mov     ecx, [esi+10h]
0x73CF93: lea     eax, ds:0[edi*4]
0x73CF9A: mov     dword ptr [eax+ecx], 0
0x73CFA1: mov     edx, [esi+10h]
0x73CFA4: add     edx, eax
0x73CFA6: push    edx
0x73CFA7: mov     ecx, ebx
0x73CFA9: call    sub_713620
0x73CFAE: add     edi, 1
0x73CFB1: cmp     edi, [ebp+0]
0x73CFB4: jb      short loc_73CF90
0x73CFB6: pop     edi
0x73CFB7: pop     esi
0x73CFB8: pop     ebp
0x73CFB9: pop     ebx
0x73CFBA: retn    4
0x73CFBD: mov     dword ptr [esi+10h], 0
0x73CFC4: pop     edi
0x73CFC5: pop     esi
0x73CFC6: pop     ebp
0x73CFC7: pop     ebx
0x73CFC8: retn    4
