0x4941A0: mov     eax, 32CCh
0x4941A5: call    __alloca_probe
0x4941AA: mov     eax, ds:0B30AACh
0x4941AF: xor     eax, esp
0x4941B1: mov     [esp+32CCh+var_4], eax
0x4941B8: mov     eax, [esp+32CCh+Format]
0x4941BF: mov     ecx, [esp+32CCh+ArgList]
0x4941C6: push    esi
0x4941C7: xor     esi, esi
0x4941C9: cmp     ds:0B34D90h, esi
0x4941CF: jz      loc_49434B; jumptable 00494231 case 8
0x4941D5: push    ecx; ArgList
0x4941D6: push    eax; Format
0x4941D7: lea     eax, [esp+32D8h+DstBuf]
0x4941DB: push    eax; DstBuf
0x4941DC: call    __vsprintf
0x4941E1: add     esp, 0Ch
0x4941E4: test    eax, eax
0x4941E6: jl      loc_49434B; jumptable 00494231 case 8
0x4941EC: cmp     [esp+eax+32D0h+var_32CE], 0Dh
0x4941F1: lea     eax, [esp+eax+32D0h+DstBuf]
0x4941F5: jnz     short loc_4941FD
0x4941F7: cmp     byte ptr [eax-1], 0Ah
0x4941FB: jz      short loc_494221
0x4941FD: lea     eax, [esp+32D0h+DstBuf]
0x494201: add     eax, 0FFFFFFFFh
0x494204: mov     cl, [eax+1]
0x494207: add     eax, 1
0x49420A: test    cl, cl
0x49420C: jnz     short loc_494204
0x49420E: mov     cx, ds:0A3D9B0h
0x494215: mov     dl, ds:0A3D9B2h
0x49421B: mov     [eax], cx
0x49421E: mov     [eax+2], dl
0x494221: mov     eax, [esp+32D0h+arg_0]
0x494228: cmp     eax, 9; switch 10 cases
0x49422B: ja      def_494231; jumptable 00494231 default case, case 1
0x494231: jmp     ds:jpt_494231[eax*4]; switch jump
0x494238: mov     ecx, ds:0B34D90h; jumptable 00494231 case 0
0x49423E: mov     eax, [ecx]
0x494240: mov     eax, [eax]
0x494242: lea     edx, [esp+32D0h+DstBuf]
0x494246: push    edx
0x494247: call    eax
0x494249: mov     eax, esi
0x49424B: pop     esi
0x49424C: mov     ecx, [esp+32CCh+var_4]
0x494253: xor     ecx, esp
0x494255: call    @__security_check_cookie@4; __security_check_cookie(x)
0x49425A: add     esp, 32CCh
0x494260: retn
0x494261: mov     ecx, ds:0B34D90h; jumptable 00494231 case 2
0x494267: mov     eax, [ecx]
0x494269: mov     eax, [eax+8]
0x49426C: lea     edx, [esp+32D0h+DstBuf]
0x494270: push    edx
0x494271: call    eax
0x494273: mov     eax, esi
0x494275: pop     esi
0x494276: mov     ecx, [esp+32CCh+var_4]
0x49427D: xor     ecx, esp
0x49427F: call    @__security_check_cookie@4; __security_check_cookie(x)
0x494284: add     esp, 32CCh
0x49428A: retn
0x49428B: mov     ecx, ds:0B34D90h; jumptable 00494231 case 3
0x494291: mov     edx, [ecx]
0x494293: mov     edx, [edx+0Ch]
0x494296: lea     eax, [esp+32D0h+DstBuf]
0x49429A: push    eax
0x49429B: call    edx
0x49429D: mov     eax, esi
0x49429F: pop     esi
0x4942A0: mov     ecx, [esp+32CCh+var_4]
0x4942A7: xor     ecx, esp
0x4942A9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4942AE: add     esp, 32CCh
0x4942B4: retn
0x4942B5: mov     ecx, ds:0B34D90h; jumptable 00494231 case 4
0x4942BB: mov     eax, [ecx]
0x4942BD: mov     eax, [eax+10h]
0x4942C0: lea     edx, [esp+32D0h+DstBuf]
0x4942C4: push    edx
0x4942C5: call    eax
0x4942C7: mov     eax, esi
0x4942C9: pop     esi
0x4942CA: mov     ecx, [esp+32CCh+var_4]
0x4942D1: xor     ecx, esp
0x4942D3: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4942D8: add     esp, 32CCh
0x4942DE: retn
0x4942DF: mov     ecx, ds:0B34D90h; jumptable 00494231 case 5
0x4942E5: mov     edx, [ecx]
0x4942E7: mov     edx, [edx+20h]
0x4942EA: jmp     short loc_494342
0x4942EC: mov     ecx, ds:0B34D90h; jumptable 00494231 case 6
0x4942F2: mov     eax, [ecx]
0x4942F4: mov     eax, [eax+1Ch]
0x4942F7: lea     edx, [esp+32D0h+DstBuf]
0x4942FB: push    edx
0x4942FC: call    eax
0x4942FE: jmp     short loc_494349
0x494300: mov     ecx, ds:0B34D90h; jumptable 00494231 case 7
0x494306: mov     edx, [ecx]
0x494308: mov     edx, [edx+18h]
0x49430B: jmp     short loc_494342
0x49430D: mov     ecx, ds:0B34D90h; jumptable 00494231 case 9
0x494313: mov     eax, [ecx]
0x494315: mov     eax, [eax+14h]
0x494318: lea     edx, [esp+32D0h+DstBuf]
0x49431C: push    edx
0x49431D: call    eax
0x49431F: mov     eax, esi
0x494321: pop     esi
0x494322: mov     ecx, [esp+32CCh+var_4]
0x494329: xor     ecx, esp
0x49432B: call    @__security_check_cookie@4; __security_check_cookie(x)
0x494330: add     esp, 32CCh
0x494336: retn
0x494337: mov     ecx, ds:0B34D90h; jumptable 00494231 default case, case 1
0x49433D: mov     edx, [ecx]
0x49433F: mov     edx, [edx+4]
0x494342: lea     eax, [esp+32D0h+DstBuf]
0x494346: push    eax
0x494347: call    edx
0x494349: mov     esi, eax
0x49434B: mov     ecx, [esp+32D0h+var_4]; jumptable 00494231 case 8
0x494352: mov     eax, esi
0x494354: pop     esi
0x494355: xor     ecx, esp
0x494357: call    @__security_check_cookie@4; __security_check_cookie(x)
0x49435C: add     esp, 32CCh
0x494362: retn
