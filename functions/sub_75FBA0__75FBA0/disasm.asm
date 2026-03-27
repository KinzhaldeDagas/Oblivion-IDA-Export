0x75FBA0: push    ebx
0x75FBA1: mov     ebx, [esp+4+arg_8]
0x75FBA5: push    ebp
0x75FBA6: push    esi
0x75FBA7: mov     esi, [esp+0Ch+arg_C]
0x75FBAB: push    edi
0x75FBAC: mov     edi, ecx
0x75FBAE: mov     ecx, [edi+44h]
0x75FBB1: test    ecx, ecx
0x75FBB3: push    0
0x75FBB5: jz      short loc_75FC0F
0x75FBB7: mov     eax, ds:0B42040h
0x75FBBC: mov     ebp, [eax]
0x75FBBE: mov     edx, [ecx]
0x75FBC0: mov     eax, [edx+38h]
0x75FBC3: add     ebp, 78h ; 'x'
0x75FBC6: call    eax
0x75FBC8: mov     ecx, ds:0B42040h
0x75FBCE: mov     edx, [ebp+0]
0x75FBD1: push    eax
0x75FBD2: call    edx
0x75FBD4: mov     ecx, [edi+34h]
0x75FBD7: test    ecx, ecx
0x75FBD9: jz      short loc_75FC1E
0x75FBDB: mov     edx, [esp+10h+arg_20]
0x75FBDF: push    0
0x75FBE1: push    edx
0x75FBE2: mov     edx, [esp+18h+arg_1C]
0x75FBE6: mov     eax, [ecx]
0x75FBE8: push    edx
0x75FBE9: mov     edx, [esp+1Ch+arg_18]
0x75FBED: mov     eax, [eax+40h]
0x75FBF0: push    edx
0x75FBF1: mov     edx, [esp+20h+arg_14]
0x75FBF5: push    edx
0x75FBF6: mov     edx, [esp+24h+arg_10]
0x75FBFA: push    edx
0x75FBFB: mov     edx, [esp+28h+arg_4]
0x75FBFF: push    esi
0x75FC00: push    ebx
0x75FC01: push    edx
0x75FC02: mov     edx, [esp+34h+arg_0]
0x75FC06: push    edx
0x75FC07: mov     edx, [edi+44h]
0x75FC0A: push    edx
0x75FC0B: call    eax
0x75FC0D: jmp     short loc_75FC1E
0x75FC0F: mov     ecx, ds:0B42040h
0x75FC15: mov     edx, [ecx]
0x75FC17: mov     eax, [edx+78h]
0x75FC1A: push    0
0x75FC1C: call    eax
0x75FC1E: mov     ecx, [edi+58h]
0x75FC21: test    ecx, ecx
0x75FC23: push    0
0x75FC25: jz      loc_75FD24
0x75FC2B: mov     edx, ds:0B42040h
0x75FC31: mov     ebp, [edx]
0x75FC33: mov     eax, [ecx]
0x75FC35: mov     edx, [eax+40h]
0x75FC38: add     ebp, 88h ; 'ˆ'
0x75FC3E: call    edx
0x75FC40: mov     ecx, ds:0B42040h
0x75FC46: push    eax
0x75FC47: mov     eax, [ebp+0]
0x75FC4A: call    eax
0x75FC4C: mov     ecx, [edi+48h]
0x75FC4F: xor     ebp, ebp
0x75FC51: cmp     ecx, ebp
0x75FC53: jz      short loc_75FC86
0x75FC55: mov     eax, [esp+10h+arg_20]
0x75FC59: push    ebp
0x75FC5A: push    eax
0x75FC5B: mov     eax, [esp+18h+arg_1C]
0x75FC5F: mov     edx, [ecx]
0x75FC61: push    eax
0x75FC62: mov     eax, [esp+1Ch+arg_18]
0x75FC66: mov     edx, [edx+40h]
0x75FC69: push    eax
0x75FC6A: mov     eax, [esp+20h+arg_14]
0x75FC6E: push    eax
0x75FC6F: mov     eax, [esp+24h+arg_10]
0x75FC73: push    eax
0x75FC74: mov     eax, [esp+28h+arg_4]
0x75FC78: push    esi
0x75FC79: push    ebx
0x75FC7A: push    eax
0x75FC7B: mov     eax, [esp+34h+arg_0]
0x75FC7F: push    eax
0x75FC80: mov     eax, [edi+58h]
0x75FC83: push    eax
0x75FC84: call    edx
0x75FC86: xor     esi, esi
0x75FC88: cmp     ds:0B28CB0h, ebp
0x75FC8E: jbe     loc_75FD7F
0x75FC94: jmp     short loc_75FCA0
0x75FC96: align 10h
0x75FCA0: mov     ecx, ds:0B42040h
0x75FCA6: mov     eax, [ecx]
0x75FCA8: mov     edx, [eax+0C8h]
0x75FCAE: push    ebp
0x75FCAF: push    esi
0x75FCB0: push    0Bh
0x75FCB2: push    esi
0x75FCB3: call    edx
0x75FCB5: xor     ebx, ebx
0x75FCB7: cmp     esi, [edi+18h]
0x75FCBA: jnb     short loc_75FCFB
0x75FCBC: mov     eax, [edi+24h]
0x75FCBF: mov     eax, [eax+esi*4]
0x75FCC2: cmp     eax, ebp
0x75FCC4: jz      short loc_75FCFB
0x75FCC6: mov     eax, [eax+0Ch]
0x75FCC9: cmp     eax, ebp
0x75FCCB: jz      short loc_75FCFB
0x75FCCD: lea     ecx, [esp+10h+arg_0]
0x75FCD1: push    ecx
0x75FCD2: lea     edx, [esp+14h+arg_20]
0x75FCD6: push    edx
0x75FCD7: push    18h
0x75FCD9: mov     ecx, eax
0x75FCDB: mov     [esp+1Ch+arg_20], ebp
0x75FCDF: mov     byte ptr [esp+1Ch+arg_0], bl
0x75FCE3: call    sub_7730A0
0x75FCE8: test    al, al
0x75FCEA: jz      short loc_75FCFB
0x75FCEC: test    [esp+10h+arg_20], 100h
0x75FCF4: jz      short loc_75FCFB
0x75FCF6: mov     ebx, 100h
0x75FCFB: mov     ecx, ds:0B42040h
0x75FD01: mov     eax, [ecx]
0x75FD03: mov     edx, [eax+0C8h]
0x75FD09: push    ebp
0x75FD0A: push    ebx
0x75FD0B: push    18h
0x75FD0D: push    esi
0x75FD0E: call    edx
0x75FD10: add     esi, 1
0x75FD13: cmp     esi, ds:0B28CB0h
0x75FD19: jb      short loc_75FCA0
0x75FD1B: pop     edi
0x75FD1C: pop     esi
0x75FD1D: pop     ebp
0x75FD1E: xor     eax, eax
0x75FD20: pop     ebx
0x75FD21: retn    24h ; '$'
0x75FD24: mov     ecx, ds:0B42040h
0x75FD2A: mov     eax, [ecx]
0x75FD2C: mov     edx, [eax+88h]
0x75FD32: push    0
0x75FD34: call    edx
0x75FD36: test    esi, esi
0x75FD38: jnz     short loc_75FD50
0x75FD3A: test    ebx, ebx
0x75FD3C: jz      short loc_75FD43
0x75FD3E: mov     esi, [ebx+28h]
0x75FD41: jmp     short loc_75FD50
0x75FD43: mov     eax, [esp+10h+arg_0]
0x75FD47: mov     ecx, [eax+0B4h]
0x75FD4D: mov     esi, [ecx+38h]
0x75FD50: mov     eax, [esi+8]
0x75FD53: test    eax, eax
0x75FD55: mov     ecx, ds:0B42040h
0x75FD5B: mov     edx, [ecx]
0x75FD5D: push    0
0x75FD5F: jz      short loc_75FD73
0x75FD61: push    eax
0x75FD62: mov     eax, [edx+98h]
0x75FD68: call    eax
0x75FD6A: pop     edi
0x75FD6B: pop     esi
0x75FD6C: pop     ebp
0x75FD6D: xor     eax, eax
0x75FD6F: pop     ebx
0x75FD70: retn    24h ; '$'
0x75FD73: mov     eax, [esi+0Ch]
0x75FD76: mov     edx, [edx+0A8h]
0x75FD7C: push    eax
0x75FD7D: call    edx
0x75FD7F: pop     edi
0x75FD80: pop     esi
0x75FD81: pop     ebp
0x75FD82: xor     eax, eax
0x75FD84: pop     ebx
0x75FD85: retn    24h ; '$'
