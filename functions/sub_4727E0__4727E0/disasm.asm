0x4727E0: push    ecx
0x4727E1: mov     eax, [esp+4+arg_8]
0x4727E5: test    eax, eax
0x4727E7: jz      short loc_4727ED
0x4727E9: fldz
0x4727EB: fstp    dword ptr [eax]
0x4727ED: mov     eax, [esp+4+MaxCount]
0x4727F1: cmp     dword ptr [ecx+eax*4+0A0h], 0
0x4727F9: jz      loc_4728B7
0x4727FF: mov     edx, [esp+4+Str2]
0x472803: test    edx, edx
0x472805: jz      loc_4728B7
0x47280B: mov     eax, [ecx+eax*4+0A0h]
0x472812: fld     dword ptr [eax+3Ch]
0x472815: mov     eax, [eax+20h]
0x472818: push    ebx
0x472819: fstp    [esp+8+var_4]
0x47281D: mov     ebx, [eax+10h]
0x472820: push    ebp
0x472821: mov     ebp, [eax+0Ch]
0x472824: mov     eax, edx
0x472826: lea     edx, [eax+1]
0x472829: lea     esp, [esp+0]
0x472830: mov     cl, [eax]
0x472832: add     eax, 1
0x472835: test    cl, cl
0x472837: jnz     short loc_472830
0x472839: sub     eax, edx
0x47283B: mov     [esp+0Ch+MaxCount], eax
0x47283F: jnz     short loc_472849
0x472841: pop     ebp
0x472842: xor     al, al
0x472844: pop     ebx
0x472845: pop     ecx
0x472846: retn    0Ch
0x472849: push    esi
0x47284A: xor     esi, esi
0x47284C: test    ebp, ebp
0x47284E: push    edi
0x47284F: jbe     short loc_472887
0x472851: mov     edi, [ebx+esi*8+4]
0x472855: test    edi, edi
0x472857: jz      short loc_472880
0x472859: mov     eax, [esp+14h+MaxCount]
0x47285D: mov     ecx, [esp+14h+Str2]
0x472861: push    eax; MaxCount
0x472862: push    ecx; Str2
0x472863: push    edi; Str1
0x472864: call    __strnicmp
0x472869: add     esp, 0Ch
0x47286C: test    eax, eax
0x47286E: jnz     short loc_472880
0x472870: fld     dword ptr [ebx+esi*8]
0x472873: fld     [esp+14h+var_4]
0x472877: fcompp
0x472879: fnstsw  ax
0x47287B: test    ah, 41h
0x47287E: jnp     short loc_472891
0x472880: add     esi, 1
0x472883: cmp     esi, ebp
0x472885: jb      short loc_472851
0x472887: pop     edi
0x472888: pop     esi
0x472889: pop     ebp
0x47288A: xor     al, al
0x47288C: pop     ebx
0x47288D: pop     ecx
0x47288E: retn    0Ch
0x472891: mov     eax, [esp+14h+arg_8]
0x472895: test    eax, eax
0x472897: jz      short loc_47289E
0x472899: fld     dword ptr [ebx+esi*8]
0x47289C: fstp    dword ptr [eax]
0x47289E: mov     edx, [esp+14h+MaxCount]
0x4728A2: movsx   eax, byte ptr [edi+edx]
0x4728A6: push    eax; C
0x4728A7: call    _tolower
0x4728AC: add     esp, 4
0x4728AF: pop     edi
0x4728B0: pop     esi
0x4728B1: pop     ebp
0x4728B2: pop     ebx
0x4728B3: pop     ecx
0x4728B4: retn    0Ch
0x4728B7: xor     al, al
0x4728B9: pop     ecx
0x4728BA: retn    0Ch
