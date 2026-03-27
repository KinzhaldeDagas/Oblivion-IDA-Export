0x900BB0: push    ebp
0x900BB1: mov     ebp, esp
0x900BB3: and     esp, 0FFFFFFF0h
0x900BB6: sub     esp, 3Ch
0x900BB9: push    esi
0x900BBA: mov     esi, ecx
0x900BBC: mov     ecx, [ebp+arg_4]
0x900BBF: fld     dword ptr [esi+20h]
0x900BC2: mov     edx, [ecx+14h]
0x900BC5: fchs
0x900BC7: mov     eax, [esi+40h]
0x900BCA: movaps  xmm1, xmmword ptr [esi+30h]
0x900BCE: mov     [esp+40h+var_10], eax
0x900BD2: mov     eax, [ebp+arg_0]
0x900BD5: mov     [esp+40h+var_34], edx
0x900BD9: movss   xmm0, [esp+40h+var_34]
0x900BDF: fstp    [esp+40h+var_34]
0x900BE3: movaps  xmm2, xmm0
0x900BE6: shufps  xmm2, xmm0, 0
0x900BEA: movaps  xmm0, xmmword ptr [ecx]
0x900BED: mov     ecx, [esi+44h]
0x900BF0: mulps   xmm2, xmm1
0x900BF3: movaps  xmm1, xmmword ptr [esi+10h]
0x900BF7: addps   xmm1, xmm2
0x900BFA: mov     [esp+40h+var_C], eax
0x900BFE: mov     eax, [eax+8]
0x900C01: movaps  [esp+40h+var_30], xmm1
0x900C06: movaps  xmm3, xmmword ptr [eax+20h]
0x900C0A: movaps  xmm4, xmmword ptr [eax+10h]
0x900C0E: movaps  xmm2, xmm0
0x900C11: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x900C15: mulps   xmm3, xmm2
0x900C18: movaps  xmm2, xmm0
0x900C1B: shufps  xmm2, xmm0, 55h ; 'U'
0x900C1F: mulps   xmm4, xmm2
0x900C22: movaps  xmm2, xmm0
0x900C25: shufps  xmm2, xmm0, 0
0x900C29: movaps  xmm0, xmmword ptr [eax]
0x900C2C: mulps   xmm0, xmm2
0x900C2F: movss   xmm2, [esp+40h+var_34]
0x900C35: addps   xmm0, xmm4
0x900C38: addps   xmm0, xmm3
0x900C3B: mov     eax, edx
0x900C3D: movaps  [esp+40h+var_20], xmm0
0x900C42: movaps  xmm3, xmm2
0x900C45: shufps  xmm3, xmm2, 0
0x900C49: mov     dword ptr [esp+40h+var_20+0Ch], eax
0x900C4D: mulps   xmm3, xmm0
0x900C50: addps   xmm1, xmm3
0x900C53: lea     eax, [esp+40h+var_30]
0x900C57: movaps  [esp+40h+var_30], xmm1
0x900C5C: mov     edx, [ecx]
0x900C5E: push    eax
0x900C5F: call    dword ptr [edx+4]
0x900C62: mov     ecx, [esi+44h]
0x900C65: mov     edx, [esi+4]
0x900C68: fld     dword ptr [ecx+4]
0x900C6B: mov     [esp+40h+var_34], edx
0x900C6F: fcom    [esp+40h+var_34]
0x900C73: fnstsw  ax
0x900C75: test    ah, 5
0x900C78: jp      short loc_900C84
0x900C7A: fstp    dword ptr [esi+4]
0x900C7D: pop     esi
0x900C7E: mov     esp, ebp
0x900C80: pop     ebp
0x900C81: retn    8
0x900C84: mov     eax, [esp+40h+var_34]
0x900C88: fstp    st
0x900C8A: mov     [esi+4], eax
0x900C8D: pop     esi
0x900C8E: mov     esp, ebp
0x900C90: pop     ebp
0x900C91: retn    8
