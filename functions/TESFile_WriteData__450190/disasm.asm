0x450190: push    esi; ArgList
0x450191: mov     esi, ecx
0x450193: mov     ecx, [esp+4+arg_0]
0x450197: test    ecx, ecx
0x450199: jz      short loc_4501E0
0x45019B: mov     eax, [esi+10h]
0x45019E: push    edi
0x45019F: mov     edi, [esp+8+arg_4]
0x4501A3: push    1
0x4501A5: lea     edx, [esp+0Ch+arg_0]
0x4501A9: push    edx
0x4501AA: push    edi
0x4501AB: push    ecx
0x4501AC: push    eax
0x4501AD: mov     eax, [eax+8]
0x4501B0: mov     [esp+1Ch+arg_0], 1
0x4501B8: call    eax
0x4501BA: add     esp, 14h
0x4501BD: cmp     eax, edi
0x4501BF: pop     edi
0x4501C0: jnb     short loc_4501E0
0x4501C2: call    __errno
0x4501C7: push    offset aWriteErrorInTe; "Write Error in TES file"
0x4501CC: mov     dword ptr [esi], 0Ah
0x4501D2: call    PrintError
0x4501D7: mov     eax, [esi]
0x4501D9: add     esp, 4
0x4501DC: pop     esi
0x4501DD: retn    8
0x4501E0: mov     dword ptr [esi], 0
0x4501E6: xor     eax, eax
0x4501E8: pop     esi
0x4501E9: retn    8
