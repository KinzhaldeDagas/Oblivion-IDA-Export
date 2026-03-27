0x60FC20: mov     eax, ds:0B333C4h
0x60FC25: push    esi
0x60FC26: mov     esi, ecx
0x60FC28: cmp     esi, eax
0x60FC2A: jnz     short loc_60FC49
0x60FC2C: cmp     byte ptr [eax+116h], 0
0x60FC33: jz      short loc_60FC49
0x60FC35: fld     dword ptr [eax+700h]
0x60FC3B: pop     esi
0x60FC3C: fadd    [esp+arg_0]
0x60FC40: fstp    dword ptr [eax+700h]
0x60FC46: retn    4
0x60FC49: fld     [esp+4+arg_0]
0x60FC4D: push    ecx
0x60FC4E: lea     ecx, [esi+44h]
0x60FC51: fstp    [esp+8+var_8]; float
0x60FC54: call    sub_4269E0
0x60FC59: fld1
0x60FC5B: fld     [esp+4+arg_0]
0x60FC5F: fcom    st(1)
0x60FC61: fnstsw  ax
0x60FC63: fstp    st(1)
0x60FC65: test    ah, 41h
0x60FC68: jnz     loc_60FD06
0x60FC6E: push    edi
0x60FC6F: mov     edi, ds:0B333C4h
0x60FC75: cmp     esi, edi
0x60FC77: jnz     short loc_60FCF1
0x60FC79: call    Double_To_SInt32
0x60FC7E: push    eax
0x60FC7F: mov     ecx, edi
0x60FC81: call    sub_660710
0x60FC86: mov     ecx, ds:0B333C4h
0x60FC8C: mov     eax, [ecx+668h]
0x60FC92: fild    dword ptr [ecx+668h]
0x60FC98: test    eax, eax
0x60FC9A: jge     short loc_60FCA2
0x60FC9C: fadd    dword ptr ds:0A2FC78h
0x60FCA2: mov     edx, [ecx]
0x60FCA4: fstp    [esp+8+arg_0]
0x60FCA8: mov     eax, [edx+250h]
0x60FCAE: call    eax
0x60FCB0: fld     [esp+8+arg_0]
0x60FCB4: fcompp
0x60FCB6: fnstsw  ax
0x60FCB8: test    ah, 5
0x60FCBB: jp      short loc_60FCF3
0x60FCBD: mov     ecx, ds:0B333C4h
0x60FCC3: mov     edx, [ecx]
0x60FCC5: mov     eax, [edx+250h]
0x60FCCB: call    eax
0x60FCCD: call    Double_To_SInt32
0x60FCD2: mov     ecx, ds:0B333C4h
0x60FCD8: mov     [ecx+668h], eax
0x60FCDE: mov     edx, [esi]
0x60FCE0: mov     eax, [edx+40h]
0x60FCE3: pop     edi
0x60FCE4: push    80h ; '€'
0x60FCE9: mov     ecx, esi
0x60FCEB: call    eax
0x60FCED: pop     esi
0x60FCEE: retn    4
0x60FCF1: fstp    st
0x60FCF3: mov     edx, [esi]
0x60FCF5: mov     eax, [edx+40h]
0x60FCF8: pop     edi
0x60FCF9: push    80h ; '€'
0x60FCFE: mov     ecx, esi
0x60FD00: call    eax
0x60FD02: pop     esi
0x60FD03: retn    4
0x60FD06: mov     edx, [esi]
0x60FD08: fstp    st
0x60FD0A: mov     eax, [edx+40h]
0x60FD0D: push    80h ; '€'
0x60FD12: mov     ecx, esi
0x60FD14: call    eax
0x60FD16: pop     esi
0x60FD17: retn    4
