0x430700: sub     esp, 114h
0x430706: mov     eax, ___security_cookie
0x43070B: xor     eax, esp
0x43070D: mov     [esp+114h+var_4], eax
0x430714: mov     eax, [esp+114h+arg_0]
0x43071B: push    ebx
0x43071C: push    ebp
0x43071D: push    esi
0x43071E: push    edi
0x43071F: mov     edi, ecx
0x430721: cmp     dword ptr [edi+1Ch], 0
0x430725: mov     [esp+124h+var_110], eax
0x430729: jnz     short loc_430736
0x43072B: mov     edx, [edi]
0x43072D: mov     eax, [edx+18h]
0x430730: push    0
0x430732: push    0
0x430734: call    eax
0x430736: xor     esi, esi
0x430738: xor     ebx, ebx
0x43073A: xor     ebp, ebp
0x43073C: lea     esp, [esp+0]
0x430740: mov     eax, [edi+4]
0x430743: push    1
0x430745: lea     ecx, [esp+128h+var_10C]
0x430749: push    ecx
0x43074A: push    1
0x43074C: lea     edx, [esp+130h+var_114+3]
0x430750: push    edx
0x430751: push    edi
0x430752: mov     [esp+138h+var_10C], 1
0x43075A: call    eax
0x43075C: add     esp, 14h
0x43075F: add     ebp, eax
0x430761: cmp     eax, 1
0x430764: jz      short loc_43076E
0x430766: xor     al, al
0x430768: mov     byte ptr [esp+124h+var_114+3], al
0x43076C: jmp     short loc_430772
0x43076E: mov     al, byte ptr [esp+124h+var_114+3]
0x430772: cmp     ebp, [esp+124h+arg_4]
0x430779: jbe     short loc_430781
0x43077B: xor     al, al
0x43077D: mov     byte ptr [esp+124h+var_114+3], al
0x430781: mov     [esp+esi+124h+var_108], al
0x430785: add     esi, 1
0x430788: cmp     esi, 103h
0x43078E: jz      short loc_430794
0x430790: test    al, al
0x430792: jnz     short loc_430740
0x430794: test    ebx, ebx
0x430796: mov     [esp+esi+124h+var_108], 0
0x43079B: jz      short loc_4307AD
0x43079D: lea     ecx, [esp+124h+var_108]
0x4307A1: push    ecx
0x4307A2: mov     ecx, [esp+128h+var_110]
0x4307A6: call    BSStringT_Append
0x4307AB: jmp     short loc_4307BD
0x4307AD: mov     ecx, [esp+124h+var_110]; this
0x4307B1: push    0; a3
0x4307B3: lea     edx, [esp+128h+var_108]
0x4307B7: push    edx; a2
0x4307B8: call    BSStringT_Set
0x4307BD: add     ebx, esi
0x4307BF: cmp     byte ptr [esp+124h+var_114+3], 0
0x4307C4: jz      short loc_4307CD
0x4307C6: xor     esi, esi
0x4307C8: jmp     loc_430740
0x4307CD: mov     ecx, [esp+124h+var_4]
0x4307D4: pop     edi
0x4307D5: pop     esi
0x4307D6: mov     eax, ebp
0x4307D8: pop     ebp
0x4307D9: pop     ebx
0x4307DA: xor     ecx, esp
0x4307DC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4307E1: add     esp, 114h
0x4307E7: retn    8
