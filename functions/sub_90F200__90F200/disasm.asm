0x90F200: push    ebp
0x90F201: mov     ebp, esp
0x90F203: and     esp, 0FFFFFFF0h
0x90F206: sub     esp, 64h
0x90F209: push    ebx
0x90F20A: mov     ebx, [ebp+arg_0]
0x90F20D: movaps  xmm0, xmmword ptr [ebx]
0x90F210: push    esi
0x90F211: push    edi
0x90F212: mov     edi, [ebp+arg_4]
0x90F215: mov     esi, ecx
0x90F217: mov     ecx, [esi+14h]
0x90F21A: lea     edx, [esp+20h]
0x90F21E: push    edx
0x90F21F: mov     edx, [esi+8]
0x90F222: movaps  xmmword ptr [esi+0A0h], xmm0
0x90F229: mov     edx, [edx+74h]
0x90F22C: fld     dword ptr [edx+8]
0x90F22F: mov     eax, [ecx]
0x90F231: fmul    dword ptr ds:0A3D65Ch
0x90F237: push    ecx
0x90F238: lea     edx, [esi+70h]
0x90F23B: fadd    dword ptr [edi+14h]
0x90F23E: fstp    [esp+78h+var_78]
0x90F241: push    edx
0x90F242: call    dword ptr [eax+0Ch]
0x90F245: movaps  xmm1, xmmword ptr [ebx]
0x90F248: movaps  xmm0, xmmword ptr [edi]
0x90F24B: movaps  xmm3, xmmword ptr [esp+20h]
0x90F250: subps   xmm0, xmm1
0x90F253: xorps   xmm1, xmm1
0x90F256: movaps  xmm2, xmm1
0x90F259: minps   xmm2, xmm0
0x90F25C: movaps  xmmword ptr [esp+70h+var_6C+0Ch], xmm0
0x90F261: maxps   xmm1, xmm0
0x90F264: movaps  xmm0, xmmword ptr [esp+70h+var_4C+0Ch]
0x90F269: lea     eax, [esp+20h]
0x90F26D: addps   xmm3, xmm2
0x90F270: addps   xmm0, xmm1
0x90F273: push    eax
0x90F274: mov     ecx, esi
0x90F276: movaps  xmmword ptr [esp+24h], xmm3
0x90F27B: movaps  xmmword ptr [esp+74h+var_4C+0Ch], xmm0
0x90F280: call    sub_8DE950
0x90F285: mov     ecx, [esi+8]
0x90F288: mov     [esp+70h+var_10], 34000000h
0x90F290: mov     eax, [ecx+74h]
0x90F293: mov     edx, eax
0x90F295: mov     ecx, [edx]
0x90F297: mov     [esp+70h+var_30], ecx
0x90F29B: mov     ecx, [edx+4]
0x90F29E: mov     [esp+70h+var_2C], ecx
0x90F2A2: mov     ecx, [edx+8]
0x90F2A5: mov     [esp+70h+var_28], ecx
0x90F2A9: mov     edx, [edx+0Ch]
0x90F2AC: mov     ecx, [edi+14h]
0x90F2AF: mov     [esp+70h+var_24], edx
0x90F2B3: mov     eax, [eax+20h]
0x90F2B6: push    ecx
0x90F2B7: lea     edx, [esp+74h+var_6C+0Ch]
0x90F2BB: push    edx
0x90F2BC: lea     ecx, [esp+78h+var_30]
0x90F2C0: mov     [esp+78h+var_8], eax
0x90F2C4: call    sub_8D9870
0x90F2C9: mov     eax, [edi+10h]
0x90F2CC: mov     edi, [esi+124h]
0x90F2D2: dec     edi
0x90F2D3: mov     [esp+70h+var_10], eax
0x90F2D7: js      short loc_90F308
0x90F2D9: lea     esp, [esp+0]
0x90F2E0: mov     ebx, [ebp+arg_C]
0x90F2E3: mov     ecx, [esi+120h]
0x90F2E9: push    ebx
0x90F2EA: mov     ebx, [ebp+arg_8]
0x90F2ED: lea     eax, [ecx+edi*8]
0x90F2F0: mov     ecx, [eax]
0x90F2F2: mov     eax, [eax+4]
0x90F2F5: mov     edx, [ecx]
0x90F2F7: push    ebx
0x90F2F8: lea     ebx, [esp+78h+var_30]
0x90F2FC: push    ebx
0x90F2FD: push    eax
0x90F2FE: lea     eax, [esi+14h]
0x90F301: push    eax
0x90F302: call    dword ptr [edx+10h]
0x90F305: dec     edi
0x90F306: jns     short loc_90F2E0
0x90F308: pop     edi
0x90F309: pop     esi
0x90F30A: pop     ebx
0x90F30B: mov     esp, ebp
0x90F30D: pop     ebp
0x90F30E: retn    10h
