0x6D6B20: push    esi
0x6D6B21: mov     esi, ecx
0x6D6B23: mov     eax, [esi+54h]
0x6D6B26: test    eax, eax
0x6D6B28: jnz     loc_6D6BE2
0x6D6B2E: push    32h ; '2'; Size
0x6D6B30: call    FormHeapAlloc
0x6D6B35: mov     ecx, [esi+50h]
0x6D6B38: add     esp, 4
0x6D6B3B: cmp     ecx, 4; switch 5 cases
0x6D6B3E: mov     [esi+54h], eax
0x6D6B41: ja      def_6D6B47
0x6D6B47: jmp     ds:jpt_6D6B47[ecx*4]; switch jump
0x6D6B4E: mov     ecx, [esi+4Ch]; jumptable 006D6B47 case 0
0x6D6B51: movzx   edx, byte ptr [esi+48h]
0x6D6B55: push    ecx
0x6D6B56: push    edx; ArgList
0x6D6B57: push    offset aDDTt_translate; "%d-%d-TT_TRANSLATE_U"
0x6D6B5C: push    32h ; '2'; SizeInBytes
0x6D6B5E: push    eax; DstBuf
0x6D6B5F: call    sub_6C5D40
0x6D6B64: mov     eax, [esi+54h]
0x6D6B67: add     esp, 14h
0x6D6B6A: pop     esi
0x6D6B6B: retn
0x6D6B6C: mov     ecx, [esi+4Ch]; jumptable 006D6B47 case 1
0x6D6B6F: movzx   edx, byte ptr [esi+48h]
0x6D6B73: push    ecx
0x6D6B74: push    edx; ArgList
0x6D6B75: push    offset aDDTt_transla_0; "%d-%d-TT_TRANSLATE_V"
0x6D6B7A: push    32h ; '2'; SizeInBytes
0x6D6B7C: push    eax; DstBuf
0x6D6B7D: call    sub_6C5D40
0x6D6B82: mov     eax, [esi+54h]
0x6D6B85: add     esp, 14h
0x6D6B88: pop     esi
0x6D6B89: retn
0x6D6B8A: mov     ecx, [esi+4Ch]; jumptable 006D6B47 case 2
0x6D6B8D: movzx   edx, byte ptr [esi+48h]
0x6D6B91: push    ecx
0x6D6B92: push    edx; ArgList
0x6D6B93: push    offset aDDTt_rotate; "%d-%d-TT_ROTATE"
0x6D6B98: push    32h ; '2'; SizeInBytes
0x6D6B9A: push    eax; DstBuf
0x6D6B9B: call    sub_6C5D40
0x6D6BA0: mov     eax, [esi+54h]
0x6D6BA3: add     esp, 14h
0x6D6BA6: pop     esi
0x6D6BA7: retn
0x6D6BA8: mov     ecx, [esi+4Ch]; jumptable 006D6B47 case 3
0x6D6BAB: movzx   edx, byte ptr [esi+48h]
0x6D6BAF: push    ecx
0x6D6BB0: push    edx; ArgList
0x6D6BB1: push    offset aDDTt_scale_u; "%d-%d-TT_SCALE_U"
0x6D6BB6: push    32h ; '2'; SizeInBytes
0x6D6BB8: push    eax; DstBuf
0x6D6BB9: call    sub_6C5D40
0x6D6BBE: mov     eax, [esi+54h]
0x6D6BC1: add     esp, 14h
0x6D6BC4: pop     esi
0x6D6BC5: retn
0x6D6BC6: mov     ecx, [esi+4Ch]; jumptable 006D6B47 case 4
0x6D6BC9: movzx   edx, byte ptr [esi+48h]
0x6D6BCD: push    ecx
0x6D6BCE: push    edx; ArgList
0x6D6BCF: push    offset aDDTt_scale_v; "%d-%d-TT_SCALE_V"
0x6D6BD4: push    32h ; '2'; SizeInBytes
0x6D6BD6: push    eax; DstBuf
0x6D6BD7: call    sub_6C5D40
0x6D6BDC: add     esp, 14h
