0x8FBB20: push    ebp
0x8FBB21: mov     ebp, esp
0x8FBB23: and     esp, 0FFFFFFF0h
0x8FBB26: sub     esp, 0A4h
0x8FBB2C: mov     ecx, large fs:2Ch
0x8FBB33: mov     edx, ds:0BA9DE4h
0x8FBB39: mov     eax, [ecx+edx*4]
0x8FBB3C: push    ebx
0x8FBB3D: push    esi
0x8FBB3E: mov     esi, [eax+1A4h]
0x8FBB44: push    edi
0x8FBB45: cmp     esi, [eax+1A8h]
0x8FBB4B: jnb     short loc_8FBB71
0x8FBB4D: mov     esi, eax
0x8FBB4F: mov     ecx, [esi+1A4h]
0x8FBB55: mov     dword ptr [ecx], offset aTtspheretri; "TtSphereTri"
0x8FBB5B: rdtsc
0x8FBB5D: mov     [esp+0B0h+var_98], eax
0x8FBB61: mov     eax, [esp+0B0h+var_98]
0x8FBB65: mov     [ecx+4], eax
0x8FBB68: add     ecx, 0Ch
0x8FBB6B: mov     [esi+1A4h], ecx
0x8FBB71: mov     esi, [ebp+arg_4]
0x8FBB74: mov     edx, [esi]
0x8FBB76: lea     ecx, [esp+0B0h+var_94]
0x8FBB7A: push    ecx
0x8FBB7B: add     edx, 10h
0x8FBB7E: push    edx
0x8FBB7F: call    sub_8D1DB0
0x8FBB84: mov     eax, [ebp+arg_0]
0x8FBB87: mov     ecx, [eax]
0x8FBB89: mov     edi, [eax+8]
0x8FBB8C: mov     ebx, [esi]
0x8FBB8E: mov     [esp+0B8h+var_60], eax
0x8FBB92: mov     eax, [esi+8]
0x8FBB95: mov     [esp+0B8h+var_5C], esi
0x8FBB99: movaps  xmm1, xmmword ptr [eax]
0x8FBB9C: movaps  xmm2, xmmword ptr [eax+10h]
0x8FBBA0: movaps  xmm3, xmmword ptr [eax+20h]
0x8FBBA4: movaps  xmm4, xmmword ptr [eax+30h]
0x8FBBA8: mov     [esp+0B8h+var_98], ecx
0x8FBBAC: lea     ecx, [ebx+10h]
0x8FBBAF: lea     eax, [esp+0B8h+var_30]
0x8FBBB6: add     esp, 8
0x8FBBB9: add     edi, 30h ; '0'
0x8FBBBC: sub     eax, ecx
0x8FBBBE: mov     edx, 3
0x8FBBC3: movaps  xmm0, xmmword ptr [ecx]
0x8FBBC6: movaps  xmm5, xmm0
0x8FBBC9: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FBBCD: movaps  xmm6, xmm3
0x8FBBD0: mulps   xmm6, xmm5
0x8FBBD3: movaps  xmm5, xmm0
0x8FBBD6: shufps  xmm5, xmm0, 55h ; 'U'
0x8FBBDA: movaps  xmm7, xmm2
0x8FBBDD: mulps   xmm7, xmm5
0x8FBBE0: movaps  xmm5, xmm0
0x8FBBE3: shufps  xmm5, xmm0, 0
0x8FBBE7: movaps  xmm0, xmm1
0x8FBBEA: mulps   xmm0, xmm5
0x8FBBED: addps   xmm6, xmm4
0x8FBBF0: addps   xmm0, xmm7
0x8FBBF3: addps   xmm0, xmm6
0x8FBBF6: movaps  xmmword ptr [eax+ecx], xmm0
0x8FBBFA: add     ecx, 10h
0x8FBBFD: dec     edx
0x8FBBFE: jnz     short loc_8FBBC3
0x8FBC00: lea     edx, [esp+0B0h+var_50]
0x8FBC04: push    edx
0x8FBC05: lea     eax, [esp+0B4h+var_94]
0x8FBC09: push    eax
0x8FBC0A: lea     ecx, [esp+0B8h+var_30]
0x8FBC11: push    ecx
0x8FBC12: push    edi
0x8FBC13: call    sub_8D20C0
0x8FBC18: mov     edx, [esp+0C0h+var_98]
0x8FBC1C: fld     dword ptr [edx+0Ch]
0x8FBC1F: mov     [esp+0C0h+var_84], eax
0x8FBC23: fadd    dword ptr [ebx+0Ch]
0x8FBC26: mov     eax, [ebp+arg_8]
0x8FBC29: add     esp, 10h
0x8FBC2C: fld     st
0x8FBC2E: fadd    dword ptr [eax+8]
0x8FBC31: fcomp   [esp+0B0h+var_40]
0x8FBC35: fnstsw  ax
0x8FBC37: test    ah, 41h
0x8FBC3A: jnz     short loc_8FBC87
0x8FBC3C: fld     dword ptr [ebx+0Ch]
0x8FBC3F: movaps  xmm1, [esp+0B0h+var_50]
0x8FBC44: fsub    [esp+0B0h+var_40]
0x8FBC48: mov     ecx, [ebp+arg_C]
0x8FBC4B: mov     edx, [ecx]
0x8FBC4D: lea     eax, [esp+0B0h+var_80]
0x8FBC51: fstp    [esp+0B0h+var_98]
0x8FBC55: movss   xmm0, [esp+0B0h+var_98]
0x8FBC5B: fld     [esp+0B0h+var_40]
0x8FBC5F: movaps  xmm2, xmm0
0x8FBC62: shufps  xmm2, xmm0, 0
0x8FBC66: fsub    st, st(1)
0x8FBC68: movaps  xmm0, xmmword ptr [edi]
0x8FBC6B: movaps  [esp+0B0h+var_70], xmm1
0x8FBC70: fstp    dword ptr [esp+0B0h+var_70+0Ch]
0x8FBC74: mulps   xmm2, xmm1
0x8FBC77: addps   xmm0, xmm2
0x8FBC7A: push    eax
0x8FBC7B: fstp    st
0x8FBC7D: movaps  [esp+0B4h+var_80], xmm0
0x8FBC82: call    dword ptr [edx+4]
0x8FBC85: jmp     short loc_8FBC89
0x8FBC87: fstp    st
0x8FBC89: mov     ecx, large fs:2Ch
0x8FBC90: mov     edx, ds:0BA9DE4h
0x8FBC96: mov     eax, [ecx+edx*4]
0x8FBC99: mov     esi, [eax+1A4h]
0x8FBC9F: cmp     esi, [eax+1A8h]
0x8FBCA5: jnb     short loc_8FBCCB
0x8FBCA7: mov     esi, eax
0x8FBCA9: mov     ecx, [esi+1A4h]
0x8FBCAF: mov     dword ptr [ecx], offset aEt; "Et"
0x8FBCB5: rdtsc
0x8FBCB7: mov     [esp+0B0h+var_98], eax
0x8FBCBB: mov     edx, [esp+0B0h+var_98]
0x8FBCBF: mov     [ecx+4], edx
0x8FBCC2: add     ecx, 0Ch
0x8FBCC5: mov     [esi+1A4h], ecx
0x8FBCCB: pop     edi
0x8FBCCC: pop     esi
0x8FBCCD: pop     ebx
0x8FBCCE: mov     esp, ebp
0x8FBCD0: pop     ebp
0x8FBCD1: retn
