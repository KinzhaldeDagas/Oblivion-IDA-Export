0x77E2D0: push    ebx
0x77E2D1: mov     ebx, [esp+4+arg_8]
0x77E2D5: push    ebp
0x77E2D6: push    esi
0x77E2D7: mov     esi, [esp+0Ch+arg_0]
0x77E2DB: mov     ax, [esi+2Eh]
0x77E2DF: and     ax, 0FFFh
0x77E2E3: or      ax, 8000h
0x77E2E7: test    ebx, ebx
0x77E2E9: push    edi
0x77E2EA: mov     ebp, ecx
0x77E2EC: mov     [esi+2Eh], ax
0x77E2F0: jz      short loc_77E32B
0x77E2F2: cmp     dword ptr [ebx+28h], 0
0x77E2F6: jnz     loc_77E3C3
0x77E2FC: push    50h ; 'P'; Size
0x77E2FE: call    FormHeapAlloc
0x77E303: add     esp, 4
0x77E306: test    eax, eax
0x77E308: jz      short loc_77E315
0x77E30A: mov     ecx, eax
0x77E30C: call    NiGeometryBufferData__NiGeometryBufferData
0x77E311: mov     edi, eax
0x77E313: jmp     short loc_77E317
0x77E315: xor     edi, edi
0x77E317: xor     ecx, ecx
0x77E319: cmp     [ebx+22h], cx
0x77E31D: setnz   cl
0x77E320: add     ecx, 4
0x77E323: mov     [edi+38h], ecx
0x77E326: mov     [ebx+28h], edi
0x77E329: jmp     short loc_77E38A
0x77E32B: cmp     dword ptr [esi+38h], 0
0x77E32F: jnz     loc_77E3C3
0x77E335: push    50h ; 'P'; Size
0x77E337: call    FormHeapAlloc
0x77E33C: add     esp, 4
0x77E33F: test    eax, eax
0x77E341: jz      short loc_77E34E
0x77E343: mov     ecx, eax
0x77E345: call    NiGeometryBufferData__NiGeometryBufferData
0x77E34A: mov     edi, eax
0x77E34C: jmp     short loc_77E350
0x77E34E: xor     edi, edi
0x77E350: mov     edx, [esi]
0x77E352: mov     eax, [edx+4]
0x77E355: mov     ecx, esi
0x77E357: call    eax
0x77E359: test    eax, eax
0x77E35B: jz      short loc_77E36E
0x77E35D: lea     ecx, [ecx+0]
0x77E360: cmp     eax, offset dword_B3FD2C
0x77E365: jz      short loc_77E3CA
0x77E367: mov     eax, [eax+4]
0x77E36A: test    eax, eax
0x77E36C: jnz     short loc_77E360
0x77E36E: push    esi
0x77E36F: push    offset dword_B3FD0C
0x77E374: call    NiRTTI__IsObjectOfRTTIType
0x77E379: add     esp, 8
0x77E37C: test    al, al
0x77E37E: jz      short loc_77E387
0x77E380: mov     dword ptr [edi+38h], 5
0x77E387: mov     [esi+38h], edi
0x77E38A: cmp     dword ptr [esi+20h], 0
0x77E38E: movzx   eax, byte ptr [esi+2Ch]
0x77E392: setnz   dl
0x77E395: xor     ecx, ecx
0x77E397: and     eax, 3Fh
0x77E39A: cmp     [esi+24h], ecx
0x77E39D: jz      short loc_77E3A4
0x77E39F: mov     ecx, 400000h
0x77E3A4: test    dl, dl
0x77E3A6: jz      short loc_77E3AE
0x77E3A8: or      ecx, offset loc_800000
0x77E3AE: shl     eax, 18h
0x77E3B1: or      eax, ecx
0x77E3B3: push    edi
0x77E3B4: mov     ecx, ebp
0x77E3B6: mov     [edi], eax
0x77E3B8: call    sub_782910
0x77E3BD: or      word ptr [esi+2Eh], 0FFFh
0x77E3C3: pop     edi
0x77E3C4: pop     esi
0x77E3C5: pop     ebp
0x77E3C6: pop     ebx
0x77E3C7: retn    0Ch
0x77E3CA: mov     dword ptr [edi+38h], 4
0x77E3D1: jmp     short loc_77E387
