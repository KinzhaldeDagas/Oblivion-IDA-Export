0x738920: push    0FFFFFFFFh
0x738922: push    offset SEH_787830
0x738927: mov     eax, large fs:0
0x73892D: push    eax
0x73892E: push    ebp
0x73892F: push    esi
0x738930: push    edi
0x738931: mov     eax, ds:0B30AACh
0x738936: xor     eax, esp
0x738938: push    eax
0x738939: lea     eax, [esp+1Ch+var_C]
0x73893D: mov     large fs:0, eax
0x738943: mov     ebp, ecx
0x738945: mov     esi, [esp+1Ch+size]
0x738949: xor     edi, edi
0x73894B: cmp     esi, edi
0x73894D: mov     [ebp+4], esi
0x738950: mov     [ebp+8], edi
0x738953: jbe     short loc_7389A0
0x738955: xor     ecx, ecx
0x738957: mov     eax, esi
0x738959: mov     edx, 14h
0x73895E: mul     edx
0x738960: seto    cl
0x738963: neg     ecx
0x738965: or      ecx, eax
0x738967: xor     eax, eax
0x738969: add     ecx, 4
0x73896C: setb    al
0x73896F: neg     eax
0x738971: or      eax, ecx
0x738973: push    eax; Size
0x738974: call    FormHeapAlloc
0x738979: add     esp, 4
0x73897C: mov     [esp+1Ch+size], eax
0x738980: cmp     eax, edi
0x738982: mov     [esp+1Ch+var_4], edi
0x738986: jz      short loc_7389A0
0x738988: push    offset sub_7387F0; a5
0x73898D: push    offset sub_7387D0; a4
0x738992: push    esi; size
0x738993: lea     edi, [eax+4]
0x738996: push    14h; a2
0x738998: push    edi; a1
0x738999: mov     [eax], esi
0x73899B: call    ArrayConstructor
0x7389A0: mov     eax, ebp
0x7389A2: mov     [ebp+0], edi
0x7389A5: mov     ecx, [esp+1Ch+var_C]
0x7389A9: mov     large fs:0, ecx
0x7389B0: pop     ecx
0x7389B1: pop     edi
0x7389B2: pop     esi
0x7389B3: pop     ebp
0x7389B4: add     esp, 0Ch
0x7389B7: retn    4
