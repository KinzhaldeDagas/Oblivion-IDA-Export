0x7287C0: push    0FFFFFFFFh
0x7287C2: push    offset ??0bhkBallAndSocketConstraint@@QAE@XZ_SEH
0x7287C7: mov     eax, large fs:0
0x7287CD: push    eax
0x7287CE: push    ecx
0x7287CF: push    ebp
0x7287D0: push    esi
0x7287D1: push    edi
0x7287D2: mov     eax, ds:0B30AACh
0x7287D7: xor     eax, esp
0x7287D9: push    eax
0x7287DA: lea     eax, [esp+20h+var_C]
0x7287DE: mov     large fs:0, eax
0x7287E4: mov     esi, ecx
0x7287E6: cmp     dword ptr [esi+24h], 0
0x7287EA: jnz     short loc_728832
0x7287EC: movzx   ebp, word ptr [esi+8]
0x7287F0: xor     ecx, ecx
0x7287F2: mov     eax, ebp
0x7287F4: mov     edx, 10h
0x7287F9: mul     edx
0x7287FB: seto    cl
0x7287FE: neg     ecx
0x728800: or      ecx, eax
0x728802: push    ecx; Size
0x728803: call    FormHeapAlloc
0x728808: mov     edi, eax
0x72880A: add     esp, 4
0x72880D: mov     [esp+20h+var_10], edi
0x728811: test    edi, edi
0x728813: mov     [esp+20h+var_4], 0
0x72881B: jz      short loc_72882D
0x72881D: push    offset sub_47EA50
0x728822: push    ebp
0x728823: push    10h
0x728825: push    edi
0x728826: call    sub_401080
0x72882B: jmp     short loc_72882F
0x72882D: xor     edi, edi
0x72882F: mov     [esi+24h], edi
0x728832: cmp     [esp+20h+arg_0], 0
0x728837: jz      short loc_728876
0x728839: xor     ecx, ecx
0x72883B: cmp     [esi+8], cx
0x72883F: jbe     short loc_728876
0x728841: mov     edx, ds:0B25AD0h
0x728847: movzx   eax, cx
0x72884A: shl     eax, 4
0x72884D: add     eax, [esi+24h]
0x728850: add     ecx, 1
0x728853: mov     [eax], edx
0x728855: mov     edx, ds:0B25AD4h
0x72885B: mov     [eax+4], edx
0x72885E: mov     edx, ds:0B25AD8h
0x728864: mov     [eax+8], edx
0x728867: mov     edx, ds:0B25ADCh
0x72886D: mov     [eax+0Ch], edx
0x728870: cmp     cx, [esi+8]
0x728874: jb      short loc_728841
0x728876: mov     ecx, [esp+20h+var_C]
0x72887A: mov     large fs:0, ecx
0x728881: pop     ecx
0x728882: pop     edi
0x728883: pop     esi
0x728884: pop     ebp
0x728885: add     esp, 10h
0x728888: retn    4
