0x46D8B0: push    esi
0x46D8B1: mov     esi, ecx
0x46D8B3: movzx   eax, word ptr [esi+8]
0x46D8B7: cmp     ax, 0FFFFh
0x46D8BB: jnz     short loc_46D8D0
0x46D8BD: mov     eax, [esi+4]
0x46D8C0: lea     edx, [eax+1]
0x46D8C3: mov     cl, [eax]
0x46D8C5: add     eax, 1
0x46D8C8: test    cl, cl
0x46D8CA: jnz     short loc_46D8C3
0x46D8CC: sub     eax, edx
0x46D8CE: jmp     short loc_46D8D3
0x46D8D0: movzx   eax, ax
0x46D8D3: test    eax, eax
0x46D8D5: jz      short loc_46D92F
0x46D8D7: movzx   eax, word ptr [esi+8]
0x46D8DB: cmp     ax, 0FFFFh
0x46D8DF: jnz     short loc_46D8F4
0x46D8E1: mov     eax, [esi+4]
0x46D8E4: lea     edx, [eax+1]
0x46D8E7: mov     cl, [eax]
0x46D8E9: add     eax, 1
0x46D8EC: test    cl, cl
0x46D8EE: jnz     short loc_46D8E7
0x46D8F0: sub     eax, edx
0x46D8F2: jmp     short loc_46D8F7
0x46D8F4: movzx   eax, ax
0x46D8F7: add     eax, 1
0x46D8FA: push    eax; Size
0x46D8FB: mov     eax, [esi]
0x46D8FD: mov     edx, [eax+14h]
0x46D900: mov     ecx, esi
0x46D902: call    edx
0x46D904: push    eax; Src
0x46D905: mov     eax, [esp+0Ch+arg_0]
0x46D909: push    eax; int
0x46D90A: call    TESForm_PutFormRecordChunkData
0x46D90F: fld     dword ptr [esi+0Ch]
0x46D912: mov     ecx, [esp+10h+arg_4]
0x46D916: fstp    [esp+10h+var_8]
0x46D91A: add     esp, 8
0x46D91D: push    ecx
0x46D91E: call    TESForm_PutCurrentChunkData4
0x46D923: mov     edx, [esi]
0x46D925: mov     eax, [edx+14h]
0x46D928: add     esp, 8
0x46D92B: mov     ecx, esi
0x46D92D: call    eax
0x46D92F: pop     esi
0x46D930: retn    0Ch
