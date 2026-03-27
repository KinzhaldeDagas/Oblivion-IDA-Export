0x849020: push    ecx
0x849021: push    esi
0x849022: push    edi
0x849023: mov     di, [esp+0Ch+arg_0]
0x849028: push    ebx
0x849029: mov     eax, 2
0x84902E: mov     esi, offset dword_B4501C
0x849033: mov     [esp+10h+var_4], 9
0x84903B: push    ebp
0x84903C: lea     esp, [esp+0]
0x849040: mov     edx, [esi-4]
0x849043: test    edx, edx
0x849045: jz      short loc_849061
0x849047: lea     ecx, [eax-1]
0x84904A: mov     ebx, 1
0x84904F: shl     ebx, cl
0x849051: movzx   ecx, di
0x849054: test    ds:0B43B20h[ecx*4], ebx
0x84905B: setnz   cl
0x84905E: mov     [edx+8], cl
0x849061: mov     edx, [esi]
0x849063: test    edx, edx
0x849065: jz      short loc_849080
0x849067: mov     ecx, eax
0x849069: mov     ebp, 1
0x84906E: shl     ebp, cl
0x849070: movzx   ebx, di
0x849073: test    ds:0B43B20h[ebx*4], ebp
0x84907A: setnz   cl
0x84907D: mov     [edx+8], cl
0x849080: mov     edx, [esi+4]
0x849083: test    edx, edx
0x849085: jz      short loc_8490A1
0x849087: lea     ecx, [eax+1]
0x84908A: mov     ebx, 1
0x84908F: shl     ebx, cl
0x849091: movzx   ecx, di
0x849094: test    ds:0B43B20h[ecx*4], ebx
0x84909B: setnz   cl
0x84909E: mov     [edx+8], cl
0x8490A1: add     eax, 3
0x8490A4: add     esi, 0Ch
0x8490A7: sub     [esp+14h+var_4], 1
0x8490AC: jnz     short loc_849040
0x8490AE: pop     ebp
0x8490AF: xor     eax, eax
0x8490B1: pop     ebx
0x8490B2: mov     edx, ds:0B45518h[eax*4]
0x8490B9: test    edx, edx
0x8490BB: jz      short loc_8490D7
0x8490BD: lea     ecx, [eax+1]
0x8490C0: mov     esi, 1
0x8490C5: shl     esi, cl
0x8490C7: movzx   ecx, di
0x8490CA: test    ds:0B441B0h[ecx*4], esi
0x8490D1: setnz   cl
0x8490D4: mov     [edx+8], cl
0x8490D7: add     eax, 1
0x8490DA: cmp     eax, 11h
0x8490DD: jl      short loc_8490B2
0x8490DF: pop     edi
0x8490E0: pop     esi
0x8490E1: pop     ecx
0x8490E2: retn
