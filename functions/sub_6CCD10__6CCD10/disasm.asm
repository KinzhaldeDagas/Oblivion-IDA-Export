0x6CCD10: push    esi
0x6CCD11: push    edi
0x6CCD12: mov     edi, [esp+8+arg_0]
0x6CCD16: push    edi
0x6CCD17: mov     esi, ecx
0x6CCD19: call    sub_89D6F0
0x6CCD1E: test    al, al
0x6CCD20: jnz     short loc_6CCD29
0x6CCD22: pop     edi
0x6CCD23: xor     al, al
0x6CCD25: pop     esi
0x6CCD26: retn    4
0x6CCD29: mov     al, [esi+0Dh]
0x6CCD2C: cmp     al, [edi+0Dh]
0x6CCD2F: jnz     short loc_6CCD22
0x6CCD31: push    ebx
0x6CCD32: xor     bl, bl
0x6CCD34: test    al, al
0x6CCD36: jbe     short loc_6CCD68
0x6CCD38: jmp     short loc_6CCD40
0x6CCD3A: align 10h
0x6CCD40: mov     ecx, [edi+14h]
0x6CCD43: movzx   eax, bl
0x6CCD46: lea     eax, [eax+eax*2]
0x6CCD49: add     eax, eax
0x6CCD4B: add     eax, eax
0x6CCD4D: add     eax, eax
0x6CCD4F: add     ecx, eax
0x6CCD51: push    ecx
0x6CCD52: mov     ecx, [esi+14h]
0x6CCD55: add     ecx, eax
0x6CCD57: call    sub_6CCC50
0x6CCD5C: test    al, al
0x6CCD5E: jz      short loc_6CCDD6
0x6CCD60: add     bl, 1
0x6CCD63: cmp     bl, [esi+0Dh]
0x6CCD66: jb      short loc_6CCD40
0x6CCD68: mov     dl, [esi+0Ch]
0x6CCD6B: cmp     dl, [edi+0Ch]
0x6CCD6E: jnz     short loc_6CCDD6
0x6CCD70: fld     dword ptr [esi+1Ch]
0x6CCD73: fld     dword ptr [edi+1Ch]
0x6CCD76: fucompp
0x6CCD78: fnstsw  ax
0x6CCD7A: test    ah, 44h
0x6CCD7D: jp      short loc_6CCDD6
0x6CCD7F: mov     al, [esi+0Eh]
0x6CCD82: cmp     al, [edi+0Eh]
0x6CCD85: jnz     short loc_6CCDD6
0x6CCD87: mov     cl, [esi+0Fh]
0x6CCD8A: cmp     cl, [edi+0Fh]
0x6CCD8D: jnz     short loc_6CCDD6
0x6CCD8F: cmp     dword ptr [esi+18h], 0
0x6CCD93: jz      short loc_6CCDA7
0x6CCD95: mov     ecx, [esi+18h]
0x6CCD98: mov     edx, [ecx]
0x6CCD9A: mov     eax, [edi+18h]
0x6CCD9D: mov     edx, [edx+2Ch]
0x6CCDA0: push    eax
0x6CCDA1: call    edx
0x6CCDA3: test    al, al
0x6CCDA5: jz      short loc_6CCDD6
0x6CCDA7: mov     eax, [esi+18h]
0x6CCDAA: cmp     eax, [edi+18h]
0x6CCDAD: jnz     short loc_6CCDD6
0x6CCDAF: fld     dword ptr [esi+20h]
0x6CCDB2: fld     dword ptr [edi+20h]
0x6CCDB5: fucompp
0x6CCDB7: fnstsw  ax
0x6CCDB9: test    ah, 44h
0x6CCDBC: jp      short loc_6CCDD6
0x6CCDBE: mov     cl, [esi+10h]
0x6CCDC1: cmp     cl, [edi+10h]
0x6CCDC4: jnz     short loc_6CCDD6
0x6CCDC6: mov     dl, [esi+11h]
0x6CCDC9: cmp     dl, [edi+11h]
0x6CCDCC: jnz     short loc_6CCDD6
0x6CCDCE: pop     ebx
0x6CCDCF: pop     edi
0x6CCDD0: mov     al, 1
0x6CCDD2: pop     esi
0x6CCDD3: retn    4
0x6CCDD6: pop     ebx
0x6CCDD7: pop     edi
0x6CCDD8: xor     al, al
0x6CCDDA: pop     esi
0x6CCDDB: retn    4
