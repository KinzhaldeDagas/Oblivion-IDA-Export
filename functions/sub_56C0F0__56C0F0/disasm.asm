0x56C0F0: push    0FFFFFFFFh
0x56C0F2: push    offset SEH_56C0F0
0x56C0F7: mov     eax, large fs:0
0x56C0FD: push    eax
0x56C0FE: push    ecx
0x56C0FF: push    ebx
0x56C100: push    esi
0x56C101: push    edi
0x56C102: mov     eax, ds:0B30AACh
0x56C107: xor     eax, esp
0x56C109: push    eax
0x56C10A: lea     eax, [esp+20h+var_C]
0x56C10E: mov     large fs:0, eax
0x56C114: mov     edi, ecx
0x56C116: mov     [esp+20h+var_10], edi
0x56C11A: mov     esi, [edi+48h]
0x56C11D: test    esi, esi
0x56C11F: mov     ebx, ds:0A2807Ch
0x56C125: mov     [esp+20h+var_4], 0
0x56C12D: jz      short loc_56C147
0x56C12F: lea     eax, [esi+4]
0x56C132: push    eax; lpAddend
0x56C133: call    ebx ; InterlockedDecrement
0x56C135: test    eax, eax
0x56C137: jnz     short loc_56C147
0x56C139: test    esi, esi
0x56C13B: jz      short loc_56C147
0x56C13D: mov     edx, [esi]
0x56C13F: mov     eax, [edx]
0x56C141: push    1
0x56C143: mov     ecx, esi
0x56C145: call    eax
0x56C147: mov     esi, [edi]
0x56C149: test    esi, esi
0x56C14B: mov     [esp+20h+var_4], 0FFFFFFFFh
0x56C153: jz      short loc_56C16D
0x56C155: lea     ecx, [esi+4]
0x56C158: push    ecx; lpAddend
0x56C159: call    ebx ; InterlockedDecrement
0x56C15B: test    eax, eax
0x56C15D: jnz     short loc_56C16D
0x56C15F: test    esi, esi
0x56C161: jz      short loc_56C16D
0x56C163: mov     edx, [esi]
0x56C165: mov     eax, [edx]
0x56C167: push    1
0x56C169: mov     ecx, esi
0x56C16B: call    eax
0x56C16D: mov     ecx, dword ptr [esp+20h+var_C]
0x56C171: mov     large fs:0, ecx
0x56C178: pop     ecx
0x56C179: pop     edi
0x56C17A: pop     esi
0x56C17B: pop     ebx
0x56C17C: add     esp, 10h
0x56C17F: retn
