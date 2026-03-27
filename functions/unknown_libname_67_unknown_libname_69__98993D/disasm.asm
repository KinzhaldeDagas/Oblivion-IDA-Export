0x98993D: push    edi; Memory
0x98993E: call    __freea
0x989943: pop     ecx
0x989944: jmp     short loc_989960
0x989946: push    dword ptr [ebp+1Ch]; cchDest
0x989949: push    dword ptr [ebp+18h]; lpDestStr
0x98994C: push    dword ptr [ebp+14h]; cchSrc
0x98994F: push    dword ptr [ebp+10h]; lpSrcStr
0x989952: push    dword ptr [ebp+0Ch]; dwMapFlags
0x989955: push    dword ptr [ebp+8]; Locale
0x989958: call    ds:LCMapStringA
0x98995E: mov     esi, eax
0x989960: cmp     [ebp-0Ch], ebx
0x989963: jz      short loc_98996E
0x989965: push    dword ptr [ebp-0Ch]; Memory
0x989968: call    _free
0x98996D: pop     ecx
0x98996E: mov     eax, [ebp-10h]
0x989971: cmp     eax, ebx
0x989973: jz      short loc_989981
0x989975: cmp     [ebp+18h], eax
0x989978: jz      short loc_989981
0x98997A: push    eax; Memory
0x98997B: call    _free
0x989980: pop     ecx
0x989981: mov     eax, esi
0x989983: lea     esp, [ebp-20h]
0x989986: pop     edi
0x989987: pop     esi
0x989988: pop     ebx
0x989989: mov     ecx, [ebp-4]
0x98998C: xor     ecx, ebp
0x98998E: call    @__security_check_cookie@4
0x989993: leave
0x989994: retn
