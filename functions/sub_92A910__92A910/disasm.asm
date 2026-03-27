0x92A910: push    ebp
0x92A911: mov     ebp, esp
0x92A913: and     esp, 0FFFFFFF0h
0x92A916: sub     esp, 8
0x92A919: push    esi
0x92A91A: push    edi
0x92A91B: mov     edi, [ebp+arg_0]
0x92A91E: mov     esi, ecx
0x92A920: mov     ecx, [esi+10h]
0x92A923: mov     eax, [ecx]
0x92A925: push    edi
0x92A926: call    dword ptr [eax+2Ch]
0x92A929: movaps  xmm0, xmmword ptr [esi+20h]
0x92A92D: movaps  xmm1, xmmword ptr [edi]
0x92A930: addps   xmm1, xmm0
0x92A933: movaps  xmmword ptr [edi], xmm1
0x92A936: pop     edi
0x92A937: pop     esi
0x92A938: mov     esp, ebp
0x92A93A: pop     ebp
0x92A93B: retn    4
