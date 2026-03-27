0x680620: mov     ax, ds:0B3BF04h
0x680626: push    edi
0x680627: mov     di, [esp+4+arg_0]
0x68062C: cmp     di, ax
0x68062F: jbe     short loc_6806AA
0x680631: push    ebx
0x680632: push    ebp
0x680633: push    esi
0x680634: mov     ebp, ds:0B3BF00h
0x68063A: movzx   esi, di
0x68063D: movzx   ebx, ax
0x680640: xor     ecx, ecx
0x680642: mov     eax, esi
0x680644: mov     edx, 10h
0x680649: mul     edx
0x68064B: seto    cl
0x68064E: neg     ecx
0x680650: or      ecx, eax
0x680652: push    ecx; Size
0x680653: call    FormHeapAlloc
0x680658: add     esp, 4
0x68065B: test    eax, eax
0x68065D: mov     ds:0B3BF00h, eax
0x680662: mov     ds:0B3BF04h, di
0x680669: jz      short loc_680684
0x68066B: test    di, di
0x68066E: jz      short loc_680684
0x680670: shl     esi, 4
0x680673: push    esi
0x680674: push    0
0x680676: push    eax
0x680677: call    __memset
0x68067C: mov     eax, ds:0B3BF00h
0x680681: add     esp, 0Ch
0x680684: test    ebp, ebp
0x680686: jz      short loc_6806A7
0x680688: test    bx, bx
0x68068B: jz      short loc_68069E
0x68068D: movzx   ecx, bx
0x680690: shl     ecx, 4
0x680693: push    ecx; Size
0x680694: push    ebp; Src
0x680695: push    eax; Dst
0x680696: call    _memcpy
0x68069B: add     esp, 0Ch
0x68069E: push    ebp
0x68069F: call    FormHeapFree
0x6806A4: add     esp, 4
0x6806A7: pop     esi
0x6806A8: pop     ebp
0x6806A9: pop     ebx
0x6806AA: pop     edi
0x6806AB: retn
