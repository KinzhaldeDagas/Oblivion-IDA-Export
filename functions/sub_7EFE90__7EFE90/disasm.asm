0x7EFE90: push    ecx
0x7EFE91: push    ebx
0x7EFE92: push    ebp
0x7EFE93: mov     ebp, [esp+0Ch+arg_0]
0x7EFE97: push    esi
0x7EFE98: push    edi
0x7EFE99: lea     eax, [esp+14h+arg_0]
0x7EFE9D: mov     ebx, ecx
0x7EFE9F: push    eax
0x7EFEA0: mov     ecx, ebp
0x7EFEA2: call    sub_405760
0x7EFEA7: mov     esi, [eax]
0x7EFEA9: mov     eax, [esp+14h+arg_0]
0x7EFEAD: test    eax, eax
0x7EFEAF: jz      short loc_7EFECF
0x7EFEB1: mov     edi, eax
0x7EFEB3: add     eax, 4
0x7EFEB6: push    eax; lpAddend
0x7EFEB7: call    dword ptr ds:0A2807Ch
0x7EFEBD: test    eax, eax
0x7EFEBF: jnz     short loc_7EFECF
0x7EFEC1: test    edi, edi
0x7EFEC3: jz      short loc_7EFECF
0x7EFEC5: mov     edx, [edi]
0x7EFEC7: mov     eax, [edx]
0x7EFEC9: push    1
0x7EFECB: mov     ecx, edi
0x7EFECD: call    eax
0x7EFECF: test    esi, esi
0x7EFED1: jnz     short loc_7EFF0E
0x7EFED3: mov     ecx, ebp; this
0x7EFED5: call    NiAVObject_InitializePropertyState
0x7EFEDA: lea     ecx, [esp+14h+var_4]
0x7EFEDE: push    ecx
0x7EFEDF: mov     ecx, ebp
0x7EFEE1: call    sub_405760
0x7EFEE6: mov     esi, [eax]
0x7EFEE8: mov     eax, [esp+14h+var_4]
0x7EFEEC: test    eax, eax
0x7EFEEE: jz      short loc_7EFF0E
0x7EFEF0: mov     edi, eax
0x7EFEF2: add     eax, 4
0x7EFEF5: push    eax; lpAddend
0x7EFEF6: call    dword ptr ds:0A2807Ch
0x7EFEFC: test    eax, eax
0x7EFEFE: jnz     short loc_7EFF0E
0x7EFF00: test    edi, edi
0x7EFF02: jz      short loc_7EFF0E
0x7EFF04: mov     edx, [edi]
0x7EFF06: mov     eax, [edx]
0x7EFF08: push    1
0x7EFF0A: mov     ecx, edi
0x7EFF0C: call    eax
0x7EFF0E: mov     esi, [esi+20h]
0x7EFF11: test    esi, esi
0x7EFF13: jz      short loc_7EFF67
0x7EFF15: mov     ecx, [esi+20h]
0x7EFF18: mov     eax, [ecx]
0x7EFF1A: test    eax, eax
0x7EFF1C: jz      short loc_7EFF23
0x7EFF1E: mov     eax, [eax+8]
0x7EFF21: jmp     short loc_7EFF25
0x7EFF23: xor     eax, eax
0x7EFF25: push    eax; a2
0x7EFF26: lea     ecx, [ebx+9Ch]; this
0x7EFF2C: call    NiSmartPointer_Set??
0x7EFF31: mov     edx, [esi+20h]
0x7EFF34: mov     eax, [edx]
0x7EFF36: test    eax, eax
0x7EFF38: jz      short loc_7EFF46
0x7EFF3A: movzx   eax, word ptr [eax+4]
0x7EFF3E: shr     eax, 0Ch
0x7EFF41: and     eax, 3
0x7EFF44: jmp     short loc_7EFF4B
0x7EFF46: mov     eax, 3
0x7EFF4B: mov     edx, [ebx]
0x7EFF4D: push    eax
0x7EFF4E: mov     eax, [edx+74h]
0x7EFF51: mov     ecx, ebx
0x7EFF53: call    eax
0x7EFF55: push    esi
0x7EFF56: mov     ecx, ebp
0x7EFF58: call    sub_4A1220
0x7EFF5D: pop     edi
0x7EFF5E: pop     esi
0x7EFF5F: pop     ebp
0x7EFF60: mov     al, 1
0x7EFF62: pop     ebx
0x7EFF63: pop     ecx
0x7EFF64: retn    4
0x7EFF67: pop     edi
0x7EFF68: pop     esi
0x7EFF69: pop     ebp
0x7EFF6A: xor     al, al
0x7EFF6C: pop     ebx
0x7EFF6D: pop     ecx
0x7EFF6E: retn    4
