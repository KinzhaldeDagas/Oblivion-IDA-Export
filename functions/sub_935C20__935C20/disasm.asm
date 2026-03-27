0x935C20: push    ebp
0x935C21: mov     ebp, esp
0x935C23: and     esp, 0FFFFFFF0h
0x935C26: sub     esp, 3Ch
0x935C29: mov     eax, [ebp+arg_0]
0x935C2C: movaps  xmm0, xmmword ptr [eax+10h]
0x935C30: mov     edx, [eax+20h]
0x935C33: shufps  xmm0, xmm0, 0FFh
0x935C37: movaps  xmm2, xmm0
0x935C3A: push    esi
0x935C3B: mov     esi, ecx
0x935C3D: movaps  xmm1, xmmword ptr [esi+10h]
0x935C41: mov     ecx, [eax+24h]
0x935C44: shufps  xmm2, xmm0, 0
0x935C48: movaps  xmm0, xmmword ptr [eax]
0x935C4B: mulps   xmm2, xmm1
0x935C4E: movaps  xmm1, xmmword ptr ds:0A9B570h
0x935C55: addps   xmm0, xmm2
0x935C58: movaps  [esp+40h+var_30], xmm0
0x935C5D: movaps  xmm0, xmmword ptr [eax+10h]
0x935C61: mov     [esp+40h+var_10], ecx
0x935C65: mov     ecx, [esi+20h]
0x935C68: mov     [esp+40h+var_C], edx
0x935C6C: xorps   xmm0, xmm1
0x935C6F: lea     edx, [esp+40h+var_30]
0x935C73: movaps  [esp+40h+var_20], xmm0
0x935C78: mov     eax, [ecx]
0x935C7A: push    edx
0x935C7B: call    dword ptr [eax+4]
0x935C7E: mov     eax, [esi+20h]
0x935C81: mov     ecx, [eax+4]
0x935C84: mov     [esi+4], ecx
0x935C87: pop     esi
0x935C88: mov     esp, ebp
0x935C8A: pop     ebp
0x935C8B: retn    4
