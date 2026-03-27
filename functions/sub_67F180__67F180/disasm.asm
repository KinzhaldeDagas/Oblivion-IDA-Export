0x67F180: sub     esp, 0Ch
0x67F183: cmp     dword ptr ds:0B3BE00h, 0
0x67F18A: jz      loc_67F333
0x67F190: call    sub_6805F0
0x67F195: push    esi
0x67F196: push    edi
0x67F197: mov     ecx, ds:0B3BE18h
0x67F19D: mov     eax, ds:0B3BE1Ch
0x67F1A2: test    eax, eax
0x67F1A4: jnz     short loc_67F1AA
0x67F1A6: test    ecx, ecx
0x67F1A8: jz      short loc_67F1ED
0x67F1AA: test    ecx, ecx
0x67F1AC: mov     esi, ecx
0x67F1AE: jz      short loc_67F1C3
0x67F1B0: call    sub_680340
0x67F1B5: push    esi
0x67F1B6: call    FormHeapFree
0x67F1BB: mov     eax, ds:0B3BE1Ch
0x67F1C0: add     esp, 4
0x67F1C3: test    eax, eax
0x67F1C5: jz      short loc_67F1E3
0x67F1C7: mov     ecx, [eax+4]
0x67F1CA: mov     ds:0B3BE1Ch, ecx
0x67F1D0: mov     edx, [eax]
0x67F1D2: push    eax
0x67F1D3: mov     ds:0B3BE18h, edx
0x67F1D9: call    FormHeapFree
0x67F1DE: add     esp, 4
0x67F1E1: jmp     short loc_67F197
0x67F1E3: xor     ecx, ecx
0x67F1E5: mov     ds:0B3BE18h, ecx
0x67F1EB: jmp     short loc_67F1A2
0x67F1ED: mov     ecx, ds:0B3BE00h
0x67F1F3: mov     edx, [ecx+4]
0x67F1F6: xor     eax, eax
0x67F1F8: test    edx, edx
0x67F1FA: jbe     short loc_67F210
0x67F1FC: mov     edi, [ecx+8]
0x67F1FF: mov     esi, edi
0x67F201: cmp     dword ptr [esi], 0
0x67F204: jnz     short loc_67F27E
0x67F206: add     eax, 1
0x67F209: add     esi, 4
0x67F20C: cmp     eax, edx
0x67F20E: jb      short loc_67F201
0x67F210: xor     eax, eax
0x67F212: test    eax, eax
0x67F214: mov     [esp+14h+var_8], eax
0x67F218: jz      loc_67F310
0x67F21E: push    ebx
0x67F21F: push    ebp
0x67F220: lea     eax, [esp+1Ch+var_C]
0x67F224: push    eax
0x67F225: lea     edx, [esp+20h+var_4]
0x67F229: push    edx
0x67F22A: lea     eax, [esp+24h+var_8]
0x67F22E: push    eax
0x67F22F: mov     [esp+28h+var_C], 0
0x67F237: call    sub_452600
0x67F23C: mov     ebp, [esp+1Ch+var_C]
0x67F240: test    ebp, ebp
0x67F242: jz      loc_67F2FD
0x67F248: mov     edx, [ebp+4]
0x67F24B: xor     eax, eax
0x67F24D: test    edx, edx
0x67F24F: jbe     short loc_67F265
0x67F251: mov     esi, [ebp+8]
0x67F254: mov     ecx, esi
0x67F256: cmp     dword ptr [ecx], 0
0x67F259: jnz     short loc_67F283
0x67F25B: add     eax, 1
0x67F25E: add     ecx, 4
0x67F261: cmp     eax, edx
0x67F263: jb      short loc_67F256
0x67F265: xor     eax, eax
0x67F267: test    eax, eax
0x67F269: mov     ebx, eax
0x67F26B: jz      loc_67F2EB
0x67F271: mov     eax, [ebx]
0x67F273: test    eax, eax
0x67F275: mov     esi, [ebx+8]
0x67F278: jz      short loc_67F288
0x67F27A: mov     ebx, eax
0x67F27C: jmp     short loc_67F2B8
0x67F27E: mov     eax, [edi+eax*4]
0x67F281: jmp     short loc_67F212
0x67F283: mov     eax, [esi+eax*4]
0x67F286: jmp     short loc_67F267
0x67F288: mov     edx, [ebp+0]
0x67F28B: mov     eax, [ebx+4]
0x67F28E: mov     edx, [edx+4]
0x67F291: push    eax
0x67F292: mov     ecx, ebp
0x67F294: call    edx
0x67F296: mov     edx, [ebp+4]
0x67F299: add     eax, 1
0x67F29C: cmp     eax, edx
0x67F29E: jnb     short loc_67F2B6
0x67F2A0: mov     ecx, [ebp+8]
0x67F2A3: lea     ecx, [ecx+eax*4]
0x67F2A6: mov     ebx, [ecx]
0x67F2A8: test    ebx, ebx
0x67F2AA: jnz     short loc_67F2B8
0x67F2AC: add     eax, 1
0x67F2AF: add     ecx, 4
0x67F2B2: cmp     eax, edx
0x67F2B4: jb      short loc_67F2A6
0x67F2B6: xor     ebx, ebx
0x67F2B8: test    esi, esi
0x67F2BA: jz      short loc_67F2E7
0x67F2BC: cmp     dword ptr [esi+4], 0
0x67F2C0: jz      short loc_67F2D8
0x67F2C2: mov     eax, [esi+4]
0x67F2C5: mov     edi, [eax+4]
0x67F2C8: push    eax
0x67F2C9: call    FormHeapFree
0x67F2CE: add     esp, 4
0x67F2D1: test    edi, edi
0x67F2D3: mov     [esi+4], edi
0x67F2D6: jnz     short loc_67F2C2
0x67F2D8: push    esi
0x67F2D9: mov     dword ptr [esi], 0
0x67F2DF: call    FormHeapFree
0x67F2E4: add     esp, 4
0x67F2E7: test    ebx, ebx
0x67F2E9: jnz     short loc_67F271
0x67F2EB: mov     ecx, ebp
0x67F2ED: call    NiTMap_Clear
0x67F2F2: mov     edx, [ebp+0]
0x67F2F5: mov     eax, [edx]
0x67F2F7: push    1
0x67F2F9: mov     ecx, ebp
0x67F2FB: call    eax
0x67F2FD: cmp     [esp+1Ch+var_8], 0
0x67F302: mov     ecx, ds:0B3BE00h
0x67F308: jnz     loc_67F220
0x67F30E: pop     ebp
0x67F30F: pop     ebx
0x67F310: call    NiTMap_Clear
0x67F315: mov     ecx, ds:0B3BE00h
0x67F31B: test    ecx, ecx
0x67F31D: pop     edi
0x67F31E: pop     esi
0x67F31F: jz      short loc_67F329
0x67F321: mov     edx, [ecx]
0x67F323: mov     eax, [edx]
0x67F325: push    1
0x67F327: call    eax
0x67F329: mov     dword ptr ds:0B3BE00h, 0
0x67F333: add     esp, 0Ch
0x67F336: retn
