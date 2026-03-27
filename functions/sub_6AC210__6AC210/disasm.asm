0x6AC210: push    0FFFFFFFFh
0x6AC212: push    offset SEH_7B3E60
0x6AC217: mov     eax, large fs:0
0x6AC21D: push    eax
0x6AC21E: sub     esp, 10h
0x6AC221: push    ebx
0x6AC222: push    esi
0x6AC223: push    edi
0x6AC224: mov     eax, ds:0B30AACh
0x6AC229: xor     eax, esp
0x6AC22B: push    eax
0x6AC22C: lea     eax, [esp+2Ch+var_C]
0x6AC230: mov     large fs:0, eax
0x6AC236: mov     esi, ecx
0x6AC238: xor     ebx, ebx
0x6AC23A: mov     [esp+2Ch+var_1C], 0
0x6AC242: mov     [esp+2Ch+var_18], ebx
0x6AC246: mov     edx, [esi+304h]
0x6AC24C: mov     ecx, [edx+4]
0x6AC24F: xor     eax, eax
0x6AC251: test    ecx, ecx
0x6AC253: mov     [esp+2Ch+var_4], ebx
0x6AC257: jbe     short loc_6AC273
0x6AC259: mov     edx, [edx+8]
0x6AC25C: mov     edi, edx
0x6AC25E: mov     edi, edi
0x6AC260: cmp     dword ptr [edi], 0
0x6AC263: jnz     loc_6AC323
0x6AC269: add     eax, 1
0x6AC26C: add     edi, 4
0x6AC26F: cmp     eax, ecx
0x6AC271: jb      short loc_6AC260
0x6AC273: xor     eax, eax
0x6AC275: test    eax, eax
0x6AC277: mov     [esp+2Ch+var_14], eax
0x6AC27B: jz      short loc_6AC2EC
0x6AC27D: lea     ecx, [ecx+0]
0x6AC280: lea     eax, [esp+2Ch+var_18]
0x6AC284: push    eax
0x6AC285: lea     ecx, [esp+30h+var_10]
0x6AC289: push    ecx
0x6AC28A: mov     ecx, [esi+304h]
0x6AC290: lea     edx, [esp+34h+var_14]
0x6AC294: push    edx
0x6AC295: call    sub_7B2600
0x6AC29A: mov     edi, [esp+2Ch+var_10]
0x6AC29E: mov     ecx, [esi+304h]
0x6AC2A4: push    edi
0x6AC2A5: call    NiTMap_RemoveAt
0x6AC2AA: mov     ebx, [esp+2Ch+var_18]
0x6AC2AE: test    ebx, ebx
0x6AC2B0: jz      short loc_6AC2BB
0x6AC2B2: push    ebx
0x6AC2B3: call    sub_6F9710
0x6AC2B8: add     esp, 4
0x6AC2BB: mov     ecx, [esi+300h]
0x6AC2C1: lea     eax, [esp+2Ch+var_1C]
0x6AC2C5: push    eax
0x6AC2C6: push    edi
0x6AC2C7: call    NiTMap_GetAt
0x6AC2CC: mov     ecx, [esp+2Ch+var_1C]
0x6AC2D0: test    ecx, ecx
0x6AC2D2: jz      short loc_6AC2E5
0x6AC2D4: call    sub_6B6AC0
0x6AC2D9: lea     ecx, [esp+2Ch+var_1C]
0x6AC2DD: push    ecx
0x6AC2DE: mov     ecx, esi
0x6AC2E0: call    sub_6AA9C0
0x6AC2E5: cmp     [esp+2Ch+var_14], 0
0x6AC2EA: jnz     short loc_6AC280
0x6AC2EC: test    ebx, ebx
0x6AC2EE: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x6AC2F6: jz      short loc_6AC310
0x6AC2F8: lea     edx, [ebx+4]
0x6AC2FB: push    edx; lpAddend
0x6AC2FC: call    dword ptr ds:0A2807Ch
0x6AC302: test    eax, eax
0x6AC304: jnz     short loc_6AC310
0x6AC306: mov     eax, [ebx]
0x6AC308: mov     edx, [eax]
0x6AC30A: push    1
0x6AC30C: mov     ecx, ebx
0x6AC30E: call    edx
0x6AC310: mov     ecx, dword ptr [esp+2Ch+var_C]
0x6AC314: mov     large fs:0, ecx
0x6AC31B: pop     ecx
0x6AC31C: pop     edi
0x6AC31D: pop     esi
0x6AC31E: pop     ebx
0x6AC31F: add     esp, 1Ch
0x6AC322: retn
0x6AC323: mov     eax, [edx+eax*4]
0x6AC326: jmp     loc_6AC275
