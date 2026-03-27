0x8E7920: push    ebx
0x8E7921: mov     ebx, [esp+4+arg_0]
0x8E7925: mov     ecx, [ebx+14h]
0x8E7928: mov     eax, [ecx+10h]
0x8E792B: add     eax, ecx
0x8E792D: mov     ecx, [ebx+18h]
0x8E7930: push    esi
0x8E7931: mov     esi, [ecx+10h]
0x8E7934: add     esi, ecx
0x8E7936: mov     ecx, [esi+54h]
0x8E7939: push    edi
0x8E793A: mov     edi, [eax+54h]
0x8E793D: cmp     edi, ecx
0x8E793F: jnz     short loc_8E7949
0x8E7941: mov     eax, edi
0x8E7943: mov     byte ptr [edi+26h], 1
0x8E7947: jmp     short loc_8E797B
0x8E7949: mov     al, [eax+91h]
0x8E794F: test    al, al
0x8E7951: jz      short loc_8E7957
0x8E7953: mov     eax, ecx
0x8E7955: jmp     short loc_8E797B
0x8E7957: mov     al, [esi+91h]
0x8E795D: test    al, al
0x8E795F: jz      short loc_8E7965
0x8E7961: mov     eax, edi
0x8E7963: jmp     short loc_8E797B
0x8E7965: push    ecx
0x8E7966: push    edi
0x8E7967: push    ebx
0x8E7968: call    sub_8E7740
0x8E796D: mov     cl, 1
0x8E796F: mov     [edi+26h], cl
0x8E7972: mov     edx, [esi+54h]
0x8E7975: add     esp, 0Ch
0x8E7978: mov     [edx+26h], cl
0x8E797B: mov     ecx, [eax+1Ch]
0x8E797E: mov     edx, [ecx+7Ch]
0x8E7981: mov     esi, [ebx+10h]
0x8E7984: push    edx
0x8E7985: add     eax, 44h ; 'D'
0x8E7988: push    ebx
0x8E7989: push    eax
0x8E798A: call    sub_8E6B20
0x8E798F: mov     eax, [esi]
0x8E7991: add     esp, 0Ch
0x8E7994: pop     edi
0x8E7995: mov     ecx, esi
0x8E7997: pop     esi
0x8E7998: pop     ebx
0x8E7999: jmp     dword ptr [eax+18h]
