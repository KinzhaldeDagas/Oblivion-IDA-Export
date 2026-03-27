0x4BF2F0: push    ebx
0x4BF2F1: mov     bl, byte ptr [esp+4+arg_0]
0x4BF2F5: cmp     bl, 4
0x4BF2F8: jnb     loc_4BF437
0x4BF2FE: mov     ax, [esp+4+arg_4]
0x4BF303: cmp     ax, 8
0x4BF307: jnb     loc_4BF437
0x4BF30D: cmp     dword ptr [ecx+24h], 0
0x4BF311: jz      loc_4BF437
0x4BF317: push    ebp
0x4BF318: push    esi
0x4BF319: push    edi
0x4BF31A: movzx   edi, ax
0x4BF31D: cmp     edi, 7
0x4BF320: mov     [esp+10h+arg_0], edi
0x4BF324: jge     short loc_4BF356
0x4BF326: movzx   esi, bl
0x4BF329: lea     esi, ds:30h[esi*4]
0x4BF330: lea     eax, ds:0[edi*4]
0x4BF337: jmp     short loc_4BF340
0x4BF339: align 10h
0x4BF340: mov     edx, [ecx+24h]
0x4BF343: mov     edx, [edx+esi]
0x4BF346: mov     ebp, [edx+eax+4]
0x4BF34A: add     edx, eax
0x4BF34C: add     eax, 4
0x4BF34F: cmp     eax, 1Ch
0x4BF352: mov     [edx], ebp
0x4BF354: jl      short loc_4BF340
0x4BF356: mov     eax, [ecx+24h]
0x4BF359: movzx   esi, bl
0x4BF35C: mov     eax, [eax+esi*4+30h]
0x4BF360: xor     edx, edx
0x4BF362: mov     [eax+1Ch], edx
0x4BF365: mov     eax, [ecx+24h]
0x4BF368: cmp     [eax+esi*4+40h], edx
0x4BF36C: jz      loc_4BF434
0x4BF372: fldz
0x4BF374: mov     ebp, 7
0x4BF379: sub     ebp, edi
0x4BF37B: cmp     ebp, 4
0x4BF37E: mov     ebx, edi
0x4BF380: jl      short loc_4BF3EC
0x4BF382: mov     edi, 3
0x4BF387: sub     edi, ebx
0x4BF389: shr     edi, 2
0x4BF38C: lea     eax, ds:8[ebx*4]
0x4BF393: lea     ebx, [ebx+edi*4+4]
0x4BF397: mov     edi, [ecx+24h]
0x4BF39A: mov     edi, [edi+esi*4+40h]
0x4BF39E: mov     edi, [edi+edx]
0x4BF3A1: fld     dword ptr [edi+eax-4]
0x4BF3A5: lea     edi, [edi+eax-8]
0x4BF3A9: fstp    dword ptr [edi]
0x4BF3AB: mov     edi, [ecx+24h]
0x4BF3AE: mov     edi, [edi+esi*4+40h]
0x4BF3B2: mov     edi, [edx+edi]
0x4BF3B5: fld     dword ptr [edi+eax]
0x4BF3B8: add     eax, 10h
0x4BF3BB: cmp     eax, 18h
0x4BF3BE: fstp    dword ptr [edi+eax-14h]
0x4BF3C2: mov     edi, [ecx+24h]
0x4BF3C5: mov     edi, [edi+esi*4+40h]
0x4BF3C9: mov     edi, [edx+edi]
0x4BF3CC: fld     dword ptr [edi+eax-0Ch]
0x4BF3D0: fstp    dword ptr [edi+eax-10h]
0x4BF3D4: mov     edi, [ecx+24h]
0x4BF3D7: mov     edi, [edi+esi*4+40h]
0x4BF3DB: mov     edi, [edx+edi]
0x4BF3DE: fld     dword ptr [edi+eax-8]
0x4BF3E2: fstp    dword ptr [edi+eax-0Ch]
0x4BF3E6: jl      short loc_4BF397
0x4BF3E8: mov     edi, [esp+10h+arg_0]
0x4BF3EC: cmp     ebx, 7
0x4BF3EF: jge     short loc_4BF416
0x4BF3F1: lea     eax, ds:0[ebx*4]
0x4BF3F8: mov     edi, [ecx+24h]
0x4BF3FB: mov     edi, [edi+esi*4+40h]
0x4BF3FF: mov     edi, [edi+edx]
0x4BF402: fld     dword ptr [edi+eax+4]
0x4BF406: add     edi, eax
0x4BF408: add     eax, 4
0x4BF40B: fstp    dword ptr [edi]
0x4BF40D: cmp     eax, 1Ch
0x4BF410: jl      short loc_4BF3F8
0x4BF412: mov     edi, [esp+10h+arg_0]
0x4BF416: mov     eax, [ecx+24h]
0x4BF419: mov     eax, [eax+esi*4+40h]
0x4BF41D: mov     eax, [eax+edx]
0x4BF420: add     edx, 4
0x4BF423: fst     dword ptr [eax+1Ch]
0x4BF426: cmp     edx, 484h
0x4BF42C: jl      loc_4BF37B
0x4BF432: fstp    st
0x4BF434: pop     edi
0x4BF435: pop     esi
0x4BF436: pop     ebp
0x4BF437: pop     ebx
0x4BF438: retn    8
