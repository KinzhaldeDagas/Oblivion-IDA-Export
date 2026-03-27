0x7AA860: push    esi
0x7AA861: mov     esi, ecx
0x7AA863: mov     ecx, [esp+4+arg_0]
0x7AA867: mov     eax, [ecx]
0x7AA869: cmp     eax, [esi+4]
0x7AA86C: push    edi
0x7AA86D: jnz     short loc_7AA8BD
0x7AA86F: mov     eax, [eax]
0x7AA871: mov     [ecx], eax
0x7AA873: mov     ecx, [esi+4]
0x7AA876: mov     eax, [ecx]
0x7AA878: test    eax, eax
0x7AA87A: mov     [esi+4], eax
0x7AA87D: jz      short loc_7AA89E
0x7AA87F: mov     dword ptr [eax+4], 0
0x7AA886: mov     edx, [esi]
0x7AA888: mov     edi, [ecx+8]
0x7AA88B: mov     eax, [edx+8]
0x7AA88E: push    ecx
0x7AA88F: mov     ecx, esi
0x7AA891: call    eax
0x7AA893: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x7AA897: mov     eax, edi
0x7AA899: pop     edi
0x7AA89A: pop     esi
0x7AA89B: retn    4
0x7AA89E: mov     edx, [esi]
0x7AA8A0: mov     eax, [edx+8]
0x7AA8A3: mov     dword ptr [esi+8], 0
0x7AA8AA: mov     edi, [ecx+8]
0x7AA8AD: push    ecx
0x7AA8AE: mov     ecx, esi
0x7AA8B0: call    eax
0x7AA8B2: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x7AA8B6: mov     eax, edi
0x7AA8B8: pop     edi
0x7AA8B9: pop     esi
0x7AA8BA: retn    4
0x7AA8BD: cmp     eax, [esi+8]
0x7AA8C0: jnz     short loc_7AA912
0x7AA8C2: mov     dword ptr [ecx], 0
0x7AA8C8: mov     ecx, [esi+8]
0x7AA8CB: mov     eax, [ecx+4]
0x7AA8CE: test    eax, eax
0x7AA8D0: mov     [esi+8], eax
0x7AA8D3: jz      short loc_7AA8F3
0x7AA8D5: mov     dword ptr [eax], 0
0x7AA8DB: mov     edx, [esi]
0x7AA8DD: mov     edi, [ecx+8]
0x7AA8E0: mov     eax, [edx+8]
0x7AA8E3: push    ecx
0x7AA8E4: mov     ecx, esi
0x7AA8E6: call    eax
0x7AA8E8: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x7AA8EC: mov     eax, edi
0x7AA8EE: pop     edi
0x7AA8EF: pop     esi
0x7AA8F0: retn    4
0x7AA8F3: mov     edx, [esi]
0x7AA8F5: mov     eax, [edx+8]
0x7AA8F8: mov     dword ptr [esi+4], 0
0x7AA8FF: mov     edi, [ecx+8]
0x7AA902: push    ecx
0x7AA903: mov     ecx, esi
0x7AA905: call    eax
0x7AA907: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x7AA90B: mov     eax, edi
0x7AA90D: pop     edi
0x7AA90E: pop     esi
0x7AA90F: retn    4
0x7AA912: mov     edi, [eax+4]
0x7AA915: test    edi, edi
0x7AA917: mov     edx, [eax]
0x7AA919: mov     [ecx], edx
0x7AA91B: jz      short loc_7AA91F
0x7AA91D: mov     [edi], edx
0x7AA91F: test    edx, edx
0x7AA921: jz      short loc_7AA926
0x7AA923: mov     [edx+4], edi
0x7AA926: mov     edx, [esi]
0x7AA928: mov     edi, [eax+8]
0x7AA92B: push    eax
0x7AA92C: mov     eax, [edx+8]
0x7AA92F: mov     ecx, esi
0x7AA931: call    eax
0x7AA933: add     dword ptr [esi+0Ch], 0FFFFFFFFh
0x7AA937: mov     eax, edi
0x7AA939: pop     edi
0x7AA93A: pop     esi
0x7AA93B: retn    4
