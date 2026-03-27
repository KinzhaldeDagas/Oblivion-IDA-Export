0x8914C0: push    ebp
0x8914C1: mov     ebp, esp
0x8914C3: and     esp, 0FFFFFFF0h
0x8914C6: sub     esp, 68h
0x8914C9: mov     eax, ds:0B30AACh
0x8914CE: xor     eax, esp
0x8914D0: mov     [esp+68h+var_4], eax
0x8914D4: push    esi
0x8914D5: mov     esi, ecx
0x8914D7: mov     eax, [esi+364h]
0x8914DD: mov     eax, [eax+8]
0x8914E0: movaps  xmm0, xmmword ptr [eax+70h]
0x8914E4: add     eax, 70h ; 'p'
0x8914E7: movaps  [esp+6Ch+var_50], xmm0
0x8914EC: movaps  xmm0, xmmword ptr [eax+10h]
0x8914F0: push    edi
0x8914F1: mov     edi, [ebp+arg_0]
0x8914F4: movaps  [esp+70h+var_40], xmm0
0x8914F9: movaps  xmm0, xmmword ptr [eax+20h]
0x8914FD: lea     ecx, [esi+340h]
0x891503: push    ecx
0x891504: lea     edx, [esp+74h+var_50]
0x891508: movaps  [esp+74h+var_30], xmm0
0x89150D: movaps  xmm0, xmmword ptr [eax+30h]
0x891511: push    edx
0x891512: lea     ecx, [esp+78h+var_60]
0x891516: movaps  [esp+78h+var_20], xmm0
0x89151B: call    sub_88FE00
0x891520: mov     ecx, [esi+8]
0x891523: test    ecx, ecx
0x891525: jz      short loc_89152E
0x891527: call    sub_8AC070
0x89152C: jmp     short loc_891533
0x89152E: mov     eax, offset stru_BA7A40
0x891533: movaps  xmm0, xmmword ptr [eax]
0x891536: movaps  xmm1, [esp+70h+var_60]
0x89153B: mov     ecx, [esp+70h+var_4]
0x89153F: subps   xmm0, xmm1
0x891542: movaps  xmmword ptr [edi], xmm0
0x891545: pop     edi
0x891546: pop     esi
0x891547: xor     ecx, esp
0x891549: call    @__security_check_cookie@4; __security_check_cookie(x)
0x89154E: mov     esp, ebp
0x891550: pop     ebp
0x891551: retn    4
