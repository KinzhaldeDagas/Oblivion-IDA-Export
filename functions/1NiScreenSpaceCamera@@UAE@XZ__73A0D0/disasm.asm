0x73A0D0: push    0FFFFFFFFh
0x73A0D2: push    offset ??1NiScreenSpaceCamera@@UAE@XZ_SEH
0x73A0D7: mov     eax, large fs:0
0x73A0DD: push    eax
0x73A0DE: sub     esp, 8
0x73A0E1: push    ebx
0x73A0E2: push    ebp
0x73A0E3: push    esi
0x73A0E4: push    edi
0x73A0E5: mov     eax, ds:0B30AACh
0x73A0EA: xor     eax, esp
0x73A0EC: push    eax
0x73A0ED: lea     eax, [esp+28h+var_C]
0x73A0F1: mov     large fs:0, eax
0x73A0F7: mov     esi, ecx
0x73A0F9: mov     [esp+28h+var_10], esi
0x73A0FD: mov     dword ptr [esi], offset ??_7NiScreenSpaceCamera@@6B@; const NiScreenSpaceCamera::`vftable'
0x73A103: xor     edi, edi
0x73A105: cmp     [esi+12Eh], di
0x73A10C: mov     ebx, 2
0x73A111: mov     [esp+28h+var_4], ebx
0x73A115: jbe     short loc_73A145
0x73A117: mov     [esp+28h+var_14], edi
0x73A11B: lea     ebp, [esi+124h]
0x73A121: lea     eax, [esp+28h+var_14]
0x73A125: push    eax
0x73A126: push    edi
0x73A127: mov     ecx, ebp
0x73A129: mov     byte ptr [esp+30h+var_4], 3
0x73A12E: call    sub_739810
0x73A133: movzx   ecx, word ptr [esi+12Eh]
0x73A13A: add     edi, 1
0x73A13D: cmp     edi, ecx
0x73A13F: mov     byte ptr [esp+28h+var_4], bl
0x73A143: jb      short loc_73A121
0x73A145: lea     ecx, [esi+124h]
0x73A14B: call    sub_739670
0x73A150: xor     edi, edi
0x73A152: cmp     [esi+13Eh], di
0x73A159: jbe     short loc_73A189
0x73A15B: mov     [esp+28h+var_14], edi
0x73A15F: lea     ebp, [esi+134h]
0x73A165: lea     edx, [esp+28h+var_14]
0x73A169: push    edx
0x73A16A: push    edi
0x73A16B: mov     ecx, ebp
0x73A16D: mov     byte ptr [esp+30h+var_4], 4
0x73A172: call    sub_7395A0
0x73A177: movzx   eax, word ptr [esi+13Eh]
0x73A17E: add     edi, 1
0x73A181: cmp     edi, eax
0x73A183: mov     byte ptr [esp+28h+var_4], bl
0x73A187: jb      short loc_73A165
0x73A189: lea     edi, [esi+134h]
0x73A18F: mov     ecx, edi
0x73A191: call    sub_739670
0x73A196: mov     dword ptr [edi], offset ??_7?$NiTArray@V?$NiPointer@VNiScreenTexture@@@@@@6B@; const NiTArray<NiPointer<NiScreenTexture>>::`vftable'
0x73A19C: mov     edi, [edi+4]
0x73A19F: test    edi, edi
0x73A1A1: mov     byte ptr [esp+28h+var_4], 1
0x73A1A6: jz      short loc_73A1C5
0x73A1A8: mov     ecx, [edi-4]
0x73A1AB: push    offset sub_7016A0; void (__thiscall *)(void *)
0x73A1B0: lea     ebp, [edi-4]
0x73A1B3: push    ecx; int
0x73A1B4: push    4; unsigned int
0x73A1B6: push    edi; void *
0x73A1B7: call    $LN21
0x73A1BC: push    ebp
0x73A1BD: call    FormHeapFree
0x73A1C2: add     esp, 4
0x73A1C5: mov     eax, [esi+128h]
0x73A1CB: test    eax, eax
0x73A1CD: mov     byte ptr [esp+28h+var_4], 0
0x73A1D2: mov     dword ptr [esi+124h], offset ??_7?$NiTArray@V?$NiPointer@VNiScreenPolygon@@@@@@6B@; const NiTArray<NiPointer<NiScreenPolygon>>::`vftable'
0x73A1DC: jz      short loc_73A1FB
0x73A1DE: mov     edx, [eax-4]
0x73A1E1: lea     edi, [eax-4]
0x73A1E4: push    offset sub_7016A0; void (__thiscall *)(void *)
0x73A1E9: push    edx; int
0x73A1EA: push    4; unsigned int
0x73A1EC: push    eax; void *
0x73A1ED: call    $LN21
0x73A1F2: push    edi
0x73A1F3: call    FormHeapFree
0x73A1F8: add     esp, 4
0x73A1FB: mov     ecx, esi
0x73A1FD: mov     [esp+28h+var_4], 0FFFFFFFFh
0x73A205: call    DestroyNiCamera?
0x73A20A: mov     ecx, [esp+28h+var_C]
0x73A20E: mov     large fs:0, ecx
0x73A215: pop     ecx
0x73A216: pop     edi
0x73A217: pop     esi
0x73A218: pop     ebp
0x73A219: pop     ebx
0x73A21A: add     esp, 14h
0x73A21D: retn
