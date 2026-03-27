0x650920: push    ebp
0x650921: push    esi
0x650922: mov     esi, ecx
0x650924: mov     eax, [esi]
0x650926: mov     edx, [eax+184h]
0x65092C: call    edx
0x65092E: mov     ebp, eax
0x650930: test    ebp, ebp
0x650932: jz      loc_6509F5
0x650938: cmp     dword ptr [esi+148h], 0
0x65093F: push    edi
0x650940: mov     edi, [esp+0Ch+arg_0]
0x650944: jnz     short loc_650953
0x650946: mov     eax, [esi]
0x650948: mov     edx, [eax+558h]
0x65094E: push    edi
0x65094F: mov     ecx, esi
0x650951: call    edx
0x650953: mov     eax, [esi]
0x650955: mov     edx, [eax+55Ch]
0x65095B: push    ebx
0x65095C: push    edi
0x65095D: mov     ecx, esi
0x65095F: call    edx
0x650961: push    edi
0x650962: mov     ecx, ebp
0x650964: call    sub_566D00
0x650969: mov     ebx, eax
0x65096B: mov     eax, [esi+148h]
0x650971: test    eax, eax
0x650973: jz      short loc_6509D3
0x650975: push    0
0x650977: push    3
0x650979: lea     ecx, [eax+0Ch]
0x65097C: call    EffectItemList_GetStrongestItem
0x650981: mov     eax, [eax+10h]
0x650984: cmp     eax, 2
0x650987: jnz     short loc_6509A6
0x650989: mov     eax, [esi+148h]
0x65098F: push    0; char
0x650991: push    ebx; int
0x650992: push    eax; int
0x650993: mov     ecx, edi; int
0x650995: call    Actor_CastOnTarget
0x65099A: mov     dword ptr [esi+148h], 0
0x6509A4: jmp     short loc_6509D3
0x6509A6: cmp     eax, 1
0x6509A9: jnz     short loc_6509C6
0x6509AB: mov     ecx, [esi+148h]
0x6509B1: push    ebx; int
0x6509B2: push    ecx; int
0x6509B3: mov     ecx, edi; int
0x6509B5: call    Actor_CastOnTouch
0x6509BA: mov     dword ptr [esi+148h], 0
0x6509C4: jmp     short loc_6509D3
0x6509C6: mov     edx, [esi]
0x6509C8: mov     eax, [edx+54Ch]
0x6509CE: push    edi
0x6509CF: mov     ecx, esi
0x6509D1: call    eax
0x6509D3: mov     ecx, ebp
0x6509D5: call    sub_565DF0
0x6509DA: test    al, al
0x6509DC: pop     ebx
0x6509DD: jz      short loc_6509F4
0x6509DF: cmp     dword ptr [ebp+30h], 0
0x6509E3: jnz     short loc_6509F4
0x6509E5: mov     edx, [esi]
0x6509E7: mov     eax, [edx+188h]
0x6509ED: push    1
0x6509EF: push    edi
0x6509F0: mov     ecx, esi
0x6509F2: call    eax
0x6509F4: pop     edi
0x6509F5: pop     esi
0x6509F6: pop     ebp
0x6509F7: retn    4
