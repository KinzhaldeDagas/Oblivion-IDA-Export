0x6A8373: mov     esi, ecx
0x6A8375: push    3Ch ; '<'; Size
0x6A8377: call    FormHeapAlloc
0x6A837C: add     esp, 4
0x6A837F: mov     [esp+arg_8], eax
0x6A8383: xor     edi, edi
0x6A8385: cmp     eax, edi
0x6A8387: mov     [esp+arg_14], edi
0x6A838B: jz      short loc_6A83A2
0x6A838D: mov     ecx, [esi+0Ch]
0x6A8390: mov     edx, [esi+8]
0x6A8393: push    ecx; int
0x6A8394: mov     ecx, [esi+24h]
0x6A8397: push    edx; int
0x6A8398: push    ecx; int
0x6A8399: mov     ecx, eax; this
0x6A839B: call    ValueModifierEffect_constr
0x6A83A0: mov     edi, eax
0x6A83A2: mov     edx, [esi]
0x6A83A4: mov     eax, [edx+2Ch]
0x6A83A7: push    edi
0x6A83A8: mov     ecx, esi
0x6A83AA: mov     [esp+4+arg_14], 0FFFFFFFFh
0x6A83B2: call    eax
0x6A83B4: mov     eax, edi
