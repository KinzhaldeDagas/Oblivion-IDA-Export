0x680AA0: sub     esp, 1Ch
0x680AA3: mov     eax, [esp+1Ch+arg_0]
0x680AA7: fld     dword ptr ds:0A32048h
0x680AAD: test    eax, eax
0x680AAF: fstp    [esp+1Ch+var_1C]
0x680AB2: jz      short loc_680B2E
0x680AB4: push    esi
0x680AB5: mov     esi, [esp+20h+arg_8]
0x680AB9: test    esi, esi
0x680ABB: jz      short loc_680B2D
0x680ABD: lea     ecx, [esp+20h+var_18]
0x680AC1: push    ecx
0x680AC2: push    eax
0x680AC3: mov     ecx, esi
0x680AC5: call    sub_6803A0
0x680ACA: test    al, al
0x680ACC: jz      short loc_680B2D
0x680ACE: mov     ecx, [esp+20h+arg_4]
0x680AD2: fld     dword ptr [ecx]
0x680AD4: fcomp   qword ptr ds:0A3A5B0h
0x680ADA: fnstsw  ax
0x680ADC: test    ah, 44h
0x680ADF: jnp     short loc_680B0C
0x680AE1: fld     dword ptr [ecx]
0x680AE3: fsub    [esp+20h+var_18]
0x680AE7: fstp    [esp+20h+var_C]
0x680AEB: fld     dword ptr [ecx+4]
0x680AEE: fsub    [esp+20h+var_14]
0x680AF2: fstp    [esp+20h+var_8]
0x680AF6: fld     dword ptr [ecx+8]
0x680AF9: lea     ecx, [esp+20h+var_C]
0x680AFD: fsub    [esp+20h+var_10]
0x680B01: fstp    [esp+20h+var_4]
0x680B05: call    sub_404C90
0x680B0A: jmp     short loc_680B0E
0x680B0C: fldz
0x680B0E: cmp     [esp+20h+arg_10], 0
0x680B13: fstp    [esp+20h+var_1C]
0x680B17: jz      short loc_680B2D
0x680B19: mov     edx, [esp+20h+arg_C]
0x680B1D: push    edx
0x680B1E: mov     ecx, esi
0x680B20: call    sub_6807F0
0x680B25: fadd    [esp+20h+var_1C]
0x680B29: fstp    [esp+20h+var_1C]
0x680B2D: pop     esi
0x680B2E: fld     [esp+1Ch+var_1C]
0x680B31: add     esp, 1Ch
0x680B34: retn
