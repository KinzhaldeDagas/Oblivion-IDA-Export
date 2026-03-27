0x629B70: push    ecx
0x629B71: push    esi
0x629B72: mov     esi, ecx
0x629B74: mov     eax, [esi]
0x629B76: mov     edx, [eax+36Ch]
0x629B7C: call    edx
0x629B7E: test    eax, eax
0x629B80: jz      short loc_629BAB
0x629B82: mov     eax, [esi]
0x629B84: mov     edx, [eax+36Ch]
0x629B8A: mov     ecx, esi
0x629B8C: call    edx
0x629B8E: cmp     eax, 4
0x629B91: jz      short loc_629BAB
0x629B93: mov     eax, [esi]
0x629B95: mov     edx, [eax+36Ch]
0x629B9B: mov     ecx, esi
0x629B9D: call    edx
0x629B9F: cmp     eax, 9
0x629BA2: jz      short loc_629BAB
0x629BA4: xor     al, al
0x629BA6: pop     esi
0x629BA7: pop     ecx
0x629BA8: retn    8
0x629BAB: mov     eax, [esi+0C0h]
0x629BB1: test    eax, eax
0x629BB3: push    ebx
0x629BB4: mov     ebx, [esp+0Ch+arg_4]
0x629BB8: jz      short loc_629BDE
0x629BBA: test    bl, bl
0x629BBC: jnz     short loc_629BC6
0x629BBE: pop     ebx
0x629BBF: xor     al, al
0x629BC1: pop     esi
0x629BC2: pop     ecx
0x629BC3: retn    8
0x629BC6: test    eax, eax
0x629BC8: jz      short loc_629BDE
0x629BCA: cmp     byte ptr [eax+20h], 15h
0x629BCE: jz      short loc_629BDE
0x629BD0: mov     eax, [esi]
0x629BD2: mov     edx, [eax+178h]
0x629BD8: push    0
0x629BDA: mov     ecx, esi
0x629BDC: call    edx
0x629BDE: push    ebp
0x629BDF: push    edi
0x629BE0: mov     edi, [esp+14h+arg_0]
0x629BE4: mov     ecx, edi
0x629BE6: call    sub_5E0380
0x629BEB: mov     ecx, offset TimeGlobals
0x629BF0: mov     ebp, eax
0x629BF2: call    TimeGlobals_GetGameHour
0x629BF7: fstp    [esp+14h+var_4]
0x629BFB: test    ebp, ebp
0x629BFD: mov     byte ptr [esp+14h+arg_4], 0
0x629C02: mov     byte ptr [esp+14h+arg_0], 0
0x629C07: jz      short loc_629C2A
0x629C09: cmp     byte ptr [ebp+20h], 4
0x629C0D: jz      short loc_629C25
0x629C0F: mov     ebp, [ebp+1Ch]
0x629C12: mov     eax, ebp
0x629C14: shr     eax, 14h
0x629C17: test    al, 1
0x629C19: jnz     short loc_629C25
0x629C1B: mov     ecx, ebp
0x629C1D: shr     ecx, 15h
0x629C20: test    cl, 1
0x629C23: jz      short loc_629C2A
0x629C25: mov     byte ptr [esp+14h+arg_0], 1
0x629C2A: test    bl, bl
0x629C2C: jnz     short loc_629C54
0x629C2E: cmp     dword ptr [esi+8], 0
0x629C32: jz      short loc_629C54
0x629C34: fldz
0x629C36: fcomp   dword ptr [esi+1ACh]
0x629C3C: fnstsw  ax
0x629C3E: test    ah, 1
0x629C41: jz      short loc_629C54
0x629C43: fld     [esp+14h+var_4]
0x629C47: call    Double_To_SInt32
0x629C4C: cmp     [esi+90h], eax
0x629C52: jz      short loc_629C7C
0x629C54: push    ebx
0x629C55: push    edi
0x629C56: mov     ecx, esi
0x629C58: call    sub_649340
0x629C5D: fld     [esp+14h+var_4]
0x629C61: mov     byte ptr [esp+14h+arg_4], al
0x629C65: call    Double_To_SInt32
0x629C6A: fld     dword ptr ds:0A417B4h
0x629C70: fstp    dword ptr [esi+1ACh]
0x629C76: mov     [esi+90h], eax
0x629C7C: cmp     byte ptr [esp+14h+arg_4], 0
0x629C81: fld     dword ptr [esi+1ACh]
0x629C87: fsub    dword ptr ds:0B33E9Ch
0x629C8D: fstp    dword ptr [esi+1ACh]
0x629C93: jz      loc_629E0E
0x629C99: mov     edx, [esi]
0x629C9B: mov     eax, [edx+38Ch]
0x629CA1: xor     ebx, ebx
0x629CA3: push    ebx
0x629CA4: mov     ecx, esi
0x629CA6: mov     byte ptr [esi+25Dh], 0
0x629CAD: call    eax
0x629CAF: mov     eax, [esi+0C0h]
0x629CB5: cmp     eax, ebx
0x629CB7: jz      short loc_629CCC
0x629CB9: cmp     byte ptr [eax+20h], 15h
0x629CBD: jz      short loc_629CCC
0x629CBF: mov     edx, [esi]
0x629CC1: mov     eax, [edx+178h]
0x629CC7: push    ebx
0x629CC8: mov     ecx, esi
0x629CCA: call    eax
0x629CCC: mov     edx, [esi]
0x629CCE: mov     eax, [edx+0BCh]
0x629CD4: push    ebx
0x629CD5: mov     ecx, esi
0x629CD7: call    eax
0x629CD9: mov     edx, [esi]
0x629CDB: mov     eax, [edx+394h]
0x629CE1: push    ebx
0x629CE2: mov     ecx, esi
0x629CE4: call    eax
0x629CE6: mov     edx, [esi]
0x629CE8: mov     eax, [edx+594h]
0x629CEE: push    edi
0x629CEF: mov     ecx, esi
0x629CF1: call    eax
0x629CF3: fldz
0x629CF5: mov     edx, [esi]
0x629CF7: fst     dword ptr [esi+1B4h]
0x629CFD: mov     eax, [edx+21Ch]
0x629D03: fst     dword ptr [esi+260h]
0x629D09: fst     dword ptr [esi+1B0h]
0x629D0F: mov     ecx, esi
0x629D11: fstp    dword ptr [esi+1E8h]
0x629D17: mov     [esi+1CCh], ebx
0x629D1D: mov     [esi+278h], bl
0x629D23: mov     [esi+2Ch], ebx
0x629D26: mov     [esi+244h], bl
0x629D2C: call    eax
0x629D2E: mov     edx, [edi]
0x629D30: mov     eax, [edx+380h]
0x629D36: mov     ecx, edi
0x629D38: call    eax
0x629D3A: test    eax, eax
0x629D3C: jnz     short loc_629D5A
0x629D3E: mov     edx, [edi]
0x629D40: mov     eax, [edx+18Ch]
0x629D46: mov     ecx, edi
0x629D48: call    eax
0x629D4A: test    eax, eax
0x629D4C: jz      short loc_629D5A
0x629D4E: mov     edx, [edi]
0x629D50: mov     eax, [edx+320h]
0x629D56: mov     ecx, edi
0x629D58: call    eax
0x629D5A: cmp     byte ptr [esp+14h+arg_0], bl
0x629D5E: jz      loc_629E0E
0x629D64: mov     edx, [edi]
0x629D66: mov     eax, [edx+170h]
0x629D6C: mov     ecx, edi
0x629D6E: call    eax
0x629D70: movzx   eax, byte ptr [eax+4]
0x629D74: xor     ebp, ebp
0x629D76: sub     eax, 23h ; '#'
0x629D79: jz      short loc_629D90
0x629D7B: sub     eax, 1
0x629D7E: jnz     short loc_629D9E
0x629D80: mov     edx, [edi]
0x629D82: mov     eax, [edx+170h]
0x629D88: mov     ecx, edi
0x629D8A: call    eax
0x629D8C: mov     ebx, eax
0x629D8E: jmp     short loc_629D9E
0x629D90: mov     edx, [edi]
0x629D92: mov     eax, [edx+170h]
0x629D98: mov     ecx, edi
0x629D9A: call    eax
0x629D9C: mov     ebp, eax
0x629D9E: mov     esi, [esi+8]
0x629DA1: test    esi, esi
0x629DA3: mov     byte ptr [esp+14h+var_4], 1
0x629DA8: mov     byte ptr [esp+14h+arg_0], 1
0x629DAD: jz      short loc_629DD0
0x629DAF: mov     esi, [esi+1Ch]
0x629DB2: mov     ecx, esi
0x629DB4: shr     ecx, 14h
0x629DB7: test    cl, 1
0x629DBA: jz      short loc_629DC1
0x629DBC: mov     byte ptr [esp+14h+var_4], 0
0x629DC1: mov     edx, esi
0x629DC3: shr     edx, 15h
0x629DC6: test    dl, 1
0x629DC9: jz      short loc_629DD0
0x629DCB: mov     byte ptr [esp+14h+arg_0], 0
0x629DD0: test    ebp, ebp
0x629DD2: jz      short loc_629DF6
0x629DD4: mov     eax, [esp+14h+arg_0]
0x629DD8: mov     ecx, [esp+14h+var_4]
0x629DDC: push    1; char
0x629DDE: push    0; int
0x629DE0: push    eax; int
0x629DE1: push    ecx; int
0x629DE2: push    edi; int
0x629DE3: mov     ecx, ebp; int
0x629DE5: call    sub_5227A0
0x629DEA: mov     al, byte ptr [esp+14h+arg_4]
0x629DEE: pop     edi
0x629DEF: pop     ebp
0x629DF0: pop     ebx
0x629DF1: pop     esi
0x629DF2: pop     ecx
0x629DF3: retn    8
0x629DF6: test    ebx, ebx
0x629DF8: jz      short loc_629E0E
0x629DFA: mov     edx, [esp+14h+arg_0]
0x629DFE: mov     eax, [esp+14h+var_4]
0x629E02: push    1
0x629E04: push    edx
0x629E05: push    eax
0x629E06: push    edi
0x629E07: mov     ecx, ebx
0x629E09: call    sub_51E240
0x629E0E: mov     al, byte ptr [esp+14h+arg_4]
0x629E12: pop     edi
0x629E13: pop     ebp
0x629E14: pop     ebx
0x629E15: pop     esi
0x629E16: pop     ecx
0x629E17: retn    8
