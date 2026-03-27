0x6D31B0: push    ebx
0x6D31B1: mov     ebx, [esp+4+arg_8]
0x6D31B5: test    ebx, ebx
0x6D31B7: push    esi
0x6D31B8: mov     esi, [esp+8+arg_C]
0x6D31BC: mov     al, 1
0x6D31BE: mov     dword ptr [esi], 0
0x6D31C4: jbe     short loc_6D31F9
0x6D31C6: fld     [esp+8+arg_0]
0x6D31CA: push    ebp
0x6D31CB: mov     ebp, [esp+0Ch+arg_4]
0x6D31CF: push    edi
0x6D31D0: movzx   edi, [esp+10h+arg_10]
0x6D31D5: mov     edx, [esi]
0x6D31D7: mov     ecx, edi
0x6D31D9: imul    ecx, edx
0x6D31DC: fld     dword ptr [ecx+ebp]
0x6D31DF: fcomp   st(1)
0x6D31E1: fnstsw  ax
0x6D31E3: add     ecx, ebp
0x6D31E5: test    ah, 5
0x6D31E8: jp      short loc_6D31FC
0x6D31EA: add     edx, 1
0x6D31ED: cmp     edx, ebx
0x6D31EF: mov     [esi], edx
0x6D31F1: jb      short loc_6D31D5
0x6D31F3: fstp    st
0x6D31F5: pop     edi
0x6D31F6: mov     al, 1
0x6D31F8: pop     ebp
0x6D31F9: pop     esi
0x6D31FA: pop     ebx
0x6D31FB: retn
0x6D31FC: fld     dword ptr [ecx]
0x6D31FE: fcompp
0x6D3200: fnstsw  ax
0x6D3202: test    ah, 41h
0x6D3205: jz      short loc_6D31F5
0x6D3207: pop     edi
0x6D3208: pop     ebp
0x6D3209: pop     esi
0x6D320A: xor     al, al
0x6D320C: pop     ebx
0x6D320D: retn
