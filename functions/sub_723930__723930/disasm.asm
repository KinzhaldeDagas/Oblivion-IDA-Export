0x723930: push    esi
0x723931: push    edi
0x723932: mov     esi, ecx
0x723934: xor     edi, edi
0x723936: cmp     [esi+0B6h], di
0x72393D: jbe     short loc_7239A3
0x72393F: push    ebx
0x723940: mov     eax, [esi+0B0h]
0x723946: mov     ebx, [eax+edi*4]
0x723949: test    ebx, ebx
0x72394B: jz      short loc_723994
0x72394D: mov     ecx, [esi+0F0h]
0x723953: mov     edx, [ecx+edi*4]
0x723956: cmp     edx, [esi+0E8h]
0x72395C: lea     eax, [esi+0E8h]
0x723962: jz      short loc_723994
0x723964: push    eax
0x723965: push    edi
0x723966: lea     ecx, [esi+0ECh]
0x72396C: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x723971: fld     dword ptr [esi+0E4h]
0x723977: movzx   ecx, byte ptr [esi+0DCh]
0x72397E: mov     eax, [ebx]
0x723980: mov     edx, [eax+60h]
0x723983: shr     cl, 1
0x723985: and     ecx, 0FFFFFF01h
0x72398B: push    ecx
0x72398C: push    ecx
0x72398D: mov     ecx, ebx
0x72398F: fstp    [esp+14h+var_14]
0x723992: call    edx
0x723994: movzx   eax, word ptr [esi+0B6h]
0x72399B: add     edi, 1
0x72399E: cmp     edi, eax
0x7239A0: jl      short loc_723940
0x7239A2: pop     ebx
0x7239A3: pop     edi
0x7239A4: pop     esi
0x7239A5: retn
