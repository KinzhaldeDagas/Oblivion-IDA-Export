0x713A30: push    0FFFFFFFFh
0x713A32: push    offset ??0NiStream@@QAE@XZ_SEH
0x713A37: mov     eax, large fs:0
0x713A3D: push    eax
0x713A3E: push    ecx
0x713A3F: push    ebx
0x713A40: push    ebp
0x713A41: push    esi
0x713A42: push    edi
0x713A43: mov     eax, ds:0B30AACh
0x713A48: xor     eax, esp
0x713A4A: push    eax
0x713A4B: lea     eax, [esp+24h+var_C]
0x713A4F: mov     large fs:0, eax
0x713A55: mov     esi, ecx
0x713A57: mov     [esp+24h+var_10], esi
0x713A5B: mov     dword ptr [esi], offset ??_7NiStream@@6B@; const NiStream::`vftable'
0x713A61: xor     ebx, ebx
0x713A63: mov     dword ptr [esi+4], 0Bh
0x713A6A: mov     [esi+8], bl
0x713A6D: mov     [esi+48h], bl
0x713A70: mov     [esi+88h], bl
0x713A76: mov     eax, 1
0x713A7B: mov     dword ptr [esi+0C8h], offset ??_7?$NiTArray@PAVNiObjectGroup@@@@6B@; const NiTArray<NiObjectGroup *>::`vftable'
0x713A85: mov     [esi+0D0h], bx
0x713A8C: mov     [esi+0D6h], ax
0x713A93: mov     [esi+0D2h], bx
0x713A9A: mov     [esi+0D4h], bx
0x713AA1: mov     [esi+0CCh], ebx
0x713AA7: mov     ecx, offset ??_7?$NiTLargeArray@V?$NiPointer@VNiObject@@@@@@6B@; const NiTLargeArray<NiPointer<NiObject>>::`vftable'
0x713AAC: mov     [esp+24h+var_4], ebx
0x713AB0: mov     [esi+1ECh], ecx
0x713AB6: mov     [esi+1F4h], ebx
0x713ABC: mov     dword ptr [esi+200h], 400h
0x713AC6: mov     [esi+1F8h], ebx
0x713ACC: mov     [esi+1FCh], ebx
0x713AD2: mov     [esi+1F0h], ebx
0x713AD8: mov     [esi+204h], ecx
0x713ADE: mov     [esi+20Ch], ebx
0x713AE4: mov     [esi+218h], eax
0x713AEA: mov     [esi+210h], ebx
0x713AF0: mov     [esi+214h], ebx
0x713AF6: mov     [esi+208h], ebx
0x713AFC: mov     [esi+224h], ebx
0x713B02: mov     [esi+228h], ebx
0x713B08: mov     [esi+22Ch], ebx
0x713B0E: mov     [esi+234h], ebx
0x713B14: mov     [esi+238h], ebx
0x713B1A: mov     [esi+23Ch], ebx
0x713B20: xor     ecx, ecx
0x713B22: mov     eax, 25h ; '%'
0x713B27: mov     [esi+248h], eax
0x713B2D: mov     edx, 4
0x713B32: mul     edx
0x713B34: seto    cl
0x713B37: mov     byte ptr [esp+24h+var_4], 6
0x713B3C: mov     dword ptr [esi+244h], offset ??_7?$NiTMapBase@V?$NiTPointerAllocator@I@@PBVNiObject@@I@@6B@; const NiTMapBase<NiTPointerAllocator<uint>,NiObject const *,uint>::`vftable'
0x713B46: mov     [esi+250h], ebx
0x713B4C: neg     ecx
0x713B4E: or      ecx, eax
0x713B50: push    ecx; Size
0x713B51: call    FormHeapAlloc
0x713B56: mov     ecx, [esi+248h]
0x713B5C: add     ecx, ecx
0x713B5E: add     ecx, ecx
0x713B60: push    ecx
0x713B61: push    ebx
0x713B62: push    eax
0x713B63: mov     [esi+24Ch], eax
0x713B69: call    __memset
0x713B6E: add     esp, 10h
0x713B71: mov     dword ptr [esi+244h], offset ??_7?$NiTPointerMap@PBVNiObject@@I@@6B@; const NiTPointerMap<NiObject const *,uint>::`vftable'
0x713B7B: mov     [esi+254h], ebx
0x713B81: mov     [esi+274h], ebx
0x713B87: mov     [esi+278h], ebx
0x713B8D: mov     [esi+380h], ebx
0x713B93: mov     [esi+384h], bl
0x713B99: mov     [esi+21Ch], ebx
0x713B9F: mov     [esi+220h], ebx
0x713BA5: mov     edx, ds:0B26DF4h
0x713BAB: mov     [esi+0D8h], edx
0x713BB1: mov     eax, ds:0B26DF8h
0x713BB6: mov     [esi+0DCh], eax
0x713BBC: mov     byte ptr [esi+1E4h], 1
0x713BC3: mov     byte ptr [esi+1E5h], 1
0x713BCA: mov     [esi+0E0h], bl
0x713BD0: mov     eax, ds:0B3FAC8h
0x713BD5: mov     edi, [esi+254h]
0x713BDB: mov     byte ptr [esp+24h+var_4], 8
0x713BE0: mov     ebp, eax
0x713BE2: cmp     edi, eax
0x713BE4: jz      short loc_713C1A
0x713BE6: cmp     edi, ebx
0x713BE8: jz      short loc_713C06
0x713BEA: lea     ecx, [edi+4]
0x713BED: push    ecx; lpAddend
0x713BEE: call    dword ptr ds:0A2807Ch
0x713BF4: test    eax, eax
0x713BF6: jnz     short loc_713C06
0x713BF8: cmp     edi, ebx
0x713BFA: jz      short loc_713C06
0x713BFC: mov     edx, [edi]
0x713BFE: mov     eax, [edx]
0x713C00: push    1
0x713C02: mov     ecx, edi
0x713C04: call    eax
0x713C06: cmp     ebp, ebx
0x713C08: mov     [esi+254h], ebp
0x713C0E: jz      short loc_713C1A
0x713C10: add     ebp, 4
0x713C13: push    ebp; lpAddend
0x713C14: call    dword ptr ds:0A28078h
0x713C1A: mov     [esi+230h], ebx
0x713C20: mov     [esi+240h], ebx
0x713C26: call    sub_711EF0
0x713C2B: mov     [esi+1E8h], eax
0x713C31: mov     [esi+260h], ebx
0x713C37: mov     [esi+380h], ebx
0x713C3D: mov     [esi+384h], bl
0x713C43: mov     eax, esi
0x713C45: mov     ecx, dword ptr [esp+24h+var_C]
0x713C49: mov     large fs:0, ecx
0x713C50: pop     ecx
0x713C51: pop     edi
0x713C52: pop     esi
0x713C53: pop     ebp
0x713C54: pop     ebx
0x713C55: add     esp, 10h
0x713C58: retn
