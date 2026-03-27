0x658990: push    ecx
0x658991: fld     dword ptr ds:0B36C68h
0x658997: push    ebx
0x658998: push    ebp
0x658999: fadd    st, st
0x65899B: push    esi
0x65899C: push    edi; int
0x65899D: mov     ebp, ecx
0x65899F: call    Double_To_SInt32
0x6589A4: push    0; int
0x6589A6: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x6589AB: mov     edi, eax
0x6589AD: mov     eax, [ebp+2Ch]
0x6589B0: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x6589B5: push    0; int
0x6589B7: push    eax; void *
0x6589B8: mov     [esp+28h+var_4], edi
0x6589BC: call    OblivionDynamicCast
0x6589C1: add     esp, 14h
0x6589C4: xor     bl, bl
0x6589C6: cmp     dword ptr [ebp+2Ch], 0
0x6589CA: mov     esi, eax
0x6589CC: jz      loc_658ADE
0x6589D2: mov     eax, [esi+8]
0x6589D5: mov     ecx, eax
0x6589D7: shr     ecx, 0Bh
0x6589DA: test    cl, 1
0x6589DD: jnz     loc_658ADE
0x6589E3: shr     eax, 5
0x6589E6: test    al, 1
0x6589E8: jnz     loc_658ADE
0x6589EE: mov     edx, [esi]
0x6589F0: mov     eax, [edx+198h]
0x6589F6: push    0
0x6589F8: mov     ecx, esi
0x6589FA: call    eax
0x6589FC: test    al, al
0x6589FE: jnz     loc_658ADE
0x658A04: mov     ecx, [esi+58h]
0x658A07: test    ecx, ecx
0x658A09: jz      loc_658ABE
0x658A0F: mov     edx, [ecx]
0x658A11: mov     eax, [edx+8]
0x658A14: call    eax
0x658A16: cmp     eax, 2
0x658A19: jnz     loc_658ABE
0x658A1F: test    edi, edi
0x658A21: jz      loc_658AF7
0x658A27: mov     edi, [esp+14h+arg_0]
0x658A2B: jmp     short loc_658A30
0x658A2D: align 10h
0x658A30: mov     edx, [edi]
0x658A32: mov     eax, [edx+198h]
0x658A38: push    0
0x658A3A: mov     ecx, edi
0x658A3C: call    eax
0x658A3E: test    al, al
0x658A40: jnz     short loc_658AA4
0x658A42: mov     edx, [edi]
0x658A44: mov     eax, [edx+344h]
0x658A4A: mov     ecx, edi
0x658A4C: call    eax
0x658A4E: mov     ecx, [ebp+2Ch]
0x658A51: push    0; int
0x658A53: push    offset ??_R0?AVActor@@@8; struct TypeDescriptor *
0x658A58: push    offset ??_R0?AVTESObjectREFR@@@8; struct _s_RTTICompleteObjectLocator *
0x658A5D: push    0; int
0x658A5F: push    ecx; void *
0x658A60: call    OblivionDynamicCast
0x658A65: mov     esi, eax
0x658A67: add     esp, 14h
0x658A6A: test    esi, esi
0x658A6C: jz      short loc_658A9D
0x658A6E: mov     edx, [esi]
0x658A70: mov     eax, [edx+198h]
0x658A76: push    0
0x658A78: mov     ecx, esi
0x658A7A: call    eax
0x658A7C: test    al, al
0x658A7E: jnz     short loc_658A9D
0x658A80: mov     ecx, [esi+58h]
0x658A83: mov     edx, [ecx]
0x658A85: mov     eax, [edx+8]
0x658A88: call    eax
0x658A8A: cmp     eax, 2
0x658A8D: jnz     short loc_658A9D
0x658A8F: mov     edx, [esi]
0x658A91: mov     eax, [edx+344h]
0x658A97: mov     ecx, esi
0x658A99: call    eax
0x658A9B: mov     bl, 1
0x658A9D: sub     [esp+14h+var_4], 1
0x658AA2: jnz     short loc_658A30
0x658AA4: test    bl, bl
0x658AA6: jz      short loc_658AF7
0x658AA8: test    esi, esi
0x658AAA: jz      short loc_658AF7
0x658AAC: mov     ecx, [esi+58h]
0x658AAF: mov     edx, [ecx]
0x658AB1: mov     eax, [edx+20h]
0x658AB4: call    eax
0x658AB6: pop     edi
0x658AB7: pop     esi
0x658AB8: pop     ebp
0x658AB9: pop     ebx
0x658ABA: pop     ecx
0x658ABB: retn    4
0x658ABE: mov     edx, [ebp+0]
0x658AC1: mov     eax, [esp+14h+arg_0]
0x658AC5: mov     edx, [edx+198h]
0x658ACB: push    0
0x658ACD: push    0FFFFFFFFh
0x658ACF: push    1
0x658AD1: push    eax
0x658AD2: mov     ecx, ebp
0x658AD4: call    edx
0x658AD6: pop     edi
0x658AD7: pop     esi
0x658AD8: pop     ebp
0x658AD9: pop     ebx
0x658ADA: pop     ecx
0x658ADB: retn    4
0x658ADE: mov     esi, [esp+14h+arg_0]
0x658AE2: mov     eax, [esi]
0x658AE4: mov     edx, [eax+340h]
0x658AEA: push    0
0x658AEC: mov     ecx, esi
0x658AEE: call    edx
0x658AF0: mov     ecx, esi; int
0x658AF2: call    sub_5EAE70
0x658AF7: pop     edi
0x658AF8: pop     esi
0x658AF9: pop     ebp
0x658AFA: pop     ebx
0x658AFB: pop     ecx
0x658AFC: retn    4
