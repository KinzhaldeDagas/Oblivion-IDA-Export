0x6BC2C0: push    esi
0x6BC2C1: mov     esi, [esp+4+arg_4]
0x6BC2C5: push    edi
0x6BC2C6: mov     edi, [esp+8+arg_0]
0x6BC2CA: push    esi
0x6BC2CB: push    edi
0x6BC2CC: call    sub_6BBE80
0x6BC2D1: add     esp, 8
0x6BC2D4: test    al, al
0x6BC2D6: jnz     short loc_6BC2DB
0x6BC2D8: pop     edi
0x6BC2D9: pop     esi
0x6BC2DA: retn
0x6BC2DB: fld     dword ptr [edi+10h]
0x6BC2DE: fld     dword ptr [esi+10h]
0x6BC2E1: fucompp
0x6BC2E3: fnstsw  ax
0x6BC2E5: test    ah, 44h
0x6BC2E8: jp      short loc_6BC320
0x6BC2EA: fld     dword ptr [edi+14h]
0x6BC2ED: fld     dword ptr [esi+14h]
0x6BC2F0: fucompp
0x6BC2F2: fnstsw  ax
0x6BC2F4: test    ah, 44h
0x6BC2F7: jp      short loc_6BC320
0x6BC2F9: fld     dword ptr [edi+18h]
0x6BC2FC: fld     dword ptr [esi+18h]
0x6BC2FF: fucompp
0x6BC301: fnstsw  ax
0x6BC303: test    ah, 44h
0x6BC306: jp      short loc_6BC320
0x6BC308: add     esi, 1Ch
0x6BC30B: push    esi
0x6BC30C: lea     ecx, [edi+1Ch]
0x6BC30F: call    sub_8AA350
0x6BC314: test    al, al
0x6BC316: jz      short loc_6BC320
0x6BC318: pop     edi
0x6BC319: mov     eax, 1
0x6BC31E: pop     esi
0x6BC31F: retn
0x6BC320: pop     edi
0x6BC321: xor     eax, eax
0x6BC323: pop     esi
0x6BC324: retn
