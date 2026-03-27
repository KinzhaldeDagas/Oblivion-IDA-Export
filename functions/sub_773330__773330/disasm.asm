0x773330: push    ebx
0x773331: mov     ebx, [esp+4+arg_0]
0x773335: push    ebp
0x773336: push    esi
0x773337: mov     ebp, ecx
0x773339: push    edi
0x77333A: xor     esi, esi
0x77333C: lea     edi, [ebp+6Ch]
0x77333F: nop
0x773340: cmp     byte ptr [esi+ebp+0A4h], 0
0x773348: jz      short loc_77336B
0x77334A: mov     edx, [edi+24h]
0x77334D: mov     ecx, ds:0B42834h
0x773353: mov     eax, [ecx]
0x773355: mov     eax, [eax+0D0h]
0x77335B: push    0
0x77335D: push    edx
0x77335E: mov     edx, ds:0B427CCh[esi*4]
0x773365: push    edx
0x773366: push    ebx
0x773367: call    eax
0x773369: jmp     short loc_773393
0x77336B: cmp     byte ptr [esi+ebp+80h], 0
0x773373: jz      short loc_773393
0x773375: mov     eax, [edi]
0x773377: mov     ecx, ds:0B42834h
0x77337D: mov     edx, [ecx]
0x77337F: mov     edx, [edx+0D0h]
0x773385: push    0
0x773387: push    eax
0x773388: mov     eax, ds:0B427CCh[esi*4]
0x77338F: push    eax
0x773390: push    ebx
0x773391: call    edx
0x773393: add     esi, 1
0x773396: add     edi, 4
0x773399: cmp     esi, 5
0x77339C: jl      short loc_773340
0x77339E: pop     edi
0x77339F: pop     esi
0x7733A0: pop     ebp
0x7733A1: xor     eax, eax
0x7733A3: pop     ebx
0x7733A4: retn    4
