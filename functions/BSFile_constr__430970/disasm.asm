0x430970: push    0FFFFFFFFh
0x430972: push    offset BSFile_constr_SEH
0x430977: mov     eax, large fs:0
0x43097D: push    eax
0x43097E: push    ecx
0x43097F: push    ebx
0x430980: push    ebp
0x430981: push    esi
0x430982: push    edi
0x430983: mov     eax, ___security_cookie
0x430988: xor     eax, esp
0x43098A: push    eax
0x43098B: lea     eax, [esp+24h+var_C]
0x43098F: mov     large fs:0, eax
0x430995: mov     esi, ecx
0x430997: mov     [esp+24h+var_10], esi
0x43099B: call    NiBinaryStream_constr
0x4309A0: mov     ecx, [esp+24h+arg_4]
0x4309A4: mov     ebp, [esp+24h+arg_0]
0x4309A8: mov     edx, [esp+24h+arg_8]
0x4309AC: xor     eax, eax
0x4309AE: mov     [esi+20h], ecx
0x4309B1: mov     ecx, ebp
0x4309B3: mov     [esp+24h+var_4], eax
0x4309B7: mov     dword ptr [esi], offset ??_7BSFile@@6B@; const BSFile::`vftable'
0x4309BD: mov     dword ptr [esi+4], offset BSFile_ReadFunc
0x4309C4: mov     dword ptr [esi+8], offset BSFile_WriteFunc
0x4309CB: mov     [esi+0Ch], edx
0x4309CE: mov     [esi+10h], eax
0x4309D1: mov     [esi+14h], eax
0x4309D4: mov     [esi+18h], eax
0x4309D7: mov     [esi+1Ch], eax
0x4309DA: mov     [esi+148h], eax
0x4309E0: mov     [esi+144h], eax
0x4309E6: mov     [esi+140h], eax
0x4309EC: mov     [esi+150h], eax
0x4309F2: mov     [esi+14Ch], eax
0x4309F8: mov     [esi+28h], al
0x4309FB: mov     [esi+2Ch], eax
0x4309FE: mov     dword ptr [esi+30h], 0FFFFFFFFh
0x430A05: mov     [esi+34h], eax
0x430A08: mov     [esi+38h], eax
0x430A0B: lea     edi, [ecx+1]
0x430A0E: mov     edi, edi
0x430A10: mov     dl, [ecx]
0x430A12: add     ecx, 1
0x430A15: cmp     dl, al
0x430A17: jnz     short loc_430A10
0x430A19: sub     ecx, edi
0x430A1B: cmp     ecx, 104h
0x430A21: lea     ebx, [esi+3Ch]
0x430A24: jb      short loc_430A59
0x430A26: mov     [ebx], al
0x430A28: cmp     [esp+24h+arg_4], eax
0x430A2C: jnz     short loc_430A41
0x430A2E: push    eax; int
0x430A2F: push    ebx; char *
0x430A30: call    __access
0x430A35: add     esp, 8
0x430A38: cmp     eax, 0FFFFFFFFh
0x430A3B: setnz   dl
0x430A3E: mov     [esi+24h], dl
0x430A41: mov     eax, esi
0x430A43: mov     ecx, [esp+24h+var_C]
0x430A47: mov     large fs:0, ecx
0x430A4E: pop     ecx
0x430A4F: pop     edi
0x430A50: pop     esi
0x430A51: pop     ebp
0x430A52: pop     ebx
0x430A53: add     esp, 10h
0x430A56: retn    10h
0x430A59: mov     edi, ebx
0x430A5B: mov     ecx, ebp
0x430A5D: sub     edi, ebp
0x430A5F: nop
0x430A60: mov     dl, [ecx]
0x430A62: mov     [edi+ecx], dl
0x430A65: add     ecx, 1
0x430A68: cmp     dl, al
0x430A6A: jnz     short loc_430A60
0x430A6C: cmp     [esp+24h+arg_4], 1
0x430A71: jnz     short loc_430A28
0x430A73: mov     ecx, [esp+24h+arg_C]
0x430A77: push    ecx
0x430A78: push    eax
0x430A79: mov     ecx, esi
0x430A7B: call    BSFile_OpenFile
0x430A80: jmp     short loc_430A41
