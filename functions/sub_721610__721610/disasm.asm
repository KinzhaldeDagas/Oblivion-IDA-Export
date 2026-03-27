0x721610: push    0FFFFFFFFh
0x721612: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x721617: mov     eax, large fs:0
0x72161D: push    eax
0x72161E: sub     esp, 8
0x721621: push    esi
0x721622: push    edi
0x721623: mov     eax, ds:0B30AACh
0x721628: xor     eax, esp
0x72162A: push    eax
0x72162B: lea     eax, [esp+20h+var_C]
0x72162F: mov     large fs:0, eax
0x721635: mov     edi, ecx
0x721637: mov     esi, [esp+20h+Size]
0x72163B: push    esi; a2
0x72163C: call    sub_7008A0
0x721641: cmp     dword ptr [esi+0D8h], 500000Bh
0x72164B: mov     ecx, esi
0x72164D: jnb     loc_721712
0x721653: call    sub_712A20
0x721658: mov     eax, [esi+21Ch]
0x72165E: push    1
0x721660: lea     ecx, [esp+24h+var_14]
0x721664: push    ecx
0x721665: push    4
0x721667: lea     edx, [esp+2Ch+Size]
0x72166B: push    edx
0x72166C: push    eax
0x72166D: mov     eax, [eax+4]
0x721670: mov     [esp+34h+var_14], 4
0x721678: call    eax
0x72167A: add     esp, 14h
0x72167D: cmp     [esp+20h+Size], 0
0x721682: jbe     loc_72171B
0x721688: test    edi, edi
0x72168A: jz      loc_72171B
0x721690: mov     edx, [edi]
0x721692: mov     eax, [edx+4]
0x721695: mov     ecx, edi
0x721697: call    eax
0x721699: cmp     eax, offset dword_B3FD44
0x72169E: setz    al
0x7216A1: test    al, al
0x7216A3: jz      short loc_72171B
0x7216A5: mov     ecx, [esp+20h+Size]
0x7216A9: push    ecx; Size
0x7216AA: call    FormHeapAlloc
0x7216AF: mov     edx, [esp+24h+Size]
0x7216B3: push    edx
0x7216B4: mov     edi, eax
0x7216B6: push    edi
0x7216B7: push    esi
0x7216B8: call    sub_6D7C20
0x7216BD: push    14h; Size
0x7216BF: call    FormHeapAlloc
0x7216C4: add     esp, 14h
0x7216C7: mov     [esp+20h+var_10], eax
0x7216CB: test    eax, eax
0x7216CD: mov     [esp+20h+var_4], 0
0x7216D5: jz      short loc_7216E6
0x7216D7: mov     ecx, [esp+20h+Size]
0x7216DB: push    edi
0x7216DC: push    ecx
0x7216DD: mov     ecx, eax
0x7216DF: call    sub_4C15F0
0x7216E4: jmp     short loc_7216E8
0x7216E6: xor     eax, eax
0x7216E8: test    eax, eax
0x7216EA: mov     [esp+20h+var_4], 0FFFFFFFFh
0x7216F2: jz      short loc_72171B
0x7216F4: mov     edx, [esi]
0x7216F6: push    eax
0x7216F7: mov     eax, [edx+24h]
0x7216FA: mov     ecx, esi
0x7216FC: call    eax
0x7216FE: mov     ecx, [esp+20h+var_C]
0x721702: mov     large fs:0, ecx
0x721709: pop     ecx
0x72170A: pop     edi
0x72170B: pop     esi
0x72170C: add     esp, 14h
0x72170F: retn    4
0x721712: add     edi, 8
0x721715: push    edi
0x721716: call    sub_713620
0x72171B: mov     ecx, [esp+20h+var_C]
0x72171F: mov     large fs:0, ecx
0x721726: pop     ecx
0x721727: pop     edi
0x721728: pop     esi
0x721729: add     esp, 14h
0x72172C: retn    4
