0x4A8290: sub     esp, 0Ch
0x4A8293: push    ebx
0x4A8294: push    esi
0x4A8295: mov     esi, ecx
0x4A8297: cmp     dword ptr [esi+108h], 0
0x4A829E: setnz   bl
0x4A82A1: test    bl, bl
0x4A82A3: jz      short loc_4A8321
0x4A82A5: mov     edx, [esi+110h]
0x4A82AB: push    ebp
0x4A82AC: push    edi
0x4A82AD: lea     edi, [esi+10Ch]
0x4A82B3: xor     eax, eax
0x4A82B5: test    edx, edx
0x4A82B7: jbe     short loc_4A82CF
0x4A82B9: mov     ebp, [edi+8]
0x4A82BC: mov     ecx, ebp
0x4A82BE: mov     edi, edi
0x4A82C0: cmp     dword ptr [ecx], 0
0x4A82C3: jnz     short loc_4A831B
0x4A82C5: add     eax, 1
0x4A82C8: add     ecx, 4
0x4A82CB: cmp     eax, edx
0x4A82CD: jb      short loc_4A82C0
0x4A82CF: xor     eax, eax
0x4A82D1: test    eax, eax
0x4A82D3: mov     [esp+1Ch+var_C], eax
0x4A82D7: jz      short loc_4A8311
0x4A82D9: lea     esp, [esp+0]
0x4A82E0: lea     eax, [esp+1Ch+var_8]
0x4A82E4: push    eax
0x4A82E5: lea     ecx, [esp+20h+var_4]
0x4A82E9: push    ecx
0x4A82EA: lea     edx, [esp+24h+var_C]
0x4A82EE: push    edx
0x4A82EF: mov     ecx, edi
0x4A82F1: call    sub_452600
0x4A82F6: mov     eax, [esp+1Ch+var_8]
0x4A82FA: test    eax, eax
0x4A82FC: jz      short loc_4A830A
0x4A82FE: mov     edx, [esi]
0x4A8300: push    eax
0x4A8301: mov     eax, [edx+10h]
0x4A8304: mov     ecx, esi
0x4A8306: call    eax
0x4A8308: and     bl, al
0x4A830A: cmp     [esp+1Ch+var_C], 0
0x4A830F: jnz     short loc_4A82E0
0x4A8311: pop     edi
0x4A8312: pop     ebp
0x4A8313: pop     esi
0x4A8314: mov     al, bl
0x4A8316: pop     ebx
0x4A8317: add     esp, 0Ch
0x4A831A: retn
0x4A831B: mov     eax, [ebp+eax*4+0]
0x4A831F: jmp     short loc_4A82D1
0x4A8321: pop     esi
0x4A8322: mov     al, bl
0x4A8324: pop     ebx
0x4A8325: add     esp, 0Ch
0x4A8328: retn
