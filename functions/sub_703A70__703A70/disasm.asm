0x703A70: push    ebx
0x703A71: mov     ebx, dword ptr [esp+4+ArgList]
0x703A75: push    esi
0x703A76: mov     eax, ebx
0x703A78: push    edi
0x703A79: lea     edx, [eax+1]
0x703A7C: lea     esp, [esp+0]
0x703A80: mov     cl, [eax]
0x703A82: add     eax, 1
0x703A85: test    cl, cl
0x703A87: jnz     short loc_703A80
0x703A89: sub     eax, edx
0x703A8B: lea     esi, [eax+14h]
0x703A8E: push    esi; Size
0x703A8F: call    FormHeapAlloc
0x703A94: mov     edi, eax
0x703A96: mov     eax, [esp+10h+arg_4]
0x703A9A: add     esp, 4
0x703A9D: cmp     eax, 3; switch 4 cases
0x703AA0: ja      short def_703AA2
0x703AA2: jmp     ds:jpt_703AA2[eax*4]; switch jump
0x703AA9: push    ebx; jumptable 00703AA2 case 0
0x703AAA: push    offset aSClamp_s_clamp; "%s = CLAMP_S_CLAMP_T"
0x703AAF: push    esi; SizeInBytes
0x703AB0: push    edi; DstBuf
0x703AB1: call    sub_6C5D40
0x703AB6: add     esp, 10h
0x703AB9: mov     eax, edi
0x703ABB: pop     edi
0x703ABC: pop     esi
0x703ABD: pop     ebx
0x703ABE: retn
0x703ABF: push    ebx; jumptable 00703AA2 case 1
0x703AC0: push    offset aSClamp_s_wrap_; "%s = CLAMP_S_WRAP_T"
0x703AC5: push    esi; SizeInBytes
0x703AC6: push    edi; DstBuf
0x703AC7: call    sub_6C5D40
0x703ACC: add     esp, 10h
0x703ACF: mov     eax, edi
0x703AD1: pop     edi
0x703AD2: pop     esi
0x703AD3: pop     ebx
0x703AD4: retn
0x703AD5: push    ebx; jumptable 00703AA2 case 2
0x703AD6: push    offset aSWrap_s_clamp_; "%s = WRAP_S_CLAMP_T"
0x703ADB: push    esi; SizeInBytes
0x703ADC: push    edi; DstBuf
0x703ADD: call    sub_6C5D40
0x703AE2: add     esp, 10h
0x703AE5: mov     eax, edi
0x703AE7: pop     edi
0x703AE8: pop     esi
0x703AE9: pop     ebx
0x703AEA: retn
0x703AEB: push    ebx; jumptable 00703AA2 case 3
0x703AEC: push    offset aSWrap_s_wrap_t; "%s = WRAP_S_WRAP_T"
0x703AF1: push    esi; SizeInBytes
0x703AF2: push    edi; DstBuf
0x703AF3: call    sub_6C5D40
0x703AF8: add     esp, 10h
