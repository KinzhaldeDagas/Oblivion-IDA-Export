0x77D900: push    34h ; '4'; Size
0x77D902: call    FormHeapAlloc
0x77D907: add     esp, 4
0x77D90A: test    eax, eax
0x77D90C: jz      short loc_77D938
0x77D90E: push    esi
0x77D90F: mov     ecx, eax
0x77D911: call    sub_77D890
0x77D916: mov     esi, eax
0x77D918: test    esi, esi
0x77D91A: jz      short loc_77D970
0x77D91C: mov     eax, [esp+4+arg_0]
0x77D920: mov     [esi+0Ch], eax
0x77D923: mov     eax, [esp+4+arg_4]
0x77D927: test    eax, eax
0x77D929: jz      short loc_77D93B
0x77D92B: mov     [esi+10h], eax
0x77D92E: mov     ecx, [eax]
0x77D930: mov     edx, [ecx+4]
0x77D933: push    eax
0x77D934: call    edx
0x77D936: jmp     short loc_77D951
0x77D938: xor     eax, eax
0x77D93A: retn
0x77D93B: mov     eax, [esi+10h]
0x77D93E: test    eax, eax
0x77D940: jz      short loc_77D94A
0x77D942: mov     ecx, [eax]
0x77D944: mov     edx, [ecx+8]
0x77D947: push    eax
0x77D948: call    edx
0x77D94A: mov     dword ptr [esi+10h], 0
0x77D951: mov     eax, [esp+4+arg_8]
0x77D955: mov     ecx, [esp+4+arg_C]
0x77D959: mov     edx, [esp+4+arg_10]
0x77D95D: push    esi
0x77D95E: mov     [esi+4], eax
0x77D961: mov     [esi+8], ecx
0x77D964: mov     [esi], edx
0x77D966: call    sub_77D1F0
0x77D96B: add     esp, 4
0x77D96E: mov     eax, esi
0x77D970: pop     esi
0x77D971: retn
