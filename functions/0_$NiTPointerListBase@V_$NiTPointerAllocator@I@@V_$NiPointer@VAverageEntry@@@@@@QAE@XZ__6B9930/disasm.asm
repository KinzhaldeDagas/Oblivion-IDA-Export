0x6B9930: push    0FFFFFFFFh
0x6B9932: push    offset ??0?$NiTPointerListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VAverageEntry@@@@@@QAE@XZ_SEH
0x6B9937: mov     eax, large fs:0
0x6B993D: push    eax
0x6B993E: sub     esp, 18h
0x6B9941: push    ebx
0x6B9942: push    ebp
0x6B9943: push    esi
0x6B9944: push    edi
0x6B9945: mov     eax, ds:0B30AACh
0x6B994A: xor     eax, esp
0x6B994C: push    eax
0x6B994D: lea     eax, [esp+38h+var_C]
0x6B9951: mov     large fs:0, eax
0x6B9957: mov     esi, ecx
0x6B9959: mov     [esp+38h+var_24], esi
0x6B995D: mov     ebp, [esi+1Ch]
0x6B9960: cmp     ebp, 1
0x6B9963: jbe     loc_6B9B03
0x6B9969: xor     ecx, ecx
0x6B996B: mov     eax, ebp
0x6B996D: mov     edx, 4
0x6B9972: mul     edx
0x6B9974: seto    cl
0x6B9977: neg     ecx
0x6B9979: or      ecx, eax
0x6B997B: push    ecx; Size
0x6B997C: call    FormHeapAlloc
0x6B9981: mov     ebx, eax
0x6B9983: mov     eax, [esi+14h]
0x6B9986: xor     edi, edi
0x6B9988: add     esp, 4
0x6B998B: cmp     eax, edi
0x6B998D: jz      short loc_6B999F
0x6B998F: mov     ecx, ebx
0x6B9991: mov     edx, [eax+8]
0x6B9994: mov     [ecx], edx
0x6B9996: mov     eax, [eax]
0x6B9998: add     ecx, 4
0x6B999B: cmp     eax, edi
0x6B999D: jnz     short loc_6B9991
0x6B999F: push    offset sub_6B9640
0x6B99A4: push    4
0x6B99A6: push    ebp
0x6B99A7: push    ebx
0x6B99A8: call    unknown_libname_60
0x6B99AD: add     esp, 10h
0x6B99B0: mov     [esp+38h+var_10], edi
0x6B99B4: mov     [esp+38h+var_18], edi
0x6B99B8: mov     [esp+38h+var_14], edi
0x6B99BC: mov     [esp+38h+var_1C], offset ??_7?$NiTPointerList@V?$NiPointer@VAverageEntry@@@@@@6B@; const NiTPointerList<NiPointer<AverageEntry>>::`vftable'
0x6B99C4: cmp     ebp, edi
0x6B99C6: mov     [esp+38h+var_4], edi
0x6B99CA: jbe     short loc_6B9A20
0x6B99CC: lea     esp, [esp+0]
0x6B99D0: mov     esi, [ebx+edi*4]
0x6B99D3: test    esi, esi
0x6B99D5: mov     [esp+38h+var_20], esi
0x6B99D9: jz      short loc_6B99E5
0x6B99DB: lea     eax, [esi+4]
0x6B99DE: push    eax; lpAddend
0x6B99DF: call    dword ptr ds:0A28078h
0x6B99E5: lea     ecx, [esp+38h+var_20]
0x6B99E9: push    ecx
0x6B99EA: lea     ecx, [esp+3Ch+var_1C]
0x6B99EE: mov     byte ptr [esp+3Ch+var_4], 1
0x6B99F3: call    sub_749800
0x6B99F8: test    esi, esi
0x6B99FA: mov     byte ptr [esp+38h+var_4], 0
0x6B99FF: jz      short loc_6B9A19
0x6B9A01: lea     edx, [esi+4]
0x6B9A04: push    edx; lpAddend
0x6B9A05: call    dword ptr ds:0A2807Ch
0x6B9A0B: test    eax, eax
0x6B9A0D: jnz     short loc_6B9A19
0x6B9A0F: mov     eax, [esi]
0x6B9A11: mov     edx, [eax]
0x6B9A13: push    1
0x6B9A15: mov     ecx, esi
0x6B9A17: call    edx
0x6B9A19: add     edi, 1
0x6B9A1C: cmp     edi, ebp
0x6B9A1E: jb      short loc_6B99D0
0x6B9A20: push    ebx
0x6B9A21: call    FormHeapFree
0x6B9A26: mov     edi, [esp+3Ch+var_24]
0x6B9A2A: mov     esi, [edi+14h]
0x6B9A2D: add     edi, 10h
0x6B9A30: xor     ebx, ebx
0x6B9A32: add     esp, 4
0x6B9A35: cmp     esi, ebx
0x6B9A37: jz      short loc_6B9A52
0x6B9A39: lea     esp, [esp+0]
0x6B9A40: mov     edx, [edi]
0x6B9A42: mov     eax, esi
0x6B9A44: mov     esi, [esi]
0x6B9A46: push    eax
0x6B9A47: mov     eax, [edx+8]
0x6B9A4A: mov     ecx, edi
0x6B9A4C: call    eax
0x6B9A4E: cmp     esi, ebx
0x6B9A50: jnz     short loc_6B9A40
0x6B9A52: mov     esi, [esp+38h+var_18]
0x6B9A56: cmp     esi, ebx
0x6B9A58: mov     [edi+0Ch], ebx
0x6B9A5B: mov     [edi+4], ebx
0x6B9A5E: mov     [edi+8], ebx
0x6B9A61: mov     ebp, esi
0x6B9A63: jz      short loc_6B9AB7
0x6B9A65: mov     esi, [ebp+8]
0x6B9A68: cmp     esi, ebx
0x6B9A6A: mov     [esp+38h+var_20], esi
0x6B9A6E: jz      short loc_6B9A7A
0x6B9A70: lea     ecx, [esi+4]
0x6B9A73: push    ecx; lpAddend
0x6B9A74: call    dword ptr ds:0A28078h
0x6B9A7A: lea     edx, [esp+38h+var_20]
0x6B9A7E: push    edx
0x6B9A7F: mov     ecx, edi
0x6B9A81: mov     byte ptr [esp+3Ch+var_4], 2
0x6B9A86: call    sub_749800
0x6B9A8B: cmp     esi, ebx
0x6B9A8D: mov     byte ptr [esp+38h+var_4], 0
0x6B9A92: jz      short loc_6B9AAC
0x6B9A94: lea     eax, [esi+4]
0x6B9A97: push    eax; lpAddend
0x6B9A98: call    dword ptr ds:0A2807Ch
0x6B9A9E: test    eax, eax
0x6B9AA0: jnz     short loc_6B9AAC
0x6B9AA2: mov     edx, [esi]
0x6B9AA4: mov     eax, [edx]
0x6B9AA6: push    1
0x6B9AA8: mov     ecx, esi
0x6B9AAA: call    eax
0x6B9AAC: mov     ebp, [ebp+0]
0x6B9AAF: cmp     ebp, ebx
0x6B9AB1: jnz     short loc_6B9A65
0x6B9AB3: mov     esi, [esp+38h+var_18]
0x6B9AB7: mov     [esp+38h+var_1C], offset ??_7?$NiTPointerListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VAverageEntry@@@@@@6B@; const NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<AverageEntry>>::`vftable'
0x6B9ABF: cmp     esi, ebx
0x6B9AC1: mov     [esp+38h+var_4], 3
0x6B9AC9: jz      short loc_6B9AE1
0x6B9ACB: mov     edx, [esp+38h+var_1C]
0x6B9ACF: mov     eax, esi
0x6B9AD1: mov     esi, [esi]
0x6B9AD3: push    eax
0x6B9AD4: mov     eax, [edx+8]
0x6B9AD7: lea     ecx, [esp+3Ch+var_1C]
0x6B9ADB: call    eax
0x6B9ADD: cmp     esi, ebx
0x6B9ADF: jnz     short loc_6B9ACB
0x6B9AE1: mov     esi, [esp+38h+var_24]
0x6B9AE5: mov     [esp+38h+var_10], ebx
0x6B9AE9: mov     [esp+38h+var_18], ebx
0x6B9AED: mov     [esp+38h+var_14], ebx
0x6B9AF1: mov     [esp+38h+var_4], 0FFFFFFFFh
0x6B9AF9: mov     [esp+38h+var_1C], offset ??_7?$NiTListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VAverageEntry@@@@@@6B@; const NiTListBase<NiTPointerAllocator<uint>,NiPointer<AverageEntry>>::`vftable'
0x6B9B01: jmp     short loc_6B9B05
0x6B9B03: xor     ebx, ebx
0x6B9B05: mov     esi, [esi+14h]
0x6B9B08: cmp     esi, ebx
0x6B9B0A: jz      short loc_6B9B1E
0x6B9B0C: lea     esp, [esp+0]
0x6B9B10: mov     ecx, [esi+8]
0x6B9B13: call    ??0?$NiTPointerListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VAverageEntry@@@@@@QAE@XZ; NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<AverageEntry>>::NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<AverageEntry>>(void)
0x6B9B18: mov     esi, [esi]
0x6B9B1A: cmp     esi, ebx
0x6B9B1C: jnz     short loc_6B9B10
0x6B9B1E: mov     ecx, [esp+38h+var_C]
0x6B9B22: mov     large fs:0, ecx
0x6B9B29: pop     ecx
0x6B9B2A: pop     edi
0x6B9B2B: pop     esi
0x6B9B2C: pop     ebp
0x6B9B2D: pop     ebx
0x6B9B2E: add     esp, 24h
0x6B9B31: retn
