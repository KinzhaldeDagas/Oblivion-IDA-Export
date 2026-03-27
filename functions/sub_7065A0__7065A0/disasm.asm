0x7065A0: push    0FFFFFFFFh
0x7065A2: push    offset SEH_8C8970
0x7065A7: mov     eax, large fs:0
0x7065AD: push    eax
0x7065AE: push    ecx
0x7065AF: push    esi
0x7065B0: push    edi
0x7065B1: mov     eax, ds:0B30AACh
0x7065B6: xor     eax, esp
0x7065B8: push    eax
0x7065B9: lea     eax, [esp+1Ch+var_C]
0x7065BD: mov     large fs:0, eax
0x7065C3: push    1Ch; Size
0x7065C5: call    FormHeapAlloc
0x7065CA: mov     esi, eax
0x7065CC: add     esp, 4
0x7065CF: mov     [esp+1Ch+var_10], esi
0x7065D3: test    esi, esi
0x7065D5: mov     [esp+1Ch+var_4], 0
0x7065DD: jz      short loc_7065F4
0x7065DF: mov     ecx, esi; this
0x7065E1: call    ??0NiObjectNET@@QAE@XZ; NiObjectNET::NiObjectNET(void)
0x7065E6: mov     dword ptr [esi], offset ??_7NiVertexColorProperty@@6B@; const NiVertexColorProperty::`vftable'
0x7065EC: mov     word ptr [esi+18h], 8
0x7065F2: jmp     short loc_7065F6
0x7065F4: xor     esi, esi
0x7065F6: mov     eax, ds:0B3F980h
0x7065FB: cmp     eax, esi
0x7065FD: mov     [esp+1Ch+var_4], 0FFFFFFFFh
0x706605: jz      short loc_70663D
0x706607: test    eax, eax
0x706609: jz      short loc_706629
0x70660B: mov     edi, eax
0x70660D: add     eax, 4
0x706610: push    eax; lpAddend
0x706611: call    dword ptr ds:0A2807Ch
0x706617: test    eax, eax
0x706619: jnz     short loc_706629
0x70661B: test    edi, edi
0x70661D: jz      short loc_706629
0x70661F: mov     eax, [edi]
0x706621: mov     edx, [eax]
0x706623: push    1
0x706625: mov     ecx, edi
0x706627: call    edx
0x706629: test    esi, esi
0x70662B: mov     ds:0B3F980h, esi
0x706631: jz      short loc_70663D
0x706633: add     esi, 4
0x706636: push    esi; lpAddend
0x706637: call    dword ptr ds:0A28078h
0x70663D: mov     ecx, dword ptr [esp+1Ch+var_C]
0x706641: mov     large fs:0, ecx
0x706648: pop     ecx
0x706649: pop     edi
0x70664A: pop     esi
0x70664B: add     esp, 10h
0x70664E: retn
