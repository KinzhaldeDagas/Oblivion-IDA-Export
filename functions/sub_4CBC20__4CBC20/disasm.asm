0x4CBC20: cmp     [esp+arg_10], 0
0x4CBC25: push    ebx
0x4CBC26: mov     ebx, ecx
0x4CBC28: jnz     short loc_4CBC30
0x4CBC2A: xor     al, al
0x4CBC2C: pop     ebx
0x4CBC2D: retn    18h
0x4CBC30: push    ebp
0x4CBC31: push    esi
0x4CBC32: push    edi
0x4CBC33: push    ebx; a2
0x4CBC34: mov     ecx, offset stru_B35C80; this
0x4CBC39: call    sub_496EA0
0x4CBC3E: lea     edi, [ebx+48h]
0x4CBC41: test    edi, edi
0x4CBC43: jz      loc_4CBD17
0x4CBC49: mov     ebp, [esp+10h+arg_8]
0x4CBC4D: mov     eax, [edi+4]
0x4CBC50: fld     [esp+10h+arg_4]
0x4CBC54: test    eax, eax
0x4CBC56: jnz     short loc_4CBC60
0x4CBC58: cmp     [edi], eax
0x4CBC5A: jz      loc_4CBD15
0x4CBC60: fcom    qword ptr ds:0A3A5B0h
0x4CBC66: mov     esi, [edi]
0x4CBC68: mov     edi, eax
0x4CBC6A: fnstsw  ax
0x4CBC6C: test    ah, 44h
0x4CBC6F: jnp     short loc_4CBC97
0x4CBC71: mov     eax, [esp+10h+arg_0]
0x4CBC75: mov     edx, [esi]
0x4CBC77: push    ecx
0x4CBC78: fstp    [esp+14h+var_14]; float
0x4CBC7B: push    eax; int
0x4CBC7C: mov     eax, [edx+174h]
0x4CBC82: mov     ecx, esi
0x4CBC84: call    eax
0x4CBC86: push    eax; int
0x4CBC87: call    sub_480520
0x4CBC8C: add     esp, 0Ch
0x4CBC8F: test    eax, eax
0x4CBC91: jge     short loc_4CBCF8
0x4CBC93: fld     [esp+10h+arg_4]
0x4CBC97: fld     [esp+10h+arg_C]
0x4CBC9B: fcom    qword ptr ds:0A3A5B0h
0x4CBCA1: fnstsw  ax
0x4CBCA3: test    ah, 44h
0x4CBCA6: jnp     short loc_4CBCE3
0x4CBCA8: fucompp
0x4CBCAA: fnstsw  ax
0x4CBCAC: test    ah, 44h
0x4CBCAF: jp      short loc_4CBCBF
0x4CBCB1: mov     ecx, [esp+10h+arg_0]
0x4CBCB5: push    ebp
0x4CBCB6: call    sub_8AA350
0x4CBCBB: test    al, al
0x4CBCBD: jnz     short loc_4CBCE7
0x4CBCBF: fld     [esp+10h+arg_C]
0x4CBCC3: mov     edx, [esi]
0x4CBCC5: mov     eax, [edx+174h]
0x4CBCCB: push    ecx
0x4CBCCC: fstp    [esp+14h+var_14]; float
0x4CBCCF: push    ebp; int
0x4CBCD0: mov     ecx, esi
0x4CBCD2: call    eax
0x4CBCD4: push    eax; int
0x4CBCD5: call    sub_480520
0x4CBCDA: add     esp, 0Ch
0x4CBCDD: test    eax, eax
0x4CBCDF: jge     short loc_4CBCF8
0x4CBCE1: jmp     short loc_4CBCE7
0x4CBCE3: fstp    st(1)
0x4CBCE5: fstp    st
0x4CBCE7: mov     ecx, [esp+10h+arg_14]
0x4CBCEB: push    ecx
0x4CBCEC: push    esi
0x4CBCED: call    [esp+18h+arg_10]
0x4CBCF1: add     esp, 8
0x4CBCF4: test    al, al
0x4CBCF6: jnz     short loc_4CBD01
0x4CBCF8: test    edi, edi
0x4CBCFA: jz      short loc_4CBD17
0x4CBCFC: jmp     loc_4CBC4D
0x4CBD01: push    ebx; a2
0x4CBD02: mov     ecx, offset stru_B35C80; this
0x4CBD07: call    sub_496F50
0x4CBD0C: pop     edi
0x4CBD0D: pop     esi
0x4CBD0E: pop     ebp
0x4CBD0F: xor     al, al
0x4CBD11: pop     ebx
0x4CBD12: retn    18h
0x4CBD15: fstp    st
0x4CBD17: push    ebx; a2
0x4CBD18: mov     ecx, offset stru_B35C80; this
0x4CBD1D: call    sub_496F50
0x4CBD22: pop     edi
0x4CBD23: pop     esi
0x4CBD24: pop     ebp
0x4CBD25: mov     al, 1
0x4CBD27: pop     ebx
0x4CBD28: retn    18h
