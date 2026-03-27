0x7182A0: push    ebx
0x7182A1: mov     ebx, dword ptr [esp+4+ArgList]
0x7182A5: push    esi
0x7182A6: mov     eax, ebx
0x7182A8: push    edi
0x7182A9: lea     edx, [eax+1]
0x7182AC: lea     esp, [esp+0]
0x7182B0: mov     cl, [eax]
0x7182B2: add     eax, 1
0x7182B5: test    cl, cl
0x7182B7: jnz     short loc_7182B0
0x7182B9: sub     eax, edx
0x7182BB: lea     esi, [eax+16h]
0x7182BE: push    esi; Size
0x7182BF: call    FormHeapAlloc
0x7182C4: mov     edi, eax
0x7182C6: mov     eax, [esp+10h+arg_4]
0x7182CA: add     esp, 4
0x7182CD: cmp     eax, 0Ah; switch 11 cases
0x7182D0: ja      def_7182D6
0x7182D6: jmp     ds:jpt_7182D6[eax*4]; switch jump
0x7182DD: push    ebx; jumptable 007182D6 case 0
0x7182DE: push    offset aSAlpha_one; "%s = ALPHA_ONE"
0x7182E3: push    esi; SizeInBytes
0x7182E4: push    edi; DstBuf
0x7182E5: call    sub_6C5D40
0x7182EA: add     esp, 10h
0x7182ED: mov     eax, edi
0x7182EF: pop     edi
0x7182F0: pop     esi
0x7182F1: pop     ebx
0x7182F2: retn
0x7182F3: push    ebx; jumptable 007182D6 case 1
0x7182F4: push    offset aSAlpha_zero; "%s = ALPHA_ZERO"
0x7182F9: push    esi; SizeInBytes
0x7182FA: push    edi; DstBuf
0x7182FB: call    sub_6C5D40
0x718300: add     esp, 10h
0x718303: mov     eax, edi
0x718305: pop     edi
0x718306: pop     esi
0x718307: pop     ebx
0x718308: retn
0x718309: push    ebx; jumptable 007182D6 case 2
0x71830A: push    offset aSAlpha_srccolo; "%s = ALPHA_SRCCOLOR"
0x71830F: push    esi; SizeInBytes
0x718310: push    edi; DstBuf
0x718311: call    sub_6C5D40
0x718316: add     esp, 10h
0x718319: mov     eax, edi
0x71831B: pop     edi
0x71831C: pop     esi
0x71831D: pop     ebx
0x71831E: retn
0x71831F: push    ebx; jumptable 007182D6 case 3
0x718320: push    offset aSAlpha_invsrcc; "%s = ALPHA_INVSRCCOLOR"
0x718325: push    esi; SizeInBytes
0x718326: push    edi; DstBuf
0x718327: call    sub_6C5D40
0x71832C: add     esp, 10h
0x71832F: mov     eax, edi
0x718331: pop     edi
0x718332: pop     esi
0x718333: pop     ebx
0x718334: retn
0x718335: push    ebx; jumptable 007182D6 case 4
0x718336: push    offset aSAlpha_destcol; "%s = ALPHA_DESTCOLOR"
0x71833B: push    esi; SizeInBytes
0x71833C: push    edi; DstBuf
0x71833D: call    sub_6C5D40
0x718342: add     esp, 10h
0x718345: mov     eax, edi
0x718347: pop     edi
0x718348: pop     esi
0x718349: pop     ebx
0x71834A: retn
0x71834B: push    ebx; jumptable 007182D6 case 5
0x71834C: push    offset aSAlpha_invdest; "%s = ALPHA_INVDESTCOLOR"
0x718351: push    esi; SizeInBytes
0x718352: push    edi; DstBuf
0x718353: call    sub_6C5D40
0x718358: add     esp, 10h
0x71835B: mov     eax, edi
0x71835D: pop     edi
0x71835E: pop     esi
0x71835F: pop     ebx
0x718360: retn
0x718361: push    ebx; jumptable 007182D6 case 6
0x718362: push    offset aSAlpha_srcalph; "%s = ALPHA_SRCALPHA"
0x718367: push    esi; SizeInBytes
0x718368: push    edi; DstBuf
0x718369: call    sub_6C5D40
0x71836E: add     esp, 10h
0x718371: mov     eax, edi
0x718373: pop     edi
0x718374: pop     esi
0x718375: pop     ebx
0x718376: retn
0x718377: push    ebx; jumptable 007182D6 case 7
0x718378: push    offset aSAlpha_invsrca; "%s = ALPHA_INVSRCALPHA"
0x71837D: push    esi; SizeInBytes
0x71837E: push    edi; DstBuf
0x71837F: call    sub_6C5D40
0x718384: add     esp, 10h
0x718387: mov     eax, edi
0x718389: pop     edi
0x71838A: pop     esi
0x71838B: pop     ebx
0x71838C: retn
0x71838D: push    ebx; jumptable 007182D6 case 8
0x71838E: push    offset aSAlpha_destalp; "%s = ALPHA_DESTALPHA"
0x718393: push    esi; SizeInBytes
0x718394: push    edi; DstBuf
0x718395: call    sub_6C5D40
0x71839A: add     esp, 10h
0x71839D: mov     eax, edi
0x71839F: pop     edi
0x7183A0: pop     esi
0x7183A1: pop     ebx
0x7183A2: retn
0x7183A3: push    ebx; jumptable 007182D6 case 9
0x7183A4: push    offset aSAlpha_invde_0; "%s = ALPHA_INVDESTALPHA"
0x7183A9: push    esi; SizeInBytes
0x7183AA: push    edi; DstBuf
0x7183AB: call    sub_6C5D40
0x7183B0: add     esp, 10h
0x7183B3: mov     eax, edi
0x7183B5: pop     edi
0x7183B6: pop     esi
0x7183B7: pop     ebx
0x7183B8: retn
0x7183B9: push    ebx; jumptable 007182D6 case 10
0x7183BA: push    offset aSAlpha_srcal_0; "%s = ALPHA_SRCALPHASAT"
0x7183BF: push    esi; SizeInBytes
0x7183C0: push    edi; DstBuf
0x7183C1: call    sub_6C5D40
0x7183C6: add     esp, 10h
