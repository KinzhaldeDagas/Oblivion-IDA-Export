0x6D5FE0: push    0FFFFFFFFh
0x6D5FE2: push    offset SEH_6D5FE0
0x6D5FE7: mov     eax, large fs:0
0x6D5FED: push    eax
0x6D5FEE: push    ebx
0x6D5FEF: push    esi
0x6D5FF0: push    edi
0x6D5FF1: mov     eax, ds:0B30AACh
0x6D5FF6: xor     eax, esp
0x6D5FF8: push    eax
0x6D5FF9: lea     eax, [esp+1Ch+var_C]
0x6D5FFD: mov     large fs:0, eax
0x6D6003: mov     edi, ecx
0x6D6005: fld     [esp+1Ch+arg_4]
0x6D6009: sub     esp, 8
0x6D600C: fstp    [esp+24h+var_20]
0x6D6010: fld     [esp+24h+arg_0]
0x6D6014: fstp    [esp+24h+var_24]
0x6D6017: call    sub_6EBA60
0x6D601C: mov     ecx, [edi+2Ch]
0x6D601F: xor     ebx, ebx
0x6D6021: cmp     ecx, ebx
0x6D6023: mov     esi, eax
0x6D6025: jz      short loc_6D608D
0x6D6027: fld     [esp+1Ch+arg_4]
0x6D602B: sub     esp, 8
0x6D602E: fstp    [esp+24h+var_20]; float
0x6D6032: lea     eax, [esp+24h+arg_4]
0x6D6036: fld     [esp+24h+arg_0]
0x6D603A: fstp    [esp+24h+var_24]; float
0x6D603D: push    eax; int
0x6D603E: call    sub_6E1FC0
0x6D6043: mov     ecx, [esp+1Ch+arg_4]
0x6D6047: push    ecx
0x6D6048: mov     ecx, esi
0x6D604A: mov     [esp+20h+var_4], ebx
0x6D604E: call    sub_6D5AD0
0x6D6053: mov     edi, [esp+1Ch+arg_4]
0x6D6057: cmp     edi, ebx
0x6D6059: mov     [esi+30h], bx
0x6D605D: mov     [esi+32h], bx
0x6D6061: mov     [esi+34h], bx
0x6D6065: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x6D606D: jz      short loc_6D608B
0x6D606F: lea     edx, [edi+4]
0x6D6072: push    edx; lpAddend
0x6D6073: call    dword ptr ds:0A2807Ch
0x6D6079: test    eax, eax
0x6D607B: jnz     short loc_6D608B
0x6D607D: cmp     edi, ebx
0x6D607F: jz      short loc_6D608B
0x6D6081: mov     eax, [edi]
0x6D6083: mov     edx, [eax]
0x6D6085: push    1
0x6D6087: mov     ecx, edi
0x6D6089: call    edx
0x6D608B: mov     eax, esi
0x6D608D: mov     ecx, dword ptr [esp+1Ch+var_C]
0x6D6091: mov     large fs:0, ecx
0x6D6098: pop     ecx
0x6D6099: pop     edi
0x6D609A: pop     esi
0x6D609B: pop     ebx
0x6D609C: add     esp, 0Ch
0x6D609F: retn    8
