0x68C740: push    0FFFFFFFFh
0x68C742: push    offset SEH_68C740
0x68C747: mov     eax, large fs:0
0x68C74D: push    eax
0x68C74E: sub     esp, 28h
0x68C751: push    ebx
0x68C752: push    ebp
0x68C753: push    esi
0x68C754: push    edi
0x68C755: mov     eax, ds:0B30AACh
0x68C75A: xor     eax, esp
0x68C75C: push    eax
0x68C75D: lea     eax, [esp+48h+var_C]
0x68C761: mov     large fs:0, eax
0x68C767: mov     ebp, ecx
0x68C769: mov     eax, [ebp+0]
0x68C76C: xor     edi, edi
0x68C76E: xor     esi, esi
0x68C770: cmp     eax, edi
0x68C772: jz      loc_68C98E
0x68C778: jmp     short loc_68C780
0x68C77A: align 10h
0x68C780: mov     ecx, eax
0x68C782: add     esi, 1
0x68C785: call    NiDX92DBufferData__GetSurfaceData
0x68C78A: cmp     eax, edi
0x68C78C: jnz     short loc_68C780
0x68C78E: cmp     esi, edi
0x68C790: mov     [esp+48h+var_24], esi
0x68C794: jz      loc_68C98E
0x68C79A: push    0DCh ; 'Ü'; Size
0x68C79F: call    FormHeapAlloc
0x68C7A4: add     esp, 4
0x68C7A7: mov     [esp+48h+var_20], eax
0x68C7AB: cmp     eax, edi
0x68C7AD: mov     [esp+48h+var_4], edi
0x68C7B1: jz      short loc_68C7C1
0x68C7B3: push    edi
0x68C7B4: mov     ecx, eax; this
0x68C7B6: call    ??0NiNode@@QAE@XZ; NiNode::NiNode(void)
0x68C7BB: mov     [esp+48h+var_28], eax
0x68C7BF: jmp     short loc_68C7C5
0x68C7C1: mov     [esp+48h+var_28], edi
0x68C7C5: xor     ecx, ecx
0x68C7C7: mov     eax, esi
0x68C7C9: mov     edx, 0Ch
0x68C7CE: mul     edx
0x68C7D0: seto    cl
0x68C7D3: mov     [esp+48h+var_4], 0FFFFFFFFh
0x68C7DB: neg     ecx
0x68C7DD: or      ecx, eax
0x68C7DF: push    ecx; Size
0x68C7E0: call    FormHeapAlloc
0x68C7E5: mov     ebx, eax
0x68C7E7: xor     ecx, ecx
0x68C7E9: mov     eax, esi
0x68C7EB: mov     edx, 10h
0x68C7F0: mul     edx
0x68C7F2: seto    cl
0x68C7F5: mov     [esp+4Ch+var_20], ebx
0x68C7F9: neg     ecx
0x68C7FB: or      ecx, eax
0x68C7FD: push    ecx; Size
0x68C7FE: call    FormHeapAlloc
0x68C803: mov     edi, eax
0x68C805: add     esp, 8
0x68C808: mov     [esp+48h+var_2C], edi
0x68C80C: test    edi, edi
0x68C80E: mov     [esp+48h+var_4], 1
0x68C816: jz      short loc_68C82C
0x68C818: push    offset sub_47EA50
0x68C81D: push    esi
0x68C81E: push    10h
0x68C820: push    edi
0x68C821: call    sub_401080
0x68C826: mov     [esp+48h+var_2C], edi
0x68C82A: jmp     short loc_68C834
0x68C82C: mov     [esp+48h+var_2C], 0
0x68C834: push    esi; Size
0x68C835: mov     [esp+4Ch+var_4], 0FFFFFFFFh
0x68C83D: call    FormHeapAlloc
0x68C842: mov     ebp, [ebp+0]
0x68C845: add     esp, 4
0x68C848: test    esi, esi
0x68C84A: mov     [esp+48h+var_30], eax
0x68C84E: mov     [esp+48h+var_34], 0
0x68C856: jbe     loc_68C91A
0x68C85C: mov     edi, [esp+48h+var_2C]
0x68C860: test    ebp, ebp
0x68C862: jz      loc_68C8FD
0x68C868: mov     ecx, ds:0B3C0A0h
0x68C86E: call    sub_700900
0x68C873: mov     ecx, ebp
0x68C875: mov     esi, eax
0x68C877: call    sub_6899C0
0x68C87C: mov     ecx, [eax]
0x68C87E: mov     [esi+54h], ecx
0x68C881: mov     edx, [eax+4]
0x68C884: mov     ecx, [esp+48h+var_28]
0x68C888: mov     [esi+58h], edx
0x68C88B: mov     eax, [eax+8]
0x68C88E: mov     [esi+5Ch], eax
0x68C891: mov     edx, [ecx]
0x68C893: mov     eax, [edx+84h]
0x68C899: push    0
0x68C89B: push    esi
0x68C89C: call    eax
0x68C89E: mov     ecx, ebp
0x68C8A0: call    sub_6899C0
0x68C8A5: fldz
0x68C8A7: mov     ecx, [eax]
0x68C8A9: fst     [esp+48h+var_1C]
0x68C8AD: fld1
0x68C8AF: mov     [ebx], ecx
0x68C8B1: mov     edx, [eax+4]
0x68C8B4: fst     [esp+48h+var_18]
0x68C8B8: mov     ecx, [esp+48h+var_1C]
0x68C8BC: fstp    [esp+48h+var_10]
0x68C8C0: mov     [ebx+4], edx
0x68C8C3: mov     eax, [eax+8]
0x68C8C6: mov     edx, [esp+48h+var_18]
0x68C8CA: mov     [ebx+8], eax
0x68C8CD: fstp    [esp+48h+var_14]
0x68C8D1: mov     eax, [esp+48h+var_14]
0x68C8D5: mov     [edi], ecx
0x68C8D7: mov     ecx, [esp+48h+var_10]
0x68C8DB: mov     [edi+4], edx
0x68C8DE: mov     edx, [esp+48h+var_34]
0x68C8E2: mov     [edi+8], eax
0x68C8E5: mov     eax, [esp+48h+var_30]
0x68C8E9: mov     [edi+0Ch], ecx
0x68C8EC: mov     ecx, ebp
0x68C8EE: mov     byte ptr [edx+eax], 1
0x68C8F2: call    NiDX92DBufferData__GetSurfaceData
0x68C8F7: mov     esi, [esp+48h+var_24]
0x68C8FB: mov     ebp, eax
0x68C8FD: mov     eax, [esp+48h+var_34]
0x68C901: add     eax, 1
0x68C904: add     ebx, 0Ch
0x68C907: add     edi, 10h
0x68C90A: cmp     eax, esi
0x68C90C: mov     [esp+48h+var_34], eax
0x68C910: jb      loc_68C860
0x68C916: mov     ebx, [esp+48h+var_20]
0x68C91A: mov     ecx, [esp+48h+var_30]
0x68C91E: push    0C0h ; 'À'; Size
0x68C923: mov     byte ptr [esi+ecx-1], 0
0x68C928: call    FormHeapAlloc
0x68C92D: add     esp, 4
0x68C930: mov     [esp+48h+var_20], eax
0x68C934: test    eax, eax
0x68C936: mov     [esp+48h+var_4], 2
0x68C93E: jz      short loc_68C95B
0x68C940: mov     edx, [esp+48h+var_30]
0x68C944: mov     ecx, [esp+48h+var_2C]
0x68C948: push    edx
0x68C949: push    0
0x68C94B: push    0
0x68C94D: push    0
0x68C94F: push    ecx
0x68C950: push    ebx
0x68C951: push    esi
0x68C952: mov     ecx, eax
0x68C954: call    sub_7177E0
0x68C959: jmp     short loc_68C95D
0x68C95B: xor     eax, eax
0x68C95D: mov     esi, [esp+48h+var_28]
0x68C961: mov     edx, [esi]
0x68C963: push    0
0x68C965: push    eax
0x68C966: mov     eax, [edx+84h]
0x68C96C: mov     ecx, esi
0x68C96E: mov     [esp+50h+var_4], 0FFFFFFFFh
0x68C976: call    eax
0x68C978: mov     eax, esi
0x68C97A: mov     ecx, [esp+48h+var_C]
0x68C97E: mov     large fs:0, ecx
0x68C985: pop     ecx
0x68C986: pop     edi
0x68C987: pop     esi
0x68C988: pop     ebp
0x68C989: pop     ebx
0x68C98A: add     esp, 34h
0x68C98D: retn
0x68C98E: mov     eax, edi
0x68C990: mov     ecx, [esp+48h+var_C]
0x68C994: mov     large fs:0, ecx
0x68C99B: pop     ecx
0x68C99C: pop     edi
0x68C99D: pop     esi
0x68C99E: pop     ebp
0x68C99F: pop     ebx
0x68C9A0: add     esp, 34h
0x68C9A3: retn
