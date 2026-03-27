0x6D0C30: sub     esp, 0Ch
0x6D0C33: push    ebp
0x6D0C34: push    esi
0x6D0C35: mov     esi, ecx
0x6D0C37: mov     eax, [esi]
0x6D0C39: mov     edx, [eax+0A4h]
0x6D0C3F: push    edi
0x6D0C40: call    edx
0x6D0C42: cmp     byte ptr [esi+59h], 0
0x6D0C46: mov     ecx, [esi+50h]
0x6D0C49: mov     ebp, [ecx+8]
0x6D0C4C: mov     edx, [esi+30h]
0x6D0C4F: mov     ecx, [edx+0B4h]
0x6D0C55: movzx   ecx, word ptr [ecx+8]
0x6D0C59: mov     [esp+18h+var_4], eax
0x6D0C5D: mov     [esp+18h+var_8], ecx
0x6D0C61: jnz     short loc_6D0C76
0x6D0C63: lea     edx, [ecx+ecx*2]
0x6D0C66: add     edx, edx
0x6D0C68: add     edx, edx
0x6D0C6A: push    edx
0x6D0C6B: push    0
0x6D0C6D: push    eax
0x6D0C6E: call    __memset
0x6D0C73: add     esp, 0Ch
0x6D0C76: xor     edi, edi
0x6D0C78: test    ebp, ebp
0x6D0C7A: jbe     short loc_6D0CE5
0x6D0C7C: push    ebx
0x6D0C7D: xor     ebx, ebx
0x6D0C7F: nop
0x6D0C80: movzx   eax, word ptr [esi+4Ah]
0x6D0C84: cmp     edi, eax
0x6D0C86: jnb     short loc_6D0CDA
0x6D0C88: mov     ecx, [esi+44h]
0x6D0C8B: fld     dword ptr [ecx+edi*4]
0x6D0C8E: fstp    [esp+1Ch+var_C]
0x6D0C92: fld     dword ptr ds:0A37080h
0x6D0C98: fld     [esp+1Ch+var_C]
0x6D0C9C: fcom    st(1)
0x6D0C9E: fnstsw  ax
0x6D0CA0: fstp    st(1)
0x6D0CA2: test    ah, 1
0x6D0CA5: jz      short loc_6D0CB6
0x6D0CA7: fld     dword ptr ds:0A57CB0h
0x6D0CAD: fcomp   st(1)
0x6D0CAF: fnstsw  ax
0x6D0CB1: test    ah, 1
0x6D0CB4: jnz     short loc_6D0CD8
0x6D0CB6: mov     eax, [esi+50h]
0x6D0CB9: mov     ecx, [eax+10h]
0x6D0CBC: mov     edx, [esp+1Ch+var_8]
0x6D0CC0: mov     eax, [esp+1Ch+var_4]
0x6D0CC4: push    edx; int
0x6D0CC5: mov     edx, [ecx+ebx]
0x6D0CC8: push    edx; int
0x6D0CC9: push    ecx
0x6D0CCA: fstp    [esp+28h+var_28]; float
0x6D0CCD: push    eax; int
0x6D0CCE: call    sub_725BD0
0x6D0CD3: add     esp, 10h
0x6D0CD6: jmp     short loc_6D0CDA
0x6D0CD8: fstp    st
0x6D0CDA: add     edi, 1
0x6D0CDD: add     ebx, 0Ch
0x6D0CE0: cmp     edi, ebp
0x6D0CE2: jb      short loc_6D0C80
0x6D0CE4: pop     ebx
0x6D0CE5: pop     edi
0x6D0CE6: pop     esi
0x6D0CE7: pop     ebp
0x6D0CE8: add     esp, 0Ch
0x6D0CEB: retn
