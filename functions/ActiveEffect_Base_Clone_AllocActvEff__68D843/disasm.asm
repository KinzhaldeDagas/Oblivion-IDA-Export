0x68D843: mov     esi, ecx
0x68D845: push    38h ; '8'; Size
0x68D847: call    FormHeapAlloc
0x68D84C: add     esp, 4
0x68D84F: mov     [esp+arg_8], eax
0x68D853: xor     edi, edi
0x68D855: cmp     eax, edi
0x68D857: mov     [esp+arg_14], edi
0x68D85B: jz      short ActiveEffect_Base_Clone___CopyMembers
0x68D85D: mov     ecx, [esi+0Ch]
0x68D860: mov     edx, [esi+8]
0x68D863: push    ecx
0x68D864: mov     ecx, [esi+24h]
0x68D867: push    edx
0x68D868: push    ecx
0x68D869: mov     ecx, eax; this
0x68D86B: call    ??0ActiveEffect@@QAE@XZ; ActiveEffect::ActiveEffect(void)
0x68D870: mov     edi, eax
