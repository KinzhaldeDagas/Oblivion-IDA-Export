0x6CD0F0: push    ecx
0x6CD0F1: mov     al, [ecx+0Ch]
0x6CD0F4: test    al, 4
0x6CD0F6: jz      loc_6CD3C7
0x6CD0FC: and     al, 0FBh
0x6CD0FE: mov     [ecx+0Ch], al
0x6CD101: mov     al, [ecx+0Eh]
0x6CD104: cmp     al, 1
0x6CD106: jnz     short loc_6CD11A
0x6CD108: movzx   eax, byte ptr [ecx+0Fh]
0x6CD10C: fld1
0x6CD10E: mov     ecx, [ecx+14h]
0x6CD111: lea     eax, [eax+eax*2]
0x6CD114: fstp    dword ptr [ecx+eax*8+8]
0x6CD118: pop     ecx
0x6CD119: retn
0x6CD11A: cmp     al, 2
0x6CD11C: jnz     short loc_6CD126
0x6CD11E: add     esp, 4
0x6CD121: jmp     sub_6CC900
0x6CD126: fld     dword ptr [ecx+24h]
0x6CD129: push    ebx
0x6CD12A: fld     dword ptr ds:0A7DEB4h
0x6CD130: push    esi
0x6CD131: fchs
0x6CD133: push    edi
0x6CD134: fucompp
0x6CD136: xor     edi, edi
0x6CD138: fnstsw  ax
0x6CD13A: fldz
0x6CD13C: test    ah, 44h
0x6CD13F: jp      loc_6CD1C6
0x6CD145: xor     bl, bl
0x6CD147: fst     dword ptr [ecx+24h]
0x6CD14A: cmp     [ecx+0Dh], bl
0x6CD14D: fst     dword ptr [ecx+28h]
0x6CD150: fst     dword ptr [ecx+2Ch]
0x6CD153: jbe     short loc_6CD1C6
0x6CD155: mov     esi, [ecx+14h]
0x6CD158: movzx   eax, bl
0x6CD15B: lea     edx, [eax+eax*2]
0x6CD15E: cmp     dword ptr [esi+edx*8], 0
0x6CD162: lea     edx, [esi+edx*8]
0x6CD165: jz      short loc_6CD1AC
0x6CD167: fld     dword ptr [edx+4]
0x6CD16A: mov     al, [edx+0Ch]
0x6CD16D: cmp     al, [ecx+10h]
0x6CD170: fmul    dword ptr [edx+10h]
0x6CD173: fstp    [esp+10h+var_4]
0x6CD177: jnz     short loc_6CD19D
0x6CD179: fld     dword ptr [ecx+24h]
0x6CD17C: fadd    [esp+10h+var_4]
0x6CD180: fstp    dword ptr [ecx+24h]
0x6CD183: fld     dword ptr [edx+10h]
0x6CD186: fld     dword ptr [ecx+2Ch]
0x6CD189: fcompp
0x6CD18B: fnstsw  ax
0x6CD18D: test    ah, 5
0x6CD190: jp      short loc_6CD198
0x6CD192: fld     dword ptr [edx+10h]
0x6CD195: fstp    dword ptr [ecx+2Ch]
0x6CD198: add     edi, 1
0x6CD19B: jmp     short loc_6CD1AC
0x6CD19D: cmp     al, [ecx+11h]
0x6CD1A0: jnz     short loc_6CD1AC
0x6CD1A2: fld     dword ptr [ecx+28h]
0x6CD1A5: fadd    [esp+10h+var_4]
0x6CD1A9: fstp    dword ptr [ecx+28h]
0x6CD1AC: add     bl, 1
0x6CD1AF: cmp     bl, [ecx+0Dh]
0x6CD1B2: jb      short loc_6CD158
0x6CD1B4: cmp     edi, 1
0x6CD1B7: jle     short loc_6CD1C6
0x6CD1B9: fcom    dword ptr [ecx+24h]
0x6CD1BC: fnstsw  ax
0x6CD1BE: test    ah, 44h
0x6CD1C1: jnp     short loc_6CD1C6
0x6CD1C3: fst     dword ptr [ecx+28h]
0x6CD1C6: fld     dword ptr [ecx+2Ch]
0x6CD1C9: fld1
0x6CD1CB: fld     st
0x6CD1CD: fsubrp  st(2), st
0x6CD1CF: fxch    st(1)
0x6CD1D1: fstp    [esp+10h+var_4]
0x6CD1D5: fld     dword ptr [ecx+24h]
0x6CD1D8: fmul    dword ptr [ecx+2Ch]
0x6CD1DB: fld     dword ptr [ecx+28h]
0x6CD1DE: fld     [esp+10h+var_4]
0x6CD1E2: fld     st
0x6CD1E4: fmulp   st(2), st
0x6CD1E6: fxch    st(2)
0x6CD1E8: faddp   st(1), st
0x6CD1EA: fstp    [esp+10h+var_4]
0x6CD1EE: fld     [esp+10h+var_4]
0x6CD1F2: fcom    st(3)
0x6CD1F4: fnstsw  ax
0x6CD1F6: fldz
0x6CD1F8: test    ah, 41h
0x6CD1FB: jnz     short loc_6CD203
0x6CD1FD: fld     st(3)
0x6CD1FF: fdivrp  st(2), st
0x6CD201: jmp     short loc_6CD209
0x6CD203: fstp    st(1)
0x6CD205: fld     st
0x6CD207: fxch    st(1)
0x6CD209: xor     bl, bl
0x6CD20B: fxch    st(1)
0x6CD20D: cmp     [ecx+0Dh], bl
0x6CD210: fstp    [esp+10h+var_4]
0x6CD214: jbe     short loc_6CD275
0x6CD216: fld     [esp+10h+var_4]
0x6CD21A: mov     edx, [ecx+14h]
0x6CD21D: movzx   eax, bl
0x6CD220: lea     eax, [eax+eax*2]
0x6CD223: cmp     dword ptr [edx+eax*8], 0
0x6CD227: lea     edx, [edx+eax*8]
0x6CD22A: jz      short loc_6CD26B
0x6CD22C: mov     al, [edx+0Ch]
0x6CD22F: cmp     al, [ecx+10h]
0x6CD232: jnz     short loc_6CD244
0x6CD234: fld     dword ptr [edx+4]
0x6CD237: fmul    dword ptr [ecx+2Ch]
0x6CD23A: fmul    dword ptr [edx+10h]
0x6CD23D: fmul    st, st(1)
0x6CD23F: fstp    dword ptr [edx+8]
0x6CD242: jmp     short loc_6CD26B
0x6CD244: cmp     al, [ecx+11h]
0x6CD247: jnz     short loc_6CD264
0x6CD249: fld     st(4)
0x6CD24B: fcomp   dword ptr [ecx+28h]
0x6CD24E: fnstsw  ax
0x6CD250: test    ah, 44h
0x6CD253: jnp     short loc_6CD264
0x6CD255: fld     dword ptr [edx+4]
0x6CD258: fmul    st, st(3)
0x6CD25A: fmul    dword ptr [edx+10h]
0x6CD25D: fmul    st, st(1)
0x6CD25F: fstp    dword ptr [edx+8]
0x6CD262: jmp     short loc_6CD26B
0x6CD264: fxch    st(4)
0x6CD266: fst     dword ptr [edx+8]
0x6CD269: fxch    st(4)
0x6CD26B: add     bl, 1
0x6CD26E: cmp     bl, [ecx+0Dh]
0x6CD271: jb      short loc_6CD21A
0x6CD273: fstp    st
0x6CD275: fstp    st(1)
0x6CD277: fxch    st(2)
0x6CD279: fcom    dword ptr [ecx+1Ch]
0x6CD27C: fnstsw  ax
0x6CD27E: fld1
0x6CD280: test    ah, 5
0x6CD283: jp      loc_6CD36C
0x6CD289: xor     bl, bl
0x6CD28B: fxch    st(1)
0x6CD28D: cmp     [ecx+0Dh], bl
0x6CD290: fst     [esp+10h+var_4]
0x6CD294: jbe     short loc_6CD2FF
0x6CD296: mov     edx, [ecx+14h]
0x6CD299: movzx   eax, bl
0x6CD29C: lea     eax, [eax+eax*2]
0x6CD29F: cmp     dword ptr [edx+eax*8], 0
0x6CD2A3: lea     edx, [edx+eax*8]
0x6CD2A6: jz      short loc_6CD2CF
0x6CD2A8: fcom    dword ptr [edx+8]
0x6CD2AB: fnstsw  ax
0x6CD2AD: test    ah, 44h
0x6CD2B0: jnp     short loc_6CD2CF
0x6CD2B2: fld     dword ptr [edx+8]
0x6CD2B5: fld     dword ptr [ecx+1Ch]
0x6CD2B8: fcompp
0x6CD2BA: fnstsw  ax
0x6CD2BC: test    ah, 41h
0x6CD2BF: jnz     short loc_6CD2C4
0x6CD2C1: fst     dword ptr [edx+8]
0x6CD2C4: fld     dword ptr [edx+8]
0x6CD2C7: fadd    [esp+10h+var_4]
0x6CD2CB: fstp    [esp+10h+var_4]
0x6CD2CF: add     bl, 1
0x6CD2D2: cmp     bl, [ecx+0Dh]
0x6CD2D5: jb      short loc_6CD296
0x6CD2D7: fld     st(1)
0x6CD2D9: fld     [esp+10h+var_4]
0x6CD2DD: fucom   st(1)
0x6CD2DF: fnstsw  ax
0x6CD2E1: fstp    st(1)
0x6CD2E3: test    ah, 44h
0x6CD2E6: jnp     loc_6CD372
0x6CD2EC: fcom    st(1)
0x6CD2EE: fnstsw  ax
0x6CD2F0: test    ah, 41h
0x6CD2F3: jnz     short loc_6CD2FD
0x6CD2F5: fstp    st(4)
0x6CD2F7: fxch    st(2)
0x6CD2F9: fdivrp  st(3), st
0x6CD2FB: jmp     short loc_6CD301
0x6CD2FD: fstp    st
0x6CD2FF: fstp    st(2)
0x6CD301: xor     dl, dl
0x6CD303: fxch    st(2)
0x6CD305: cmp     [ecx+0Dh], dl
0x6CD308: fstp    [esp+10h+var_4]
0x6CD30C: jbe     short loc_6CD33C
0x6CD30E: fld     [esp+10h+var_4]
0x6CD312: mov     esi, [ecx+14h]
0x6CD315: fld     st(1)
0x6CD317: movzx   eax, dl
0x6CD31A: lea     eax, [eax+eax*2]
0x6CD31D: lea     esi, [esi+eax*8]
0x6CD320: fcomp   dword ptr [esi+8]
0x6CD323: fnstsw  ax
0x6CD325: test    ah, 44h
0x6CD328: jnp     short loc_6CD332
0x6CD32A: fld     st
0x6CD32C: fmul    dword ptr [esi+8]
0x6CD32F: fstp    dword ptr [esi+8]
0x6CD332: add     dl, 1
0x6CD335: cmp     dl, [ecx+0Dh]
0x6CD338: jb      short loc_6CD312
0x6CD33A: fstp    st
0x6CD33C: fxch    st(1)
0x6CD33E: test    byte ptr [ecx+0Ch], 2
0x6CD342: jz      short loc_6CD3C0
0x6CD344: fld     dword ptr ds:0A30634h
0x6CD34A: xor     dl, dl
0x6CD34C: or      bl, 0FFh
0x6CD34F: fstp    [esp+10h+var_4]
0x6CD353: cmp     [ecx+0Dh], dl
0x6CD356: ja      short loc_6CD37C
0x6CD358: movzx   eax, bl
0x6CD35B: fstp    st(1)
0x6CD35D: pop     edi
0x6CD35E: lea     edx, [eax+eax*2]
0x6CD361: mov     eax, [ecx+14h]
0x6CD364: pop     esi
0x6CD365: pop     ebx
0x6CD366: fstp    dword ptr [eax+edx*8+8]
0x6CD36A: pop     ecx
0x6CD36B: retn
0x6CD36C: fstp    st(2)
0x6CD36E: fstp    st(2)
0x6CD370: jmp     short loc_6CD33E
0x6CD372: fstp    st
0x6CD374: fstp    st(2)
0x6CD376: fstp    st(2)
0x6CD378: jmp     short loc_6CD33C
0x6CD37A: fxch    st(1)
0x6CD37C: mov     esi, [ecx+14h]
0x6CD37F: movzx   eax, dl
0x6CD382: lea     eax, [eax+eax*2]
0x6CD385: lea     esi, [esi+eax*8+8]
0x6CD389: fld     dword ptr [esi]
0x6CD38B: fld     [esp+10h+var_4]
0x6CD38F: fcompp
0x6CD391: fnstsw  ax
0x6CD393: test    ah, 5
0x6CD396: jp      short loc_6CD3A0
0x6CD398: fld     dword ptr [esi]
0x6CD39A: mov     bl, dl
0x6CD39C: fstp    [esp+10h+var_4]
0x6CD3A0: fxch    st(1)
0x6CD3A2: add     dl, 1
0x6CD3A5: fst     dword ptr [esi]
0x6CD3A7: cmp     dl, [ecx+0Dh]
0x6CD3AA: jb      short loc_6CD37A
0x6CD3AC: movzx   eax, bl
0x6CD3AF: fstp    st
0x6CD3B1: pop     edi
0x6CD3B2: lea     edx, [eax+eax*2]
0x6CD3B5: mov     eax, [ecx+14h]
0x6CD3B8: pop     esi
0x6CD3B9: pop     ebx
0x6CD3BA: fstp    dword ptr [eax+edx*8+8]
0x6CD3BE: pop     ecx
0x6CD3BF: retn
0x6CD3C0: pop     edi
0x6CD3C1: fstp    st(1)
0x6CD3C3: pop     esi
0x6CD3C4: fstp    st
0x6CD3C6: pop     ebx
0x6CD3C7: pop     ecx
0x6CD3C8: retn
