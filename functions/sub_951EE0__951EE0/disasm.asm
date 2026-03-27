0x951EE0: push    ebp
0x951EE1: mov     ebp, esp
0x951EE3: and     esp, 0FFFFFFF0h
0x951EE6: sub     esp, 6Ch
0x951EE9: push    esi
0x951EEA: mov     esi, ecx
0x951EEC: movaps  xmm0, xmmword ptr [esi+30h]
0x951EF0: mulps   xmm0, xmm0
0x951EF3: movaps  xmm1, xmm0
0x951EF6: shufps  xmm1, xmm0, 55h ; 'U'
0x951EFA: addss   xmm1, xmm0
0x951EFE: movaps  xmm2, xmm0
0x951F01: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x951F05: movaps  xmm0, xmmword ptr ds:0A965C0h
0x951F0C: addss   xmm2, xmm1
0x951F10: movaps  xmm1, xmmword ptr [esi+30h]
0x951F14: lea     eax, [esp+70h+var_64]
0x951F18: movss   dword ptr [eax], xmm2
0x951F1C: fld     [esp+70h+var_64]
0x951F20: fcomp   dword ptr [esi+50h]
0x951F23: xorps   xmm1, xmm0
0x951F26: movaps  [esp+70h+var_60], xmm1
0x951F2B: fnstsw  ax
0x951F2D: test    ah, 41h
0x951F30: jp      short loc_951F3E
0x951F32: movaps  xmm0, xmmword ptr ds:0B2F0A0h
0x951F39: movaps  [esp+70h+var_60], xmm0
0x951F3E: lea     ecx, [esp+70h+var_40]
0x951F42: push    ecx
0x951F43: lea     edx, [esp+74h+var_60]
0x951F47: push    edx
0x951F48: mov     ecx, esi
0x951F4A: call    sub_951D00
0x951F4F: mov     eax, [esi+6Ch]
0x951F52: mov     ecx, [eax]
0x951F54: mov     edx, [esi+68h]
0x951F57: movaps  xmm0, [esp+70h+var_40]
0x951F5C: shl     ecx, 4
0x951F5F: movaps  xmmword ptr [ecx+edx], xmm0
0x951F63: movaps  xmm0, [esp+70h+var_30]
0x951F68: add     ecx, edx
0x951F6A: mov     edx, [esi+6Ch]
0x951F6D: mov     eax, [edx]
0x951F6F: mov     edx, [esi+60h]
0x951F72: shl     eax, 4
0x951F75: movaps  xmmword ptr [eax+edx], xmm0
0x951F79: mov     ecx, [esi+6Ch]
0x951F7C: movaps  xmm0, [esp+70h+var_20]
0x951F81: add     eax, edx
0x951F83: mov     edx, [ecx]
0x951F85: mov     eax, [esi+64h]
0x951F88: shl     edx, 4
0x951F8B: add     edx, eax
0x951F8D: movaps  xmmword ptr [edx], xmm0
0x951F90: mov     eax, [esi+6Ch]
0x951F93: inc     dword ptr [eax]
0x951F95: mov     ecx, [esi+68h]
0x951F98: movaps  xmm0, xmmword ptr [ecx]
0x951F9B: mulps   xmm0, xmm0
0x951F9E: movaps  xmm1, xmm0
0x951FA1: shufps  xmm1, xmm0, 55h ; 'U'
0x951FA5: movaps  xmm2, xmm0
0x951FA8: lea     eax, [esp+70h+var_64]
0x951FAC: addss   xmm1, xmm0
0x951FB0: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x951FB4: addss   xmm2, xmm1
0x951FB8: movss   dword ptr [eax], xmm2
0x951FBC: fld     [esp+70h+var_64]
0x951FC0: fcomp   dword ptr [esi+50h]
0x951FC3: fnstsw  ax
0x951FC5: test    ah, 41h
0x951FC8: jp      short loc_952034
0x951FCA: movaps  xmm0, xmmword ptr [ecx]
0x951FCD: mov     eax, [ebp+arg_4]
0x951FD0: mulps   xmm0, xmm0
0x951FD3: movaps  xmm1, xmm0
0x951FD6: shufps  xmm1, xmm0, 55h ; 'U'
0x951FDA: movaps  xmm2, xmm0
0x951FDD: addss   xmm1, xmm0
0x951FE1: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x951FE5: movaps  xmm0, xmm2
0x951FE8: addss   xmm0, xmm1
0x951FEC: movaps  [esp+70h+var_50], xmm0
0x951FF1: sqrtss  xmm0, xmm0
0x951FF5: movss   dword ptr [esp+70h+var_50], xmm0
0x951FFB: movaps  xmm0, [esp+70h+var_50]
0x952000: lea     ecx, [esp+70h+var_64]
0x952004: movss   dword ptr [ecx], xmm0
0x952008: fld     [esp+70h+var_64]
0x95200C: movaps  xmm0, [esp+70h+var_60]
0x952011: fstp    dword ptr [eax+20h]
0x952014: movaps  xmmword ptr [eax], xmm0
0x952017: movaps  xmm0, [esp+70h+var_30]
0x95201C: movaps  xmmword ptr [eax+10h], xmm0
0x952020: mov     dword ptr [eax+24h], 3F000000h
0x952027: mov     eax, [ebp+arg_0]
0x95202A: mov     byte ptr [eax], 1
0x95202D: pop     esi
0x95202E: mov     esp, ebp
0x952030: pop     ebp
0x952031: retn    8
0x952034: mov     eax, [ebp+arg_0]
0x952037: mov     byte ptr [eax], 0
0x95203A: pop     esi
0x95203B: mov     esp, ebp
0x95203D: pop     ebp
0x95203E: retn    8
