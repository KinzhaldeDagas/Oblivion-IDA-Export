0x77F990: sub     esp, 8
0x77F993: push    esi
0x77F994: push    edi
0x77F995: mov     edi, [esp+10h+arg_0]
0x77F999: test    byte ptr [edi+18h], 1
0x77F99D: mov     esi, ecx
0x77F99F: mov     eax, [esi]
0x77F9A1: mov     edx, [eax+64h]
0x77F9A4: push    0
0x77F9A6: jz      loc_77FBB7
0x77F9AC: push    1
0x77F9AE: push    1Ch
0x77F9B0: call    edx
0x77F9B2: fld     dword ptr [esi+80h]
0x77F9B8: fmul    dword ptr [edi+1Ch]
0x77F9BB: mov     eax, [esi]
0x77F9BD: mov     edx, [eax+64h]
0x77F9C0: push    0
0x77F9C2: fstp    [esp+14h+arg_0]
0x77F9C6: fld     dword ptr [esi+7Ch]
0x77F9C9: fld     [esp+14h+arg_0]
0x77F9CD: fld     st
0x77F9CF: fsubp   st(2), st
0x77F9D1: fxch    st(1)
0x77F9D3: fstp    [esp+14h+var_8]
0x77F9D7: fld     dword ptr [esi+84h]
0x77F9DD: fmul    st, st(1)
0x77F9DF: fadd    dword ptr [esi+7Ch]
0x77F9E2: fstp    [esp+14h+var_4]
0x77F9E6: fld1
0x77F9E8: fdivrp  st(1), st
0x77F9EA: fstp    [esp+14h+arg_0]
0x77F9EE: mov     ecx, [esp+14h+arg_0]
0x77F9F2: push    ecx
0x77F9F3: push    26h ; '&'
0x77F9F5: mov     ecx, esi
0x77F9F7: call    edx
0x77F9F9: fld     [esp+10h+var_8]
0x77F9FD: mov     eax, [esi]
0x77F9FF: fstp    [esp+10h+arg_0]
0x77FA03: mov     ecx, [esp+10h+arg_0]
0x77FA07: mov     edx, [eax+64h]
0x77FA0A: push    0
0x77FA0C: push    ecx
0x77FA0D: push    24h ; '$'
0x77FA0F: mov     ecx, esi
0x77FA11: call    edx
0x77FA13: fld     [esp+10h+var_4]
0x77FA17: mov     eax, [esi]
0x77FA19: fstp    [esp+10h+arg_0]
0x77FA1D: mov     ecx, [esp+10h+arg_0]
0x77FA21: mov     edx, [eax+64h]
0x77FA24: push    0
0x77FA26: push    ecx
0x77FA27: push    25h ; '%'
0x77FA29: mov     ecx, esi
0x77FA2B: call    edx
0x77FA2D: movzx   eax, byte ptr [edi+18h]
0x77FA31: shr     al, 1
0x77FA33: and     eax, 3
0x77FA36: jnz     short loc_77FA67
0x77FA38: test    byte ptr [esi+8], 1
0x77FA3C: jz      short loc_77FA5F
0x77FA3E: mov     eax, [esi]
0x77FA40: mov     edx, [eax+64h]
0x77FA43: push    0
0x77FA45: push    3
0x77FA47: push    23h ; '#'
0x77FA49: mov     ecx, esi
0x77FA4B: call    edx
0x77FA4D: mov     eax, [esi]
0x77FA4F: mov     edx, [eax+64h]
0x77FA52: push    0
0x77FA54: push    0
0x77FA56: push    8Ch ; 'Œ'
0x77FA5B: mov     ecx, esi
0x77FA5D: call    edx
0x77FA5F: push    0
0x77FA61: push    0
0x77FA63: push    30h ; '0'
0x77FA65: jmp     short loc_77FAA1
0x77FA67: cmp     ax, 1
0x77FA6B: jnz     short loc_77FA9B
0x77FA6D: test    [esi+8], al
0x77FA70: jz      short loc_77FA93
0x77FA72: mov     eax, [esi]
0x77FA74: mov     edx, [eax+64h]
0x77FA77: push    0
0x77FA79: push    0
0x77FA7B: push    23h ; '#'
0x77FA7D: mov     ecx, esi
0x77FA7F: call    edx
0x77FA81: mov     eax, [esi]
0x77FA83: mov     edx, [eax+64h]
0x77FA86: push    0
0x77FA88: push    3
0x77FA8A: push    8Ch ; 'Œ'
0x77FA8F: mov     ecx, esi
0x77FA91: call    edx
0x77FA93: push    0
0x77FA95: push    1
0x77FA97: push    30h ; '0'
0x77FA99: jmp     short loc_77FAA1
0x77FA9B: push    0
0x77FA9D: push    0
0x77FA9F: push    1Ch
0x77FAA1: mov     eax, [esi]
0x77FAA3: mov     edx, [eax+64h]
0x77FAA6: mov     ecx, esi
0x77FAA8: call    edx
0x77FAAA: fld     dword ptr [edi+20h]
0x77FAAD: fld     dword ptr [esi+8Ch]
0x77FAB3: fucompp
0x77FAB5: fnstsw  ax
0x77FAB7: test    ah, 44h
0x77FABA: jp      short loc_77FAE4
0x77FABC: fld     dword ptr [edi+24h]
0x77FABF: fld     dword ptr [esi+90h]
0x77FAC5: fucompp
0x77FAC7: fnstsw  ax
0x77FAC9: test    ah, 44h
0x77FACC: jp      short loc_77FAE4
0x77FACE: fld     dword ptr [edi+28h]
0x77FAD1: fld     dword ptr [esi+94h]
0x77FAD7: fucompp
0x77FAD9: fnstsw  ax
0x77FADB: test    ah, 44h
0x77FADE: jnp     loc_77FB9B
0x77FAE4: fld     dword ptr [edi+20h]
0x77FAE7: fld     qword ptr ds:0A3DDD8h
0x77FAED: fnstcw  word ptr [esp+10h+arg_0]
0x77FAF1: movzx   eax, word ptr [esp+10h+arg_0]
0x77FAF6: fmul    st(1), st
0x77FAF8: or      eax, 0C00h
0x77FAFD: fxch    st(1)
0x77FAFF: mov     [esp+10h+var_4], eax
0x77FB03: fldcw   word ptr [esp+10h+var_4]
0x77FB07: fistp   [esp+10h+var_4]
0x77FB0B: mov     al, byte ptr [esp+10h+var_4]
0x77FB0F: movzx   ecx, al
0x77FB12: or      ecx, 0FFFFFF00h
0x77FB18: fldcw   word ptr [esp+10h+arg_0]
0x77FB1C: shl     ecx, 8
0x77FB1F: fld     dword ptr [edi+24h]
0x77FB22: fnstcw  word ptr [esp+10h+arg_0]
0x77FB26: fmul    st, st(1)
0x77FB28: movzx   eax, word ptr [esp+10h+arg_0]
0x77FB2D: or      eax, 0C00h
0x77FB32: mov     [esp+10h+var_4], eax
0x77FB36: fldcw   word ptr [esp+10h+var_4]
0x77FB3A: fistp   [esp+10h+var_4]
0x77FB3E: movzx   edx, byte ptr [esp+10h+var_4]
0x77FB43: movzx   eax, dl
0x77FB46: fldcw   word ptr [esp+10h+arg_0]
0x77FB4A: or      ecx, eax
0x77FB4C: shl     ecx, 8
0x77FB4F: fmul    dword ptr [edi+28h]
0x77FB52: fnstcw  word ptr [esp+10h+arg_0]
0x77FB56: movzx   eax, word ptr [esp+10h+arg_0]
0x77FB5B: or      eax, 0C00h
0x77FB60: mov     [esp+10h+var_4], eax
0x77FB64: fldcw   word ptr [esp+10h+var_4]
0x77FB68: fistp   [esp+10h+var_4]
0x77FB6C: movzx   edx, byte ptr [esp+10h+var_4]
0x77FB71: movzx   eax, dl
0x77FB74: fldcw   word ptr [esp+10h+arg_0]
0x77FB78: or      ecx, eax
0x77FB7A: mov     [esi+98h], ecx
0x77FB80: mov     ecx, [edi+20h]
0x77FB83: mov     [esi+8Ch], ecx
0x77FB89: mov     edx, [edi+24h]
0x77FB8C: mov     [esi+90h], edx
0x77FB92: mov     eax, [edi+28h]
0x77FB95: mov     [esi+94h], eax
0x77FB9B: mov     eax, [esi+98h]
0x77FBA1: mov     edx, [esi]
0x77FBA3: mov     edx, [edx+64h]
0x77FBA6: push    0
0x77FBA8: push    eax
0x77FBA9: push    22h ; '"'
0x77FBAB: mov     ecx, esi
0x77FBAD: call    edx
0x77FBAF: pop     edi
0x77FBB0: pop     esi
0x77FBB1: add     esp, 8
0x77FBB4: retn    4
0x77FBB7: push    0
0x77FBB9: push    1Ch
0x77FBBB: call    edx
0x77FBBD: pop     edi
0x77FBBE: pop     esi
0x77FBBF: add     esp, 8
0x77FBC2: retn    4
