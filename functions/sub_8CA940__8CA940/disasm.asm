0x8CA940: mov     eax, [esp+arg_8]
0x8CA944: test    eax, eax
0x8CA946: push    ebx
0x8CA947: push    ebp
0x8CA948: push    esi
0x8CA949: push    edi
0x8CA94A: mov     edi, ecx
0x8CA94C: jz      short loc_8CA957
0x8CA94E: push    eax
0x8CA94F: call    sub_918BC0
0x8CA954: add     esp, 4
0x8CA957: mov     ebx, [edi+10h]
0x8CA95A: mov     eax, [edi+14h]
0x8CA95D: lea     ebp, [edi+0Ch]
0x8CA960: lea     esi, [ebx+1]
0x8CA963: and     eax, 3FFFFFFFh
0x8CA968: cmp     eax, esi
0x8CA96A: jge     short loc_8CA980
0x8CA96C: add     eax, eax
0x8CA96E: cmp     esi, eax
0x8CA970: jl      short loc_8CA974
0x8CA972: mov     eax, esi
0x8CA974: push    8
0x8CA976: push    eax
0x8CA977: push    ebp
0x8CA978: call    sub_8A6E40
0x8CA97D: add     esp, 0Ch
0x8CA980: mov     eax, [ebp+0]
0x8CA983: mov     ecx, [esp+10h+arg_0]
0x8CA987: mov     [ebp+4], esi
0x8CA98A: lea     esi, [eax+ebx*8]
0x8CA98D: mov     [esi], ecx
0x8CA98F: mov     ecx, ds:0BA7D98h
0x8CA995: mov     edx, [ecx]
0x8CA997: push    32h ; '2'
0x8CA999: push    50h ; 'P'
0x8CA99B: call    dword ptr [edx+10h]
0x8CA99E: mov     ecx, [esp+10h+arg_8]
0x8CA9A2: mov     edx, [esp+10h+arg_4]
0x8CA9A6: push    ecx
0x8CA9A7: push    edx
0x8CA9A8: lea     ecx, [edi+18h]
0x8CA9AB: push    ecx
0x8CA9AC: mov     ecx, eax
0x8CA9AE: mov     word ptr [eax+4], 50h ; 'P'
0x8CA9B4: call    sub_9187A0
0x8CA9B9: mov     ecx, eax
0x8CA9BB: mov     [esi+4], eax
0x8CA9BE: call    sub_918B40
0x8CA9C3: mov     eax, [edi+50h]
0x8CA9C6: xor     ebx, ebx
0x8CA9C8: test    eax, eax
0x8CA9CA: jle     short loc_8CA9FE
0x8CA9CC: lea     esp, [esp+0]
0x8CA9D0: mov     edx, [edi+4Ch]
0x8CA9D3: mov     eax, [edx+ebx*4]
0x8CA9D6: mov     ecx, [esi+4]
0x8CA9D9: mov     eax, [eax]
0x8CA9DB: mov     edx, [ecx+8]
0x8CA9DE: add     ecx, 8
0x8CA9E1: push    eax
0x8CA9E2: call    dword ptr [edx+8]
0x8CA9E5: test    eax, eax
0x8CA9E7: jl      short loc_8CA9F6
0x8CA9E9: mov     ecx, [esi+4]
0x8CA9EC: mov     edx, [ecx+8]
0x8CA9EF: add     ecx, 8
0x8CA9F2: push    eax
0x8CA9F3: call    dword ptr [edx+10h]
0x8CA9F6: mov     eax, [edi+50h]
0x8CA9F9: inc     ebx
0x8CA9FA: cmp     ebx, eax
0x8CA9FC: jl      short loc_8CA9D0
0x8CA9FE: mov     ecx, [ebp+0]
0x8CAA01: mov     eax, [edi+10h]
0x8CAA04: lea     esi, [ecx+eax*8-8]
0x8CAA08: mov     ecx, [esi]
0x8CAA0A: test    ecx, ecx
0x8CAA0C: jz      short loc_8CAA4C
0x8CAA0E: mov     edx, [ecx]
0x8CAA10: lea     eax, [esp+10h+arg_8]
0x8CAA14: push    eax
0x8CAA15: call    dword ptr [edx+8]
0x8CAA18: cmp     byte ptr [eax], 0
0x8CAA1B: jz      short loc_8CAA4C
0x8CAA1D: mov     ecx, [esi+4]
0x8CAA20: mov     esi, [ecx+18h]
0x8CAA23: push    5
0x8CAA25: mov     ecx, esi
0x8CAA27: call    sub_918440
0x8CAA2C: push    0
0x8CAA2E: mov     ecx, esi
0x8CAA30: call    sub_9181B0
0x8CAA35: push    0
0x8CAA37: mov     ecx, esi
0x8CAA39: call    sub_918440
0x8CAA3E: mov     ecx, esi
0x8CAA40: call    sub_953130
0x8CAA45: mov     edx, [eax]
0x8CAA47: mov     ecx, eax
0x8CAA49: call    dword ptr [edx+10h]
0x8CAA4C: pop     edi
0x8CAA4D: pop     esi
0x8CAA4E: pop     ebp
0x8CAA4F: pop     ebx
0x8CAA50: retn    0Ch
