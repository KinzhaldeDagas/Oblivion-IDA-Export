0x42C160: push    esi
0x42C161: mov     esi, ecx
0x42C163: test    byte ptr [esi+194h], 4
0x42C16A: jnz     short loc_42C1BF
0x42C16C: cmp     dword ptr [esi+178h], 0
0x42C173: jz      short loc_42C1B5
0x42C175: push    edi
0x42C176: xor     edi, edi
0x42C178: cmp     [esi+164h], edi
0x42C17E: jbe     short loc_42C1A5
0x42C180: push    ebx
0x42C181: xor     ebx, ebx
0x42C183: mov     eax, [esi+178h]
0x42C189: mov     ecx, [eax+ebx+0Ch]
0x42C18D: push    ecx
0x42C18E: call    FormHeapFree
0x42C193: add     edi, 1
0x42C196: add     esp, 4
0x42C199: add     ebx, 10h
0x42C19C: cmp     edi, [esi+164h]
0x42C1A2: jb      short loc_42C183
0x42C1A4: pop     ebx
0x42C1A5: mov     edx, [esi+178h]
0x42C1AB: push    edx
0x42C1AC: call    FormHeapFree
0x42C1B1: add     esp, 4
0x42C1B4: pop     edi
0x42C1B5: mov     dword ptr [esi+178h], 0
0x42C1BF: pop     esi
0x42C1C0: retn
