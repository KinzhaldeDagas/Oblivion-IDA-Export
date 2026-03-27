0x417188: test    edi, edi
0x41718A: jz      short loc_4171BC
0x41718C: cmp     dword ptr [ebp+0], 0
0x417190: jz      short loc_4171B9
0x417192: push    8; Size
0x417194: call    FormHeapAlloc
0x417199: add     esp, 4
0x41719C: test    eax, eax
0x41719E: jz      short loc_4171AE
0x4171A0: mov     ecx, [ebp+0]
0x4171A3: mov     [eax], ecx
0x4171A5: mov     dword ptr [eax+4], 0
0x4171AC: jmp     short loc_4171B0
0x4171AE: xor     eax, eax
0x4171B0: mov     edx, [ebp+4]
0x4171B3: mov     [eax+4], edx
0x4171B6: mov     [ebp+4], eax
0x4171B9: mov     [ebp+0], edi
0x4171BC: test    esi, esi
0x4171BE: jnz     loc_417100
0x4171C4: pop     edi
0x4171C5: pop     esi
0x4171C6: mov     eax, ebp
0x4171C8: pop     ebp
0x4171C9: retn
