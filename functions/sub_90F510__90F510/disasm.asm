0x90F510: sub     esp, 10h
0x90F513: push    esi
0x90F514: mov     esi, ecx
0x90F516: mov     eax, [esi+8]
0x90F519: mov     eax, [eax+74h]
0x90F51C: mov     ecx, [eax]
0x90F51E: mov     [esp+14h+var_10], ecx
0x90F522: mov     edx, [eax+4]
0x90F525: mov     [esp+14h+var_C], edx
0x90F529: mov     ecx, [eax+8]
0x90F52C: mov     [esp+14h+var_8], ecx
0x90F530: mov     edx, [eax+0Ch]
0x90F533: mov     eax, [esi+124h]
0x90F539: push    edi
0x90F53A: xor     edi, edi
0x90F53C: test    eax, eax
0x90F53E: mov     [esp+18h+var_4], edx
0x90F542: jle     short loc_90F578
0x90F544: push    ebx
0x90F545: push    ebp
0x90F546: lea     ebx, [esi+14h]
0x90F549: lea     esp, [esp+0]
0x90F550: mov     eax, [esi+120h]
0x90F556: mov     ecx, [eax+edi*8]
0x90F559: mov     edx, [ecx]
0x90F55B: lea     eax, [eax+edi*8]
0x90F55E: mov     eax, [eax+4]
0x90F561: lea     ebp, [esp+20h+var_10]
0x90F565: push    ebp
0x90F566: push    eax
0x90F567: push    ebx
0x90F568: call    dword ptr [edx+1Ch]
0x90F56B: mov     eax, [esi+124h]
0x90F571: inc     edi
0x90F572: cmp     edi, eax
0x90F574: jl      short loc_90F550
0x90F576: pop     ebp
0x90F577: pop     ebx
0x90F578: pop     edi
0x90F579: pop     esi
0x90F57A: add     esp, 10h
0x90F57D: retn
