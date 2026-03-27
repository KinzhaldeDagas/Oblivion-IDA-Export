0x6DB8D0: sub     esp, 8
0x6DB8D3: push    ebp
0x6DB8D4: push    edi
0x6DB8D5: mov     edi, [esp+10h+arg_0]
0x6DB8D9: push    edi
0x6DB8DA: mov     ebp, ecx
0x6DB8DC: call    sub_6EC2E0
0x6DB8E1: test    al, al
0x6DB8E3: jnz     short loc_6DB8EF
0x6DB8E5: pop     edi
0x6DB8E6: xor     al, al
0x6DB8E8: pop     ebp
0x6DB8E9: add     esp, 8
0x6DB8EC: retn    4
0x6DB8EF: mov     ecx, [ebp+18h]
0x6DB8F2: test    ecx, ecx
0x6DB8F4: jz      short loc_6DB900
0x6DB8F6: cmp     dword ptr [edi+18h], 0
0x6DB8FA: jz      short loc_6DB8E5
0x6DB8FC: test    ecx, ecx
0x6DB8FE: jnz     short loc_6DB90A
0x6DB900: cmp     dword ptr [edi+18h], 0
0x6DB904: jnz     short loc_6DB8E5
0x6DB906: test    ecx, ecx
0x6DB908: jz      short loc_6DB919
0x6DB90A: mov     eax, [edi+18h]
0x6DB90D: mov     edx, [ecx]
0x6DB90F: push    eax
0x6DB910: mov     eax, [edx+2Ch]
0x6DB913: call    eax
0x6DB915: test    al, al
0x6DB917: jz      short loc_6DB8E5
0x6DB919: mov     ecx, [ebp+1Ch]
0x6DB91C: test    ecx, ecx
0x6DB91E: jz      short loc_6DB92A
0x6DB920: cmp     dword ptr [edi+1Ch], 0
0x6DB924: jz      short loc_6DB8E5
0x6DB926: test    ecx, ecx
0x6DB928: jnz     short loc_6DB934
0x6DB92A: cmp     dword ptr [edi+1Ch], 0
0x6DB92E: jnz     short loc_6DB8E5
0x6DB930: test    ecx, ecx
0x6DB932: jz      short loc_6DB943
0x6DB934: mov     eax, [edi+1Ch]
0x6DB937: mov     edx, [ecx]
0x6DB939: push    eax
0x6DB93A: mov     eax, [edx+2Ch]
0x6DB93D: call    eax
0x6DB93F: test    al, al
0x6DB941: jz      short loc_6DB8E5
0x6DB943: push    esi
0x6DB944: mov     esi, [ebp+20h]
0x6DB947: test    esi, esi
0x6DB949: jz      short loc_6DB955
0x6DB94B: cmp     dword ptr [edi+20h], 0
0x6DB94F: jz      short loc_6DB95B
0x6DB951: test    esi, esi
0x6DB953: jnz     short loc_6DB966
0x6DB955: cmp     dword ptr [edi+20h], 0
0x6DB959: jz      short loc_6DB966
0x6DB95B: pop     esi
0x6DB95C: pop     edi
0x6DB95D: xor     al, al
0x6DB95F: pop     ebp
0x6DB960: add     esp, 8
0x6DB963: retn    4
0x6DB966: test    esi, esi
0x6DB968: push    ebx
0x6DB969: jz      loc_6DBA16
0x6DB96F: lea     ecx, [esp+18h+arg_0]
0x6DB973: push    ecx
0x6DB974: lea     edx, [esp+1Ch+var_4]
0x6DB978: push    edx
0x6DB979: lea     eax, [esp+20h+var_8]
0x6DB97D: push    eax
0x6DB97E: mov     ecx, ebp
0x6DB980: call    sub_6DAC40
0x6DB985: mov     eax, [esp+18h+var_8]
0x6DB989: mov     ecx, [edi+20h]
0x6DB98C: add     eax, eax
0x6DB98E: add     eax, eax
0x6DB990: cmp     eax, 4
0x6DB993: mov     edx, esi
0x6DB995: jb      short loc_6DB9AB
0x6DB997: mov     esi, [edx]
0x6DB999: cmp     esi, [ecx]
0x6DB99B: jnz     short loc_6DB9AF
0x6DB99D: sub     eax, 4
0x6DB9A0: add     ecx, 4
0x6DB9A3: add     edx, 4
0x6DB9A6: cmp     eax, 4
0x6DB9A9: jnb     short loc_6DB997
0x6DB9AB: test    eax, eax
0x6DB9AD: jz      short loc_6DBA0C
0x6DB9AF: movzx   esi, byte ptr [edx]
0x6DB9B2: movzx   ebx, byte ptr [ecx]
0x6DB9B5: sub     esi, ebx
0x6DB9B7: jnz     short loc_6DB9FE
0x6DB9B9: sub     eax, 1
0x6DB9BC: add     ecx, 1
0x6DB9BF: add     edx, 1
0x6DB9C2: test    eax, eax
0x6DB9C4: jz      short loc_6DBA0C
0x6DB9C6: movzx   esi, byte ptr [edx]
0x6DB9C9: movzx   ebx, byte ptr [ecx]
0x6DB9CC: sub     esi, ebx
0x6DB9CE: jnz     short loc_6DB9FE
0x6DB9D0: sub     eax, 1
0x6DB9D3: add     ecx, 1
0x6DB9D6: add     edx, 1
0x6DB9D9: test    eax, eax
0x6DB9DB: jz      short loc_6DBA0C
0x6DB9DD: movzx   esi, byte ptr [edx]
0x6DB9E0: movzx   ebx, byte ptr [ecx]
0x6DB9E3: sub     esi, ebx
0x6DB9E5: jnz     short loc_6DB9FE
0x6DB9E7: sub     eax, 1
0x6DB9EA: add     ecx, 1
0x6DB9ED: add     edx, 1
0x6DB9F0: test    eax, eax
0x6DB9F2: jz      short loc_6DBA0C
0x6DB9F4: movzx   esi, byte ptr [edx]
0x6DB9F7: movzx   ecx, byte ptr [ecx]
0x6DB9FA: sub     esi, ecx
0x6DB9FC: jz      short loc_6DBA0C
0x6DB9FE: test    esi, esi
0x6DBA00: mov     eax, 1
0x6DBA05: jg      short loc_6DBA0E
0x6DBA07: or      eax, 0FFFFFFFFh
0x6DBA0A: jmp     short loc_6DBA0E
0x6DBA0C: xor     eax, eax
0x6DBA0E: test    eax, eax
0x6DBA10: jnz     loc_6DBADF
0x6DBA16: fld     dword ptr [ebp+24h]
0x6DBA19: fld     dword ptr [edi+24h]
0x6DBA1C: fucompp
0x6DBA1E: fnstsw  ax
0x6DBA20: test    ah, 44h
0x6DBA23: jp      loc_6DBADF
0x6DBA29: mov     dl, [ebp+0Ch]
0x6DBA2C: xor     dl, [edi+0Ch]
0x6DBA2F: test    dl, 1
0x6DBA32: jnz     loc_6DBADF
0x6DBA38: movzx   ecx, word ptr [edi+0Ch]
0x6DBA3C: movzx   edx, word ptr [ebp+0Ch]
0x6DBA40: mov     al, cl
0x6DBA42: mov     bl, dl
0x6DBA44: shr     al, 1
0x6DBA46: shr     bl, 1
0x6DBA48: xor     al, bl
0x6DBA4A: test    al, 1
0x6DBA4C: jnz     loc_6DBADF
0x6DBA52: mov     eax, [ebp+38h]
0x6DBA55: cmp     eax, [edi+38h]
0x6DBA58: jnz     loc_6DBADF
0x6DBA5E: mov     al, cl
0x6DBA60: mov     bl, dl
0x6DBA62: shr     al, 2
0x6DBA65: shr     bl, 2
0x6DBA68: xor     al, bl
0x6DBA6A: test    al, 1
0x6DBA6C: jnz     short loc_6DBADF
0x6DBA6E: mov     al, cl
0x6DBA70: mov     bl, dl
0x6DBA72: shr     al, 3
0x6DBA75: shr     bl, 3
0x6DBA78: xor     al, bl
0x6DBA7A: test    al, 1
0x6DBA7C: jnz     short loc_6DBADF
0x6DBA7E: mov     al, cl
0x6DBA80: mov     bl, dl
0x6DBA82: shr     al, 4
0x6DBA85: shr     bl, 4
0x6DBA88: xor     al, bl
0x6DBA8A: test    al, 1
0x6DBA8C: jnz     short loc_6DBADF
0x6DBA8E: mov     al, cl
0x6DBA90: mov     bl, dl
0x6DBA92: shr     al, 5
0x6DBA95: shr     bl, 5
0x6DBA98: xor     al, bl
0x6DBA9A: test    al, 1
0x6DBA9C: jnz     short loc_6DBADF
0x6DBA9E: fld     dword ptr [ebp+28h]
0x6DBAA1: fld     dword ptr [edi+28h]
0x6DBAA4: fucompp
0x6DBAA6: fnstsw  ax
0x6DBAA8: test    ah, 44h
0x6DBAAB: jp      short loc_6DBADF
0x6DBAAD: fld     dword ptr [ebp+2Ch]
0x6DBAB0: fld     dword ptr [edi+2Ch]
0x6DBAB3: fucompp
0x6DBAB5: fnstsw  ax
0x6DBAB7: test    ah, 44h
0x6DBABA: jp      short loc_6DBADF
0x6DBABC: mov     ax, [ebp+30h]
0x6DBAC0: cmp     ax, [edi+30h]
0x6DBAC4: jnz     short loc_6DBADF
0x6DBAC6: shr     cl, 6
0x6DBAC9: shr     dl, 6
0x6DBACC: xor     cl, dl
0x6DBACE: test    cl, 1
0x6DBAD1: jnz     short loc_6DBADF
0x6DBAD3: pop     ebx
0x6DBAD4: pop     esi
0x6DBAD5: pop     edi
0x6DBAD6: mov     al, 1
0x6DBAD8: pop     ebp
0x6DBAD9: add     esp, 8
0x6DBADC: retn    4
0x6DBADF: pop     ebx
0x6DBAE0: pop     esi
0x6DBAE1: pop     edi
0x6DBAE2: xor     al, al
0x6DBAE4: pop     ebp
0x6DBAE5: add     esp, 8
0x6DBAE8: retn    4
