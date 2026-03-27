0x7EC7D0: push    0FFFFFFFFh
0x7EC7D2: push    offset ??0GethitShader@@QAE@XZ_SEH
0x7EC7D7: mov     eax, large fs:0
0x7EC7DD: push    eax
0x7EC7DE: push    ecx
0x7EC7DF: push    esi
0x7EC7E0: push    edi
0x7EC7E1: mov     eax, ds:0B30AACh
0x7EC7E6: xor     eax, esp
0x7EC7E8: push    eax
0x7EC7E9: lea     eax, [esp+1Ch+var_C]
0x7EC7ED: mov     large fs:0, eax
0x7EC7F3: mov     esi, ecx
0x7EC7F5: mov     [esp+1Ch+var_10], esi
0x7EC7F9: call    ??0BSImageSpaceShader@@QAE@XZ; BSImageSpaceShader::BSImageSpaceShader(void)
0x7EC7FE: push    offset sub_7016A0; a5
0x7EC803: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7EC808: push    3; size
0x7EC80A: push    4; a2
0x7EC80C: lea     eax, [esi+94h]
0x7EC812: xor     edi, edi
0x7EC814: push    eax; a1
0x7EC815: mov     [esp+30h+var_4], edi
0x7EC819: mov     dword ptr [esi], offset ??_7GethitShader@@6B@; const GethitShader::`vftable'
0x7EC81F: call    ArrayConstructor
0x7EC824: push    offset sub_7016A0; a5
0x7EC829: push    offset ?_Release@_NonReentrantLock@details@Concurrency@@QAEXXZ; a4
0x7EC82E: push    3; size
0x7EC830: push    4; a2
0x7EC832: lea     ecx, [esi+0A0h]
0x7EC838: push    ecx; a1
0x7EC839: mov     byte ptr [esp+30h+var_4], 1
0x7EC83E: call    ArrayConstructor
0x7EC843: mov     [esi+0ACh], edi
0x7EC849: mov     [esi+0B0h], edi
0x7EC84F: mov     [esi+90h], edi
0x7EC855: mov     byte ptr [esi+20h], 1
0x7EC859: mov     eax, esi
0x7EC85B: mov     ecx, [esp+1Ch+var_C]
0x7EC85F: mov     large fs:0, ecx
0x7EC866: pop     ecx
0x7EC867: pop     edi
0x7EC868: pop     esi
0x7EC869: add     esp, 10h
0x7EC86C: retn
