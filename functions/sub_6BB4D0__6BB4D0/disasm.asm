0x6BB4D0: mov     edx, [esp+arg_C]
0x6BB4D4: test    edx, edx
0x6BB4D6: jz      short loc_6BB53F
0x6BB4D8: fld     [esp+arg_0]
0x6BB4DC: mov     ecx, [esp+arg_4]
0x6BB4E0: fld     dword ptr [ecx]
0x6BB4E2: fcomp   st(1)
0x6BB4E4: fnstsw  ax
0x6BB4E6: test    ah, 41h
0x6BB4E9: jnz     short loc_6BB4F1
0x6BB4EB: fstp    st
0x6BB4ED: fld     dword ptr [ecx+4]
0x6BB4F0: retn
0x6BB4F1: push    ebx
0x6BB4F2: mov     ebx, dword ptr [esp+4+arg_10]
0x6BB4F6: push    esi
0x6BB4F7: movzx   esi, bl
0x6BB4FA: lea     eax, [edx-1]
0x6BB4FD: imul    eax, esi
0x6BB500: fld     dword ptr [eax+ecx]
0x6BB503: fcomp   st(1)
0x6BB505: fnstsw  ax
0x6BB507: test    ah, 5
0x6BB50A: jp      short loc_6BB51B
0x6BB50C: add     edx, 0FFFFFFFFh
0x6BB50F: fstp    st
0x6BB511: imul    edx, esi
0x6BB514: pop     esi
0x6BB515: pop     ebx
0x6BB516: fld     dword ptr [edx+ecx+4]
0x6BB51A: retn
0x6BB51B: push    ebx; char
0x6BB51C: lea     eax, [esp+0Ch+arg_C]
0x6BB520: push    eax; int
0x6BB521: push    edx; int
0x6BB522: mov     edx, [esp+14h+arg_8]
0x6BB526: push    edx; int
0x6BB527: push    ecx; int
0x6BB528: push    ecx
0x6BB529: fstp    [esp+20h+var_20]; float
0x6BB52C: mov     [esp+20h+arg_C], 0
0x6BB534: call    sub_6BB270
0x6BB539: add     esp, 18h
0x6BB53C: pop     esi
0x6BB53D: pop     ebx
0x6BB53E: retn
0x6BB53F: fld     dword ptr ds:0B3C220h
0x6BB545: retn
