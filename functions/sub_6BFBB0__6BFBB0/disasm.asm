0x6BFBB0: push    esi
0x6BFBB1: mov     esi, [esp+4+arg_4]
0x6BFBB5: push    edi
0x6BFBB6: mov     edi, [esp+8+arg_0]
0x6BFBBA: push    esi
0x6BFBBB: push    edi
0x6BFBBC: call    sub_6BBE80
0x6BFBC1: add     esp, 8
0x6BFBC4: test    al, al
0x6BFBC6: jnz     short loc_6BFBCB
0x6BFBC8: pop     edi
0x6BFBC9: pop     esi
0x6BFBCA: retn
0x6BFBCB: fld     dword ptr [edi+10h]
0x6BFBCE: fld     dword ptr [esi+10h]
0x6BFBD1: fucompp
0x6BFBD3: fnstsw  ax
0x6BFBD5: test    ah, 44h
0x6BFBD8: jp      short loc_6BFC40
0x6BFBDA: fld     dword ptr [edi+14h]
0x6BFBDD: fld     dword ptr [esi+14h]
0x6BFBE0: fucompp
0x6BFBE2: fnstsw  ax
0x6BFBE4: test    ah, 44h
0x6BFBE7: jp      short loc_6BFC40
0x6BFBE9: fld     dword ptr [edi+18h]
0x6BFBEC: fld     dword ptr [esi+18h]
0x6BFBEF: fucompp
0x6BFBF1: fnstsw  ax
0x6BFBF3: test    ah, 44h
0x6BFBF6: jp      short loc_6BFC40
0x6BFBF8: lea     eax, [esi+1Ch]
0x6BFBFB: push    eax
0x6BFBFC: lea     ecx, [edi+1Ch]
0x6BFBFF: call    sub_8AA350
0x6BFC04: test    al, al
0x6BFC06: jz      short loc_6BFC40
0x6BFC08: lea     ecx, [esi+28h]
0x6BFC0B: push    ecx
0x6BFC0C: lea     ecx, [edi+28h]
0x6BFC0F: call    sub_8AA350
0x6BFC14: test    al, al
0x6BFC16: jz      short loc_6BFC40
0x6BFC18: lea     edx, [esi+34h]
0x6BFC1B: push    edx
0x6BFC1C: lea     ecx, [edi+34h]
0x6BFC1F: call    sub_8AA350
0x6BFC24: test    al, al
0x6BFC26: jz      short loc_6BFC40
0x6BFC28: add     esi, 40h ; '@'
0x6BFC2B: push    esi
0x6BFC2C: lea     ecx, [edi+40h]
0x6BFC2F: call    sub_8AA350
0x6BFC34: test    al, al
0x6BFC36: jz      short loc_6BFC40
0x6BFC38: pop     edi
0x6BFC39: mov     eax, 1
0x6BFC3E: pop     esi
0x6BFC3F: retn
0x6BFC40: pop     edi
0x6BFC41: xor     eax, eax
0x6BFC43: pop     esi
0x6BFC44: retn
