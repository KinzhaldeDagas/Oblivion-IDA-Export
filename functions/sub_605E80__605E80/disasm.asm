0x605E80: mov     eax, ds:0B33A98h
0x605E85: test    eax, eax
0x605E87: push    esi
0x605E88: mov     esi, ecx
0x605E8A: jz      short loc_605EA2
0x605E8C: cmp     byte ptr [eax+0CD4h], 0
0x605E93: jnz     short loc_605EA2
0x605E95: push    1
0x605E97: push    esi
0x605E98: mov     ecx, offset ActorProcessManager_ptr
0x605E9D: call    sub_675740
0x605EA2: cmp     dword ptr [esi+20h], 0
0x605EA6: jz      short loc_605EC7
0x605EA8: push    edi
0x605EA9: lea     esp, [esp+0]
0x605EB0: mov     eax, [esi+20h]
0x605EB3: mov     edi, [eax+4]
0x605EB6: push    eax
0x605EB7: call    FormHeapFree
0x605EBC: add     esp, 4
0x605EBF: test    edi, edi
0x605EC1: mov     [esi+20h], edi
0x605EC4: jnz     short loc_605EB0
0x605EC6: pop     edi
0x605EC7: mov     dword ptr [esi+1Ch], 0
0x605ECE: pop     esi
0x605ECF: retn
