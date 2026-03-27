0x98C10D: push    8
0x98C10F: push    offset stru_AFFDE0
0x98C114: call    __SEH_prolog4
0x98C119: mov     esi, [ebp+arg_0]
0x98C11C: test    esi, esi
0x98C11E: jz      loc_98C20E
0x98C124: mov     eax, [esi+24h]
0x98C127: test    eax, eax
0x98C129: jz      short loc_98C132
0x98C12B: push    eax; Memory
0x98C12C: call    _free
0x98C131: pop     ecx
0x98C132: mov     eax, [esi+2Ch]
0x98C135: test    eax, eax
0x98C137: jz      short loc_98C140
0x98C139: push    eax; Memory
0x98C13A: call    _free
0x98C13F: pop     ecx
0x98C140: mov     eax, [esi+34h]
0x98C143: test    eax, eax
0x98C145: jz      short loc_98C14E
0x98C147: push    eax; Memory
0x98C148: call    _free
0x98C14D: pop     ecx
0x98C14E: mov     eax, [esi+3Ch]
0x98C151: test    eax, eax
0x98C153: jz      short loc_98C15C
0x98C155: push    eax; Memory
0x98C156: call    _free
0x98C15B: pop     ecx
0x98C15C: mov     eax, [esi+44h]
0x98C15F: test    eax, eax
0x98C161: jz      short loc_98C16A
0x98C163: push    eax; Memory
0x98C164: call    _free
0x98C169: pop     ecx
0x98C16A: mov     eax, [esi+48h]
0x98C16D: test    eax, eax
0x98C16F: jz      short loc_98C178
0x98C171: push    eax; Memory
0x98C172: call    _free
0x98C177: pop     ecx
0x98C178: mov     eax, [esi+5Ch]
0x98C17B: cmp     eax, offset unk_B312C8
0x98C180: jz      short loc_98C189
0x98C182: push    eax; Memory
0x98C183: call    _free
0x98C188: pop     ecx
0x98C189: push    0Dh
0x98C18B: call    __lock
0x98C190: pop     ecx
0x98C191: and     [ebp+ms_exc.registration.TryLevel], 0
0x98C195: mov     edi, [esi+68h]
0x98C198: test    edi, edi
0x98C19A: jz      short loc_98C1B6
0x98C19C: push    edi; lpAddend
0x98C19D: call    ds:InterlockedDecrement
0x98C1A3: test    eax, eax
0x98C1A5: jnz     short loc_98C1B6
0x98C1A7: cmp     edi, offset dword_B31390
0x98C1AD: jz      short loc_98C1B6
0x98C1AF: push    edi; Memory
0x98C1B0: call    _free
0x98C1B5: pop     ecx
0x98C1B6: mov     [ebp+ms_exc.registration.TryLevel], 0FFFFFFFEh
0x98C1BD: call    __freefls@4___$LN19_4
