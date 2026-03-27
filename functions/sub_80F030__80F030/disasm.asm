0x80F030: push    esi
0x80F031: push    edi
0x80F032: mov     edi, [esp+8+arg_0]
0x80F036: push    4
0x80F038: mov     ecx, edi
0x80F03A: call    NiNode_GetNiPropertyByID
0x80F03F: mov     esi, eax
0x80F041: test    esi, esi
0x80F043: jz      short loc_80F058
0x80F045: mov     eax, [esi]
0x80F047: mov     edx, [eax+54h]
0x80F04A: mov     ecx, esi
0x80F04C: call    edx
0x80F04E: xor     ecx, ecx
0x80F050: cmp     eax, 7
0x80F053: setz    cl
0x80F056: mov     eax, ecx
0x80F058: neg     eax
0x80F05A: sbb     eax, eax
0x80F05C: and     eax, esi
0x80F05E: mov     edx, [eax]
0x80F060: mov     ecx, eax
0x80F062: mov     eax, [edx+58h]
0x80F065: push    edi
0x80F066: call    eax
0x80F068: pop     edi
0x80F069: mov     al, 1
0x80F06B: pop     esi
0x80F06C: retn    4
