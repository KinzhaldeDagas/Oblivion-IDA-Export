0x45DBC0: sub     esp, 318h
0x45DBC6: mov     eax, ds:0B30AACh
0x45DBCB: xor     eax, esp
0x45DBCD: mov     [esp+318h+var_4], eax
0x45DBD4: push    ebp
0x45DBD5: push    esi
0x45DBD6: mov     esi, [esp+320h+arg_0]
0x45DBDD: push    edi
0x45DBDE: mov     ebp, 1
0x45DBE3: push    ebp
0x45DBE4: lea     eax, [esp+328h+var_318]
0x45DBE8: push    eax
0x45DBE9: mov     edi, ecx
0x45DBEB: push    0Ch
0x45DBED: lea     ecx, [esp+330h+Str1]
0x45DBF1: push    ecx
0x45DBF2: mov     dword ptr [edi+8Ch], 0
0x45DBFC: mov     edx, [esi+4]
0x45DBFF: push    esi
0x45DC00: mov     [esp+338h+var_318], ebp
0x45DC04: call    edx
0x45DC06: add     esp, 14h
0x45DC09: test    eax, eax
0x45DC0B: jz      short loc_45DC7C
0x45DC0D: cmp     [esp+324h+Str1], 0
0x45DC12: jz      short loc_45DC83
0x45DC14: push    4; MaxCount
0x45DC16: lea     eax, [esp+328h+Str1]
0x45DC1A: push    offset aCon; "CON "
0x45DC1F: push    eax; Str1
0x45DC20: call    _strncmp
0x45DC25: add     esp, 0Ch
0x45DC28: test    eax, eax
0x45DC2A: jnz     short loc_45DC64
0x45DC2C: mov     eax, ds:0A853D0h
0x45DC31: mov     edx, [esi]
0x45DC33: mov     edx, [edx+0Ch]
0x45DC36: push    eax
0x45DC37: push    0D000h
0x45DC3C: mov     ecx, esi
0x45DC3E: call    edx
0x45DC40: push    ebp
0x45DC41: lea     eax, [esp+328h+var_318]
0x45DC45: push    eax
0x45DC46: push    0Ch
0x45DC48: lea     ecx, [esp+330h+Str1]
0x45DC4C: push    ecx
0x45DC4D: mov     dword ptr [edi+8Ch], 0D000h
0x45DC57: mov     edx, [esi+4]
0x45DC5A: push    esi
0x45DC5B: mov     [esp+338h+var_318], ebp
0x45DC5F: call    edx
0x45DC61: add     esp, 14h
0x45DC64: push    0Ch; MaxCount
0x45DC66: lea     eax, [esp+328h+Str1]
0x45DC6A: push    offset aTes4savegame; "TES4SAVEGAME"
0x45DC6F: push    eax; Str1
0x45DC70: call    _strncmp
0x45DC75: add     esp, 0Ch
0x45DC78: test    eax, eax
0x45DC7A: jz      short loc_45DC94
0x45DC7C: xor     eax, eax
0x45DC7E: jmp     loc_45DE0C
0x45DC83: mov     eax, ds:0A853D0h
0x45DC88: mov     edx, [esi]
0x45DC8A: mov     edx, [edx+0Ch]
0x45DC8D: push    eax
0x45DC8E: push    0
0x45DC90: mov     ecx, esi
0x45DC92: call    edx
0x45DC94: mov     ecx, [esi+4]
0x45DC97: push    ebx
0x45DC98: push    ebp
0x45DC99: lea     eax, [esp+32Ch+var_318]
0x45DC9D: push    eax
0x45DC9E: push    ebp
0x45DC9F: lea     ebx, [edi+70h]
0x45DCA2: push    ebx
0x45DCA3: push    esi
0x45DCA4: mov     [esp+33Ch+var_318], ebp
0x45DCA8: call    ecx
0x45DCAA: mov     eax, [esi+4]
0x45DCAD: push    1
0x45DCAF: lea     edx, [esp+340h+var_318]
0x45DCB3: push    edx
0x45DCB4: mov     [esp+344h+var_318], ebp
0x45DCB8: push    1
0x45DCBA: lea     ebp, [edi+71h]
0x45DCBD: push    ebp
0x45DCBE: push    esi
0x45DCBF: call    eax
0x45DCC1: mov     cl, [ebp+0]
0x45DCC4: mov     [edi+7Ch], cl
0x45DCC7: mov     edx, ds:0B33B00h
0x45DCCD: add     esp, 28h
0x45DCD0: cmp     byte ptr [edx+7Ch], 52h ; 'R'
0x45DCD4: jb      short loc_45DD33
0x45DCD6: cmp     [esp+328h+arg_4], 0
0x45DCDE: jz      short loc_45DD21
0x45DCE0: mov     edx, [esi+4]
0x45DCE3: push    1
0x45DCE5: lea     eax, [esp+32Ch+var_318]
0x45DCE9: push    eax
0x45DCEA: push    10h
0x45DCEC: lea     ecx, [edi+94h]
0x45DCF2: push    ecx
0x45DCF3: push    esi
0x45DCF4: mov     [esp+33Ch+var_318], 1
0x45DCFC: call    edx
0x45DCFE: mov     edx, [esi+4]
0x45DD01: push    1
0x45DD03: lea     eax, [esp+340h+var_318]
0x45DD07: push    eax
0x45DD08: push    4
0x45DD0A: lea     ecx, [edi+0A4h]
0x45DD10: push    ecx
0x45DD11: push    esi
0x45DD12: mov     [esp+350h+var_318], 1
0x45DD1A: call    edx
0x45DD1C: add     esp, 28h
0x45DD1F: jmp     short loc_45DD33
0x45DD21: mov     ecx, ds:0A853D4h
0x45DD27: mov     eax, [esi]
0x45DD29: mov     edx, [eax+0Ch]
0x45DD2C: push    ecx
0x45DD2D: push    14h
0x45DD2F: mov     ecx, esi
0x45DD31: call    edx
0x45DD33: mov     eax, ds:0B33B00h
0x45DD38: cmp     byte ptr [eax+7Ch], 52h ; 'R'
0x45DD3C: jnb     short loc_45DD69
0x45DD3E: cmp     [esp+328h+arg_4], 0
0x45DD46: jz      short loc_45DD69
0x45DD48: or      eax, 0FFFFFFFFh
0x45DD4B: mov     [edi+94h], eax
0x45DD51: mov     [edi+98h], eax
0x45DD57: mov     [edi+9Ch], eax
0x45DD5D: mov     [edi+0A0h], eax
0x45DD63: mov     [edi+0A4h], eax
0x45DD69: mov     eax, [esi+4]
0x45DD6C: push    1
0x45DD6E: lea     ecx, [esp+32Ch+var_318]
0x45DD72: push    ecx
0x45DD73: push    4
0x45DD75: lea     edx, [esp+334h+var_314]
0x45DD79: push    edx
0x45DD7A: push    esi
0x45DD7B: mov     [esp+33Ch+var_318], 1
0x45DD83: call    eax
0x45DD85: mov     al, [ebx]
0x45DD87: add     esp, 14h
0x45DD8A: test    al, al
0x45DD8C: pop     ebx
0x45DD8D: jnz     short loc_45DDA5
0x45DD8F: cmp     [esp+324h+arg_4], al
0x45DD96: jz      short loc_45DE08
0x45DD98: mov     cl, [ebp+0]
0x45DD9B: cmp     cl, 7Dh ; '}'
0x45DD9E: jz      short loc_45DE08
0x45DDA0: cmp     cl, 13h
0x45DDA3: jnb     short loc_45DE08
0x45DDA5: movzx   ecx, byte ptr [ebp+0]
0x45DDA9: push    7Dh ; '}'
0x45DDAB: push    0
0x45DDAD: movzx   edx, al
0x45DDB0: push    ecx
0x45DDB1: push    edx
0x45DDB2: lea     eax, [esp+334h+var_20C]
0x45DDB9: push    offset aSaveGameVersio; "Save game version is %i.%02i and curren"...
0x45DDBE: push    eax
0x45DDBF: call    __sprintf
0x45DDC4: mov     eax, ds:0B33B00h
0x45DDC9: or      dword ptr [eax+18h], 10000h
0x45DDD0: mov     ecx, ds:0B38D00h
0x45DDD6: mov     edx, ds:0B38CF8h
0x45DDDC: push    0
0x45DDDE: push    ecx
0x45DDDF: push    edx
0x45DDE0: lea     eax, [esp+348h+var_20C]
0x45DDE7: push    1
0x45DDE9: push    eax
0x45DDEA: call    sub_579CF0
0x45DDEF: mov     ecx, ds:0B33B00h
0x45DDF5: and     dword ptr [ecx+18h], 0FFFEFFFFh
0x45DDFC: add     esp, 2Ch
0x45DDFF: cmp     al, 2
0x45DE01: jnz     short loc_45DE08
0x45DE03: or      eax, 0FFFFFFFFh
0x45DE06: jmp     short loc_45DE0C
0x45DE08: mov     eax, [esp+324h+var_314]
0x45DE0C: mov     ecx, [esp+324h+var_4]
0x45DE13: pop     edi
0x45DE14: pop     esi
0x45DE15: pop     ebp
0x45DE16: xor     ecx, esp
0x45DE18: call    @__security_check_cookie@4; __security_check_cookie(x)
0x45DE1D: add     esp, 318h
0x45DE23: retn    8
