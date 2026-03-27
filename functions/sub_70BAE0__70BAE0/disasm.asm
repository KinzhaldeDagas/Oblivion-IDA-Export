0x70BAE0: sub     esp, 48h
0x70BAE3: mov     eax, ds:0B30AACh
0x70BAE8: xor     eax, esp
0x70BAEA: mov     [esp+48h+var_4], eax
0x70BAEE: push    ebx
0x70BAEF: push    esi
0x70BAF0: mov     esi, [esp+50h+arg_0]
0x70BAF4: push    edi
0x70BAF5: push    esi
0x70BAF6: mov     edi, ecx
0x70BAF8: call    sub_7086B0
0x70BAFD: mov     eax, ds:0B3FAB0h
0x70BB02: push    eax; ArgList
0x70BB03: call    TESOutput_PrintString
0x70BB08: movzx   ebx, word ptr [esi+0Ah]
0x70BB0C: movzx   ecx, word ptr [esi+8]
0x70BB10: add     esp, 4
0x70BB13: cmp     ebx, ecx
0x70BB15: mov     dword ptr [esp+54h+ArgList], eax
0x70BB19: jb      short loc_70BB29
0x70BB1B: movzx   edx, word ptr [esi+0Eh]
0x70BB1F: add     edx, ebx
0x70BB21: push    edx
0x70BB22: mov     ecx, esi
0x70BB24: call    NiTArray_SetSize
0x70BB29: lea     eax, [esp+54h+ArgList]
0x70BB2D: push    eax
0x70BB2E: push    ebx
0x70BB2F: mov     ecx, esi
0x70BB31: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70BB36: fldz
0x70BB38: fcomp   dword ptr [edi+2Ch]
0x70BB3B: fnstsw  ax
0x70BB3D: test    ah, 44h
0x70BB40: jnp     short loc_70BB49
0x70BB42: mov     eax, 1
0x70BB47: jmp     short loc_70BB4B
0x70BB49: xor     eax, eax
0x70BB4B: push    eax; char
0x70BB4C: push    offset aM_bvisual; "m_bVisual"
0x70BB51: call    TESOutput_PrintLabeledBool
0x70BB56: movzx   ebx, word ptr [esi+0Ah]
0x70BB5A: movzx   ecx, word ptr [esi+8]
0x70BB5E: add     esp, 8
0x70BB61: cmp     ebx, ecx
0x70BB63: mov     dword ptr [esp+54h+ArgList], eax
0x70BB67: jb      short loc_70BB77
0x70BB69: movzx   edx, word ptr [esi+0Eh]
0x70BB6D: add     edx, ebx
0x70BB6F: push    edx
0x70BB70: mov     ecx, esi
0x70BB72: call    NiTArray_SetSize
0x70BB77: lea     eax, [esp+54h+ArgList]
0x70BB7B: push    eax
0x70BB7C: push    ebx
0x70BB7D: mov     ecx, esi
0x70BB7F: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x70BB84: cmp     dword ptr [edi+0C8h], 0
0x70BB8B: jz      loc_70BC41
0x70BB91: mov     ebx, [edi+0C0h]
0x70BB97: test    ebx, ebx
0x70BB99: mov     dword ptr [esp+54h+ArgList], 0
0x70BBA1: jz      loc_70BC41
0x70BBA7: push    ebp
0x70BBA8: mov     ecx, dword ptr [esp+58h+ArgList]
0x70BBAC: mov     edi, [ebx+8]
0x70BBAF: push    ecx; ArgList
0x70BBB0: push    offset aEffectD; "effect[%d]"
0x70BBB5: lea     eax, [ebx+8]
0x70BBB8: mov     ebx, [ebx]
0x70BBBA: lea     edx, [esp+60h+DstBuf]
0x70BBBE: push    40h ; '@'; SizeInBytes
0x70BBC0: push    edx; DstBuf
0x70BBC1: call    sub_6C5D40
0x70BBC6: lea     eax, [esp+68h+DstBuf]
0x70BBCA: push    edi; int
0x70BBCB: push    eax; ArgList
0x70BBCC: call    TESOutput_PrintLabeledPointer
0x70BBD1: movzx   edi, word ptr [esi+0Ah]
0x70BBD5: movzx   ecx, word ptr [esi+8]
0x70BBD9: add     esp, 18h
0x70BBDC: cmp     edi, ecx
0x70BBDE: mov     ebp, eax
0x70BBE0: jb      short loc_70BBF0
0x70BBE2: movzx   edx, word ptr [esi+0Eh]
0x70BBE6: add     edx, edi
0x70BBE8: push    edx
0x70BBE9: mov     ecx, esi
0x70BBEB: call    NiTArray_SetSize
0x70BBF0: movzx   eax, word ptr [esi+0Ah]
0x70BBF4: cmp     edi, eax
0x70BBF6: jb      short loc_70BC0A
0x70BBF8: test    ebp, ebp
0x70BBFA: lea     ecx, [edi+1]
0x70BBFD: mov     [esi+0Ah], cx
0x70BC01: jz      short loc_70BC2D
0x70BC03: add     word ptr [esi+0Ch], 1
0x70BC08: jmp     short loc_70BC2D
0x70BC0A: test    ebp, ebp
0x70BC0C: jz      short loc_70BC1E
0x70BC0E: mov     edx, [esi+4]
0x70BC11: cmp     dword ptr [edx+edi*4], 0
0x70BC15: jnz     short loc_70BC2D
0x70BC17: add     word ptr [esi+0Ch], 1
0x70BC1C: jmp     short loc_70BC2D
0x70BC1E: mov     eax, [esi+4]
0x70BC21: cmp     dword ptr [eax+edi*4], 0
0x70BC25: jz      short loc_70BC2D
0x70BC27: add     word ptr [esi+0Ch], 0FFFFh
0x70BC2D: mov     ecx, [esi+4]
0x70BC30: add     dword ptr [esp+58h+ArgList], 1
0x70BC35: test    ebx, ebx
0x70BC37: mov     [ecx+edi*4], ebp
0x70BC3A: jnz     loc_70BBA8
0x70BC40: pop     ebp
0x70BC41: mov     ecx, [esp+54h+var_4]
0x70BC45: pop     edi
0x70BC46: pop     esi
0x70BC47: pop     ebx
0x70BC48: xor     ecx, esp
0x70BC4A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x70BC4F: add     esp, 48h
0x70BC52: retn    4
