0x73CDB0: push    edi
0x73CDB1: mov     edi, [esp+4+arg_0]
0x73CDB5: test    edi, edi
0x73CDB7: jnz     short loc_73CDBF
0x73CDB9: xor     al, al
0x73CDBB: pop     edi
0x73CDBC: retn    4
0x73CDBF: push    ebp
0x73CDC0: mov     ebp, [ecx+0Ch]
0x73CDC3: cmp     ebp, [edi+0Ch]
0x73CDC6: jz      short loc_73CDCF
0x73CDC8: pop     ebp
0x73CDC9: xor     al, al
0x73CDCB: pop     edi
0x73CDCC: retn    4
0x73CDCF: push    ebx
0x73CDD0: mov     ebx, [ecx+10h]
0x73CDD3: test    ebx, ebx
0x73CDD5: jz      short loc_73CDE1
0x73CDD7: cmp     dword ptr [edi+10h], 0
0x73CDDB: jz      short loc_73CDE7
0x73CDDD: test    ebx, ebx
0x73CDDF: jnz     short loc_73CDEF
0x73CDE1: cmp     dword ptr [edi+10h], 0
0x73CDE5: jz      short loc_73CDEF
0x73CDE7: pop     ebx
0x73CDE8: pop     ebp
0x73CDE9: xor     al, al
0x73CDEB: pop     edi
0x73CDEC: retn    4
0x73CDEF: test    ebx, ebx
0x73CDF1: push    esi
0x73CDF2: jz      short loc_73CE60
0x73CDF4: xor     esi, esi
0x73CDF6: test    ebp, ebp
0x73CDF8: jbe     short loc_73CE60
0x73CDFA: lea     ebx, [ebx+0]
0x73CE00: mov     eax, [ebx+esi*4]
0x73CE03: test    eax, eax
0x73CE05: jz      short loc_73CE14
0x73CE07: mov     ecx, [edi+10h]
0x73CE0A: cmp     dword ptr [ecx+esi*4], 0
0x73CE0E: jz      short loc_73CE69
0x73CE10: test    eax, eax
0x73CE12: jnz     short loc_73CE21
0x73CE14: mov     edx, [edi+10h]
0x73CE17: cmp     dword ptr [edx+esi*4], 0
0x73CE1B: jnz     short loc_73CE69
0x73CE1D: test    eax, eax
0x73CE1F: jz      short loc_73CE59
0x73CE21: mov     eax, [edi+10h]
0x73CE24: mov     ecx, [eax+esi*4]
0x73CE27: mov     eax, [ebx+esi*4]
0x73CE2A: lea     ebx, [ebx+0]
0x73CE30: mov     dl, [eax]
0x73CE32: cmp     dl, [ecx]
0x73CE34: jnz     short loc_73CE50
0x73CE36: test    dl, dl
0x73CE38: jz      short loc_73CE4C
0x73CE3A: mov     dl, [eax+1]
0x73CE3D: cmp     dl, [ecx+1]
0x73CE40: jnz     short loc_73CE50
0x73CE42: add     eax, 2
0x73CE45: add     ecx, 2
0x73CE48: test    dl, dl
0x73CE4A: jnz     short loc_73CE30
0x73CE4C: xor     eax, eax
0x73CE4E: jmp     short loc_73CE55
0x73CE50: sbb     eax, eax
0x73CE52: sbb     eax, 0FFFFFFFFh
0x73CE55: test    eax, eax
0x73CE57: jnz     short loc_73CE69
0x73CE59: add     esi, 1
0x73CE5C: cmp     esi, ebp
0x73CE5E: jb      short loc_73CE00
0x73CE60: pop     esi
0x73CE61: pop     ebx
0x73CE62: pop     ebp
0x73CE63: mov     al, 1
0x73CE65: pop     edi
0x73CE66: retn    4
0x73CE69: pop     esi
0x73CE6A: pop     ebx
0x73CE6B: pop     ebp
0x73CE6C: xor     al, al
0x73CE6E: pop     edi
0x73CE6F: retn    4
