0x42FB60: push    0FFFFFFFFh
0x42FB62: push    offset SEH_6E3250
0x42FB67: mov     eax, large fs:0
0x42FB6D: push    eax
0x42FB6E: push    ebx
0x42FB6F: push    esi
0x42FB70: mov     eax, ___security_cookie
0x42FB75: xor     eax, esp
0x42FB77: push    eax
0x42FB78: lea     eax, [esp+18h+var_C]
0x42FB7C: mov     large fs:0, eax
0x42FB82: mov     esi, ecx
0x42FB84: xor     ebx, ebx
0x42FB86: cmp     byte ptr [esp+18h+arg_0], bl
0x42FB8A: mov     dword ptr [esi], offset ??_7BackgroundLoader@@6B@; const BackgroundLoader::`vftable'
0x42FB90: mov     [esi+4], bl
0x42FB93: mov     [esi+8], ebx
0x42FB96: mov     [esi+0Ch], ebx
0x42FB99: jz      short loc_42FBD4
0x42FB9B: push    44h ; 'D'; Size
0x42FB9D: call    FormHeapAlloc
0x42FBA2: add     esp, 4
0x42FBA5: mov     [esp+18h+arg_0], eax
0x42FBA9: cmp     eax, ebx
0x42FBAB: mov     [esp+18h+var_4], ebx
0x42FBAF: jz      short loc_42FBCF
0x42FBB1: mov     ecx, [esp+18h+arg_10]
0x42FBB5: mov     edx, [esp+18h+arg_C]
0x42FBB9: push    ecx; LONG
0x42FBBA: mov     ecx, [esp+1Ch+lMaximumCount]
0x42FBBE: push    edx; int
0x42FBBF: mov     edx, [esp+20h+arg_4]
0x42FBC3: push    ecx; lMaximumCount
0x42FBC4: push    edx; int
0x42FBC5: push    esi; int
0x42FBC6: mov     ecx, eax
0x42FBC8: call    sub_42FA50
0x42FBCD: jmp     short loc_42FBD1
0x42FBCF: xor     eax, eax
0x42FBD1: mov     [esi+0Ch], eax
0x42FBD4: mov     eax, esi
0x42FBD6: mov     ecx, [esp+18h+var_C]
0x42FBDA: mov     large fs:0, ecx
0x42FBE1: pop     ecx
0x42FBE2: pop     esi
0x42FBE3: pop     ebx
0x42FBE4: add     esp, 0Ch
0x42FBE7: retn    14h
