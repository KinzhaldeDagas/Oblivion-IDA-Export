0x8C5110: push    ebp
0x8C5111: mov     ebp, esp
0x8C5113: and     esp, 0FFFFFFF0h
0x8C5116: sub     esp, 8
0x8C5119: push    esi
0x8C511A: push    edi
0x8C511B: mov     edi, [ebp+arg_0]
0x8C511E: push    edi
0x8C511F: mov     esi, ecx
0x8C5121: call    sub_8CE4C0
0x8C5126: test    esi, esi
0x8C5128: jz      short loc_8C513F
0x8C512A: mov     ecx, [esi+8]
0x8C512D: test    ecx, ecx
0x8C512F: jz      short loc_8C513F
0x8C5131: push    edi
0x8C5132: call    sub_8C4950
0x8C5137: pop     edi
0x8C5138: pop     esi
0x8C5139: mov     esp, ebp
0x8C513B: pop     ebp
0x8C513C: retn    4
0x8C513F: fldz
0x8C5141: movss   xmm0, dword ptr ds:0A2F948h
0x8C5149: shufps  xmm0, xmm0, 0
0x8C514D: fstp    dword ptr [edi+8]
0x8C5150: movaps  xmmword ptr [edi+10h], xmm0
0x8C5154: pop     edi
0x8C5155: pop     esi
0x8C5156: mov     esp, ebp
0x8C5158: pop     ebp
0x8C5159: retn    4
