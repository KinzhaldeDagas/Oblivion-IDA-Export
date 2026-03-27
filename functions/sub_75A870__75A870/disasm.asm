0x75A870: push    ebp
0x75A871: push    esi
0x75A872: mov     esi, ecx
0x75A874: mov     eax, [esi+1Ch]
0x75A877: push    edi
0x75A878: mov     edi, [esp+0Ch+arg_0]
0x75A87C: push    eax
0x75A87D: mov     [esi+18h], di
0x75A881: call    FormHeapFree
0x75A886: movsx   eax, di
0x75A889: add     esp, 4
0x75A88C: cmp     eax, 1
0x75A88F: movzx   eax, ax
0x75A892: jg      short loc_75A899
0x75A894: mov     eax, 1
0x75A899: movsx   ebp, ax
0x75A89C: xor     ecx, ecx
0x75A89E: mov     eax, ebp
0x75A8A0: mov     edx, 10h
0x75A8A5: mul     edx
0x75A8A7: seto    cl
0x75A8AA: neg     ecx
0x75A8AC: or      ecx, eax
0x75A8AE: push    ecx; Size
0x75A8AF: call    FormHeapAlloc
0x75A8B4: fldz
0x75A8B6: mov     [esi+1Ch], eax
0x75A8B9: add     esp, 4
0x75A8BC: xor     eax, eax
0x75A8BE: cmp     ebp, 4
0x75A8C1: jl      loc_75A989
0x75A8C7: lea     edi, [ebp-4]
0x75A8CA: shr     edi, 2
0x75A8CD: xor     ecx, ecx
0x75A8CF: add     edi, 1
0x75A8D2: lea     eax, ds:0[edi*4]
0x75A8D9: mov     [esp+0Ch+arg_0], eax
0x75A8DD: push    ebx
0x75A8DE: mov     eax, [esi+1Ch]
0x75A8E1: mov     edx, ds:0B3F9A8h
0x75A8E7: mov     [eax+ecx], edx
0x75A8EA: mov     edx, ds:0B3F9ACh
0x75A8F0: mov     [eax+ecx+4], edx
0x75A8F4: mov     edx, ds:0B3F9B0h
0x75A8FA: mov     [eax+ecx+8], edx
0x75A8FE: fst     dword ptr [eax+ecx+0Ch]
0x75A902: mov     edx, ds:0B3F9A8h
0x75A908: add     eax, ecx
0x75A90A: mov     eax, [esi+1Ch]
0x75A90D: mov     [eax+ecx+10h], edx
0x75A911: mov     edx, ds:0B3F9ACh
0x75A917: mov     [eax+ecx+14h], edx
0x75A91B: mov     edx, ds:0B3F9B0h
0x75A921: mov     [eax+ecx+18h], edx
0x75A925: fst     dword ptr [eax+ecx+1Ch]
0x75A929: mov     ebx, ds:0B3F9A8h
0x75A92F: lea     eax, [eax+ecx+10h]
0x75A933: mov     eax, [esi+1Ch]
0x75A936: lea     edx, [ecx+30h]
0x75A939: mov     [eax+edx-10h], ebx
0x75A93D: mov     ebx, ds:0B3F9ACh
0x75A943: lea     eax, [eax+edx-10h]
0x75A947: mov     [eax+4], ebx
0x75A94A: mov     ebx, ds:0B3F9B0h
0x75A950: mov     [eax+8], ebx
0x75A953: fst     dword ptr [eax+0Ch]
0x75A956: mov     eax, [esi+1Ch]
0x75A959: add     eax, edx
0x75A95B: mov     edx, ds:0B3F9A8h
0x75A961: mov     [eax], edx
0x75A963: mov     edx, ds:0B3F9ACh
0x75A969: mov     [eax+4], edx
0x75A96C: mov     edx, ds:0B3F9B0h
0x75A972: add     ecx, 40h ; '@'
0x75A975: sub     edi, 1
0x75A978: mov     [eax+8], edx
0x75A97B: fst     dword ptr [eax+0Ch]
0x75A97E: jnz     loc_75A8DE
0x75A984: mov     eax, [esp+10h+arg_0]
0x75A988: pop     ebx
0x75A989: cmp     eax, ebp
0x75A98B: jge     short loc_75A9BE
0x75A98D: mov     ecx, eax
0x75A98F: shl     ecx, 4
0x75A992: sub     ebp, eax
0x75A994: mov     eax, [esi+1Ch]
0x75A997: mov     edx, ds:0B3F9A8h
0x75A99D: add     eax, ecx
0x75A99F: mov     [eax], edx
0x75A9A1: mov     edx, ds:0B3F9ACh
0x75A9A7: mov     [eax+4], edx
0x75A9AA: mov     edx, ds:0B3F9B0h
0x75A9B0: fst     dword ptr [eax+0Ch]
0x75A9B3: add     ecx, 10h
0x75A9B6: sub     ebp, 1
0x75A9B9: mov     [eax+8], edx
0x75A9BC: jnz     short loc_75A994
0x75A9BE: pop     edi
0x75A9BF: fstp    st
0x75A9C1: pop     esi
0x75A9C2: pop     ebp
0x75A9C3: retn    4
