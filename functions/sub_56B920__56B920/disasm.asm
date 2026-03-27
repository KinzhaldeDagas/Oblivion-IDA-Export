0x56B920: push    0FFFFFFFFh
0x56B922: push    offset SEH_787830
0x56B927: mov     eax, large fs:0
0x56B92D: push    eax
0x56B92E: push    ebp
0x56B92F: push    esi
0x56B930: push    edi
0x56B931: mov     eax, ds:0B30AACh
0x56B936: xor     eax, esp
0x56B938: push    eax
0x56B939: lea     eax, [esp+1Ch+var_C]
0x56B93D: mov     large fs:0, eax
0x56B943: mov     ebp, ecx
0x56B945: mov     esi, [esp+1Ch+size]
0x56B949: xor     edi, edi
0x56B94B: cmp     esi, edi
0x56B94D: mov     [ebp+4], esi
0x56B950: mov     [ebp+8], edi
0x56B953: jbe     short loc_56B9A0
0x56B955: xor     ecx, ecx
0x56B957: mov     eax, esi
0x56B959: mov     edx, 10h
0x56B95E: mul     edx
0x56B960: seto    cl
0x56B963: neg     ecx
0x56B965: or      ecx, eax
0x56B967: xor     eax, eax
0x56B969: add     ecx, 4
0x56B96C: setb    al
0x56B96F: neg     eax
0x56B971: or      eax, ecx
0x56B973: push    eax; Size
0x56B974: call    FormHeapAlloc
0x56B979: add     esp, 4
0x56B97C: mov     [esp+1Ch+size], eax
0x56B980: cmp     eax, edi
0x56B982: mov     [esp+1Ch+var_4], edi
0x56B986: jz      short loc_56B9A0
0x56B988: push    offset sub_56B820; a5
0x56B98D: push    offset sub_56B7F0; a4
0x56B992: push    esi; size
0x56B993: lea     edi, [eax+4]
0x56B996: push    10h; a2
0x56B998: push    edi; a1
0x56B999: mov     [eax], esi
0x56B99B: call    ArrayConstructor
0x56B9A0: mov     eax, ebp
0x56B9A2: mov     [ebp+0], edi
0x56B9A5: mov     ecx, [esp+1Ch+var_C]
0x56B9A9: mov     large fs:0, ecx
0x56B9B0: pop     ecx
0x56B9B1: pop     edi
0x56B9B2: pop     esi
0x56B9B3: pop     ebp
0x56B9B4: add     esp, 0Ch
0x56B9B7: retn    4
