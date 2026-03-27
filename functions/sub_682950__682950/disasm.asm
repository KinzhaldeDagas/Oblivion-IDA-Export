0x682950: push    esi
0x682951: mov     esi, [esp+4+a3]
0x682955: test    esi, esi
0x682957: push    edi
0x682958: mov     edi, ecx
0x68295A: jz      short loc_6829B8
0x68295C: mov     eax, [esi+20h]
0x68295F: sub     eax, 1
0x682962: jz      short loc_682990
0x682964: sub     eax, 1
0x682967: jnz     short loc_6829B8
0x682969: mov     eax, [esi]
0x68296B: push    eax
0x68296C: lea     ecx, [edi+20h]
0x68296F: call    NiTMap_RemoveAt
0x682974: mov     ecx, [esi]
0x682976: push    ecx
0x682977: lea     ecx, [edi+10h]
0x68297A: call    NiTMap_RemoveAt
0x68297F: mov     edx, [esi]
0x682981: push    esi; a3
0x682982: push    edx; a2
0x682983: lea     ecx, [edi+30h]; this
0x682986: call    NiTMap_SetAt
0x68298B: pop     edi
0x68298C: pop     esi
0x68298D: retn    4
0x682990: mov     ecx, [esi+4]
0x682993: test    ecx, ecx
0x682995: jz      short loc_6829A0
0x682997: mov     eax, [ecx]
0x682999: mov     edx, [eax+10h]
0x68299C: push    1
0x68299E: call    edx
0x6829A0: mov     ecx, [esi+8]
0x6829A3: test    ecx, ecx
0x6829A5: jz      short loc_6829AF
0x6829A7: mov     eax, [ecx]
0x6829A9: mov     edx, [eax]
0x6829AB: push    1
0x6829AD: call    edx
0x6829AF: push    esi
0x6829B0: call    FormHeapFree
0x6829B5: add     esp, 4
0x6829B8: pop     edi
0x6829B9: pop     esi
0x6829BA: retn    4
