0x6B9520: push    0FFFFFFFFh
0x6B9522: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x6B9527: mov     eax, large fs:0
0x6B952D: push    eax
0x6B952E: push    ecx
0x6B952F: push    ebx
0x6B9530: push    esi
0x6B9531: push    edi
0x6B9532: mov     eax, ds:0B30AACh
0x6B9537: xor     eax, esp
0x6B9539: push    eax
0x6B953A: lea     eax, [esp+20h+var_C]
0x6B953E: mov     large fs:0, eax
0x6B9544: mov     esi, ecx
0x6B9546: cmp     byte ptr ds:0B23C60h, 0
0x6B954D: jz      short loc_6B95C3
0x6B954F: push    28h ; '('; Size
0x6B9551: call    FormHeapAlloc
0x6B9556: add     esp, 4
0x6B9559: mov     [esp+20h+var_10], eax
0x6B955D: test    eax, eax
0x6B955F: mov     [esp+20h+var_4], 0
0x6B9567: jz      short loc_6B9579
0x6B9569: push    0
0x6B956B: push    offset aRoot; "Root"
0x6B9570: mov     ecx, eax
0x6B9572: call    sub_6B9BD0
0x6B9577: jmp     short loc_6B957B
0x6B9579: xor     eax, eax
0x6B957B: lea     edi, [esi+4]
0x6B957E: push    eax; a2
0x6B957F: mov     ecx, edi; this
0x6B9581: mov     [esp+24h+var_4], 0FFFFFFFFh
0x6B9589: call    NiSmartPointer_Set??
0x6B958E: add     esi, 8
0x6B9591: mov     ebx, 3Ch ; '<'
0x6B9596: mov     eax, [esi]
0x6B9598: test    eax, eax
0x6B959A: jz      short loc_6B95A4
0x6B959C: mov     ecx, [edi]
0x6B959E: push    eax
0x6B959F: call    sub_6B9D10
0x6B95A4: add     esi, 4
0x6B95A7: sub     ebx, 1
0x6B95AA: jnz     short loc_6B9596
0x6B95AC: mov     ecx, [edi]
0x6B95AE: push    3Ch ; '<'
0x6B95B0: call    sub_6B9610
0x6B95B5: mov     ecx, [edi]
0x6B95B7: call    ??0?$NiTPointerListBase@V?$NiTPointerAllocator@I@@V?$NiPointer@VAverageEntry@@@@@@QAE@XZ; NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<AverageEntry>>::NiTPointerListBase<NiTPointerAllocator<uint>,NiPointer<AverageEntry>>(void)
0x6B95BC: mov     ecx, [edi]
0x6B95BE: call    sub_6B9E10
0x6B95C3: mov     ecx, [esp+20h+var_C]
0x6B95C7: mov     large fs:0, ecx
0x6B95CE: pop     ecx
0x6B95CF: pop     edi
0x6B95D0: pop     esi
0x6B95D1: pop     ebx
0x6B95D2: add     esp, 10h
0x6B95D5: retn
