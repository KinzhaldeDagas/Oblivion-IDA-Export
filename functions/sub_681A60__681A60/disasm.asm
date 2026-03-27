0x681A60: sub     esp, 0Ch
0x681A63: push    ebx
0x681A64: mov     ebx, [esp+10h+arg_0]
0x681A68: xor     al, al
0x681A6A: test    ebx, ebx
0x681A6C: mov     [esp+10h+var_9], al
0x681A70: jz      loc_681D85
0x681A76: mov     ecx, ebx; this
0x681A78: call    MobileObject_GetCharProxy
0x681A7D: test    eax, eax
0x681A7F: jz      loc_681D81
0x681A85: mov     eax, [eax+368h]
0x681A8B: test    eax, eax
0x681A8D: jz      loc_681D81
0x681A93: mov     ecx, [eax+8]
0x681A96: test    ecx, ecx
0x681A98: mov     [esp+10h+var_4], ecx
0x681A9C: jz      loc_681D81
0x681AA2: mov     eax, [ecx+0A4h]
0x681AA8: test    eax, eax
0x681AAA: jz      loc_681D81
0x681AB0: mov     [esp+10h+var_8], 0
0x681AB8: jle     loc_681D81
0x681ABE: push    ebp
0x681ABF: push    esi
0x681AC0: push    edi
0x681AC1: mov     eax, [ecx+90h]
0x681AC7: mov     ecx, [esp+1Ch+var_8]
0x681ACB: mov     edi, [eax+ecx*4]
0x681ACE: push    edi
0x681ACF: call    sub_4806E0
0x681AD4: push    eax
0x681AD5: call    sub_4DC270
0x681ADA: mov     esi, eax
0x681ADC: add     esp, 8
0x681ADF: xor     ebp, ebp
0x681AE1: test    esi, esi
0x681AE3: jz      short loc_681B03
0x681AE5: mov     edx, [esi]
0x681AE7: mov     eax, [edx+190h]
0x681AED: mov     ecx, esi
0x681AEF: call    eax
0x681AF1: test    al, al
0x681AF3: jz      short loc_681B03
0x681AF5: cmp     esi, ds:0B333C4h
0x681AFB: mov     ebp, esi
0x681AFD: jz      loc_681D63
0x681B03: test    edi, edi
0x681B05: jz      short loc_681B38
0x681B07: test    esi, esi
0x681B09: jz      loc_681D63
0x681B0F: mov     eax, [edi+1Ch]
0x681B12: and     eax, 3Fh
0x681B15: sub     eax, 0Ch
0x681B18: jz      short loc_681B24
0x681B1A: sub     eax, 2
0x681B1D: jz      short loc_681B24
0x681B1F: sub     eax, 2
0x681B22: jnz     short loc_681B38
0x681B24: mov     edx, [esi]
0x681B26: mov     eax, [edx+88h]
0x681B2C: mov     ecx, esi
0x681B2E: call    eax
0x681B30: test    al, al
0x681B32: jz      loc_681D63
0x681B38: test    esi, esi
0x681B3A: jz      loc_681D63
0x681B40: mov     edi, [esp+1Ch+arg_4]
0x681B44: cmp     dword ptr [edi], 0
0x681B47: jnz     short loc_681B5B
0x681B49: mov     edx, [esi]
0x681B4B: mov     eax, [edx+170h]
0x681B51: mov     ecx, esi
0x681B53: call    eax
0x681B55: cmp     byte ptr [eax+4], 18h
0x681B59: jz      short loc_681B8F
0x681B5B: cmp     dword ptr [edi+4], 0
0x681B5F: jnz     short loc_681B65
0x681B61: test    ebp, ebp
0x681B63: jnz     short loc_681B93
0x681B65: mov     edx, [esi]
0x681B67: mov     eax, [edx+170h]
0x681B6D: mov     ecx, esi
0x681B6F: call    eax
0x681B71: cmp     byte ptr [eax+4], 12h
0x681B75: jnz     loc_681D63
0x681B7B: mov     edx, [esi]
0x681B7D: mov     eax, [edx+88h]
0x681B83: mov     ecx, esi
0x681B85: call    eax
0x681B87: test    al, al
0x681B89: jz      loc_681D63
0x681B8F: test    ebp, ebp
0x681B91: jz      short loc_681BF2
0x681B93: fld     dword ptr ds:0A3D65Ch
0x681B99: push    ecx
0x681B9A: fstp    [esp+20h+var_20]; float
0x681B9D: push    ebp; int
0x681B9E: push    ebx; int
0x681B9F: call    sub_6814B0
0x681BA4: add     esp, 0Ch
0x681BA7: test    al, al
0x681BA9: jnz     short loc_681BEA
0x681BAB: mov     ecx, ebp
0x681BAD: call    sub_5E3290
0x681BB2: test    al, al
0x681BB4: jz      loc_681D63
0x681BBA: fld     dword ptr ds:0A41304h
0x681BC0: push    ecx
0x681BC1: fstp    [esp+20h+var_20]; float
0x681BC4: push    esi; int
0x681BC5: push    ebx; int
0x681BC6: call    sub_6814B0
0x681BCB: add     esp, 0Ch
0x681BCE: test    al, al
0x681BD0: jnz     short loc_681BEA
0x681BD2: fld1
0x681BD4: push    ecx
0x681BD5: fstp    [esp+20h+var_20]; float
0x681BD8: push    esi; int
0x681BD9: push    ebx; int
0x681BDA: call    sub_6814B0
0x681BDF: add     esp, 0Ch
0x681BE2: test    al, al
0x681BE4: jz      loc_681D63
0x681BEA: mov     [edi+4], ebp
0x681BED: jmp     loc_681D5E
0x681BF2: mov     edx, [esi]
0x681BF4: mov     eax, [edx+170h]
0x681BFA: mov     ecx, esi
0x681BFC: call    eax
0x681BFE: movzx   eax, byte ptr [eax+4]
0x681C02: cmp     eax, 12h
0x681C05: jz      loc_681D16
0x681C0B: cmp     eax, 18h
0x681C0E: jnz     loc_681D63
0x681C14: fld     dword ptr ds:0A3D65Ch
0x681C1A: push    ecx
0x681C1B: fstp    [esp+20h+var_20]; float
0x681C1E: push    esi; int
0x681C1F: push    ebx; int
0x681C20: call    sub_6814B0
0x681C25: add     esp, 0Ch
0x681C28: test    al, al
0x681C2A: jz      loc_681D63
0x681C30: mov     ecx, esi; this
0x681C32: call    GetTeleportExtraData
0x681C37: test    eax, eax
0x681C39: jnz     loc_681D63
0x681C3F: mov     edx, [esi]
0x681C41: mov     eax, [edx+170h]
0x681C47: mov     ecx, esi
0x681C49: call    eax
0x681C4B: test    eax, eax
0x681C4D: jz      loc_681D63
0x681C53: mov     ecx, eax
0x681C55: call    sub_4B78E0
0x681C5A: test    al, al
0x681C5C: jnz     loc_681D63
0x681C62: mov     edx, [esi]
0x681C64: mov     eax, [edx+154h]
0x681C6A: mov     ecx, esi
0x681C6C: call    eax
0x681C6E: push    eax
0x681C6F: push    offset dword_B3FAB0
0x681C74: call    NiRTTI_Cast
0x681C79: add     esp, 8
0x681C7C: mov     edi, eax
0x681C7E: push    0
0x681C80: mov     ecx, edi
0x681C82: call    sub_405790
0x681C87: test    eax, eax
0x681C89: jz      loc_681D63
0x681C8F: push    0
0x681C91: mov     ecx, edi
0x681C93: call    sub_405790
0x681C98: cmp     dword ptr [eax+0Ch], 0
0x681C9C: jz      loc_681D63
0x681CA2: push    0
0x681CA4: mov     ecx, edi
0x681CA6: call    sub_405790
0x681CAB: mov     eax, [eax+0Ch]
0x681CAE: push    eax
0x681CAF: push    offset stru_B3CAC0
0x681CB4: call    NiRTTI_Cast
0x681CB9: add     esp, 8
0x681CBC: test    eax, eax
0x681CBE: jz      loc_681D63
0x681CC4: push    offset aOpen; "Open"
0x681CC9: mov     ecx, eax
0x681CCB: call    sub_4715A0
0x681CD0: test    eax, eax
0x681CD2: jz      loc_681D63
0x681CD8: lea     ecx, [esp+1Ch+arg_0]
0x681CDC: push    ecx
0x681CDD: push    ebx
0x681CDE: push    esi
0x681CDF: mov     byte ptr [esp+28h+arg_0], 0
0x681CE4: call    sub_4B7490
0x681CE9: add     esp, 0Ch
0x681CEC: test    al, al
0x681CEE: jz      short loc_681D0C
0x681CF0: cmp     byte ptr [esp+1Ch+arg_0], 0
0x681CF5: jnz     short loc_681D0C
0x681CF7: push    ebx
0x681CF8: call    Actor__CanUSeDoor?
0x681CFD: add     esp, 4
0x681D00: test    al, al
0x681D02: jz      short loc_681D0C
0x681D04: mov     edx, [esp+1Ch+arg_4]
0x681D08: mov     [edx], esi
0x681D0A: jmp     short loc_681D5E
0x681D0C: mov     eax, [esp+1Ch+arg_4]
0x681D10: mov     byte ptr [eax+8], 1
0x681D14: jmp     short loc_681D5E
0x681D16: fld     dword ptr ds:0A41304h
0x681D1C: push    ecx
0x681D1D: fstp    [esp+20h+var_20]; float
0x681D20: push    esi; int
0x681D21: push    ebx; int
0x681D22: call    sub_6814B0
0x681D27: add     esp, 0Ch
0x681D2A: test    al, al
0x681D2C: jnz     short loc_681D5A
0x681D2E: fld     dword ptr ds:0A3D65Ch
0x681D34: push    ecx
0x681D35: fstp    [esp+20h+var_20]; float
0x681D38: push    esi; int
0x681D39: push    ebx; int
0x681D3A: call    sub_6814B0
0x681D3F: add     esp, 0Ch
0x681D42: test    al, al
0x681D44: jnz     short loc_681D5A
0x681D46: fld1
0x681D48: push    ecx
0x681D49: fstp    [esp+20h+var_20]; float
0x681D4C: push    esi; int
0x681D4D: push    ebx; int
0x681D4E: call    sub_6814B0
0x681D53: add     esp, 0Ch
0x681D56: test    al, al
0x681D58: jz      short loc_681D63
0x681D5A: mov     byte ptr [edi+8], 1
0x681D5E: mov     [esp+1Ch+var_9], 1
0x681D63: mov     eax, [esp+1Ch+var_8]
0x681D67: mov     ecx, [esp+1Ch+var_4]
0x681D6B: add     eax, 1
0x681D6E: cmp     eax, [ecx+0A4h]
0x681D74: mov     [esp+1Ch+var_8], eax
0x681D78: jl      loc_681AC1
0x681D7E: pop     edi
0x681D7F: pop     esi
0x681D80: pop     ebp
0x681D81: mov     al, [esp+10h+var_9]
0x681D85: pop     ebx
0x681D86: add     esp, 0Ch
0x681D89: retn
