0x9149C0: push    ebp
0x9149C1: mov     ebp, esp
0x9149C3: and     esp, 0FFFFFFF0h
0x9149C6: sub     esp, 34h
0x9149C9: push    ebx
0x9149CA: push    esi
0x9149CB: mov     esi, large fs:2Ch
0x9149D2: push    edi
0x9149D3: mov     edi, ds:0BA9DE4h
0x9149D9: mov     eax, [esi+edi*4]
0x9149DC: mov     edx, [eax+1A4h]
0x9149E2: cmp     edx, [eax+1A8h]
0x9149E8: mov     [esp+40h+var_2C], ecx
0x9149EC: jnb     short loc_914A16
0x9149EE: mov     ecx, eax
0x9149F0: mov     ebx, [ecx+1A4h]
0x9149F6: mov     dword ptr [ebx], offset aTtrctriangle; "TtrcTriangle"
0x9149FC: rdtsc
0x9149FE: mov     [esp+40h+var_28], eax
0x914A02: mov     eax, [esp+40h+var_28]
0x914A06: mov     [ebx+4], eax
0x914A09: add     ebx, 0Ch
0x914A0C: mov     [ecx+1A4h], ebx
0x914A12: mov     ecx, [esp+40h+var_2C]
0x914A16: movaps  xmm2, xmmword ptr [ecx+10h]
0x914A1A: movaps  xmm1, xmmword ptr [ecx+30h]
0x914A1E: movaps  xmm4, xmmword ptr [ecx+20h]
0x914A22: mov     eax, [ebp+arg_4]
0x914A25: movaps  [esp+40h+var_20], xmm1
0x914A2A: subps   xmm1, xmm2
0x914A2D: movaps  xmm3, xmm1
0x914A30: shufps  xmm3, xmm1, 0C9h ; 'É'
0x914A34: movaps  xmm0, xmm4
0x914A37: subps   xmm0, xmm2
0x914A3A: movaps  xmm5, xmm0
0x914A3D: shufps  xmm5, xmm0, 0D2h ; 'Ò'
0x914A41: mulps   xmm5, xmm3
0x914A44: movaps  xmm3, xmm1
0x914A47: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x914A4B: movaps  xmm1, xmm0
0x914A4E: shufps  xmm1, xmm0, 0C9h ; 'É'
0x914A52: movaps  xmm0, xmm1
0x914A55: mulps   xmm0, xmm3
0x914A58: subps   xmm0, xmm5
0x914A5B: movaps  xmm1, xmm2
0x914A5E: mulps   xmm1, xmm0
0x914A61: movaps  xmm3, xmm1
0x914A64: shufps  xmm3, xmm1, 55h ; 'U'
0x914A68: addss   xmm3, xmm1
0x914A6C: movaps  xmm5, xmm1
0x914A6F: shufps  xmm5, xmm1, 0AAh ; 'ª'
0x914A73: addss   xmm5, xmm3
0x914A77: movaps  xmm3, xmmword ptr [eax]
0x914A7A: lea     ecx, [esp+40h+var_28]
0x914A7E: movss   dword ptr [ecx], xmm5
0x914A82: movaps  xmm1, xmm0
0x914A85: mulps   xmm1, xmm3
0x914A88: movaps  xmm5, xmm1
0x914A8B: shufps  xmm5, xmm1, 55h ; 'U'
0x914A8F: addss   xmm5, xmm1
0x914A93: movaps  xmm6, xmm1
0x914A96: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x914A9A: addss   xmm6, xmm5
0x914A9E: movaps  xmm5, xmmword ptr [eax+10h]
0x914AA2: lea     edx, [esp+40h+var_2C]
0x914AA6: movss   dword ptr [edx], xmm6
0x914AAA: fld     [esp+40h+var_2C]
0x914AAE: fsub    [esp+40h+var_28]
0x914AB2: movaps  xmm1, xmm0
0x914AB5: mulps   xmm1, xmm5
0x914AB8: movaps  xmm6, xmm1
0x914ABB: fstp    [esp+40h+var_30]
0x914ABF: shufps  xmm6, xmm1, 55h ; 'U'
0x914AC3: movaps  xmm7, xmm1
0x914AC6: lea     eax, [esp+40h+var_2C]
0x914ACA: addss   xmm6, xmm1
0x914ACE: shufps  xmm7, xmm1, 0AAh ; 'ª'
0x914AD2: addss   xmm7, xmm6
0x914AD6: movss   dword ptr [eax], xmm7
0x914ADA: fld     [esp+40h+var_2C]
0x914ADE: fsub    [esp+40h+var_28]
0x914AE2: fst     [esp+40h+var_2C]
0x914AE6: fmul    [esp+40h+var_30]
0x914AEA: fcomp   dword ptr ds:0A2FAA8h
0x914AF0: fnstsw  ax
0x914AF2: test    ah, 1
0x914AF5: jnz     short loc_914B4F
0x914AF7: fld     dword ptr ds:0A2FAA8h
0x914AFD: fld     [esp+40h+var_30]
0x914B01: fucompp
0x914B03: fnstsw  ax
0x914B05: test    ah, 44h
0x914B08: jp      short loc_914B1D
0x914B0A: fld     dword ptr ds:0A2FAA8h
0x914B10: fld     [esp+40h+var_2C]
0x914B14: fucompp
0x914B16: fnstsw  ax
0x914B18: test    ah, 44h
0x914B1B: jp      short loc_914B4F
0x914B1D: mov     eax, [esi+edi*4]
0x914B20: mov     ecx, [eax+1A4h]
0x914B26: cmp     ecx, [eax+1A8h]
0x914B2C: jnb     loc_914DE2
0x914B32: mov     esi, eax
0x914B34: mov     ecx, [esi+1A4h]
0x914B3A: mov     dword ptr [ecx], offset aEt; "Et"
0x914B40: rdtsc
0x914B42: mov     [esp+40h+var_28], eax
0x914B46: mov     edx, [esp+40h+var_28]
0x914B4A: jmp     loc_914DD6
0x914B4F: fld     [esp+40h+var_30]
0x914B53: mov     ecx, [ebp+arg_8]
0x914B56: fsub    [esp+40h+var_2C]
0x914B5A: fdivr   [esp+40h+var_30]
0x914B5E: fstp    [esp+40h+var_28]
0x914B62: fld     [esp+40h+var_28]
0x914B66: fcomp   dword ptr [ecx+14h]
0x914B69: fnstsw  ax
0x914B6B: test    ah, 5
0x914B6E: jp      loc_914DAD
0x914B74: mov     edx, [esp+40h+var_28]
0x914B78: movaps  xmm1, xmm0
0x914B7B: mulps   xmm1, xmm0
0x914B7E: movaps  xmm6, xmm1
0x914B81: shufps  xmm6, xmm1, 55h ; 'U'
0x914B85: addss   xmm6, xmm1
0x914B89: movaps  xmm7, xmm1
0x914B8C: shufps  xmm7, xmm1, 0AAh ; 'ª'
0x914B90: addss   xmm7, xmm6
0x914B94: mov     [esp+40h+var_24], edx
0x914B98: movss   xmm1, [esp+40h+var_24]
0x914B9E: shufps  xmm1, xmm1, 0
0x914BA2: movaps  xmm6, xmm1
0x914BA5: mulps   xmm6, xmm5
0x914BA8: movaps  xmm5, xmmword ptr ds:0A6DFE0h
0x914BAF: subps   xmm5, xmm1
0x914BB2: mulps   xmm5, xmm3
0x914BB5: addps   xmm5, xmm6
0x914BB8: subps   xmm2, xmm5
0x914BBB: movaps  xmm6, xmm2
0x914BBE: movaps  xmm1, xmm2
0x914BC1: shufps  xmm1, xmm2, 0C9h ; 'É'
0x914BC5: subps   xmm4, xmm5
0x914BC8: shufps  xmm6, xmm2, 0D2h ; 'Ò'
0x914BCC: movaps  xmm3, xmm4
0x914BCF: lea     eax, [esp+40h+var_2C]
0x914BD3: movss   dword ptr [eax], xmm7
0x914BD7: fld     [esp+40h+var_2C]
0x914BDB: fmul    dword ptr ds:0A906F4h
0x914BE1: shufps  xmm3, xmm4, 0C9h ; 'É'
0x914BE5: movaps  [esp+40h+var_10], xmm1
0x914BEA: shufps  xmm4, xmm4, 0D2h ; 'Ò'
0x914BEE: movaps  xmm2, xmm6
0x914BF1: fstp    [esp+40h+var_2C]
0x914BF5: mulps   xmm2, xmm3
0x914BF8: mulps   xmm1, xmm4
0x914BFB: subps   xmm1, xmm2
0x914BFE: mulps   xmm1, xmm0
0x914C01: movaps  xmm2, xmm1
0x914C04: shufps  xmm2, xmm1, 55h ; 'U'
0x914C08: movaps  xmm7, xmm1
0x914C0B: lea     eax, [esp+40h+var_24]
0x914C0F: addss   xmm2, xmm1
0x914C13: shufps  xmm7, xmm1, 0AAh ; 'ª'
0x914C17: addss   xmm7, xmm2
0x914C1B: movss   dword ptr [eax], xmm7
0x914C1F: fld     [esp+40h+var_24]
0x914C23: fcomp   [esp+40h+var_2C]
0x914C27: fnstsw  ax
0x914C29: test    ah, 1
0x914C2C: jnz     loc_914DAD
0x914C32: movaps  xmm1, [esp+40h+var_20]
0x914C37: subps   xmm1, xmm5
0x914C3A: movaps  xmm5, xmm1
0x914C3D: movaps  xmm2, xmm5
0x914C40: shufps  xmm2, xmm5, 0C9h ; 'É'
0x914C44: mulps   xmm4, xmm2
0x914C47: shufps  xmm5, xmm5, 0D2h ; 'Ò'
0x914C4B: mulps   xmm3, xmm5
0x914C4E: subps   xmm3, xmm4
0x914C51: movaps  xmm1, xmm3
0x914C54: mulps   xmm1, xmm0
0x914C57: movaps  xmm3, xmm1
0x914C5A: shufps  xmm3, xmm1, 55h ; 'U'
0x914C5E: movaps  xmm4, xmm1
0x914C61: addss   xmm3, xmm1
0x914C65: shufps  xmm4, xmm1, 0AAh ; 'ª'
0x914C69: lea     edx, [esp+40h+var_24]
0x914C6D: addss   xmm4, xmm3
0x914C71: movss   dword ptr [edx], xmm4
0x914C75: fld     [esp+40h+var_24]
0x914C79: fcomp   [esp+40h+var_2C]
0x914C7D: fnstsw  ax
0x914C7F: test    ah, 1
0x914C82: jnz     loc_914DAD
0x914C88: mulps   xmm5, [esp+40h+var_10]
0x914C8D: mulps   xmm2, xmm6
0x914C90: subps   xmm2, xmm5
0x914C93: movaps  xmm1, xmm2
0x914C96: mulps   xmm1, xmm0
0x914C99: movaps  xmm2, xmm1
0x914C9C: shufps  xmm2, xmm1, 55h ; 'U'
0x914CA0: movaps  xmm3, xmm1
0x914CA3: lea     eax, [esp+40h+var_24]
0x914CA7: addss   xmm2, xmm1
0x914CAB: shufps  xmm3, xmm1, 0AAh ; 'ª'
0x914CAF: addss   xmm3, xmm2
0x914CB3: movss   dword ptr [eax], xmm3
0x914CB7: fld     [esp+40h+var_24]
0x914CBB: fcomp   [esp+40h+var_2C]
0x914CBF: fnstsw  ax
0x914CC1: test    ah, 1
0x914CC4: jnz     loc_914DAD
0x914CCA: fld     [esp+40h+var_30]
0x914CCE: mov     edx, [esp+40h+var_28]
0x914CD2: fcomp   dword ptr ds:0A2FAA8h
0x914CD8: mov     [ecx+14h], edx
0x914CDB: fnstsw  ax
0x914CDD: test    ah, 41h
0x914CE0: jz      short loc_914CEC
0x914CE2: movaps  xmm1, xmmword ptr ds:0A965C0h
0x914CE9: xorps   xmm0, xmm1
0x914CEC: movaps  xmmword ptr [ecx], xmm0
0x914CEF: movaps  xmm1, xmmword ptr [ecx]
0x914CF2: mov     eax, [esi+edi*4]
0x914CF5: movaps  xmm0, xmm1
0x914CF8: mulps   xmm0, xmm1
0x914CFB: movaps  xmm2, xmm0
0x914CFE: shufps  xmm2, xmm0, 55h ; 'U'
0x914D02: addss   xmm2, xmm0
0x914D06: movaps  xmm3, xmm0
0x914D09: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x914D0D: movaps  xmm0, xmm3
0x914D10: addss   xmm0, xmm2
0x914D14: movaps  [esp+40h+var_20], xmm0
0x914D19: rsqrtss xmm2, xmm0
0x914D1D: movss   dword ptr [esp+40h+var_20], xmm2
0x914D23: movaps  xmm2, [esp+40h+var_20]
0x914D28: mulss   xmm0, xmm2
0x914D2C: mulss   xmm0, xmm2
0x914D30: mov     [esp+40h+var_24], 40400000h
0x914D38: movss   xmm3, [esp+40h+var_24]
0x914D3E: subss   xmm3, xmm0
0x914D42: mov     [esp+40h+var_24], 3F000000h
0x914D4A: movss   xmm0, [esp+40h+var_24]
0x914D50: mulss   xmm0, xmm2
0x914D54: mulss   xmm0, xmm3
0x914D58: movaps  xmm2, xmm0
0x914D5B: shufps  xmm2, xmm0, 0
0x914D5F: mulps   xmm2, xmm1
0x914D62: movaps  xmmword ptr [ecx], xmm2
0x914D65: mov     dword ptr [ecx+10h], 0FFFFFFFFh
0x914D6C: mov     ecx, [eax+1A4h]
0x914D72: cmp     ecx, [eax+1A8h]
0x914D78: jnb     short loc_914D9E
0x914D7A: mov     esi, eax
0x914D7C: mov     ecx, [esi+1A4h]
0x914D82: mov     dword ptr [ecx], offset aEt; "Et"
0x914D88: rdtsc
0x914D8A: mov     [esp+40h+var_24], eax
0x914D8E: mov     edx, [esp+40h+var_24]
0x914D92: mov     [ecx+4], edx
0x914D95: add     ecx, 0Ch
0x914D98: mov     [esi+1A4h], ecx
0x914D9E: mov     eax, [ebp+arg_0]
0x914DA1: mov     byte ptr [eax], 1
0x914DA4: pop     edi
0x914DA5: pop     esi
0x914DA6: pop     ebx
0x914DA7: mov     esp, ebp
0x914DA9: pop     ebp
0x914DAA: retn    0Ch
0x914DAD: mov     eax, [esi+edi*4]
0x914DB0: mov     ecx, [eax+1A4h]
0x914DB6: cmp     ecx, [eax+1A8h]
0x914DBC: jnb     short loc_914DE2
0x914DBE: mov     esi, eax
0x914DC0: mov     ecx, [esi+1A4h]
0x914DC6: mov     dword ptr [ecx], offset aEt; "Et"
0x914DCC: rdtsc
0x914DCE: mov     [esp+40h+var_24], eax
0x914DD2: mov     edx, [esp+40h+var_24]
0x914DD6: mov     [ecx+4], edx
0x914DD9: add     ecx, 0Ch
0x914DDC: mov     [esi+1A4h], ecx
0x914DE2: mov     eax, [ebp+arg_0]
0x914DE5: pop     edi
0x914DE6: pop     esi
0x914DE7: mov     byte ptr [eax], 0
0x914DEA: pop     ebx
0x914DEB: mov     esp, ebp
0x914DED: pop     ebp
0x914DEE: retn    0Ch
