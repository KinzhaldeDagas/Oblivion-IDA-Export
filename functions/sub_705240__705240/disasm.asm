0x705240: push    0FFFFFFFFh
0x705242: push    offset SEH_8C8970
0x705247: mov     eax, large fs:0
0x70524D: push    eax
0x70524E: push    ecx
0x70524F: push    esi
0x705250: push    edi
0x705251: mov     eax, ds:0B30AACh
0x705256: xor     eax, esp
0x705258: push    eax
0x705259: lea     eax, [esp+1Ch+var_C]
0x70525D: mov     large fs:0, eax
0x705263: push    30h ; '0'; Size
0x705265: call    FormHeapAlloc
0x70526A: add     esp, 4
0x70526D: mov     [esp+1Ch+var_10], eax
0x705271: test    eax, eax
0x705273: mov     [esp+1Ch+var_4], 0
0x70527B: jz      short loc_705288
0x70527D: mov     ecx, eax
0x70527F: call    NiTexturingProperty__NiTexturingProperty
0x705284: mov     esi, eax
0x705286: jmp     short loc_70528A
0x705288: xor     esi, esi
0x70528A: mov     eax, ds:0B3F974h
0x70528F: cmp     eax, esi
0x705291: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x705299: jz      short loc_7052D1
0x70529B: test    eax, eax
0x70529D: jz      short loc_7052BD
0x70529F: mov     edi, eax
0x7052A1: add     eax, 4
0x7052A4: push    eax; lpAddend
0x7052A5: call    dword ptr ds:0A2807Ch
0x7052AB: test    eax, eax
0x7052AD: jnz     short loc_7052BD
0x7052AF: test    edi, edi
0x7052B1: jz      short loc_7052BD
0x7052B3: mov     eax, [edi]
0x7052B5: mov     edx, [eax]
0x7052B7: push    1
0x7052B9: mov     ecx, edi
0x7052BB: call    edx
0x7052BD: test    esi, esi
0x7052BF: mov     ds:0B3F974h, esi
0x7052C5: jz      short loc_7052D1
0x7052C7: add     esi, 4
0x7052CA: push    esi; lpAddend
0x7052CB: call    dword ptr ds:0A28078h
0x7052D1: mov     ecx, dword ptr [esp+1Ch+var_C]
0x7052D5: mov     large fs:0, ecx
0x7052DC: pop     ecx
0x7052DD: pop     edi
0x7052DE: pop     esi
0x7052DF: add     esp, 10h
0x7052E2: retn
