0x73C930: push    ebx
0x73C931: push    ebp
0x73C932: mov     ebp, [esp+8+Size]
0x73C936: push    esi
0x73C937: push    edi
0x73C938: push    ebp; Size
0x73C939: mov     esi, ecx
0x73C93B: call    sub_721610
0x73C940: mov     eax, [ebp+21Ch]
0x73C946: mov     edx, [eax+4]
0x73C949: push    1
0x73C94B: lea     ecx, [esp+14h+Size]
0x73C94F: push    ecx
0x73C950: push    4
0x73C952: lea     edi, [esi+0Ch]
0x73C955: push    edi
0x73C956: push    eax
0x73C957: mov     [esp+24h+Size], 4
0x73C95F: call    edx
0x73C961: mov     eax, [edi]
0x73C963: xor     ebx, ebx
0x73C965: add     esp, 14h
0x73C968: cmp     eax, ebx
0x73C96A: jbe     short loc_73C9A7
0x73C96C: xor     ecx, ecx
0x73C96E: mov     edx, 4
0x73C973: mul     edx
0x73C975: seto    cl
0x73C978: neg     ecx
0x73C97A: or      ecx, eax
0x73C97C: push    ecx; Size
0x73C97D: call    FormHeapAlloc
0x73C982: add     esp, 4
0x73C985: cmp     [edi], ebx
0x73C987: mov     [esi+10h], eax
0x73C98A: jbe     short loc_73C9AA
0x73C98C: lea     esp, [esp+0]
0x73C990: mov     eax, [esi+10h]
0x73C993: lea     ecx, [eax+ebx*4]
0x73C996: push    ecx
0x73C997: mov     ecx, ebp
0x73C999: call    sub_713620
0x73C99E: add     ebx, 1
0x73C9A1: cmp     ebx, [edi]
0x73C9A3: jb      short loc_73C990
0x73C9A5: jmp     short loc_73C9AA
0x73C9A7: mov     [esi+10h], ebx
0x73C9AA: mov     ebp, [ebp+21Ch]
0x73C9B0: mov     eax, [ebp+4]
0x73C9B3: push    1
0x73C9B5: lea     edx, [esp+14h+Size]
0x73C9B9: push    edx
0x73C9BA: push    4
0x73C9BC: add     esi, 14h
0x73C9BF: push    esi
0x73C9C0: push    ebp
0x73C9C1: mov     [esp+24h+Size], 4
0x73C9C9: call    eax
0x73C9CB: add     esp, 14h
0x73C9CE: pop     edi
0x73C9CF: pop     esi
0x73C9D0: pop     ebp
0x73C9D1: pop     ebx
0x73C9D2: retn    4
